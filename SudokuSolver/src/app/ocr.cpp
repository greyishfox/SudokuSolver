#include "ocr.h"

void OCR::getBoundingRect(cv::Mat trainingImage, cv::Mat thresholdImage, std::vector<std::vector<cv::Point>> cVector)
{
    cv::Mat roiImage;
    cv::Mat resizedRoiImage;
    cv::Mat flattenedImage;
    cv::Mat floatImage;
    cv::Rect redBoundingBox;
    int inputDigit = 0;
    int cntr = 0;

    for(auto& el : cVector)
    {
        if(cv::contourArea(el) >= 60 && cv::contourArea(el) < 280)
        {
            redBoundingBox = cv::boundingRect(el);
            ++cntr;
            cv::rectangle(trainingImage, redBoundingBox, cv::Scalar(0,0,255), 2);
            roiImage = thresholdImage(redBoundingBox);
            cv::resize(roiImage, resizedRoiImage, cv::Size(20,30)); // size(width, height)

            cv::imshow("Region of interest: ", resizedRoiImage);
            cv::imshow("Training numbers: ", trainingImage);

            std::cout << "Type in the number shown in the red rectangle: ";
            inputDigit = cv::waitKey(0);
            if(inputDigit>0 && inputDigit<10)
            {
                classificationInputDigits.push_back(inputDigit);
                resizedRoiImage.convertTo(floatImage, CV_32FC1);
                flattenedImage = floatImage.reshape(1, 1);
                trainingImageOutput.push_back(flattenedImage);
            }
        }
    }


}

// Write classification input to file
void OCR::writeClassificationFile()
{
    // Convert the classification numbers to float --> required for KNN algorithm
    cv::Mat classificationInputToFloat;
    classificationInputDigits.convertTo(classificationInputToFloat, CV_32FC1);

    // Create a classification file in ".xml" format ...
    std::string filename_class = "classificationDigits.xml";
    cv::FileStorage fs_class(filename_class, cv::FileStorage::WRITE);

    // ... store the digits from the user input as float data types ...
    fs_class << "classificationDigits" << classificationInputToFloat;

    // ... and close the file
    fs_class.release();
}

// Write classification images to file
void OCR::writeTrainedImageFile()
{
    // Create a classification-image file in ".xml" format ...
    std::string filename_trained = "trainedImages.xml";
    cv::FileStorage fs_trained(filename_trained, cv::FileStorage::WRITE);

    // ... store the images used in user decision making as float data types ...
    fs_trained << "trainedImages" << trainingImageOutput;

    // ... and close the file
    fs_trained.release();
}
