/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QWidget *container;
    QWidget *widget;
    QWidget *widget_2;
    QLabel *label;
    QPushButton *registerPushButton;
    QWidget *widget_5;
    QLabel *label_5;
    QWidget *widget_3;
    QLineEdit *emailLineEdit;
    QLabel *label_3;
    QWidget *widget_4;
    QLabel *label_4;
    QLineEdit *passwordLineEdit;
    QPushButton *loginPushButton;
    QWidget *page_3;
    QWidget *container_2;
    QWidget *widget_11;
    QWidget *widget_12;
    QPushButton *loginPushButton_2;
    QWidget *widget_13;
    QLabel *label_13;
    QWidget *widget_14;
    QLineEdit *resgisterEmailLineEdit;
    QLabel *label_14;
    QWidget *widget_16;
    QLabel *label_16;
    QWidget *widget_15;
    QLabel *label_15;
    QLineEdit *resgisterPasswordLineEdit;
    QPushButton *registerPushButton_2;
    QWidget *widget_17;
    QLabel *label_17;
    QLineEdit *resgisterNameLineEdit;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(1280, 720);
        LoginWindow->setStyleSheet(QString::fromUtf8("#label_2, #label, #label_11, #label_12 {\n"
"	color: rgba(255,255,255,0.9);\n"
"}"));
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(-1, -1, 1281, 721));
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        container = new QWidget(page_1);
        container->setObjectName(QString::fromUtf8("container"));
        container->setGeometry(QRect(0, 0, 1281, 721));
        container->setStyleSheet(QString::fromUtf8("#container {\n"
"	background-image: url(:/img/img/login-bg.png);\n"
"}"));
        widget = new QWidget(container);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(28, 40, 1220, 641));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setEnabled(true);
        widget_2->setGeometry(QRect(0, 0, 581, 641));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 240, 431, 111));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 229));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush1(QColor(255, 255, 255, 128));
        brush1.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        label->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Source Sans 3"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setMouseTracking(true);
        label->setStyleSheet(QString::fromUtf8(""));
        registerPushButton = new QPushButton(widget_2);
        registerPushButton->setObjectName(QString::fromUtf8("registerPushButton"));
        registerPushButton->setGeometry(QRect(250, 350, 190, 50));
        QFont font1;
        font1.setPointSize(12);
        registerPushButton->setFont(font1);
        registerPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        registerPushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid rgb(204, 0, 0);\n"
"	color: rgba(204, 0, 0);	\n"
"	border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(204, 0, 0);\n"
"	color: #FFFFFF;\n"
"}"));
        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(510, 0, 721, 641));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy);
        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(170, 170, 431, 70));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(204, 0, 0);\n"
""));
        label_5->setAlignment(Qt::AlignCenter);
        widget_3 = new QWidget(widget_5);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(140, 240, 481, 111));
        widget_3->setMaximumSize(QSize(16777215, 16777215));
        emailLineEdit = new QLineEdit(widget_3);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));
        emailLineEdit->setGeometry(QRect(10, 40, 461, 51));
        emailLineEdit->setMinimumSize(QSize(0, 50));
        emailLineEdit->setMaximumSize(QSize(16777215, 16777215));
        emailLineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid rgba(0,0,0,0.2);\n"
"border-radius: 4px;\n"
"padding-left: 10px;\n"
""));
        emailLineEdit->setEchoMode(QLineEdit::Normal);
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 61, 20));
        label_3->setMaximumSize(QSize(16777215, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Source Sans 3"));
        font2.setPointSize(14);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: #000;"));
        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(140, 350, 481, 101));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 0, 121, 22));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: #000;"));
        passwordLineEdit = new QLineEdit(widget_4);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(10, 30, 461, 51));
        passwordLineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid rgba(0,0,0,0.2);\n"
"border-radius: 4px;\n"
"padding-left: 10px;"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        loginPushButton = new QPushButton(widget_5);
        loginPushButton->setObjectName(QString::fromUtf8("loginPushButton"));
        loginPushButton->setGeometry(QRect(300, 460, 190, 50));
        loginPushButton->setMinimumSize(QSize(0, 50));
        loginPushButton->setMaximumSize(QSize(190, 16777215));
        loginPushButton->setFont(font1);
        loginPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        loginPushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid rgb(204, 0, 0);\n"
