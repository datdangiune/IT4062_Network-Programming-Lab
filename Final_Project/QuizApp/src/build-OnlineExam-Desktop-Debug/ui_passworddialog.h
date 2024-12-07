/********************************************************************************
** Form generated from reading UI file 'passworddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDDIALOG_H
#define UI_PASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PasswordDialog
{
public:
    QWidget *lockIcon;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *passwordLineEdit;
    QPushButton *submitPushButton;

    void setupUi(QDialog *PasswordDialog)
    {
        if (PasswordDialog->objectName().isEmpty())
            PasswordDialog->setObjectName(QString::fromUtf8("PasswordDialog"));
        PasswordDialog->resize(384, 216);
        PasswordDialog->setStyleSheet(QString::fromUtf8("background-color: #fff;"));
        lockIcon = new QWidget(PasswordDialog);
        lockIcon->setObjectName(QString::fromUtf8("lockIcon"));
        lockIcon->setGeometry(QRect(170, 10, 50, 50));
        lockIcon->setStyleSheet(QString::fromUtf8("background-color: rgba(9, 44, 76, 0.2);\n"
"border-radius: 25px;"));
        label = new QLabel(lockIcon);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 30, 30));
        label->setStyleSheet(QString::fromUtf8("background-color: none;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/img/lock.svg")));
        label->setScaledContents(true);
        label_2 = new QLabel(PasswordDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 80, 221, 22));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Sans 3"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: #000;"));
        passwordLineEdit = new QLineEdit(PasswordDialog);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(70, 120, 261, 30));
        passwordLineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid rgba(0,0,0,0.2);\n"
"border-radius: 4px;\n"
"padding-left: 10px;\n"
""));
        passwordLineEdit->setInputMask(QString::fromUtf8(""));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        submitPushButton = new QPushButton(PasswordDialog);
        submitPushButton->setObjectName(QString::fromUtf8("submitPushButton"));
        submitPushButton->setGeometry(QRect(150, 160, 98, 36));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Sans 3 SemiBold"));
        submitPushButton->setFont(font1);
        submitPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        submitPushButton->setStyleSheet(QString::fromUtf8("#submitPushButton {\n"
"	background-color: rgb(9, 44, 76);\n"
"	border: none;\n"
"	color: #fff;\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"#submitPushButton:hover {\n"
"	background-color: rgba(9, 44, 76, 0.9);\n"
"}"));

        retranslateUi(PasswordDialog);

        QMetaObject::connectSlotsByName(PasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *PasswordDialog)
    {
        PasswordDialog->setWindowTitle(QApplication::translate("PasswordDialog", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("PasswordDialog", "This room requires a password", nullptr));
        passwordLineEdit->setText(QString());
        passwordLineEdit->setPlaceholderText(QString());
        submitPushButton->setText(QApplication::translate("PasswordDialog", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PasswordDialog: public Ui_PasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDDIALOG_H
