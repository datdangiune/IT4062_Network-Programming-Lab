/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *sidebar;
    QWidget *widget_6;
    QLabel *label;
    QLabel *nameInfoLabel;
    QLabel *emailInfoLabel;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout;
    QPushButton *examPushButton;
    QPushButton *practicePushButton;
    QPushButton *historyPushButton;
    QPushButton *statisticButton;
    QSpacerItem *verticalSpacer;
    QPushButton *logoutButton;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QWidget *widget_7;
    QWidget *widget_8;
    QLineEdit *searchLineEdit;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *categoryFilterList;
    QPushButton *createExamButton;
    QLabel *label_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *cannotFoundLabel;
    QWidget *roomList;
    QVBoxLayout *verticalLayout_7;
    QWidget *page_2;
    QPushButton *leaveButton;
    QWidget *widget_11;
    QWidget *widget_12;
    QLabel *label_2;
    QLabel *examNameLabel;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_7;
    QWidget *widget_14;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QLabel *label_11;
    QWidget *widget_15;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QWidget *widget_16;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_18;
    QLabel *label_19;
    QWidget *widget_17;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_20;
    QLabel *label_21;
    QWidget *widget_18;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_22;
    QLabel *label_23;
    QWidget *widget_20;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_29;
    QLabel *label_30;
    QWidget *widget_21;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_31;
    QLabel *label_32;
    QPushButton *readyButton;
    QLabel *waitingLabel;
    QWidget *widget_19;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *userList;
    QWidget *page_3;
    QLabel *label_13;
    QWidget *widget_24;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_4;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_46;
    QLabel *label_47;
    QLabel *label_48;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_8;
    QWidget *praticeList;
    QVBoxLayout *verticalLayout_9;
    QWidget *widget_4;
    QPushButton *createPracticeButton;
    QWidget *page_4;
    QWidget *page_5;
    QLabel *label_9;
    QWidget *widget_22;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_39;
    QLabel *label_35;
    QWidget *historyChart;
    QVBoxLayout *verticalLayout_10;
    QWidget *widget;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_11;
    QWidget *historyList;
    QVBoxLayout *verticalLayout_12;
    QWidget *widget_26;
    QWidget *page_6;
    QLabel *label_12;
    QWidget *widget_3;
    QWidget *widget_23;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_41;
    QLabel *label_38;
    QLabel *label_40;
    QLabel *label_42;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QWidget *roomResultList;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_10;
    QComboBox *roomOwnerComboBox;
    QLabel *label_5;
    QWidget *spectrumChart;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 720);
        QFont font;
        font.setFamily(QString::fromUtf8("Source Sans 3"));
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(242, 242, 242);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sidebar = new QWidget(centralwidget);
        sidebar->setObjectName(QString::fromUtf8("sidebar"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sidebar->sizePolicy().hasHeightForWidth());
        sidebar->setSizePolicy(sizePolicy);
        sidebar->setMinimumSize(QSize(0, 0));
        sidebar->setMaximumSize(QSize(16777215, 16777215));
        sidebar->setContextMenuPolicy(Qt::ActionsContextMenu);
        sidebar->setLayoutDirection(Qt::LeftToRight);
        sidebar->setStyleSheet(QString::fromUtf8("background-color: #082540;"));
        widget_6 = new QWidget(sidebar);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(9, 19, 194, 80));
        widget_6->setMinimumSize(QSize(0, 80));
        widget_6->setMaximumSize(QSize(16777215, 60));
        widget_6->setStyleSheet(QString::fromUtf8("background: none;"));
        label = new QLabel(widget_6);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 40, 40));
        label->setStyleSheet(QString::fromUtf8("background: none;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/img/user.svg")));
        label->setScaledContents(true);
        nameInfoLabel = new QLabel(widget_6);
        nameInfoLabel->setObjectName(QString::fromUtf8("nameInfoLabel"));
        nameInfoLabel->setGeometry(QRect(60, 0, 121, 22));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Sans 3 Medium"));
        font1.setBold(false);
        font1.setWeight(50);
        nameInfoLabel->setFont(font1);
        nameInfoLabel->setStyleSheet(QString::fromUtf8("font-size: 16px;\n"
"background: none;\n"
"color: #fff;"));
        emailInfoLabel = new QLabel(widget_6);
        emailInfoLabel->setObjectName(QString::fromUtf8("emailInfoLabel"));
        emailInfoLabel->setGeometry(QRect(60, 20, 141, 22));
        emailInfoLabel->setFont(font1);
        emailInfoLabel->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"background: none;\n"