"	color: rgba(204, 0, 0);	\n"
"	border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(204, 0, 0);\n"
"	color: #FFFFFF;\n"
"}"));
        stackedWidget->addWidget(page_1);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        container_2 = new QWidget(page_3);
        container_2->setObjectName(QString::fromUtf8("container_2"));
        container_2->setGeometry(QRect(-1, -1, 1281, 721));
        container_2->setStyleSheet(QString::fromUtf8("#container_2 {\n"
"	background-image: url(:/img/img/login-bg.png);\n"
"}"));
        widget_11 = new QWidget(container_2);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setGeometry(QRect(29, 40, 1220, 641));
        widget_12 = new QWidget(widget_11);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setGeometry(QRect(0, 0, 471, 641));
        loginPushButton_2 = new QPushButton(widget_12);
        loginPushButton_2->setObjectName(QString::fromUtf8("loginPushButton_2"));
        loginPushButton_2->setGeometry(QRect(240, 500, 190, 50));
        loginPushButton_2->setFont(font1);
        loginPushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        loginPushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid rgb(204, 0, 0);\n"
"	color: rgba(204, 0, 0);	\n"
"	border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(204, 0, 0);\n"
"	color: #FFFFFF;\n"
"}"));
        widget_13 = new QWidget(widget_11);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        widget_13->setGeometry(QRect(470, 0, 761, 641));
        sizePolicy.setHeightForWidth(widget_13->sizePolicy().hasHeightForWidth());
        widget_13->setSizePolicy(sizePolicy);
        label_13 = new QLabel(widget_13);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(190, 80, 411, 70));
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(204, 0, 0);"));
        label_13->setAlignment(Qt::AlignCenter);
        widget_14 = new QWidget(widget_13);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        widget_14->setGeometry(QRect(140, 270, 481, 111));
        widget_14->setMaximumSize(QSize(16777215, 16777215));
        resgisterEmailLineEdit = new QLineEdit(widget_14);
        resgisterEmailLineEdit->setObjectName(QString::fromUtf8("resgisterEmailLineEdit"));
        resgisterEmailLineEdit->setGeometry(QRect(10, 40, 461, 51));
        resgisterEmailLineEdit->setMinimumSize(QSize(0, 50));
        resgisterEmailLineEdit->setMaximumSize(QSize(16777215, 16777215));
        resgisterEmailLineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid rgba(0,0,0,0.2);\n"
"border-radius: 4px;\n"
"padding-left: 10px;\n"
""));
        resgisterEmailLineEdit->setEchoMode(QLineEdit::Normal);
        label_14 = new QLabel(widget_14);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 10, 61, 20));
        label_14->setMaximumSize(QSize(16777215, 20));
        label_14->setFont(font2);
        label_14->setStyleSheet(QString::fromUtf8("color: #000;"));
        widget_16 = new QWidget(widget_14);
        widget_16->setObjectName(QString::fromUtf8("widget_16"));
        widget_16->setGeometry(QRect(-10, -120, 481, 111));
        widget_16->setMaximumSize(QSize(16777215, 16777215));
        label_16 = new QLabel(widget_16);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 10, 61, 20));
        label_16->setMaximumSize(QSize(16777215, 20));
        label_16->setFont(font2);
        label_16->setStyleSheet(QString::fromUtf8("color: #000;"));
        widget_15 = new QWidget(widget_13);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        widget_15->setGeometry(QRect(140, 380, 481, 101));
        label_15 = new QLabel(widget_15);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 0, 101, 22));
        label_15->setFont(font2);
        label_15->setStyleSheet(QString::fromUtf8("color: #000;"));
        resgisterPasswordLineEdit = new QLineEdit(widget_15);
        resgisterPasswordLineEdit->setObjectName(QString::fromUtf8("resgisterPasswordLineEdit"));
        resgisterPasswordLineEdit->setGeometry(QRect(10, 30, 461, 51));
        resgisterPasswordLineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid rgba(0,0,0,0.2);\n"
