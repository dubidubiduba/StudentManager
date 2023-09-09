/********************************************************************************
** Form generated from reading UI file 'dele.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELE_H
#define UI_DELE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dele
{
public:
    QPushButton *deleBtn;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Dele)
    {
        if (Dele->objectName().isEmpty())
            Dele->setObjectName(QString::fromUtf8("Dele"));
        Dele->resize(600, 300);
        deleBtn = new QPushButton(Dele);
        deleBtn->setObjectName(QString::fromUtf8("deleBtn"));
        deleBtn->setGeometry(QRect(400, 210, 100, 40));
        deleBtn->setMinimumSize(QSize(100, 40));
        deleBtn->setMaximumSize(QSize(100, 40));
        deleBtn->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        layoutWidget = new QWidget(Dele);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 100, 601, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(375, 40));
        label->setMaximumSize(QSize(375, 40));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(150, 40));
        lineEdit->setMaximumSize(QSize(150, 40));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(Dele);

        QMetaObject::connectSlotsByName(Dele);
    } // setupUi

    void retranslateUi(QDialog *Dele)
    {
        Dele->setWindowTitle(QCoreApplication::translate("Dele", "Dialog", nullptr));
        deleBtn->setText(QCoreApplication::translate("Dele", "\345\210\240\351\231\244", nullptr));
        label->setText(QCoreApplication::translate("Dele", "\350\276\223\345\205\245\350\246\201\345\210\240\351\231\244\345\255\246\347\224\237\347\232\204\345\247\223\345\220\215\346\210\226\345\255\246\345\217\267\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dele: public Ui_Dele {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELE_H
