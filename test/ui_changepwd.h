/********************************************************************************
** Form generated from reading UI file 'changepwd.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPWD_H
#define UI_CHANGEPWD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Changepwd
{
public:
    QPushButton *Change;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *Cname;
    QLineEdit *Cpwd;
    QLineEdit *Cnewpwd;
    QLineEdit *Cnewpwd_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *Changepwd)
    {
        if (Changepwd->objectName().isEmpty())
            Changepwd->setObjectName(QString::fromUtf8("Changepwd"));
        Changepwd->resize(400, 350);
        Change = new QPushButton(Changepwd);
        Change->setObjectName(QString::fromUtf8("Change"));
        Change->setGeometry(QRect(130, 290, 100, 30));
        Change->setMinimumSize(QSize(100, 30));
        Change->setMaximumSize(QSize(100, 30));
        Change->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));
        widget = new QWidget(Changepwd);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(170, 30, 152, 231));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Cname = new QLineEdit(widget);
        Cname->setObjectName(QString::fromUtf8("Cname"));
        Cname->setMinimumSize(QSize(150, 30));
        Cname->setMaximumSize(QSize(150, 30));

        verticalLayout->addWidget(Cname);

        Cpwd = new QLineEdit(widget);
        Cpwd->setObjectName(QString::fromUtf8("Cpwd"));
        Cpwd->setMinimumSize(QSize(150, 30));
        Cpwd->setMaximumSize(QSize(150, 30));

        verticalLayout->addWidget(Cpwd);

        Cnewpwd = new QLineEdit(widget);
        Cnewpwd->setObjectName(QString::fromUtf8("Cnewpwd"));
        Cnewpwd->setMinimumSize(QSize(150, 30));
        Cnewpwd->setMaximumSize(QSize(150, 30));

        verticalLayout->addWidget(Cnewpwd);

        Cnewpwd_2 = new QLineEdit(widget);
        Cnewpwd_2->setObjectName(QString::fromUtf8("Cnewpwd_2"));
        Cnewpwd_2->setMinimumSize(QSize(150, 30));
        Cnewpwd_2->setMaximumSize(QSize(150, 30));

        verticalLayout->addWidget(Cnewpwd_2);

        widget1 = new QWidget(Changepwd);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(52, 31, 101, 221));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout_2->addWidget(label_4);


        retranslateUi(Changepwd);

        QMetaObject::connectSlotsByName(Changepwd);
    } // setupUi

    void retranslateUi(QDialog *Changepwd)
    {
        Changepwd->setWindowTitle(QCoreApplication::translate("Changepwd", "Dialog", nullptr));
        Change->setText(QCoreApplication::translate("Changepwd", "\344\277\256\346\224\271", nullptr));
        label->setText(QCoreApplication::translate("Changepwd", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Changepwd", "\345\216\237\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Changepwd", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Changepwd", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Changepwd: public Ui_Changepwd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPWD_H
