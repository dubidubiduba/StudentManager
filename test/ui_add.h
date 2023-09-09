/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add
{
public:
    QRadioButton *radioButton_man;
    QRadioButton *radioButton_woman;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *spinBox;
    QPushButton *ADD;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *Add_nameEdit;
    QLineEdit *Add_idEdit;
    QLineEdit *Add_classEdit;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *Add_chineseEdit;
    QLineEdit *Add_mathEdit;

    void setupUi(QDialog *Add)
    {
        if (Add->objectName().isEmpty())
            Add->setObjectName(QString::fromUtf8("Add"));
        Add->resize(400, 600);
        Add->setMinimumSize(QSize(400, 600));
        Add->setMaximumSize(QSize(400, 600));
        radioButton_man = new QRadioButton(Add);
        radioButton_man->setObjectName(QString::fromUtf8("radioButton_man"));
        radioButton_man->setGeometry(QRect(260, 250, 60, 40));
        radioButton_man->setMinimumSize(QSize(60, 40));
        radioButton_man->setMaximumSize(QSize(60, 40));
        radioButton_man->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        radioButton_woman = new QRadioButton(Add);
        radioButton_woman->setObjectName(QString::fromUtf8("radioButton_woman"));
        radioButton_woman->setGeometry(QRect(330, 250, 60, 40));
        radioButton_woman->setMinimumSize(QSize(60, 40));
        radioButton_woman->setMaximumSize(QSize(60, 40));
        radioButton_woman->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_2 = new QLabel(Add);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 250, 60, 40));
        label_2->setMinimumSize(QSize(60, 40));
        label_2->setMaximumSize(QSize(60, 40));
        label_2->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_3 = new QLabel(Add);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 250, 60, 40));
        label_3->setMinimumSize(QSize(60, 40));
        label_3->setMaximumSize(QSize(60, 40));
        label_3->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        spinBox = new QSpinBox(Add);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(80, 250, 61, 41));
        spinBox->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        ADD = new QPushButton(Add);
        ADD->setObjectName(QString::fromUtf8("ADD"));
        ADD->setGeometry(QRect(140, 500, 150, 40));
        ADD->setMinimumSize(QSize(150, 40));
        ADD->setMaximumSize(QSize(150, 40));
        ADD->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        layoutWidget = new QWidget(Add);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(155, 41, 202, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Add_nameEdit = new QLineEdit(layoutWidget);
        Add_nameEdit->setObjectName(QString::fromUtf8("Add_nameEdit"));
        Add_nameEdit->setMinimumSize(QSize(200, 40));
        Add_nameEdit->setMaximumSize(QSize(200, 40));

        verticalLayout->addWidget(Add_nameEdit);

        Add_idEdit = new QLineEdit(layoutWidget);
        Add_idEdit->setObjectName(QString::fromUtf8("Add_idEdit"));
        Add_idEdit->setMinimumSize(QSize(200, 40));
        Add_idEdit->setMaximumSize(QSize(200, 40));

        verticalLayout->addWidget(Add_idEdit);

        Add_classEdit = new QLineEdit(layoutWidget);
        Add_classEdit->setObjectName(QString::fromUtf8("Add_classEdit"));
        Add_classEdit->setMinimumSize(QSize(200, 40));
        Add_classEdit->setMaximumSize(QSize(200, 40));

        verticalLayout->addWidget(Add_classEdit);

        layoutWidget1 = new QWidget(Add);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(46, 40, 62, 201));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(60, 40));
        label->setMaximumSize(QSize(60, 40));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout_2->addWidget(label);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(60, 40));
        label_6->setMaximumSize(QSize(60, 40));
        label_6->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(60, 40));
        label_7->setMaximumSize(QSize(60, 40));
        label_7->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout_2->addWidget(label_7);

        layoutWidget2 = new QWidget(Add);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 320, 152, 131));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(150, 40));
        label_4->setMaximumSize(QSize(150, 40));
        label_4->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(150, 40));
        label_5->setMaximumSize(QSize(150, 40));
        label_5->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout_3->addWidget(label_5);

        layoutWidget3 = new QWidget(Add);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(170, 320, 202, 131));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        Add_chineseEdit = new QLineEdit(layoutWidget3);
        Add_chineseEdit->setObjectName(QString::fromUtf8("Add_chineseEdit"));
        Add_chineseEdit->setMinimumSize(QSize(200, 40));
        Add_chineseEdit->setMaximumSize(QSize(200, 40));

        verticalLayout_4->addWidget(Add_chineseEdit);

        Add_mathEdit = new QLineEdit(layoutWidget3);
        Add_mathEdit->setObjectName(QString::fromUtf8("Add_mathEdit"));
        Add_mathEdit->setMinimumSize(QSize(200, 40));
        Add_mathEdit->setMaximumSize(QSize(200, 40));

        verticalLayout_4->addWidget(Add_mathEdit);


        retranslateUi(Add);

        QMetaObject::connectSlotsByName(Add);
    } // setupUi

    void retranslateUi(QDialog *Add)
    {
        Add->setWindowTitle(QCoreApplication::translate("Add", "Dialog", nullptr));
        radioButton_man->setText(QCoreApplication::translate("Add", "\347\224\267", nullptr));
        radioButton_woman->setText(QCoreApplication::translate("Add", "\345\245\263", nullptr));
        label_2->setText(QCoreApplication::translate("Add", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Add", "\345\271\264\351\276\204\357\274\232", nullptr));
        ADD->setText(QCoreApplication::translate("Add", "\346\267\273\345\212\240\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("Add", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("Add", "\345\267\245\345\217\267\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("Add", "\347\217\255\347\272\247\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Add", "\350\257\255\346\226\207\346\210\220\347\273\251\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("Add", "\346\225\260\345\255\246\346\210\220\347\273\251\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add: public Ui_Add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
