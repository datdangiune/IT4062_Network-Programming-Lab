/********************************************************************************
** Form generated from reading UI file 'categoryitem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATEGORYITEM_H
#define UI_CATEGORYITEM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CategoryItem
{
public:
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *idLabel;
    QLabel *nameLabel;
    QLabel *slugLabel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *viewButton;
    QPushButton *deleteButton;

    void setupUi(QWidget *CategoryItem)
    {
        if (CategoryItem->objectName().isEmpty())
            CategoryItem->setObjectName(QString::fromUtf8("CategoryItem"));
        CategoryItem->resize(861, 50);
        CategoryItem->setMinimumSize(QSize(861, 50));
        CategoryItem->setMaximumSize(QSize(861, 50));
        CategoryItem->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 4px;\n"
""));
        widget_2 = new QWidget(CategoryItem);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 2, 861, 50));
        widget_2->setMinimumSize(QSize(861, 50));
        widget_2->setMaximumSize(QSize(861, 50));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
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

        horizontalLayout->addWidget(idLabel);

        nameLabel = new QLabel(widget_2);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(5);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nameLabel->sizePolicy().hasHeightForWidth());
        nameLabel->setSizePolicy(sizePolicy1);
        nameLabel->setFont(font);
        nameLabel->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(nameLabel);

        slugLabel = new QLabel(widget_2);
        slugLabel->setObjectName(QString::fromUtf8("slugLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(slugLabel->sizePolicy().hasHeightForWidth());
        slugLabel->setSizePolicy(sizePolicy2);
        slugLabel->setFont(font);

        horizontalLayout->addWidget(slugLabel);

        widget = new QWidget(widget_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(26, 0, 0, 0);
        viewButton = new QPushButton(widget);
        viewButton->setObjectName(QString::fromUtf8("viewButton"));
        viewButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/view.svg"), QSize(), QIcon::Normal, QIcon::Off);
        viewButton->setIcon(icon);

        horizontalLayout_2->addWidget(viewButton);

        deleteButton = new QPushButton(widget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/delete.svg"), QSize(), QIcon::Normal, QIcon::On);
        deleteButton->setIcon(icon1);

        horizontalLayout_2->addWidget(deleteButton);


        horizontalLayout->addWidget(widget);


        retranslateUi(CategoryItem);

        QMetaObject::connectSlotsByName(CategoryItem);
    } // setupUi

    void retranslateUi(QWidget *CategoryItem)
    {
        CategoryItem->setWindowTitle(QApplication::translate("CategoryItem", "Form", nullptr));
        idLabel->setText(QApplication::translate("CategoryItem", "#", nullptr));
        nameLabel->setText(QApplication::translate("CategoryItem", "Category Name", nullptr));
        slugLabel->setText(QApplication::translate("CategoryItem", "Slug", nullptr));
        viewButton->setText(QString());
        deleteButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CategoryItem: public Ui_CategoryItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORYITEM_H
