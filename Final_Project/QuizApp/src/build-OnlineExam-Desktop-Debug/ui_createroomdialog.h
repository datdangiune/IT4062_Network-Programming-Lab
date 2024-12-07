/********************************************************************************
** Form generated from reading UI file 'createroomdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEROOMDIALOG_H
#define UI_CREATEROOMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateRoomDiaLog
{
public:
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_4;
    QLineEdit *nameLineEdit;
    QLabel *label_5;
    QLabel *capacity_label;
    QRadioButton *privateRadioButton;
    QPushButton *nextButton;
    QSpinBox *timeSpinBox;
    QSpinBox *capacitySpinBox;
    QWidget *widget;
    QLabel *label_6;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QWidget *widget_3;
    QWidget *passwordInput;
    QLabel *label_7;
    QLineEdit *passwordLineEdit;
    QWidget *page_2;
    QLabel *label_8;
    QComboBox *categoryComboBox;
    QLabel *label_9;
    QSpinBox *level1SpinBox;
    QLabel *label_10;
    QLabel *label_11;
    QSpinBox *level2SpinBox;
    QSpinBox *level3SpinBox;
    QLabel *label_12;
    QLabel *totalScoreLabel;
    QPushButton *createButton;
    QWidget *widget_4;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QWidget *widget_5;
    QPushButton *backButton;
    QSpinBox *level4SpinBox;
    QSpinBox *level5SpinBox;
    QLabel *label_24;
    QLabel *label_25;

    void setupUi(QDialog *CreateRoomDiaLog)
    {
        if (CreateRoomDiaLog->objectName().isEmpty())
            CreateRoomDiaLog->setObjectName(QString::fromUtf8("CreateRoomDiaLog"));
        CreateRoomDiaLog->resize(640, 360);
        CreateRoomDiaLog->setStyleSheet(QString::fromUtf8("background-color: #fff;"));
        label = new QLabel(CreateRoomDiaLog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 160, 22));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Sans 3 Medium"));
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        stackedWidget = new QStackedWidget(CreateRoomDiaLog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 40, 641, 311));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_4 = new QLabel(page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 72, 75, 22));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Sans 3"));
        label_4->setFont(font1);
        nameLineEdit = new QLineEdit(page);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(30, 100, 591, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Source Sans 3"));
        font2.setPointSize(13);
        nameLineEdit->setFont(font2);
        nameLineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid rgba(0,0,0,0.2);\n"
"border-radius: 4px;\n"
"padding-left: 10px;\n"
""));
        label_5 = new QLabel(page);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 150, 91, 22));
        label_5->setFont(font1);
        capacity_label = new QLabel(page);
        capacity_label->setObjectName(QString::fromUtf8("capacity_label"));
        capacity_label->setGeometry(QRect(360, 150, 121, 22));
        capacity_label->setFont(font1);
        privateRadioButton = new QRadioButton(page);
        privateRadioButton->setObjectName(QString::fromUtf8("privateRadioButton"));
        privateRadioButton->setGeometry(QRect(30, 240, 111, 28));
        privateRadioButton->setFont(font1);
        privateRadioButton->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
"	width: 20px; \n"
"	height: 20px;\n"
"}"));
        nextButton = new QPushButton(page);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(520, 260, 98, 36));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Source Sans 3 SemiBold"));
        nextButton->setFont(font3);
        nextButton->setCursor(QCursor(Qt::PointingHandCursor));
        nextButton->setStyleSheet(QString::fromUtf8("#nextButton {\n"
"	background-color: rgb(9, 44, 76);\n"
"	border: none;\n"
"	color: #fff;\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"#nextButton:hover {\n"
"	background-color: rgba(9, 44, 76, 0.9);\n"
"}"));
        timeSpinBox = new QSpinBox(page);
        timeSpinBox->setObjectName(QString::fromUtf8("timeSpinBox"));
        timeSpinBox->setGeometry(QRect(30, 180, 260, 31));
        timeSpinBox->setFont(font1);
        capacitySpinBox = new QSpinBox(page);
        capacitySpinBox->setObjectName(QString::fromUtf8("capacitySpinBox"));
        capacitySpinBox->setGeometry(QRect(360, 180, 260, 31));
        capacitySpinBox->setFont(font1);
        widget = new QWidget(page);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(160, 0, 401, 71));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 10, 30, 30));
        label_6->setStyleSheet(QString::fromUtf8("background-color:  rgb(204, 0, 0);\n"
"border-radius: 15px;\n"
"color: #fff"));
        label_6->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(widget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(48, 40, 61, 22));
        label_17->setFont(font1);
        label_18 = new QLabel(widget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(270, 10, 30, 30));
        label_18->setStyleSheet(QString::fromUtf8("background-color: #DEE5EF;\n"
"border-radius: 15px;\n"
"color: #67758D; "));
        label_18->setAlignment(Qt::AlignCenter);
        label_19 = new QLabel(widget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(245, 40, 81, 22));
        label_19->setFont(font1);
        label_19->setAlignment(Qt::AlignCenter);
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(90, 24, 181, 3));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: #DEE5EF;"));
        passwordInput = new QWidget(page);
        passwordInput->setObjectName(QString::fromUtf8("passwordInput"));
        passwordInput->setGeometry(QRect(140, 233, 261, 51));
        label_7 = new QLabel(passwordInput);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setEnabled(true);
        label_7->setGeometry(QRect(10, 10, 81, 22));
        label_7->setFont(font1);
        passwordLineEdit = new QLineEdit(passwordInput);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(110, 10, 131, 30));
        passwordLineEdit->setFont(font1);
        passwordLineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid rgba(0,0,0,0.2);\n"
"border-radius: 4px;\n"
"padding-left: 10px;\n"
""));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_8 = new QLabel(page_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 72, 75, 22));
        label_8->setFont(font1);
        categoryComboBox = new QComboBox(page_2);
        categoryComboBox->setObjectName(QString::fromUtf8("categoryComboBox"));
        categoryComboBox->setGeometry(QRect(30, 100, 601, 30));
        categoryComboBox->setFont(font1);
        categoryComboBox->setStyleSheet(QString::fromUtf8(""));
        label_9 = new QLabel(page_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 160, 75, 22));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("color: #000;"));
        level1SpinBox = new QSpinBox(page_2);
        level1SpinBox->setObjectName(QString::fromUtf8("level1SpinBox"));
        level1SpinBox->setGeometry(QRect(30, 190, 80, 31));
        level1SpinBox->setFont(font1);
        level1SpinBox->setStyleSheet(QString::fromUtf8(""));
        label_10 = new QLabel(page_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(160, 160, 75, 22));
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("color: #000;"));
        label_11 = new QLabel(page_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(420, 160, 75, 22));
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("color: #000;"));
        level2SpinBox = new QSpinBox(page_2);
        level2SpinBox->setObjectName(QString::fromUtf8("level2SpinBox"));
        level2SpinBox->setGeometry(QRect(160, 190, 80, 31));
        level2SpinBox->setFont(font1);
        level3SpinBox = new QSpinBox(page_2);
        level3SpinBox->setObjectName(QString::fromUtf8("level3SpinBox"));
        level3SpinBox->setGeometry(QRect(290, 190, 80, 31));
        level3SpinBox->setFont(font1);
        label_12 = new QLabel(page_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(30, 240, 81, 22));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("color: #000;"));
        totalScoreLabel = new QLabel(page_2);
        totalScoreLabel->setObjectName(QString::fromUtf8("totalScoreLabel"));
        totalScoreLabel->setGeometry(QRect(110, 240, 75, 22));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Source Sans 3 SemiBold"));
        font4.setBold(false);
        font4.setWeight(50);
        totalScoreLabel->setFont(font4);
        createButton = new QPushButton(page_2);
        createButton->setObjectName(QString::fromUtf8("createButton"));
        createButton->setGeometry(QRect(530, 260, 98, 36));
        createButton->setFont(font3);
        createButton->setCursor(QCursor(Qt::PointingHandCursor));
        createButton->setStyleSheet(QString::fromUtf8("#createButton {\n"
"	background-color: rgb(9, 44, 76);\n"
"	border: none;\n"
"	color: #fff;\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"#createButton:hover {\n"
"	background-color: rgba(9, 44, 76, 0.9);\n"
"}"));
        widget_4 = new QWidget(page_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(160, 0, 401, 71));
        label_20 = new QLabel(widget_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(60, 10, 30, 30));
        label_20->setStyleSheet(QString::fromUtf8("background-color:  rgb(204, 0, 0);\n"
"border-radius: 15px;\n"
"color: #fff"));
        label_20->setAlignment(Qt::AlignCenter);
        label_21 = new QLabel(widget_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(48, 40, 81, 22));
        label_21->setFont(font1);
        label_22 = new QLabel(widget_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(270, 10, 30, 30));
        label_22->setStyleSheet(QString::fromUtf8("background-color:  rgb(204, 0, 0);\n"
"border-radius: 15px;\n"
"color: #fff; "));
        label_22->setAlignment(Qt::AlignCenter);
        label_23 = new QLabel(widget_4);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(245, 40, 81, 22));
        label_23->setFont(font1);
        label_23->setAlignment(Qt::AlignCenter);
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(90, 24, 181, 3));
        widget_5->setStyleSheet(QString::fromUtf8("background-color:  rgb(204, 0, 0);"));
        backButton = new QPushButton(page_2);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(410, 260, 98, 36));
        backButton->setFont(font3);
        backButton->setCursor(QCursor(Qt::PointingHandCursor));
        backButton->setStyleSheet(QString::fromUtf8("#backButton {\n"
"	color: rgb(9, 44, 76);\n"
"	border: 1px solid rgb(9, 44, 76);\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"#backButton:hover {\n"
"	background-color: rgba(255, 255, 255, 0.8);\n"
"}"));
        level4SpinBox = new QSpinBox(page_2);
        level4SpinBox->setObjectName(QString::fromUtf8("level4SpinBox"));
        level4SpinBox->setGeometry(QRect(420, 190, 80, 31));
        level4SpinBox->setFont(font1);
        level5SpinBox = new QSpinBox(page_2);
        level5SpinBox->setObjectName(QString::fromUtf8("level5SpinBox"));
        level5SpinBox->setGeometry(QRect(550, 190, 80, 31));
        level5SpinBox->setFont(font1);
        label_24 = new QLabel(page_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(290, 160, 75, 22));
        label_24->setFont(font1);
        label_24->setStyleSheet(QString::fromUtf8("color: #000;\n"
""));
        label_25 = new QLabel(page_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(550, 160, 75, 22));
        label_25->setFont(font1);
        label_25->setStyleSheet(QString::fromUtf8("color: #000;"));
        stackedWidget->addWidget(page_2);

        retranslateUi(CreateRoomDiaLog);

        QMetaObject::connectSlotsByName(CreateRoomDiaLog);
    } // setupUi

    void retranslateUi(QDialog *CreateRoomDiaLog)
    {
        CreateRoomDiaLog->setWindowTitle(QApplication::translate("CreateRoomDiaLog", "Dialog", nullptr));
        label->setText(QApplication::translate("CreateRoomDiaLog", "Create Room", nullptr));
        label_4->setText(QApplication::translate("CreateRoomDiaLog", "Name:", nullptr));
        label_5->setText(QApplication::translate("CreateRoomDiaLog", "Time Limit:", nullptr));
        capacity_label->setText(QApplication::translate("CreateRoomDiaLog", "Maximum user :", nullptr));
        privateRadioButton->setText(QApplication::translate("CreateRoomDiaLog", "Private", nullptr));
        nextButton->setText(QApplication::translate("CreateRoomDiaLog", "Next", nullptr));
        label_6->setText(QApplication::translate("CreateRoomDiaLog", "1", nullptr));
        label_17->setText(QApplication::translate("CreateRoomDiaLog", "General", nullptr));
        label_18->setText(QApplication::translate("CreateRoomDiaLog", "2", nullptr));
        label_19->setText(QApplication::translate("CreateRoomDiaLog", "Exam", nullptr));
        label_7->setText(QApplication::translate("CreateRoomDiaLog", "Password:", nullptr));
        label_8->setText(QApplication::translate("CreateRoomDiaLog", "Category:", nullptr));
        label_9->setText(QApplication::translate("CreateRoomDiaLog", "Level 1:", nullptr));
        label_10->setText(QApplication::translate("CreateRoomDiaLog", "Level 2:", nullptr));
        label_11->setText(QApplication::translate("CreateRoomDiaLog", "Level 4:", nullptr));
        label_12->setText(QApplication::translate("CreateRoomDiaLog", "Max score:", nullptr));
        totalScoreLabel->setText(QApplication::translate("CreateRoomDiaLog", "0", nullptr));
        createButton->setText(QApplication::translate("CreateRoomDiaLog", "Create", nullptr));
        label_20->setText(QApplication::translate("CreateRoomDiaLog", "1", nullptr));
        label_21->setText(QApplication::translate("CreateRoomDiaLog", "General", nullptr));
        label_22->setText(QApplication::translate("CreateRoomDiaLog", "2", nullptr));
        label_23->setText(QApplication::translate("CreateRoomDiaLog", "Exam", nullptr));
        backButton->setText(QApplication::translate("CreateRoomDiaLog", "Back", nullptr));
        label_24->setText(QApplication::translate("CreateRoomDiaLog", "Level 3:", nullptr));
        label_25->setText(QApplication::translate("CreateRoomDiaLog", "Level 5:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateRoomDiaLog: public Ui_CreateRoomDiaLog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEROOMDIALOG_H
