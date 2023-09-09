#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "seek.h"
#include "add.h"
#include "dele.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void dealfind(const QString &input);
    void deallogin(const QString &username);

private slots:
    void on_Staction_triggered();
    void on_Acaction_triggered();
    void on_nameaction_triggered();
    void on_idaction_triggered();

    void on_addaction_triggered();

    void on_deleteaction_triggered();

    void on_ScoreStaaction_triggered();

    void on_Rankmathaction_triggered();

    void on_Rankchineseaction_triggered();

    void on_Ranktotalaction_triggered();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QSqlQuery* query;
    QSqlQueryModel* model;
    Seek* s;
    Add* a;
    Dele* d;
    QString user;
};
#endif // MAINWINDOW_H