"color: #fff;"));
        widget_9 = new QWidget(sidebar);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setGeometry(QRect(-1, 75, 211, 541));
        verticalLayout = new QVBoxLayout(widget_9);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        examPushButton = new QPushButton(widget_9);
        examPushButton->setObjectName(QString::fromUtf8("examPushButton"));
        examPushButton->setMinimumSize(QSize(0, 46));
        examPushButton->setMaximumSize(QSize(16777215, 46));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Source Sans 3"));
        font2.setBold(true);
        font2.setWeight(75);
        examPushButton->setFont(font2);
        examPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        examPushButton->setLayoutDirection(Qt::LeftToRight);
        examPushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 0, 0);\n"
"border-radius: 8px;\n"
"border: none;\n"
"color: #fff;\n"
"text-align: left;\n"
"padding-left: 20px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/note.svg"), QSize(), QIcon::Normal, QIcon::On);
        examPushButton->setIcon(icon);
        examPushButton->setIconSize(QSize(21, 20));

        verticalLayout->addWidget(examPushButton);

        practicePushButton = new QPushButton(widget_9);
        practicePushButton->setObjectName(QString::fromUtf8("practicePushButton"));
        practicePushButton->setMinimumSize(QSize(0, 46));
        practicePushButton->setMaximumSize(QSize(16777215, 46));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Source Sans 3"));
        font3.setBold(false);
        font3.setWeight(50);
        practicePushButton->setFont(font3);
        practicePushButton->setCursor(QCursor(Qt::PointingHandCursor));
        practicePushButton->setLayoutDirection(Qt::LeftToRight);
        practicePushButton->setStyleSheet(QString::fromUtf8("background: none;\n"
"border-radius: 8px;\n"
"color: #fff;\n"
"text-align: left;\n"
"padding-left: 20px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/pen.svg"), QSize(), QIcon::Normal, QIcon::On);
        practicePushButton->setIcon(icon1);
        practicePushButton->setIconSize(QSize(21, 20));

        verticalLayout->addWidget(practicePushButton);

        historyPushButton = new QPushButton(widget_9);
        historyPushButton->setObjectName(QString::fromUtf8("historyPushButton"));
        historyPushButton->setMinimumSize(QSize(0, 46));
        historyPushButton->setMaximumSize(QSize(16777215, 46));
        historyPushButton->setFont(font3);
        historyPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        historyPushButton->setLayoutDirection(Qt::LeftToRight);
        historyPushButton->setStyleSheet(QString::fromUtf8("background: none;\n"
"border-radius: 8px;\n"
"color: #fff;\n"
"text-align: left;\n"
"padding-left: 20px;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/clock-history.svg"), QSize(), QIcon::Normal, QIcon::On);
        historyPushButton->setIcon(icon2);
        historyPushButton->setIconSize(QSize(21, 20));

        verticalLayout->addWidget(historyPushButton);

        statisticButton = new QPushButton(widget_9);
        statisticButton->setObjectName(QString::fromUtf8("statisticButton"));
        statisticButton->setMinimumSize(QSize(0, 46));
        statisticButton->setMaximumSize(QSize(16777215, 46));
        statisticButton->setFont(font3);
        statisticButton->setCursor(QCursor(Qt::PointingHandCursor));
        statisticButton->setLayoutDirection(Qt::LeftToRight);
        statisticButton->setStyleSheet(QString::fromUtf8("background: none;\n"
"border-radius: 8px;\n"
"color: #fff;\n"
"text-align: left;\n"
"padding-left: 20px;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/chart-line.svg"), QSize(), QIcon::Normal, QIcon::On);
        statisticButton->setIcon(icon3);
        statisticButton->setIconSize(QSize(21, 20));

        verticalLayout->addWidget(statisticButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        logoutButton = new QPushButton(sidebar);
        logoutButton->setObjectName(QString::fromUtf8("logoutButton"));
        logoutButton->setGeometry(QRect(10, 660, 193, 46));
        logoutButton->setMinimumSize(QSize(0, 46));
        logoutButton->setMaximumSize(QSize(16777215, 46));
        logoutButton->setFont(font2);
        logoutButton->setCursor(QCursor(Qt::PointingHandCursor));
        logoutButton->setLayoutDirection(Qt::LeftToRight);
        logoutButton->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 0, 0);\n"
"border-radius: 8px;\n"
"border: none;\n"
"color: #fff;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/img/double-right-arrow.svg"), QSize(), QIcon::Normal, QIcon::On);
        logoutButton->setIcon(icon4);
        logoutButton->setIconSize(QSize(16, 20));

        horizontalLayout->addWidget(sidebar);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        widget_2->setAutoFillBackground(false);
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, 4, 10, 0);
        stackedWidget = new QStackedWidget(widget_2);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        widget_7 = new QWidget(page_1);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setGeometry(QRect(0, 0, 1072, 731));
        widget_8 = new QWidget(widget_7);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setGeometry(QRect(0, 90, 355, 611));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(4);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_8->sizePolicy().hasHeightForWidth());
        widget_8->setSizePolicy(sizePolicy2);
        widget_8->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border: 1px solid rgb(237, 240, 245);\n"
