/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *nameaction;
    QAction *idaction;
    QAction *Staction;
    QAction *Acaction;
    QAction *addaction;
    QAction *deleteaction;
    QAction *ScoreStaaction;
    QAction *Rankmathaction;
    QAction *Rankchineseaction;
    QAction *Ranktotalaction;
    QWidget *centralWidget;
    QTableView *tableView;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_S;
    QMenu *menu_C;
    QMenu *menu_R;
    QMenu *menu_r;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1500, 800);
        MainWindow->setMinimumSize(QSize(1500, 800));
        MainWindow->setMaximumSize(QSize(1500, 800));
        nameaction = new QAction(MainWindow);
        nameaction->setObjectName(QString::fromUtf8("nameaction"));
        idaction = new QAction(MainWindow);
        idaction->setObjectName(QString::fromUtf8("idaction"));
        Staction = new QAction(MainWindow);
        Staction->setObjectName(QString::fromUtf8("Staction"));
        Acaction = new QAction(MainWindow);
        Acaction->setObjectName(QString::fromUtf8("Acaction"));
        addaction = new QAction(MainWindow);
        addaction->setObjectName(QString::fromUtf8("addaction"));
        deleteaction = new QAction(MainWindow);
        deleteaction->setObjectName(QString::fromUtf8("deleteaction"));
        ScoreStaaction = new QAction(MainWindow);
        ScoreStaaction->setObjectName(QString::fromUtf8("ScoreStaaction"));
        Rankmathaction = new QAction(MainWindow);
        Rankmathaction->setObjectName(QString::fromUtf8("Rankmathaction"));
        Rankchineseaction = new QAction(MainWindow);
        Rankchineseaction->setObjectName(QString::fromUtf8("Rankchineseaction"));
        Ranktotalaction = new QAction(MainWindow);
        Ranktotalaction->setObjectName(QString::fromUtf8("Ranktotalaction"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 0, 1500, 800));
        tableView->setMinimumSize(QSize(1500, 800));
        tableView->setMaximumSize(QSize(1500, 800));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1500, 17));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_S = new QMenu(menuBar);
        menu_S->setObjectName(QString::fromUtf8("menu_S"));
        menu_C = new QMenu(menuBar);
        menu_C->setObjectName(QString::fromUtf8("menu_C"));
        menu_R = new QMenu(menuBar);
        menu_R->setObjectName(QString::fromUtf8("menu_R"));
        menu_r = new QMenu(menuBar);
        menu_r->setObjectName(QString::fromUtf8("menu_r"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_S->menuAction());
        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_C->menuAction());
        menuBar->addAction(menu_R->menuAction());
        menuBar->addAction(menu_r->menuAction());
        menu->addAction(nameaction);
        menu->addAction(idaction);
        menu_S->addAction(Staction);
        menu_S->addSeparator();
        menu_S->addAction(Acaction);
        menu_C->addAction(addaction);
        menu_C->addAction(deleteaction);
        menu_R->addAction(ScoreStaaction);
        menu_r->addAction(Rankmathaction);
        menu_r->addAction(Rankchineseaction);
        menu_r->addAction(Ranktotalaction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        nameaction->setText(QCoreApplication::translate("MainWindow", "\346\214\211\345\220\215\345\255\227\346\237\245\350\257\242", nullptr));
        idaction->setText(QCoreApplication::translate("MainWindow", "\346\214\211\345\255\246\345\217\267\346\237\245\350\257\242", nullptr));
        Staction->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        Acaction->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\350\264\246\346\210\267\344\277\241\346\201\257", nullptr));
        addaction->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        deleteaction->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\344\277\241\346\201\257", nullptr));
        ScoreStaaction->setText(QCoreApplication::translate("MainWindow", "\346\210\220\347\273\251\347\273\237\350\256\241\345\261\225\347\244\272", nullptr));
        Rankmathaction->setText(QCoreApplication::translate("MainWindow", "\346\225\260\345\255\246\346\216\222\345\220\215", nullptr));
        Rankchineseaction->setText(QCoreApplication::translate("MainWindow", "\350\257\255\346\226\207\346\216\222\345\220\215", nullptr));
        Ranktotalaction->setText(QCoreApplication::translate("MainWindow", "\346\200\273\345\210\206\346\216\222\345\220\215", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242(&F)", nullptr));
        menu_S->setTitle(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\344\277\241\346\201\257(&S)", nullptr));
        menu_C->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\346\223\215\344\275\234(&C)", nullptr));
        menu_R->setTitle(QCoreApplication::translate("MainWindow", "\346\210\220\347\273\251\347\273\237\350\256\241(&R)", nullptr));
        menu_r->setTitle(QCoreApplication::translate("MainWindow", "\346\216\222\345\220\215(&r)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
