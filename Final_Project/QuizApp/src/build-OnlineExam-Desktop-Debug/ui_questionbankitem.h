/********************************************************************************
** Form generated from reading UI file 'questionbankitem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTIONBANKITEM_H
#define UI_QUESTIONBANKITEM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuestionBankItem
{
public:
    QFrame *frame;
    QLabel *questionTextLabel;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *optionList;
    QPushButton *deleteQuestionButton;

    void setupUi(QWidget *QuestionBankItem)
    {
        if (QuestionBankItem->objectName().isEmpty())
            QuestionBankItem->setObjectName(QString::fromUtf8("QuestionBankItem"));
        QuestionBankItem->resize(750, 240);
        QuestionBankItem->setMinimumSize(QSize(750, 240));
        QuestionBankItem->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(QuestionBankItem);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 750, 240));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(0, 0));
        frame->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 8px;\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        questionTextLabel = new QLabel(frame);
        questionTextLabel->setObjectName(QString::fromUtf8("questionTextLabel"));
        questionTextLabel->setGeometry(QRect(20, 10, 671, 40));
        questionTextLabel->setMaximumSize(QSize(16777215, 40));
        questionTextLabel->setStyleSheet(QString::fromUtf8(""));
        questionTextLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        questionTextLabel->setWordWrap(true);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 60, 671, 171));
        optionList = new QVBoxLayout(verticalLayoutWidget);
        optionList->setObjectName(QString::fromUtf8("optionList"));
        optionList->setSizeConstraint(QLayout::SetMinimumSize);
        optionList->setContentsMargins(0, 0, 0, 0);
        deleteQuestionButton = new QPushButton(frame);
        deleteQuestionButton->setObjectName(QString::fromUtf8("deleteQuestionButton"));
        deleteQuestionButton->setGeometry(QRect(700, 20, 41, 30));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/delete.svg"), QSize(), QIcon::Normal, QIcon::On);
        deleteQuestionButton->setIcon(icon);
        deleteQuestionButton->setIconSize(QSize(20, 19));

        retranslateUi(QuestionBankItem);

        QMetaObject::connectSlotsByName(QuestionBankItem);
    } // setupUi

    void retranslateUi(QWidget *QuestionBankItem)
    {
        QuestionBankItem->setWindowTitle(QApplication::translate("QuestionBankItem", "Form", nullptr));
        questionTextLabel->setText(QApplication::translate("QuestionBankItem", "Among the design techniques that are used in system development, which of the following is an explanation of a decision table?", nullptr));
        deleteQuestionButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QuestionBankItem: public Ui_QuestionBankItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTIONBANKITEM_H