"border-radius: 4px;\n"
"padding-left: 10px;"));
        resgisterPasswordLineEdit->setEchoMode(QLineEdit::Password);
        registerPushButton_2 = new QPushButton(widget_13);
        registerPushButton_2->setObjectName(QString::fromUtf8("registerPushButton_2"));
        registerPushButton_2->setGeometry(QRect(290, 500, 190, 50));
        registerPushButton_2->setMinimumSize(QSize(0, 50));
        registerPushButton_2->setMaximumSize(QSize(190, 16777215));
        registerPushButton_2->setFont(font1);
        registerPushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        registerPushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid rgb(204, 0, 0);\n"
"	color: rgba(204, 0, 0);	\n"
"	border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(204, 0, 0);\n"
"	color: #FFFFFF;\n"
"}"));
        widget_17 = new QWidget(widget_13);
        widget_17->setObjectName(QString::fromUtf8("widget_17"));
        widget_17->setGeometry(QRect(140, 160, 481, 111));
        label_17 = new QLabel(widget_17);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 10, 75, 22));
        label_17->setFont(font2);
        resgisterNameLineEdit = new QLineEdit(widget_17);
        resgisterNameLineEdit->setObjectName(QString::fromUtf8("resgisterNameLineEdit"));
        resgisterNameLineEdit->setGeometry(QRect(10, 40, 461, 51));
        resgisterNameLineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid rgba(0,0,0,0.2);\n"
"border-radius: 4px;\n"
"padding-left: 10px;\n"
""));
        stackedWidget->addWidget(page_3);
        LoginWindow->setCentralWidget(centralwidget);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("LoginWindow", "<html><head/><body><p><span style=\" color:#cc0000;\">\343\202\242\343\202\253\343\202\246\343\203\263\343\203\210\343\202\222\344\275\234\346\210\220</span></p></body></html>", nullptr));
        registerPushButton->setText(QApplication::translate("LoginWindow", "\343\202\265\343\202\244\343\203\263\343\202\242\343\203\203\343\203\227", nullptr));
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("LoginWindow", "<html><head/><body><p><span style=\" color:#cc0000;\">\343\201\212\345\270\260\343\202\212\343\201\252\343\201\225\343\201\204\357\274\201</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("LoginWindow", "\343\201\212\345\270\260\343\202\212\343\201\252\343\201\225\343\201\204\357\274\201", nullptr));
        emailLineEdit->setPlaceholderText(QString());
        label_3->setText(QApplication::translate("LoginWindow", "\343\203\241\343\203\274\343\203\253", nullptr));
        label_4->setText(QApplication::translate("LoginWindow", "\343\203\221\343\202\271\343\203\257\343\203\274\343\203\211", nullptr));
        passwordLineEdit->setText(QString());
        loginPushButton->setText(QApplication::translate("LoginWindow", "\343\202\242\343\202\257\343\202\267\343\203\247\343\203\263", nullptr));
        loginPushButton_2->setText(QApplication::translate("LoginWindow", "\343\202\265\343\202\244\343\203\263\343\202\244\343\203\263", nullptr));
        label_13->setText(QApplication::translate("LoginWindow", "\343\202\242\343\202\253\343\202\246\343\203\263\343\203\210\343\202\222\344\275\234\346\210\220\357\274\201", nullptr));
        resgisterEmailLineEdit->setPlaceholderText(QString());
        label_14->setText(QApplication::translate("LoginWindow", "\343\203\241\343\203\274\343\203\253", nullptr));
        label_16->setText(QApplication::translate("LoginWindow", "Email", nullptr));
        label_15->setText(QApplication::translate("LoginWindow", "\343\203\221\343\202\271\343\203\257\343\203\274\343\203\211", nullptr));
        resgisterPasswordLineEdit->setText(QString());
        registerPushButton_2->setText(QApplication::translate("LoginWindow", "\343\202\265\343\202\244\343\203\263\343\202\242\343\203\203\343\203\227", nullptr));
        label_17->setText(QApplication::translate("LoginWindow", "\345\220\215\345\211\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
