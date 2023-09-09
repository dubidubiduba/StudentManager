/********************************************************************************
** Form generated from reading UI file 'seek.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEEK_H
#define UI_SEEK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Seek
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Seek)
    {
        if (Seek->objectName().isEmpty())
            Seek->setObjectName(QString::fromUtf8("Seek"));
        Seek->resize(600, 200);
        Seek->setMinimumSize(QSize(600, 200));
        Seek->setMaximumSize(QSize(600, 200));
        pushButton = new QPushButton(Seek);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(480, 150, 100, 35));
        pushButton->setMinimumSize(QSize(100, 35));
        pushButton->setMaximumSize(QSize(100, 35));
        pushButton->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        widget = new QWidget(Seek);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 70, 606, 42));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(270, 40));
        label->setMaximumSize(QSize(270, 40));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(300, 40));
        lineEdit->setMaximumSize(QSize(300, 40));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(Seek);

        QMetaObject::connectSlotsByName(Seek);
    } // setupUi

    void retranslateUi(QDialog *Seek)
    {
        Seek->setWindowTitle(QCoreApplication::translate("Seek", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Seek", "\346\237\245\350\257\242", nullptr));
        label->setText(QCoreApplication::translate("Seek", "\350\257\267\350\276\223\345\205\245\350\246\201\346\237\245\346\211\276\347\232\204\345\206\205\345\256\271\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Seek: public Ui_Seek {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEEK_H
