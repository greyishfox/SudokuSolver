#ifndef OCR_H
#define OCR_H

#include "imageprocessing.h"

class OCR
{
private:
    cv::Mat classificationInputDigits;
    cv::Mat trainingImageOutput;
public:
    // OCR();   // No constructor needed
    void getBoundingRect(cv::Mat trainingImage, cv::Mat thresholdImage, std::vector<std::vector<cv::Point>> cVector);

    void writeClassificationFile();

    void writeTrainedImageFile();
};

#endif // OCR_H
