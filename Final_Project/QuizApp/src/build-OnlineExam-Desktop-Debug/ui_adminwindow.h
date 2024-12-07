/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_6;
    QLabel *label;
    QLabel *emailInfoLabel;
    QLabel *nameInfoLabel;
    QPushButton *questionPushButton;
    QPushButton *userPushButton;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_6;
    QWidget *widget_22;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_33;
    QLabel *label_34;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QWidget *categoryList;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_4;
    QWidget *page_2;
    QLabel *label_7;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_4;
    QWidget *questionList;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_5;
    QPushButton *addQuestionButton;
    QWidget *page_3;
    QLabel *label_8;
    QWidget *widget_23;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_37;
    QLabel *label_2;
    QLabel *label_38;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_6;
    QWidget *userList;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_7;

    void setupUi(QMainWindow *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName(QString::fromUtf8("AdminWindow"));
        AdminWindow->resize(1280, 720);
        centralwidget = new QWidget(AdminWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 0));
        widget->setMaximumSize(QSize(16777215, 16777215));
        widget->setContextMenuPolicy(Qt::ActionsContextMenu);
        widget->setLayoutDirection(Qt::LeftToRight);
        widget->setStyleSheet(QString::fromUtf8("background-color: #082540;"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_6 = new QWidget(widget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setMinimumSize(QSize(0, 80));
        widget_6->setMaximumSize(QSize(16777215, 60));
        widget_6->setStyleSheet(QString::fromUtf8("background: none;"));
        label = new QLabel(widget_6);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 40, 40));
        label->setStyleSheet(QString::fromUtf8("background: none;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/img/user.svg")));
        label->setScaledContents(true);
        emailInfoLabel = new QLabel(widget_6);
        emailInfoLabel->setObjectName(QString::fromUtf8("emailInfoLabel"));
        emailInfoLabel->setGeometry(QRect(60, 0, 101, 22));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Sans 3 Medium"));
        font.setBold(false);
        font.setWeight(50);
        emailInfoLabel->setFont(font);
        emailInfoLabel->setStyleSheet(QString::fromUtf8("font-size: 16px;\n"
"background: none;\n"
"color: #fff;"));
        nameInfoLabel = new QLabel(widget_6);
        nameInfoLabel->setObjectName(QString::fromUtf8("nameInfoLabel"));
        nameInfoLabel->setGeometry(QRect(60, 20, 131, 22));
        nameInfoLabel->setFont(font);
        nameInfoLabel->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"background: none;\n"
"color: #fff;"));

        verticalLayout->addWidget(widget_6);

        questionPushButton = new QPushButton(widget);
        questionPushButton->setObjectName(QString::fromUtf8("questionPushButton"));
        questionPushButton->setMinimumSize(QSize(0, 46));
        questionPushButton->setMaximumSize(QSize(16777215, 46));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Sans 3"));
        font1.setBold(true);
        font1.setWeight(75);
        questionPushButton->setFont(font1);
        questionPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        questionPushButton->setLayoutDirection(Qt::LeftToRight);
        questionPushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 0, 0);\n"
