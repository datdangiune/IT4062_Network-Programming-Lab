/********************************************************************************
** Form generated from reading UI file 'addquestiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDQUESTIONDIALOG_H
#define UI_ADDQUESTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddQuestionDiaLog
{
public:
    QLabel *label;
    QLabel *label_4;
    QLineEdit *titleLineEdit;
    QPushButton *submitPushButton;
    QPushButton *addPushButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QWidget *optionList;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QLabel *label_5;
    QSpinBox *levelSpinBox;

    void setupUi(QDialog *AddQuestionDiaLog)
    {
        if (AddQuestionDiaLog->objectName().isEmpty())
            AddQuestionDiaLog->setObjectName(QString::fromUtf8("AddQuestionDiaLog"));
        AddQuestionDiaLog->resize(768, 430);
        QFont font;
        font.setFamily(QString::fromUtf8("Source Sans 3 Medium"));
        AddQuestionDiaLog->setFont(font);
        AddQuestionDiaLog->setStyleSheet(QString::fromUtf8("background-color: #fff;"));
        label = new QLabel(AddQuestionDiaLog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 160, 22));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Sans 3 Medium"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label_4 = new QLabel(AddQuestionDiaLog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 72, 75, 22));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Source Sans 3"));
        label_4->setFont(font2);
        titleLineEdit = new QLineEdit(AddQuestionDiaLog);
        titleLineEdit->setObjectName(QString::fromUtf8("titleLineEdit"));
        titleLineEdit->setGeometry(QRect(30, 100, 581, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Source Sans 3"));
        font3.setPointSize(13);
        titleLineEdit->setFont(font3);
        titleLineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid rgba(0,0,0,0.2);\n"
"padding-left: 10px;\n"
""));
        submitPushButton = new QPushButton(AddQuestionDiaLog);
        submitPushButton->setObjectName(QString::fromUtf8("submitPushButton"));
        submitPushButton->setGeometry(QRect(610, 370, 121, 41));
        submitPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        submitPushButton->setStyleSheet(QString::fromUtf8("#submitPushButton {\n"
"	background-color:rgb(9, 44, 76);\n"
"	border-radius: 8px;\n"
"	color: #fff;\n"
"	border: none;\n"
"}\n"
"\n"
"#submitPushButton:hover {\n"
"	background-color:rgba(9, 44, 76, 0.9);\n"
"}"));
        addPushButton = new QPushButton(AddQuestionDiaLog);
        addPushButton->setObjectName(QString::fromUtf8("addPushButton"));
        addPushButton->setGeometry(QRect(620, 150, 110, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Source Sans 3 SemiBold"));
        addPushButton->setFont(font4);
        addPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        addPushButton->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: none;\n"
"color: rgb(204, 0, 0);"));
        scrollArea = new QScrollArea(AddQuestionDiaLog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(30, 180, 701, 181));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: #fff;"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 699, 400));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        optionList = new QWidget(scrollAreaWidgetContents);
        optionList->setObjectName(QString::fromUtf8("optionList"));
        optionList->setMinimumSize(QSize(0, 400));
        verticalLayout_2 = new QVBoxLayout(optionList);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_2 = new QWidget(optionList);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 0));

        verticalLayout_2->addWidget(widget_2);


        verticalLayout->addWidget(optionList);

        scrollArea->setWidget(scrollAreaWidgetContents);
        label_5 = new QLabel(AddQuestionDiaLog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(640, 70, 75, 22));
        label_5->setFont(font2);
        levelSpinBox = new QSpinBox(AddQuestionDiaLog);
        levelSpinBox->setObjectName(QString::fromUtf8("levelSpinBox"));
        levelSpinBox->setGeometry(QRect(640, 100, 91, 41));

        retranslateUi(AddQuestionDiaLog);

        QMetaObject::connectSlotsByName(AddQuestionDiaLog);
    } // setupUi

    void retranslateUi(QDialog *AddQuestionDiaLog)
    {
        AddQuestionDiaLog->setWindowTitle(QApplication::translate("AddQuestionDiaLog", "Dialog", nullptr));
        label->setText(QApplication::translate("AddQuestionDiaLog", "Add Question", nullptr));
        label_4->setText(QApplication::translate("AddQuestionDiaLog", "Title:", nullptr));
        titleLineEdit->setText(QString());
        submitPushButton->setText(QApplication::translate("AddQuestionDiaLog", "Submit", nullptr));
        addPushButton->setText(QApplication::translate("AddQuestionDiaLog", "Add Option", nullptr));
        label_5->setText(QApplication::translate("AddQuestionDiaLog", "Level:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddQuestionDiaLog: public Ui_AddQuestionDiaLog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDQUESTIONDIALOG_H
