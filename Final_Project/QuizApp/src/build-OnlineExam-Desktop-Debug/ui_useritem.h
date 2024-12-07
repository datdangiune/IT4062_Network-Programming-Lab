/********************************************************************************
** Form generated from reading UI file 'useritem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERITEM_H
#define UI_USERITEM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserItem
{
public:
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *idLabel;
    QLabel *nameLabel;
    QLabel *emailLabel;
    QLabel *statusLable;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *deleteButton;
    QPushButton *blockButton;
    QPushButton *unBlockButton;

    void setupUi(QWidget *UserItem)
    {
        if (UserItem->objectName().isEmpty())
            UserItem->setObjectName(QString::fromUtf8("UserItem"));
        UserItem->resize(861, 50);
        UserItem->setMinimumSize(QSize(0, 50));
        UserItem->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 4px;\n"
""));
        widget_2 = new QWidget(UserItem);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 861, 50));
        widget_2->setMinimumSize(QSize(861, 50));
        widget_2->setMaximumSize(QSize(861, 50));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        idLabel = new QLabel(widget_2);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(idLabel->sizePolicy().hasHeightForWidth());
        idLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Source Sans 3 Medium"));
        idLabel->setFont(font);

        horizontalLayout_2->addWidget(idLabel);

        nameLabel = new QLabel(widget_2);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nameLabel->sizePolicy().hasHeightForWidth());
        nameLabel->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Sans 3"));
        nameLabel->setFont(font1);
        nameLabel->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(nameLabel);

        emailLabel = new QLabel(widget_2);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(4);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(emailLabel->sizePolicy().hasHeightForWidth());
        emailLabel->setSizePolicy(sizePolicy2);
        emailLabel->setFont(font);

        horizontalLayout_2->addWidget(emailLabel);

        statusLable = new QLabel(widget_2);
        statusLable->setObjectName(QString::fromUtf8("statusLable"));
        sizePolicy.setHeightForWidth(statusLable->sizePolicy().hasHeightForWidth());
        statusLable->setSizePolicy(sizePolicy);
        statusLable->setFont(font1);

        horizontalLayout_2->addWidget(statusLable);

        widget = new QWidget(widget_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy3);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        deleteButton = new QPushButton(widget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/delete.svg"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon);

        horizontalLayout->addWidget(deleteButton);

        blockButton = new QPushButton(widget);
        blockButton->setObjectName(QString::fromUtf8("blockButton"));
        blockButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/block.svg"), QSize(), QIcon::Normal, QIcon::Off);
        blockButton->setIcon(icon1);

        horizontalLayout->addWidget(blockButton);

        unBlockButton = new QPushButton(widget);
        unBlockButton->setObjectName(QString::fromUtf8("unBlockButton"));
        unBlockButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/unblock.svg"), QSize(), QIcon::Normal, QIcon::Off);
        unBlockButton->setIcon(icon2);

        horizontalLayout->addWidget(unBlockButton);


        horizontalLayout_2->addWidget(widget);


        retranslateUi(UserItem);

        QMetaObject::connectSlotsByName(UserItem);
    } // setupUi

    void retranslateUi(QWidget *UserItem)
    {
        UserItem->setWindowTitle(QApplication::translate("UserItem", "Form", nullptr));
        idLabel->setText(QApplication::translate("UserItem", "#", nullptr));
        nameLabel->setText(QApplication::translate("UserItem", "\343\203\246\343\203\274\343\202\266\343\203\274\345\220\215", nullptr));
        emailLabel->setText(QApplication::translate("UserItem", "\343\203\241\343\203\274\343\203\253\343\202\242\343\203\211\343\203\254\343\202\271", nullptr));
        statusLable->setText(QApplication::translate("UserItem", "\343\202\271\343\203\206\343\203\274\343\202\277\343\202\271", nullptr));
        deleteButton->setText(QString());
        blockButton->setText(QString());
        unBlockButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserItem: public Ui_UserItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERITEM_H
