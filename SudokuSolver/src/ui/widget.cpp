#include "widget.h"
#include "./ui_widget.h"
#include "imageprocessing.h"
#include "solver.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("Soduku Solver");
    connect(ui->btn_showImage, SIGNAL(clicked()), this, SLOT(plotOrigImg()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::plotOrigImg()
{
    cv::Mat img = cv::imread("sudoku_sample_image.jpeg");
    if(img.empty())
    {
        std::cout << "Error, Image not found!" << std::endl;
    }
    else
    {
        cv::resize(img, img, cv::Size(512, 481), 0, 0, cv::INTER_LINEAR);
        displayImage = QImage((const unsigned char*) (img.data), img.cols, img.rows, img.step, QImage::Format_RGB888);
        ui->lbl_origImg->setPixmap(QPixmap::fromImage(displayImage));
    }
}

