/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *registerBtn;
    QPushButton *loginBtn;
    QPushButton *exitBtn;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *administer;
    QRadioButton *teacher;
    QRadioButton *student;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLineEdit *userEdit;
    QLineEdit *pwdEdit;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(600, 500);
        LoginDialog->setMinimumSize(QSize(600, 500));
        LoginDialog->setMaximumSize(QSize(600, 500));
        layoutWidget = new QWidget(LoginDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 400, 601, 42));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(70);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        registerBtn = new QPushButton(layoutWidget);
        registerBtn->setObjectName(QString::fromUtf8("registerBtn"));
        registerBtn->setMinimumSize(QSize(120, 40));
        registerBtn->setMaximumSize(QSize(120, 40));
        registerBtn->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_3->addWidget(registerBtn);

        loginBtn = new QPushButton(layoutWidget);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setMinimumSize(QSize(120, 40));
        loginBtn->setMaximumSize(QSize(120, 40));
        loginBtn->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_3->addWidget(loginBtn);

        exitBtn = new QPushButton(layoutWidget);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));
        exitBtn->setMinimumSize(QSize(120, 40));
        exitBtn->setMaximumSize(QSize(120, 40));
        exitBtn->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_3->addWidget(exitBtn);

        layoutWidget1 = new QWidget(LoginDialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(110, 310, 391, 41));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        administer = new QRadioButton(layoutWidget1);
        administer->setObjectName(QString::fromUtf8("administer"));
        administer->setMinimumSize(QSize(100, 30));
        administer->setMaximumSize(QSize(100, 30));
        administer->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_4->addWidget(administer);

        teacher = new QRadioButton(layoutWidget1);
        teacher->setObjectName(QString::fromUtf8("teacher"));
        teacher->setEnabled(true);
        teacher->setMinimumSize(QSize(100, 30));
        teacher->setMaximumSize(QSize(100, 30));
        teacher->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_4->addWidget(teacher);

        student = new QRadioButton(layoutWidget1);
        student->setObjectName(QString::fromUtf8("student"));
        student->setMinimumSize(QSize(100, 30));
        student->setMaximumSize(QSize(100, 30));
        student->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_4->addWidget(student);

        layoutWidget2 = new QWidget(LoginDialog);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(235, 100, 302, 86));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        userEdit = new QLineEdit(layoutWidget2);
        userEdit->setObjectName(QString::fromUtf8("userEdit"));
        userEdit->setMinimumSize(QSize(300, 40));
        userEdit->setMaximumSize(QSize(300, 40));
        userEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout->addWidget(userEdit);

        pwdEdit = new QLineEdit(layoutWidget2);
        pwdEdit->setObjectName(QString::fromUtf8("pwdEdit"));
        pwdEdit->setMinimumSize(QSize(300, 40));
        pwdEdit->setMaximumSize(QSize(300, 40));
        pwdEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pwdEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(pwdEdit);

        layoutWidget3 = new QWidget(LoginDialog);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(66, 100, 171, 86));
        verticalLayout_2 = new QVBoxLayout(layoutWidget3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(150, 40));
        label->setMaximumSize(QSize(150, 40));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(100, 40));
        label_2->setMaximumSize(QSize(100, 40));

        verticalLayout_2->addWidget(label_2);

        pushButton = new QPushButton(LoginDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(410, 220, 91, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        registerBtn->setText(QCoreApplication::translate("LoginDialog", "\346\263\250\345\206\214", nullptr));
        loginBtn->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        exitBtn->setText(QCoreApplication::translate("LoginDialog", "\351\200\200\345\207\272", nullptr));
        administer->setText(QCoreApplication::translate("LoginDialog", "\347\256\241\347\220\206\345\221\230", nullptr));
        teacher->setText(QCoreApplication::translate("LoginDialog", "\346\225\231\345\270\210", nullptr));
        student->setText(QCoreApplication::translate("LoginDialog", "\345\255\246\347\224\237", nullptr));
        userEdit->setPlaceholderText(QCoreApplication::translate("LoginDialog", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        pwdEdit->setPlaceholderText(QCoreApplication::translate("LoginDialog", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        label->setText(QCoreApplication::translate("LoginDialog", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">\347\224\250\346\210\267\345\220\215\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("LoginDialog", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("LoginDialog", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
