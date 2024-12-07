/********************************************************************************
** Form generated from reading UI file 'createpracticedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEPRACTICEDIALOG_H
#define UI_CREATEPRACTICEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreatePracticeDiaLog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *widget;
    QLineEdit *nameLineEdit;
    QLabel *label_12;
    QComboBox *categoryComboBox;
    QLabel *label_8;
    QWidget *widget_2;
    QRadioButton *levelRadioButton;
    QRadioButton *randomLevel;
    QWidget *levelGroup;
    QLabel *label_9;
    QLabel *label_24;
    QSpinBox *level3SpinBox;
    QLabel *label_25;
    QSpinBox *level5SpinBox;
    QSpinBox *level2SpinBox;
    QLabel *label_10;
    QSpinBox *level4SpinBox;
    QLabel *label_11;
    QSpinBox *level1SpinBox;
    QWidget *widget_3;
    QSpinBox *timeSpinBox;
    QLabel *label_5;
    QPushButton *submitPushButton;

    void setupUi(QDialog *CreatePracticeDiaLog)
    {
        if (CreatePracticeDiaLog->objectName().isEmpty())
            CreatePracticeDiaLog->setObjectName(QString::fromUtf8("CreatePracticeDiaLog"));
        CreatePracticeDiaLog->resize(640, 409);
        CreatePracticeDiaLog->setStyleSheet(QString::fromUtf8("background-color: #fff;"));
        verticalLayout = new QVBoxLayout(CreatePracticeDiaLog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(16, 9, 16, -1);
        label = new QLabel(CreatePracticeDiaLog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Sans 3 Medium"));
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: #000;"));

        verticalLayout->addWidget(label);

        widget = new QWidget(CreatePracticeDiaLog);
        widget->setObjectName(QString::fromUtf8("widget"));
        nameLineEdit = new QLineEdit(widget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(0, 30, 275, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Sans 3"));
        font1.setPointSize(13);
        nameLineEdit->setFont(font1);
        nameLineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid rgba(0,0,0,0.2);\n"
"border-radius: 4px;\n"
"padding-left: 10px;\n"
""));
        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(0, 0, 75, 22));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Source Sans 3"));
        label_12->setFont(font2);
        label_12->setStyleSheet(QString::fromUtf8("color: #000;"));
        categoryComboBox = new QComboBox(widget);
        categoryComboBox->setObjectName(QString::fromUtf8("categoryComboBox"));
        categoryComboBox->setGeometry(QRect(330, 30, 275, 30));
        categoryComboBox->setFont(font2);
        categoryComboBox->setStyleSheet(QString::fromUtf8(""));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(330, 0, 75, 22));
        label_8->setFont(font2);

        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(CreatePracticeDiaLog);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        levelRadioButton = new QRadioButton(widget_2);
        levelRadioButton->setObjectName(QString::fromUtf8("levelRadioButton"));
        levelRadioButton->setGeometry(QRect(0, 20, 121, 28));
        levelRadioButton->setFont(font2);
        levelRadioButton->setCursor(QCursor(Qt::PointingHandCursor));
        levelRadioButton->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {width: 20px; height: 20px;}"));
        randomLevel = new QRadioButton(widget_2);
        randomLevel->setObjectName(QString::fromUtf8("randomLevel"));
        randomLevel->setGeometry(QRect(120, 20, 121, 28));
        randomLevel->setFont(font2);
        randomLevel->setCursor(QCursor(Qt::PointingHandCursor));
        randomLevel->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {width: 20px; height: 20px;}"));

        verticalLayout->addWidget(widget_2);

        levelGroup = new QWidget(CreatePracticeDiaLog);
        levelGroup->setObjectName(QString::fromUtf8("levelGroup"));
        label_9 = new QLabel(levelGroup);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 0, 75, 22));
        label_9->setFont(font2);
        label_24 = new QLabel(levelGroup);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(270, 0, 75, 22));
        label_24->setFont(font2);
        level3SpinBox = new QSpinBox(levelGroup);
        level3SpinBox->setObjectName(QString::fromUtf8("level3SpinBox"));
        level3SpinBox->setGeometry(QRect(270, 30, 80, 31));
        level3SpinBox->setFont(font2);
        label_25 = new QLabel(levelGroup);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(520, 0, 75, 22));
        label_25->setFont(font2);
        level5SpinBox = new QSpinBox(levelGroup);
        level5SpinBox->setObjectName(QString::fromUtf8("level5SpinBox"));
        level5SpinBox->setGeometry(QRect(520, 30, 80, 31));
        level5SpinBox->setFont(font2);
        level2SpinBox = new QSpinBox(levelGroup);
        level2SpinBox->setObjectName(QString::fromUtf8("level2SpinBox"));
        level2SpinBox->setGeometry(QRect(130, 30, 80, 31));
        level2SpinBox->setFont(font2);
        label_10 = new QLabel(levelGroup);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(130, 0, 75, 22));
        label_10->setFont(font2);
        level4SpinBox = new QSpinBox(levelGroup);
        level4SpinBox->setObjectName(QString::fromUtf8("level4SpinBox"));
        level4SpinBox->setGeometry(QRect(400, 30, 80, 31));
        level4SpinBox->setFont(font2);
        label_11 = new QLabel(levelGroup);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(400, 0, 75, 22));
        label_11->setFont(font2);
        level1SpinBox = new QSpinBox(levelGroup);
        level1SpinBox->setObjectName(QString::fromUtf8("level1SpinBox"));
        level1SpinBox->setGeometry(QRect(0, 30, 80, 31));
        level1SpinBox->setFont(font2);
        level1SpinBox->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(levelGroup);

        widget_3 = new QWidget(CreatePracticeDiaLog);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        timeSpinBox = new QSpinBox(widget_3);
        timeSpinBox->setObjectName(QString::fromUtf8("timeSpinBox"));
        timeSpinBox->setGeometry(QRect(0, 30, 181, 31));
        timeSpinBox->setFont(font2);
        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 0, 91, 22));
        label_5->setFont(font2);
        submitPushButton = new QPushButton(widget_3);
        submitPushButton->setObjectName(QString::fromUtf8("submitPushButton"));
        submitPushButton->setGeometry(QRect(470, 20, 131, 36));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Source Sans 3 SemiBold"));
        submitPushButton->setFont(font3);
        submitPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        submitPushButton->setStyleSheet(QString::fromUtf8("#submitPushButton {\n"
"	background-color:  rgb(204, 0, 0);\n"
"	border: none;\n"
"	color: #fff;\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"#submitPushButton {\n"
"	background-color:  rgba(0, 191, 154, 0.9);\n"
"}"));

        verticalLayout->addWidget(widget_3);


        retranslateUi(CreatePracticeDiaLog);

        QMetaObject::connectSlotsByName(CreatePracticeDiaLog);
    } // setupUi

    void retranslateUi(QDialog *CreatePracticeDiaLog)
    {
        CreatePracticeDiaLog->setWindowTitle(QApplication::translate("CreatePracticeDiaLog", "Dialog", nullptr));
        label->setText(QApplication::translate("CreatePracticeDiaLog", "Create Practice", nullptr));
        label_12->setText(QApplication::translate("CreatePracticeDiaLog", "Name:", nullptr));
        label_8->setText(QApplication::translate("CreatePracticeDiaLog", "Category:", nullptr));
        levelRadioButton->setText(QApplication::translate("CreatePracticeDiaLog", "Config level", nullptr));
        randomLevel->setText(QApplication::translate("CreatePracticeDiaLog", "Random", nullptr));
        label_9->setText(QApplication::translate("CreatePracticeDiaLog", "Level 1:", nullptr));
        label_24->setText(QApplication::translate("CreatePracticeDiaLog", "Level 3:", nullptr));
        label_25->setText(QApplication::translate("CreatePracticeDiaLog", "Level 5:", nullptr));
        label_10->setText(QApplication::translate("CreatePracticeDiaLog", "Level 2:", nullptr));
        label_11->setText(QApplication::translate("CreatePracticeDiaLog", "Level 4:", nullptr));
        label_5->setText(QApplication::translate("CreatePracticeDiaLog", "Time Limit:", nullptr));
        submitPushButton->setText(QApplication::translate("CreatePracticeDiaLog", "Let's Practice", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreatePracticeDiaLog: public Ui_CreatePracticeDiaLog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEPRACTICEDIALOG_H