"border-radius: 8px;\n"
"border: none;\n"
"color: #fff;\n"
"text-align: left;\n"
"padding-left: 20px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/question-sidebar.svg"), QSize(), QIcon::Normal, QIcon::On);
        questionPushButton->setIcon(icon);
        questionPushButton->setIconSize(QSize(21, 20));

        verticalLayout->addWidget(questionPushButton);

        userPushButton = new QPushButton(widget);
        userPushButton->setObjectName(QString::fromUtf8("userPushButton"));
        userPushButton->setMinimumSize(QSize(0, 46));
        userPushButton->setMaximumSize(QSize(16777215, 46));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Source Sans 3"));
        font2.setBold(false);
        font2.setWeight(50);
        userPushButton->setFont(font2);
        userPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        userPushButton->setLayoutDirection(Qt::LeftToRight);
        userPushButton->setStyleSheet(QString::fromUtf8("background: none;\n"
"border-radius: 8px;\n"
"color: #fff;\n"
"text-align: left;\n"
"padding-left: 20px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/users-sidebar.svg"), QSize(), QIcon::Normal, QIcon::On);
        userPushButton->setIcon(icon1);
        userPushButton->setIconSize(QSize(21, 20));

        verticalLayout->addWidget(userPushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        stackedWidget = new QStackedWidget(widget_2);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 4, 1051, 711));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_6 = new QLabel(page);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 0, 1072, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Source Sans 3 SemiBold"));
        font3.setPointSize(20);
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(9, 44, 76);"));
        widget_22 = new QWidget(page);
        widget_22->setObjectName(QString::fromUtf8("widget_22"));
        widget_22->setGeometry(QRect(90, 50, 861, 42));
        widget_22->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 4px;"));
        horizontalLayout_2 = new QHBoxLayout(widget_22);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(9, 9, 9, 9);
        label_27 = new QLabel(widget_22);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_27->sizePolicy().hasHeightForWidth());
        label_27->setSizePolicy(sizePolicy2);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Source Sans 3 Medium"));
        label_27->setFont(font4);

        horizontalLayout_2->addWidget(label_27);

        label_28 = new QLabel(widget_22);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(5);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy3);
        label_28->setFont(font4);

        horizontalLayout_2->addWidget(label_28);

        label_33 = new QLabel(widget_22);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(2);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy4);
        label_33->setFont(font4);

        horizontalLayout_2->addWidget(label_33);

        label_34 = new QLabel(widget_22);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        sizePolicy4.setHeightForWidth(label_34->sizePolicy().hasHeightForWidth());
        label_34->setSizePolicy(sizePolicy4);
        label_34->setFont(font4);
        label_34->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_34);

        scrollArea = new QScrollArea(page);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(89, 100, 861, 601));
        scrollArea->setStyleSheet(QString::fromUtf8("border: none;"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 861, 1200));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        categoryList = new QWidget(scrollAreaWidgetContents);
        categoryList->setObjectName(QString::fromUtf8("categoryList"));
        categoryList->setMinimumSize(QSize(0, 1200));
        categoryList->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(categoryList);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(categoryList);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMaximumSize(QSize(16777215, 0));

        verticalLayout_2->addWidget(widget_4);


        verticalLayout_3->addWidget(categoryList);

        scrollArea->setWidget(scrollAreaWidgetContents);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 10, 1072, 21));
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(9, 44, 76);"));
        scrollArea_2 = new QScrollArea(page_2);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(90, 60, 861, 641));
        scrollArea_2->setStyleSheet(QString::fromUtf8("border: none;"));
        scrollArea_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 861, 6018));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        questionList = new QWidget(scrollAreaWidgetContents_2);
        questionList->setObjectName(QString::fromUtf8("questionList"));
        questionList->setMinimumSize(QSize(0, 6000));
        verticalLayout_5 = new QVBoxLayout(questionList);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetMinimumSize);
        widget_5 = new QWidget(questionList);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setMaximumSize(QSize(16777215, 0));

        verticalLayout_5->addWidget(widget_5);


        verticalLayout_4->addWidget(questionList);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        addQuestionButton = new QPushButton(page_2);
        addQuestionButton->setObjectName(QString::fromUtf8("addQuestionButton"));
        addQuestionButton->setGeometry(QRect(740, 10, 140, 40));
        addQuestionButton->setMinimumSize(QSize(140, 40));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(9, 44, 76, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush4(QColor(255, 255, 255, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        addQuestionButton->setPalette(palette);
        addQuestionButton->setFont(font1);
        addQuestionButton->setCursor(QCursor(Qt::PointingHandCursor));
        addQuestionButton->setAutoFillBackground(false);
        addQuestionButton->setStyleSheet(QString::fromUtf8("#addQuestionButton {\n"
"	background-color:rgb(9, 44, 76);\n"
"	border-radius: 8px;\n"
"	color: #fff;\n"
"	border: none;\n"
"}\n"
"\n"
"#addQuestionButton:hover {\n"
"	background-color:rgba(9, 44, 76, 0.9);\n"
"}"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_8 = new QLabel(page_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 0, 1072, 41));
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(9, 44, 76);"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        widget_23 = new QWidget(page_3);
        widget_23->setObjectName(QString::fromUtf8("widget_23"));
        widget_23->setGeometry(QRect(90, 50, 861, 43));
        widget_23->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 4px;"));
        horizontalLayout_3 = new QHBoxLayout(widget_23);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_31 = new QLabel(widget_23);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        sizePolicy2.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy2);
        label_31->setFont(font4);

        horizontalLayout_3->addWidget(label_31);

        label_32 = new QLabel(widget_23);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(3);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy5);
        label_32->setFont(font4);

        horizontalLayout_3->addWidget(label_32);

        label_37 = new QLabel(widget_23);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(4);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_37->sizePolicy().hasHeightForWidth());
        label_37->setSizePolicy(sizePolicy6);
        label_37->setFont(font4);

        horizontalLayout_3->addWidget(label_37);

        label_2 = new QLabel(widget_23);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("color: #000;"));

        horizontalLayout_3->addWidget(label_2);

        label_38 = new QLabel(widget_23);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        sizePolicy4.setHeightForWidth(label_38->sizePolicy().hasHeightForWidth());
        label_38->setSizePolicy(sizePolicy4);
        label_38->setFont(font4);
        label_38->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_38);

        scrollArea_3 = new QScrollArea(page_3);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(90, 99, 861, 601));
        scrollArea_3->setStyleSheet(QString::fromUtf8("border: none;"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 861, 601));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        userList = new QWidget(scrollAreaWidgetContents_3);
        userList->setObjectName(QString::fromUtf8("userList"));
        verticalLayout_7 = new QVBoxLayout(userList);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        widget_7 = new QWidget(userList);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setMaximumSize(QSize(16777215, 0));

        verticalLayout_7->addWidget(widget_7);


        verticalLayout_6->addWidget(userList);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);
        stackedWidget->addWidget(page_3);

        horizontalLayout->addWidget(widget_2);

        AdminWindow->setCentralWidget(centralwidget);

        retranslateUi(AdminWindow);

        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminWindow)
    {
        AdminWindow->setWindowTitle(QApplication::translate("AdminWindow", "MainWindow", nullptr));
        label->setText(QString());
        emailInfoLabel->setText(QApplication::translate("AdminWindow", "Thanh Dat", nullptr));
        nameInfoLabel->setText(QApplication::translate("AdminWindow", "admin@gmail.com", nullptr));
        questionPushButton->setText(QApplication::translate("AdminWindow", "\345\225\217\351\241\214\351\233\206", nullptr));
        userPushButton->setText(QApplication::translate("AdminWindow", "\343\203\246\343\203\274\343\202\266\343\203\274", nullptr));
        label_6->setText(QApplication::translate("AdminWindow", "\345\225\217\351\241\214\351\233\206", nullptr));
        label_27->setText(QApplication::translate("AdminWindow", "#", nullptr));
        label_28->setText(QApplication::translate("AdminWindow", "\343\202\253\343\203\206\343\202\264\343\203\252\345\220\215", nullptr));
        label_33->setText(QApplication::translate("AdminWindow", "\343\202\271\343\203\251\343\203\203\343\202\260", nullptr));
        label_34->setText(QApplication::translate("AdminWindow", "\343\202\242\343\202\257\343\202\267\343\203\247\343\203\263", nullptr));
        label_7->setText(QApplication::translate("AdminWindow", "Question Bank", nullptr));
        addQuestionButton->setText(QApplication::translate("AdminWindow", "Add Question", nullptr));
        label_8->setText(QApplication::translate("AdminWindow", "\343\203\246\343\203\274\343\202\266\343\203\274\347\256\241\347\220\206 ", nullptr));
        label_31->setText(QApplication::translate("AdminWindow", "#", nullptr));
        label_32->setText(QApplication::translate("AdminWindow", "\343\203\246\343\203\274\343\202\266\343\203\274\345\220\215", nullptr));
        label_37->setText(QApplication::translate("AdminWindow", "\343\203\241\343\203\274\343\203\253", nullptr));
        label_2->setText(QApplication::translate("AdminWindow", "\343\202\271\343\203\206\343\203\274\343\202\277\343\202\271", nullptr));
        label_38->setText(QApplication::translate("AdminWindow", "\343\202\242\343\202\257\343\202\267\343\203\247\343\203\263", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
