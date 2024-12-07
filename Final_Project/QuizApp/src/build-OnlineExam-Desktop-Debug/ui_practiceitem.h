/********************************************************************************
** Form generated from reading UI file 'practiceitem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRACTICEITEM_H
#define UI_PRACTICEITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PracticeItem
{
public:
    QWidget *widget_24;
    QHBoxLayout *horizontalLayout_2;
    QLabel *idLabel;
    QLabel *nameLabel;
    QLabel *categoryLabel;
    QLabel *timeLimitLabel;
    QLabel *numberQuestionLabel;
    QLabel *maxScoreLabel;
    QWidget *widget_3;
    QPushButton *redoPracticeButton;

    void setupUi(QWidget *PracticeItem)
    {
        if (PracticeItem->objectName().isEmpty())
            PracticeItem->setObjectName(QString::fromUtf8("PracticeItem"));
        PracticeItem->resize(1000, 48);
        PracticeItem->setMinimumSize(QSize(998, 44));
        PracticeItem->setStyleSheet(QString::fromUtf8(""));
        widget_24 = new QWidget(PracticeItem);
        widget_24->setObjectName(QString::fromUtf8("widget_24"));
        widget_24->setGeometry(QRect(0, 0, 1000, 46));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_24->sizePolicy().hasHeightForWidth());
        widget_24->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Source Sans 3"));
        widget_24->setFont(font);
        widget_24->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 4px;"));
        horizontalLayout_2 = new QHBoxLayout(widget_24);
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        idLabel = new QLabel(widget_24);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(idLabel->sizePolicy().hasHeightForWidth());
        idLabel->setSizePolicy(sizePolicy1);
        idLabel->setMinimumSize(QSize(0, 0));
        idLabel->setMaximumSize(QSize(16777215, 16777215));
        idLabel->setFont(font);

        horizontalLayout_2->addWidget(idLabel);

        nameLabel = new QLabel(widget_24);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(3);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(nameLabel->sizePolicy().hasHeightForWidth());
        nameLabel->setSizePolicy(sizePolicy2);
        nameLabel->setMinimumSize(QSize(0, 0));
        nameLabel->setMaximumSize(QSize(16777215, 16777215));
        nameLabel->setFont(font);

        horizontalLayout_2->addWidget(nameLabel);

        categoryLabel = new QLabel(widget_24);
        categoryLabel->setObjectName(QString::fromUtf8("categoryLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(categoryLabel->sizePolicy().hasHeightForWidth());
        categoryLabel->setSizePolicy(sizePolicy3);
        categoryLabel->setMinimumSize(QSize(0, 0));
        categoryLabel->setMaximumSize(QSize(16777215, 16777215));
        categoryLabel->setSizeIncrement(QSize(260, 0));
        categoryLabel->setFont(font);

        horizontalLayout_2->addWidget(categoryLabel);

        timeLimitLabel = new QLabel(widget_24);
        timeLimitLabel->setObjectName(QString::fromUtf8("timeLimitLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(timeLimitLabel->sizePolicy().hasHeightForWidth());
        timeLimitLabel->setSizePolicy(sizePolicy4);
        timeLimitLabel->setMinimumSize(QSize(0, 0));
        timeLimitLabel->setMaximumSize(QSize(16777215, 16777215));
        timeLimitLabel->setSizeIncrement(QSize(0, 0));
        timeLimitLabel->setFont(font);

        horizontalLayout_2->addWidget(timeLimitLabel);

        numberQuestionLabel = new QLabel(widget_24);
        numberQuestionLabel->setObjectName(QString::fromUtf8("numberQuestionLabel"));
        sizePolicy3.setHeightForWidth(numberQuestionLabel->sizePolicy().hasHeightForWidth());
        numberQuestionLabel->setSizePolicy(sizePolicy3);
        numberQuestionLabel->setMinimumSize(QSize(0, 0));
        numberQuestionLabel->setMaximumSize(QSize(16777215, 16777215));
        numberQuestionLabel->setSizeIncrement(QSize(160, 0));
        numberQuestionLabel->setFont(font);

        horizontalLayout_2->addWidget(numberQuestionLabel);

        maxScoreLabel = new QLabel(widget_24);
        maxScoreLabel->setObjectName(QString::fromUtf8("maxScoreLabel"));
        sizePolicy4.setHeightForWidth(maxScoreLabel->sizePolicy().hasHeightForWidth());
        maxScoreLabel->setSizePolicy(sizePolicy4);
        maxScoreLabel->setMinimumSize(QSize(0, 0));
        maxScoreLabel->setMaximumSize(QSize(16777215, 16777215));
        maxScoreLabel->setFont(font);

        horizontalLayout_2->addWidget(maxScoreLabel);

        widget_3 = new QWidget(widget_24);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        sizePolicy3.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy3);
        redoPracticeButton = new QPushButton(widget_3);
        redoPracticeButton->setObjectName(QString::fromUtf8("redoPracticeButton"));
        redoPracticeButton->setGeometry(QRect(40, 0, 94, 28));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(redoPracticeButton->sizePolicy().hasHeightForWidth());
        redoPracticeButton->setSizePolicy(sizePolicy5);
        redoPracticeButton->setCursor(QCursor(Qt::PointingHandCursor));
        redoPracticeButton->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 0, 0);\n"
"border-radius: 4px;\n"
"border: none;\n"
"color: #fff;"));

        horizontalLayout_2->addWidget(widget_3);


        retranslateUi(PracticeItem);

        QMetaObject::connectSlotsByName(PracticeItem);
    } // setupUi

    void retranslateUi(QWidget *PracticeItem)
    {
        PracticeItem->setWindowTitle(QApplication::translate("PracticeItem", "Form", nullptr));
        idLabel->setText(QApplication::translate("PracticeItem", "#", nullptr));
        nameLabel->setText(QApplication::translate("PracticeItem", "Practice Name", nullptr));
        categoryLabel->setText(QApplication::translate("PracticeItem", "Math", nullptr));
        timeLimitLabel->setText(QApplication::translate("PracticeItem", "20", nullptr));
        numberQuestionLabel->setText(QApplication::translate("PracticeItem", "50", nullptr));
        maxScoreLabel->setText(QApplication::translate("PracticeItem", "100", nullptr));
        redoPracticeButton->setText(QApplication::translate("PracticeItem", "Practice", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PracticeItem: public Ui_PracticeItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRACTICEITEM_H
