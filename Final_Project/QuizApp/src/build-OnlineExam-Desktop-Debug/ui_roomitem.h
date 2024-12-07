/********************************************************************************
** Form generated from reading UI file 'roomitem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMITEM_H
#define UI_ROOMITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RoomItem
{
public:
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QLabel *label;
    QWidget *widget;
    QLabel *nameLabel;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *capacityLabel;
    QLabel *timeLimitLabel;
    QPushButton *joinPushButton;
    QLabel *label_7;
    QLabel *startTimeLabel;
    QLabel *lockLabel;

    void setupUi(QWidget *RoomItem)
    {
        if (RoomItem->objectName().isEmpty())
            RoomItem->setObjectName(QString::fromUtf8("RoomItem"));
        RoomItem->resize(649, 150);
        RoomItem->setMinimumSize(QSize(632, 150));
        RoomItem->setMaximumSize(QSize(16777215, 300));
        RoomItem->setStyleSheet(QString::fromUtf8(""));
        widget_3 = new QWidget(RoomItem);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(0, 0, 630, 150));
        widget_3->setStyleSheet(QString::fromUtf8("#widget_3  {\n"
"	border: 1px solid rgb(224, 224, 224);\n"
"}\n"
"QWidget {\n"
"	background-color: #fff;\n"
"	border-radius: 8px;\n"
"}"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMaximumSize(QSize(16777215, 16777215));
        widget_2->setStyleSheet(QString::fromUtf8("border: none;"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 0, 151, 151));
        label->setStyleSheet(QString::fromUtf8("background-color: none;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/img/exam.png")));
        label->setScaledContents(true);

        horizontalLayout->addWidget(widget_2);

        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(7);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setStyleSheet(QString::fromUtf8(""));
        nameLabel = new QLabel(widget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(10, 34, 341, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Sans 3"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(false);
        font.setStyleStrategy(QFont::PreferAntialias);
        nameLabel->setFont(font);
        nameLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        nameLabel->setWordWrap(true);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 81, 24));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Sans 3"));
        font1.setPointSize(12);
        label_3->setFont(font1);
        label_3->setAutoFillBackground(false);
        label_3->setStyleSheet(QString::fromUtf8("border:1px solid rgb(39, 174, 96);\n"
"color: rgb(39, 174, 96);\n"
"border-radius: 8px;"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 85, 28, 30));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/img/img/group.svg")));
        label_4->setScaledContents(true);
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 89, 20, 20));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/img/img/clock.svg")));
        label_6->setScaledContents(true);
        capacityLabel = new QLabel(widget);
        capacityLabel->setObjectName(QString::fromUtf8("capacityLabel"));
        capacityLabel->setGeometry(QRect(42, 84, 30, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Source Sans 3"));
        font2.setPointSize(14);
        capacityLabel->setFont(font2);
        timeLimitLabel = new QLabel(widget);
        timeLimitLabel->setObjectName(QString::fromUtf8("timeLimitLabel"));
        timeLimitLabel->setGeometry(QRect(105, 84, 41, 30));
        timeLimitLabel->setFont(font2);
        joinPushButton = new QPushButton(widget);
        joinPushButton->setObjectName(QString::fromUtf8("joinPushButton"));
        joinPushButton->setGeometry(QRect(250, 105, 98, 36));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Source Sans 3"));
        font3.setBold(true);
        font3.setWeight(75);
        joinPushButton->setFont(font3);
        joinPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        joinPushButton->setStyleSheet(QString::fromUtf8("#joinPushButton {\n"
"	background-color: rgb(204, 0, 0);\n"
"	border-radius: 4px;\n"
"	color: #fff;\n"
"	border: none;\n"
"}\n"
"#joinPushButton:hover {\n"
"	border: 1px solid rgb(204, 0, 0);\n"
"	color: rgb(204, 0, 0);\n"
"	background: none;\n"
"}"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(15, 120, 18, 18));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/img/img/calendar.svg")));
        label_7->setScaledContents(true);
        startTimeLabel = new QLabel(widget);
        startTimeLabel->setObjectName(QString::fromUtf8("startTimeLabel"));
        startTimeLabel->setGeometry(QRect(42, 117, 171, 30));
        startTimeLabel->setFont(font2);
        lockLabel = new QLabel(widget);
        lockLabel->setObjectName(QString::fromUtf8("lockLabel"));
        lockLabel->setGeometry(QRect(320, 10, 22, 22));
        lockLabel->setPixmap(QPixmap(QString::fromUtf8(":/img/img/lock-red.svg")));
        lockLabel->setScaledContents(true);

        horizontalLayout->addWidget(widget);


        retranslateUi(RoomItem);

        QMetaObject::connectSlotsByName(RoomItem);
    } // setupUi

    void retranslateUi(QWidget *RoomItem)
    {
        RoomItem->setWindowTitle(QApplication::translate("RoomItem", "Form", nullptr));
        label->setText(QString());
        nameLabel->setText(QApplication::translate("RoomItem", "Introduction to Artificial Intelligence", nullptr));
        label_3->setText(QApplication::translate("RoomItem", "Lobby", nullptr));
        label_4->setText(QString());
        label_6->setText(QString());
        capacityLabel->setText(QApplication::translate("RoomItem", "50", nullptr));
        timeLimitLabel->setText(QApplication::translate("RoomItem", "75m", nullptr));
        joinPushButton->setText(QApplication::translate("RoomItem", "Join", nullptr));
        label_7->setText(QString());
        startTimeLabel->setText(QApplication::translate("RoomItem", "2023-01-01 17:00:00", nullptr));
        lockLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RoomItem: public Ui_RoomItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMITEM_H
