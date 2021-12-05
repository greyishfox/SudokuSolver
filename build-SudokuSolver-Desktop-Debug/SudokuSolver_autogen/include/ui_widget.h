/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_showImage;
    QPushButton *btn_solution;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl_origImg;
    QLabel *lbl_solvImg;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_save;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(987, 731);
        horizontalLayoutWidget = new QWidget(Widget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 550, 971, 81));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_showImage = new QPushButton(horizontalLayoutWidget);
        btn_showImage->setObjectName(QString::fromUtf8("btn_showImage"));
        btn_showImage->setMinimumSize(QSize(200, 50));

        horizontalLayout->addWidget(btn_showImage);

        btn_solution = new QPushButton(horizontalLayoutWidget);
        btn_solution->setObjectName(QString::fromUtf8("btn_solution"));
        btn_solution->setMinimumSize(QSize(200, 50));

        horizontalLayout->addWidget(btn_solution);

        horizontalLayoutWidget_2 = new QWidget(Widget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(9, 9, 971, 514));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lbl_origImg = new QLabel(horizontalLayoutWidget_2);
        lbl_origImg->setObjectName(QString::fromUtf8("lbl_origImg"));
        lbl_origImg->setMinimumSize(QSize(481, 512));

        horizontalLayout_2->addWidget(lbl_origImg);

        lbl_solvImg = new QLabel(horizontalLayoutWidget_2);
        lbl_solvImg->setObjectName(QString::fromUtf8("lbl_solvImg"));
        lbl_solvImg->setMinimumSize(QSize(481, 512));

        horizontalLayout_2->addWidget(lbl_solvImg);

        horizontalLayoutWidget_3 = new QWidget(Widget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 640, 971, 80));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btn_save = new QPushButton(horizontalLayoutWidget_3);
        btn_save->setObjectName(QString::fromUtf8("btn_save"));
        btn_save->setMinimumSize(QSize(100, 50));

        horizontalLayout_3->addWidget(btn_save);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        btn_showImage->setText(QApplication::translate("Widget", "Show Puzzle", nullptr));
        btn_solution->setText(QApplication::translate("Widget", "Plot Solution", nullptr));
        lbl_origImg->setText(QString());
        lbl_solvImg->setText(QString());
        btn_save->setText(QApplication::translate("Widget", "Save Image", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
