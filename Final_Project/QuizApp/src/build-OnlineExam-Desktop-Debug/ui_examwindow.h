/********************************************************************************
** Form generated from reading UI file 'examwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMWINDOW_H
#define UI_EXAMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExamWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QWidget *widget_3;
    QLabel *label;
    QLabel *countdownLabel;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QWidget *widget_2;
    QWidget *widget_4;
    QLabel *label_3;
    QLabel *questionText;
    QLabel *questionNumber;
    QLabel *label_5;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *optionList;
    QWidget *widget_5;
    QPushButton *submitButton;
    QPushButton *clearButton;
    QPushButton *gobackButton;
    QPushButton *nextButton;

    void setupUi(QMainWindow *ExamWindow)
    {
        if (ExamWindow->objectName().isEmpty())
            ExamWindow->setObjectName(QString::fromUtf8("ExamWindow"));
        ExamWindow->resize(1280, 712);
        ExamWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color: rgb(224,224,224);\n"
"}"));
        centralwidget = new QWidget(ExamWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(4);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-right: 1px solid #e2e8f0;\n"
""));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(0, 0, 421, 91));
        widget_3->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid #e2e8f0;\n"
"background-color:#fff;"));
        label = new QLabel(widget_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 151, 22));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Sans 3 SemiBold"));
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: #000;\n"
""));
        countdownLabel = new QLabel(widget_3);
        countdownLabel->setObjectName(QString::fromUtf8("countdownLabel"));
        countdownLabel->setGeometry(QRect(240, 30, 151, 22));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Sans 3"));
        font1.setPointSize(22);
        countdownLabel->setFont(font1);
        countdownLabel->setStyleSheet(QString::fromUtf8("border: none;"));
        gridLayoutWidget = new QWidget(widget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 90, 421, 621));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 9, 0, 0);
        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Source Sans 3"));
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #F6F9FC;\n"
"border: none;\n"
"min-height: 46px;\n"
"max-width: 46px;\n"
"border-radius: 6px;\n"
"font-family: \"Source Sans 3\";\n"
"font-weight: bold;\n"
"color: #67758D;\n"
""));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(8);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Source Sans 3"));
        font3.setPointSize(12);
        widget_2->setFont(font3);
        widget_2->setStyleSheet(QString::fromUtf8("background-color: #fff;"));
        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(10, 10, 811, 151));
        widget_4->setStyleSheet(QString::fromUtf8("#widget_4{\n"
"	border-bottom: 1px solid #e2e8f0;\n"
"}"));
        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 30, 141, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Source Sans 3"));
        font4.setPointSize(24);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        label_3->setFont(font4);
        questionText = new QLabel(widget_4);
        questionText->setObjectName(QString::fromUtf8("questionText"));
        questionText->setGeometry(QRect(20, 80, 771, 61));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Source Sans 3"));
        questionText->setFont(font5);
        questionText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        questionText->setWordWrap(true);
        questionNumber = new QLabel(widget_4);
        questionNumber->setObjectName(QString::fromUtf8("questionNumber"));
        questionNumber->setGeometry(QRect(155, 30, 131, 31));
        questionNumber->setFont(font4);
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 180, 281, 22));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Source Sans 3"));
        font6.setPointSize(13);
        font6.setBold(false);
        font6.setWeight(50);
        label_5->setFont(font6);
        verticalLayoutWidget = new QWidget(widget_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(29, 230, 791, 341));
        optionList = new QVBoxLayout(verticalLayoutWidget);
        optionList->setObjectName(QString::fromUtf8("optionList"));
        optionList->setContentsMargins(0, 0, 0, 0);
        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(9, 579, 811, 121));
        widget_5->setStyleSheet(QString::fromUtf8("#widget_5{\n"
"	border-top: 1px solid #e2e8f0;\n"
"}"));
        submitButton = new QPushButton(widget_5);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(680, 50, 130, 46));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Source Sans 3 SemiBold"));
        font7.setBold(false);
        font7.setWeight(50);
        submitButton->setFont(font7);
        submitButton->setCursor(QCursor(Qt::PointingHandCursor));
        submitButton->setStyleSheet(QString::fromUtf8("#submitButton {\n"
"	background-color: rgb(9, 44, 76);\n"
"	border: none;\n"
"	color: #fff;\n"
"	border-radius: 23px;\n"
"}\n"
"\n"
"#submitButton:hover {\n"
"	background-color: rgba(9, 44, 76, 0.9);\n"
"}"));
        clearButton = new QPushButton(widget_5);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(20, 10, 98, 30));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Source Sans 3 SemiBold"));
        clearButton->setFont(font8);
        clearButton->setCursor(QCursor(Qt::PointingHandCursor));
        clearButton->setStyleSheet(QString::fromUtf8("color: #67758D;\n"
"border: none;"));
        gobackButton = new QPushButton(widget_5);
        gobackButton->setObjectName(QString::fromUtf8("gobackButton"));
        gobackButton->setGeometry(QRect(20, 50, 151, 46));
        gobackButton->setFont(font7);
        gobackButton->setCursor(QCursor(Qt::PointingHandCursor));
        gobackButton->setStyleSheet(QString::fromUtf8("#gobackButton {\n"
"	background-color: rgb(222, 229, 239); \n"
"	border-radius: 23px;\n"
"   color: #67758D; \n"
"}\n"
"#gobackButton:hover {\n"
"	background-color: rgba(222, 229, 239, 0.9); \n"
"}"));
        nextButton = new QPushButton(widget_5);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(220, 50, 151, 46));
        nextButton->setFont(font7);
        nextButton->setCursor(QCursor(Qt::PointingHandCursor));
        nextButton->setStyleSheet(QString::fromUtf8("#nextButton {\n"
"	background-color: rgb(204, 0, 0);\n"
"	border-radius: 23px;\n"
"	color: #fff;\n"
"}\n"
"\n"
"#nextButton:hover {\n"
"	background-color: rgba(0, 191, 154, 0.9);\n"
"}"));

        horizontalLayout->addWidget(widget_2);

        ExamWindow->setCentralWidget(centralwidget);

        retranslateUi(ExamWindow);

        QMetaObject::connectSlotsByName(ExamWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ExamWindow)
    {
        ExamWindow->setWindowTitle(QApplication::translate("ExamWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("ExamWindow", "Question List", nullptr));
        countdownLabel->setText(QApplication::translate("ExamWindow", "1h 47m 13s", nullptr));
        pushButton->setText(QApplication::translate("ExamWindow", "1", nullptr));
        label_3->setText(QApplication::translate("ExamWindow", "Question", nullptr));
        questionText->setText(QApplication::translate("ExamWindow", "Which of the following is appropriate as the characteristic of single sign-on?", nullptr));
        questionNumber->setText(QApplication::translate("ExamWindow", "1", nullptr));
        label_5->setText(QApplication::translate("ExamWindow", "Choose the correct answer:", nullptr));
        submitButton->setText(QApplication::translate("ExamWindow", "Submit", nullptr));
        clearButton->setText(QApplication::translate("ExamWindow", "Clear Answer", nullptr));
        gobackButton->setText(QApplication::translate("ExamWindow", "Go back", nullptr));
        nextButton->setText(QApplication::translate("ExamWindow", "Next Question", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExamWindow: public Ui_ExamWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMWINDOW_H