"border-radius: 8px;"));
        searchLineEdit = new QLineEdit(widget_8);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));
        searchLineEdit->setGeometry(QRect(17, 30, 271, 40));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Source Sans 3"));
        font4.setPointSize(11);
        searchLineEdit->setFont(font4);
        searchLineEdit->setStyleSheet(QString::fromUtf8("padding-left:16px;\n"
"background-color: rgb(237, 240, 245);\n"
"border-radius: 20px;"));
        pushButton = new QPushButton(widget_8);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 30, 40, 40));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 0, 0);\n"
"border-radius: 20px;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/img/search.svg"), QSize(), QIcon::Normal, QIcon::On);
        pushButton->setIcon(icon5);
        verticalLayoutWidget_2 = new QWidget(widget_8);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 90, 311, 511));
        categoryFilterList = new QVBoxLayout(verticalLayoutWidget_2);
        categoryFilterList->setObjectName(QString::fromUtf8("categoryFilterList"));
        categoryFilterList->setContentsMargins(9, 9, 4, 4);
        createExamButton = new QPushButton(widget_7);
        createExamButton->setObjectName(QString::fromUtf8("createExamButton"));
        createExamButton->setGeometry(QRect(880, 30, 140, 40));
        createExamButton->setMinimumSize(QSize(140, 40));
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
        createExamButton->setPalette(palette);
        createExamButton->setFont(font2);
        createExamButton->setCursor(QCursor(Qt::PointingHandCursor));
        createExamButton->setAutoFillBackground(false);
        createExamButton->setStyleSheet(QString::fromUtf8("#createExamButton {\n"
"	background-color:rgb(9, 44, 76);\n"
"	border-radius: 8px;\n"
"	color: #fff;\n"
"	border: none;\n"
"}\n"
"\n"
"#createExamButton:hover {\n"
"	background-color:rgba(9, 44, 76, 0.9);\n"
"}"));
        label_6 = new QLabel(widget_7);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 10, 1072, 21));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Source Sans 3 SemiBold"));
        font5.setPointSize(20);
        label_6->setFont(font5);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(9, 44, 76);"));
        scrollArea = new QScrollArea(widget_7);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(369, 89, 671, 611));
        scrollArea->setStyleSheet(QString::fromUtf8("border: none;"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 671, 611));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        cannotFoundLabel = new QLabel(scrollAreaWidgetContents_2);
        cannotFoundLabel->setObjectName(QString::fromUtf8("cannotFoundLabel"));
        cannotFoundLabel->setMaximumSize(QSize(16777215, 30));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Source Sans 3"));
        font6.setPointSize(15);
        cannotFoundLabel->setFont(font6);
        cannotFoundLabel->setStyleSheet(QString::fromUtf8("color: #b6bbc3;"));
        cannotFoundLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(cannotFoundLabel);

        roomList = new QWidget(scrollAreaWidgetContents_2);
        roomList->setObjectName(QString::fromUtf8("roomList"));
        verticalLayout_7 = new QVBoxLayout(roomList);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));

        verticalLayout_6->addWidget(roomList);

        scrollArea->setWidget(scrollAreaWidgetContents_2);
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        leaveButton = new QPushButton(page_2);
        leaveButton->setObjectName(QString::fromUtf8("leaveButton"));
        leaveButton->setGeometry(QRect(10, 10, 121, 31));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Source Sans 3"));
        font7.setBold(true);
        font7.setItalic(false);
        font7.setWeight(75);
        leaveButton->setFont(font7);
        leaveButton->setCursor(QCursor(Qt::PointingHandCursor));
        leaveButton->setStyleSheet(QString::fromUtf8("#leaveButton {\n"
"	background-color: rgb(230, 65, 65);\n"
"	border: none;\n"
"	border-radius: 4px;\n"
"	color: #fff;\n"
"}\n"
"#leaveButton:hover {\n"
"	background-color: rgba(230, 65, 65, 0.9);\n"
"}\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/img/right-arrow.svg"), QSize(), QIcon::Normal, QIcon::Off);
        leaveButton->setIcon(icon6);
        widget_11 = new QWidget(page_2);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setGeometry(QRect(10, 60, 601, 661));
        widget_11->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 8px;"));
        widget_12 = new QWidget(widget_11);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setGeometry(QRect(10, 10, 581, 511));
        label_2 = new QLabel(widget_12);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 181, 22));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Source Sans 3"));
        font8.setPointSize(16);
        label_2->setFont(font8);
        examNameLabel = new QLabel(widget_12);
        examNameLabel->setObjectName(QString::fromUtf8("examNameLabel"));
        examNameLabel->setGeometry(QRect(10, 10, 381, 41));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Source Sans 3"));
        font9.setPointSize(24);
        font9.setBold(true);
        font9.setWeight(75);
        examNameLabel->setFont(font9);
        examNameLabel->setStyleSheet(QString::fromUtf8("color: rgb(9, 44, 76)"));
        widget_13 = new QWidget(widget_12);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        widget_13->setGeometry(QRect(20, 80, 201, 43));
        widget_13->setFont(font);
        horizontalLayout_3 = new QHBoxLayout(widget_13);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget_13);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font10;
        font10.setFamily(QString::fromUtf8("Source Sans 3"));
        font10.setPointSize(14);
        label_3->setFont(font10);

        horizontalLayout_3->addWidget(label_3);

        label_7 = new QLabel(widget_13);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font10);

        horizontalLayout_3->addWidget(label_7);

        widget_14 = new QWidget(widget_12);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        widget_14->setGeometry(QRect(20, 120, 187, 40));
        widget_14->setFont(font);
        horizontalLayout_4 = new QHBoxLayout(widget_14);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(9, 4, -1, 4);
        label_10 = new QLabel(widget_14);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font10);

        horizontalLayout_4->addWidget(label_10);

        label_11 = new QLabel(widget_14);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font10);

        horizontalLayout_4->addWidget(label_11);

        widget_15 = new QWidget(widget_12);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        widget_15->setGeometry(QRect(20, 160, 201, 40));
        widget_15->setFont(font);
        horizontalLayout_5 = new QHBoxLayout(widget_15);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 4, -1, 4);
        label_14 = new QLabel(widget_15);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font10);

        horizontalLayout_5->addWidget(label_14);

        label_15 = new QLabel(widget_15);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font10);

        horizontalLayout_5->addWidget(label_15);

        label_16 = new QLabel(widget_12);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(30, 200, 431, 40));
        label_16->setFont(font10);
        label_16->setWordWrap(true);
        label_17 = new QLabel(widget_12);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 260, 171, 22));
        label_17->setFont(font8);
        widget_16 = new QWidget(widget_12);
        widget_16->setObjectName(QString::fromUtf8("widget_16"));
        widget_16->setGeometry(QRect(30, 290, 171, 46));
        widget_16->setFont(font);
        horizontalLayout_6 = new QHBoxLayout(widget_16);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_18 = new QLabel(widget_16);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font10);

        horizontalLayout_6->addWidget(label_18);

        label_19 = new QLabel(widget_16);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font10);

        horizontalLayout_6->addWidget(label_19);

        widget_17 = new QWidget(widget_12);
        widget_17->setObjectName(QString::fromUtf8("widget_17"));
        widget_17->setGeometry(QRect(30, 330, 171, 46));
        widget_17->setFont(font10);
        horizontalLayout_7 = new QHBoxLayout(widget_17);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_20 = new QLabel(widget_17);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font10);

        horizontalLayout_7->addWidget(label_20);

        label_21 = new QLabel(widget_17);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font10);

        horizontalLayout_7->addWidget(label_21);

        widget_18 = new QWidget(widget_12);
        widget_18->setObjectName(QString::fromUtf8("widget_18"));
        widget_18->setGeometry(QRect(30, 370, 171, 46));
        widget_18->setFont(font10);
        horizontalLayout_9 = new QHBoxLayout(widget_18);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_22 = new QLabel(widget_18);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font10);

        horizontalLayout_9->addWidget(label_22);

        label_23 = new QLabel(widget_18);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font10);

        horizontalLayout_9->addWidget(label_23);

        widget_20 = new QWidget(widget_12);
        widget_20->setObjectName(QString::fromUtf8("widget_20"));
        widget_20->setGeometry(QRect(30, 410, 171, 46));
        widget_20->setFont(font10);
        horizontalLayout_8 = new QHBoxLayout(widget_20);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_29 = new QLabel(widget_20);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setFont(font10);

        horizontalLayout_8->addWidget(label_29);

        label_30 = new QLabel(widget_20);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setFont(font10);

        horizontalLayout_8->addWidget(label_30);

        widget_21 = new QWidget(widget_12);
        widget_21->setObjectName(QString::fromUtf8("widget_21"));
        widget_21->setGeometry(QRect(30, 450, 171, 46));
        widget_21->setFont(font10);
        horizontalLayout_2 = new QHBoxLayout(widget_21);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_31 = new QLabel(widget_21);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setFont(font10);

        horizontalLayout_2->addWidget(label_31);

        label_32 = new QLabel(widget_21);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setFont(font10);

        horizontalLayout_2->addWidget(label_32);

        readyButton = new QPushButton(widget_11);
        readyButton->setObjectName(QString::fromUtf8("readyButton"));
        readyButton->setGeometry(QRect(150, 570, 261, 50));
        QFont font11;
        font11.setFamily(QString::fromUtf8("Source Sans 3 SemiBold"));
        font11.setBold(false);
        font11.setWeight(50);
        readyButton->setFont(font11);
        readyButton->setCursor(QCursor(Qt::PointingHandCursor));
        readyButton->setStyleSheet(QString::fromUtf8("#readyButton {\n"
"	background-color: rgb(9, 44, 76);\n"
"	border: none;\n"
"	color: #fff;\n"
"	border-radius: 25px;\n"
"}\n"
"\n"
"#readyButton:hover {\n"
"	background-color: rgba(9, 44, 76, 0.9);\n"
"}"));
        waitingLabel = new QLabel(widget_11);
        waitingLabel->setObjectName(QString::fromUtf8("waitingLabel"));
        waitingLabel->setGeometry(QRect(120, 530, 331, 22));
        QFont font12;
        font12.setFamily(QString::fromUtf8("Source Sans 3"));
        font12.setItalic(false);
        waitingLabel->setFont(font12);
        widget_19 = new QWidget(page_2);
        widget_19->setObjectName(QString::fromUtf8("widget_19"));
        widget_19->setGeometry(QRect(630, 60, 441, 43));
        widget_19->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 4px;"));
        horizontalLayout_11 = new QHBoxLayout(widget_19);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_24 = new QLabel(widget_19);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy3);
        QFont font13;
        font13.setFamily(QString::fromUtf8("Source Sans 3 Medium"));
        label_24->setFont(font13);

        horizontalLayout_11->addWidget(label_24);

        label_25 = new QLabel(widget_19);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        sizePolicy2.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy2);
        label_25->setFont(font13);

        horizontalLayout_11->addWidget(label_25);

        label_26 = new QLabel(widget_19);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(7);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy4);
        label_26->setFont(font13);

        horizontalLayout_11->addWidget(label_26);

        verticalLayoutWidget = new QWidget(page_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(630, 110, 441, 611));
        userList = new QVBoxLayout(verticalLayoutWidget);
        userList->setObjectName(QString::fromUtf8("userList"));
        userList->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_13 = new QLabel(page_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 12, 1072, 21));
        label_13->setFont(font5);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(9, 44, 76);"));
        widget_24 = new QWidget(page_3);
        widget_24->setObjectName(QString::fromUtf8("widget_24"));
        widget_24->setGeometry(QRect(20, 90, 1000, 44));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(widget_24->sizePolicy().hasHeightForWidth());
        widget_24->setSizePolicy(sizePolicy5);
        widget_24->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 4px;"));
        horizontalLayout_13 = new QHBoxLayout(widget_24);
        horizontalLayout_13->setSpacing(20);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_4 = new QLabel(widget_24);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy6(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy6.setHorizontalStretch(1);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy6);
        label_4->setMinimumSize(QSize(0, 0));
        label_4->setMaximumSize(QSize(16777215, 16777215));
        label_4->setFont(font13);

        horizontalLayout_13->addWidget(label_4);

        label_43 = new QLabel(widget_24);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(3);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_43->sizePolicy().hasHeightForWidth());
        label_43->setSizePolicy(sizePolicy7);
        label_43->setMinimumSize(QSize(0, 0));
        label_43->setMaximumSize(QSize(16777215, 16777215));
        label_43->setFont(font13);

        horizontalLayout_13->addWidget(label_43);

        label_44 = new QLabel(widget_24);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(2);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(label_44->sizePolicy().hasHeightForWidth());
        label_44->setSizePolicy(sizePolicy8);
        label_44->setMinimumSize(QSize(0, 0));
        label_44->setMaximumSize(QSize(16777215, 16777215));
        label_44->setSizeIncrement(QSize(260, 0));
        label_44->setFont(font13);

        horizontalLayout_13->addWidget(label_44);

        label_45 = new QLabel(widget_24);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        sizePolicy3.setHeightForWidth(label_45->sizePolicy().hasHeightForWidth());
        label_45->setSizePolicy(sizePolicy3);
        label_45->setMinimumSize(QSize(0, 0));
        label_45->setMaximumSize(QSize(16777215, 16777215));
        label_45->setSizeIncrement(QSize(0, 0));
        label_45->setFont(font13);

        horizontalLayout_13->addWidget(label_45);

        label_46 = new QLabel(widget_24);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        sizePolicy8.setHeightForWidth(label_46->sizePolicy().hasHeightForWidth());
        label_46->setSizePolicy(sizePolicy8);
        label_46->setMinimumSize(QSize(0, 0));
        label_46->setMaximumSize(QSize(16777215, 16777215));
        label_46->setSizeIncrement(QSize(160, 0));
        label_46->setFont(font13);

        horizontalLayout_13->addWidget(label_46);

        label_47 = new QLabel(widget_24);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        sizePolicy3.setHeightForWidth(label_47->sizePolicy().hasHeightForWidth());
        label_47->setSizePolicy(sizePolicy3);
        label_47->setMinimumSize(QSize(0, 0));
        label_47->setMaximumSize(QSize(16777215, 16777215));
        label_47->setFont(font13);

        horizontalLayout_13->addWidget(label_47);

        label_48 = new QLabel(widget_24);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        sizePolicy8.setHeightForWidth(label_48->sizePolicy().hasHeightForWidth());
        label_48->setSizePolicy(sizePolicy8);

        horizontalLayout_13->addWidget(label_48);

        scrollArea_4 = new QScrollArea(page_3);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setGeometry(QRect(20, 140, 1000, 561));
        scrollArea_4->setStyleSheet(QString::fromUtf8("border: none;"));
        scrollArea_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 1000, 1200));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        praticeList = new QWidget(scrollAreaWidgetContents_3);
        praticeList->setObjectName(QString::fromUtf8("praticeList"));
        praticeList->setMinimumSize(QSize(0, 1200));
        verticalLayout_9 = new QVBoxLayout(praticeList);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(praticeList);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMinimumSize(QSize(0, 0));
        widget_4->setMaximumSize(QSize(16777215, 0));

        verticalLayout_9->addWidget(widget_4);


        verticalLayout_8->addWidget(praticeList);

        scrollArea_4->setWidget(scrollAreaWidgetContents_3);
        createPracticeButton = new QPushButton(page_3);
        createPracticeButton->setObjectName(QString::fromUtf8("createPracticeButton"));
        createPracticeButton->setGeometry(QRect(880, 30, 140, 40));
        createPracticeButton->setMinimumSize(QSize(140, 40));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush5(QColor(255, 255, 255, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush6(QColor(255, 255, 255, 128));
        brush6.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush7(QColor(255, 255, 255, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        createPracticeButton->setPalette(palette1);
        createPracticeButton->setFont(font2);
        createPracticeButton->setCursor(QCursor(Qt::PointingHandCursor));
        createPracticeButton->setAutoFillBackground(false);
        createPracticeButton->setStyleSheet(QString::fromUtf8("#createPracticeButton {\n"
"	background-color:rgb(9, 44, 76);\n"
"	border-radius: 8px;\n"
"	color: #fff;\n"
"	border: none;\n"
"}\n"
"\n"
"#createPracticeButton:hover {\n"
"	background-color:rgba(9, 44, 76, 0.9);\n"
"}"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        label_9 = new QLabel(page_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 10, 1072, 31));
        label_9->setFont(font5);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(9, 44, 76);"));
        widget_22 = new QWidget(page_5);
        widget_22->setObjectName(QString::fromUtf8("widget_22"));
        widget_22->setGeometry(QRect(70, 410, 890, 44));
        widget_22->setMaximumSize(QSize(16777215, 44));
        widget_22->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 4px;"));
        horizontalLayout_12 = new QHBoxLayout(widget_22);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_27 = new QLabel(widget_22);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        sizePolicy3.setHeightForWidth(label_27->sizePolicy().hasHeightForWidth());
        label_27->setSizePolicy(sizePolicy3);
        label_27->setFont(font13);

        horizontalLayout_12->addWidget(label_27);

        label_28 = new QLabel(widget_22);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        sizePolicy7.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy7);
        label_28->setFont(font13);

        horizontalLayout_12->addWidget(label_28);

        label_33 = new QLabel(widget_22);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        sizePolicy8.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy8);
        label_33->setFont(font13);

        horizontalLayout_12->addWidget(label_33);

        label_34 = new QLabel(widget_22);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        sizePolicy7.setHeightForWidth(label_34->sizePolicy().hasHeightForWidth());
        label_34->setSizePolicy(sizePolicy7);
        label_34->setFont(font13);

        horizontalLayout_12->addWidget(label_34);

        label_39 = new QLabel(widget_22);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        sizePolicy8.setHeightForWidth(label_39->sizePolicy().hasHeightForWidth());
        label_39->setSizePolicy(sizePolicy8);
        label_39->setFont(font13);
        label_39->setWordWrap(false);

        horizontalLayout_12->addWidget(label_39);

        label_35 = new QLabel(widget_22);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        sizePolicy8.setHeightForWidth(label_35->sizePolicy().hasHeightForWidth());
        label_35->setSizePolicy(sizePolicy8);
        label_35->setFont(font13);

        horizontalLayout_12->addWidget(label_35);

        historyChart = new QWidget(page_5);
        historyChart->setObjectName(QString::fromUtf8("historyChart"));
        historyChart->setGeometry(QRect(70, 59, 890, 340));
        historyChart->setMaximumSize(QSize(16777215, 340));
        historyChart->setStyleSheet(QString::fromUtf8("background-color: #fff;"));
        verticalLayout_10 = new QVBoxLayout(historyChart);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(historyChart);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 0));

        verticalLayout_10->addWidget(widget);

        scrollArea_5 = new QScrollArea(page_5);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setGeometry(QRect(69, 465, 891, 231));
        scrollArea_5->setStyleSheet(QString::fromUtf8("border: none;"));
        scrollArea_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 891, 231));
        verticalLayout_11 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        historyList = new QWidget(scrollAreaWidgetContents_5);
        historyList->setObjectName(QString::fromUtf8("historyList"));
        verticalLayout_12 = new QVBoxLayout(historyList);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        widget_26 = new QWidget(historyList);
        widget_26->setObjectName(QString::fromUtf8("widget_26"));
        widget_26->setMaximumSize(QSize(16777215, 0));

        verticalLayout_12->addWidget(widget_26);


        verticalLayout_11->addWidget(historyList);

        scrollArea_5->setWidget(scrollAreaWidgetContents_5);
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        label_12 = new QLabel(page_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 10, 1072, 21));
        label_12->setFont(font5);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(9, 44, 76);"));
        widget_3 = new QWidget(page_6);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(10, 410, 1021, 301));
        widget_23 = new QWidget(widget_3);
        widget_23->setObjectName(QString::fromUtf8("widget_23"));
        widget_23->setGeometry(QRect(20, 10, 981, 44));
        sizePolicy5.setHeightForWidth(widget_23->sizePolicy().hasHeightForWidth());
        widget_23->setSizePolicy(sizePolicy5);
        widget_23->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 4px;"));
        horizontalLayout_10 = new QHBoxLayout(widget_23);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(9, -1, 9, -1);
        label_36 = new QLabel(widget_23);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        sizePolicy6.setHeightForWidth(label_36->sizePolicy().hasHeightForWidth());
        label_36->setSizePolicy(sizePolicy6);
        label_36->setMinimumSize(QSize(0, 0));
        label_36->setMaximumSize(QSize(16777215, 16777215));
        label_36->setFont(font13);

        horizontalLayout_10->addWidget(label_36);

        label_37 = new QLabel(widget_23);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        sizePolicy7.setHeightForWidth(label_37->sizePolicy().hasHeightForWidth());
        label_37->setSizePolicy(sizePolicy7);
        label_37->setMinimumSize(QSize(0, 0));
        label_37->setMaximumSize(QSize(16777215, 16777215));
        label_37->setFont(font13);

        horizontalLayout_10->addWidget(label_37);

        label_41 = new QLabel(widget_23);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        sizePolicy7.setHeightForWidth(label_41->sizePolicy().hasHeightForWidth());
        label_41->setSizePolicy(sizePolicy7);
        label_41->setMinimumSize(QSize(0, 0));
        label_41->setMaximumSize(QSize(16777215, 16777215));
        label_41->setSizeIncrement(QSize(260, 0));
        label_41->setFont(font13);

        horizontalLayout_10->addWidget(label_41);

        label_38 = new QLabel(widget_23);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        sizePolicy8.setHeightForWidth(label_38->sizePolicy().hasHeightForWidth());
        label_38->setSizePolicy(sizePolicy8);
        label_38->setMinimumSize(QSize(0, 0));
        label_38->setMaximumSize(QSize(16777215, 16777215));
        label_38->setSizeIncrement(QSize(0, 0));
        label_38->setFont(font13);

        horizontalLayout_10->addWidget(label_38);

        label_40 = new QLabel(widget_23);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        sizePolicy8.setHeightForWidth(label_40->sizePolicy().hasHeightForWidth());
        label_40->setSizePolicy(sizePolicy8);
        label_40->setMinimumSize(QSize(0, 0));
        label_40->setMaximumSize(QSize(16777215, 16777215));
        label_40->setSizeIncrement(QSize(160, 0));
        label_40->setFont(font13);

        horizontalLayout_10->addWidget(label_40);

        label_42 = new QLabel(widget_23);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        sizePolicy8.setHeightForWidth(label_42->sizePolicy().hasHeightForWidth());
        label_42->setSizePolicy(sizePolicy8);
        label_42->setMinimumSize(QSize(0, 0));
        label_42->setMaximumSize(QSize(16777215, 16777215));
        label_42->setFont(font13);

        horizontalLayout_10->addWidget(label_42);

        scrollArea_3 = new QScrollArea(widget_3);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(20, 60, 981, 231));
        scrollArea_3->setStyleSheet(QString::fromUtf8("border: none;"));
        scrollArea_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 981, 231));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        roomResultList = new QWidget(scrollAreaWidgetContents);
        roomResultList->setObjectName(QString::fromUtf8("roomResultList"));
        roomResultList->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_5 = new QVBoxLayout(roomResultList);
        verticalLayout_5->setSpacing(4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, -1);
        widget_10 = new QWidget(roomResultList);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        widget_10->setMaximumSize(QSize(16777215, 0));

        verticalLayout_5->addWidget(widget_10);


        verticalLayout_3->addWidget(roomResultList);

        scrollArea_3->setWidget(scrollAreaWidgetContents);
        roomOwnerComboBox = new QComboBox(page_6);
        roomOwnerComboBox->setObjectName(QString::fromUtf8("roomOwnerComboBox"));
        roomOwnerComboBox->setGeometry(QRect(120, 50, 361, 30));
        label_5 = new QLabel(page_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 50, 100, 30));
        label_5->setFont(font);
        spectrumChart = new QWidget(page_6);
        spectrumChart->setObjectName(QString::fromUtf8("spectrumChart"));
        spectrumChart->setGeometry(QRect(40, 89, 971, 311));
        verticalLayout_4 = new QVBoxLayout(spectrumChart);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, -1, 0, -1);
        widget_5 = new QWidget(spectrumChart);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setMaximumSize(QSize(0, 16777215));

        verticalLayout_4->addWidget(widget_5);

        stackedWidget->addWidget(page_6);

        verticalLayout_2->addWidget(stackedWidget);


        horizontalLayout->addWidget(widget_2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        nameInfoLabel->setText(QApplication::translate("MainWindow", "Thanh Dat", nullptr));
        emailInfoLabel->setText(QApplication::translate("MainWindow", "dat@gmail.com", nullptr));
        examPushButton->setText(QApplication::translate("MainWindow", "Exam", nullptr));
        practicePushButton->setText(QApplication::translate("MainWindow", "Pratice", nullptr));
        historyPushButton->setText(QApplication::translate("MainWindow", "History", nullptr));
        statisticButton->setText(QApplication::translate("MainWindow", "Statistic", nullptr));
        logoutButton->setText(QApplication::translate("MainWindow", "Logout", nullptr));
        searchLineEdit->setText(QString());
        searchLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Search...", nullptr));
        pushButton->setText(QString());
        createExamButton->setText(QApplication::translate("MainWindow", "Create Room", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Examination Rooms", nullptr));
        cannotFoundLabel->setText(QApplication::translate("MainWindow", "Cannot found", nullptr));
        leaveButton->setText(QApplication::translate("MainWindow", "Leave", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "General information: ", nullptr));
        examNameLabel->setText(QApplication::translate("MainWindow", "C Programing for beginner ", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Time limit: ", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "1 minutes", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Questions: ", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "5", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Maximum score: ", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "15", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "All questions are in single-choice question type.", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "Exam structure: ", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "Level 1:", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "1 question", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "Level 2:", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "1 question", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "Level 3:", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "1 question", nullptr));
        label_29->setText(QApplication::translate("MainWindow", "Level 4:", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "1 question", nullptr));
        label_31->setText(QApplication::translate("MainWindow", "Level 5:", nullptr));
        label_32->setText(QApplication::translate("MainWindow", "1 question", nullptr));
        readyButton->setText(QApplication::translate("MainWindow", "READY", nullptr));
        waitingLabel->setText(QApplication::translate("MainWindow", "Waiting for the room owner to start the exam...", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "#", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "Name", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "Email", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Practice List", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "#", nullptr));
        label_43->setText(QApplication::translate("MainWindow", "Practice Name", nullptr));
        label_44->setText(QApplication::translate("MainWindow", "Category", nullptr));
        label_45->setText(QApplication::translate("MainWindow", "Time limit", nullptr));
        label_46->setText(QApplication::translate("MainWindow", "Number question", nullptr));
        label_47->setText(QApplication::translate("MainWindow", "Max score", nullptr));
        label_48->setText(QString());
        createPracticeButton->setText(QApplication::translate("MainWindow", "Create Practice", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "History", nullptr));
        label_27->setText(QApplication::translate("MainWindow", "#", nullptr));
        label_28->setText(QApplication::translate("MainWindow", "Exam", nullptr));
        label_33->setText(QApplication::translate("MainWindow", "Type", nullptr));
        label_34->setText(QApplication::translate("MainWindow", "Date", nullptr));
        label_39->setText(QApplication::translate("MainWindow", "Correct Anwers", nullptr));
        label_35->setText(QApplication::translate("MainWindow", "Score", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Exam results statistics", nullptr));
        label_36->setText(QApplication::translate("MainWindow", "#", nullptr));
        label_37->setText(QApplication::translate("MainWindow", "Username", nullptr));
        label_41->setText(QApplication::translate("MainWindow", "Email", nullptr));
        label_38->setText(QApplication::translate("MainWindow", "Total question", nullptr));
        label_40->setText(QApplication::translate("MainWindow", "Correct Anwers", nullptr));
        label_42->setText(QApplication::translate("MainWindow", "Final Score", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Select Room:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
