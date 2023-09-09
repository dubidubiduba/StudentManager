/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *registrBtn;
    QPushButton *exit;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLineEdit *useredit;
    QLineEdit *pwdedit;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *username;
    QLabel *label_2;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(600, 500);
        Register->setMinimumSize(QSize(600, 500));
        Register->setMaximumSize(QSize(600, 500));
        widget = new QWidget(Register);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 380, 601, 42));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        registrBtn = new QPushButton(widget);
        registrBtn->setObjectName(QString::fromUtf8("registrBtn"));
        registrBtn->setMinimumSize(QSize(120, 40));
        registrBtn->setMaximumSize(QSize(120, 40));
        registrBtn->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout->addWidget(registrBtn);

        exit = new QPushButton(widget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setMinimumSize(QSize(120, 40));
        exit->setMaximumSize(QSize(120, 40));
        exit->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout->addWidget(exit);

        widget1 = new QWidget(Register);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(240, 160, 302, 91));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        useredit = new QLineEdit(widget1);
        useredit->setObjectName(QString::fromUtf8("useredit"));
        useredit->setMinimumSize(QSize(300, 40));
        useredit->setMaximumSize(QSize(300, 40));

        verticalLayout->addWidget(useredit);

        pwdedit = new QLineEdit(widget1);
        pwdedit->setObjectName(QString::fromUtf8("pwdedit"));
        pwdedit->setMinimumSize(QSize(300, 40));
        pwdedit->setMaximumSize(QSize(300, 40));

        verticalLayout->addWidget(pwdedit);

        widget2 = new QWidget(Register);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(90, 160, 152, 86));
        verticalLayout_2 = new QVBoxLayout(widget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        username = new QLabel(widget2);
        username->setObjectName(QString::fromUtf8("username"));
        username->setMinimumSize(QSize(150, 40));
        username->setMaximumSize(QSize(150, 40));
        username->setStyleSheet(QString::fromUtf8("font: 16pt \"Agency FB\";"));

        verticalLayout_2->addWidget(username);

        label_2 = new QLabel(widget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(100, 40));
        label_2->setMaximumSize(QSize(100, 40));
        label_2->setStyleSheet(QString::fromUtf8("font: 16pt \"Agency FB\";"));

        verticalLayout_2->addWidget(label_2);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Dialog", nullptr));
        registrBtn->setText(QCoreApplication::translate("Register", "\346\263\250\345\206\214", nullptr));
        exit->setText(QCoreApplication::translate("Register", "\350\277\224\345\233\236", nullptr));
        username->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" font-weight:600;\">\347\224\250\346\210\267\345\220\215\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
