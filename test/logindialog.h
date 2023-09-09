#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include "mainwindow.h"
#include "register.h"
#include "changepwd.h"

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();

public slots:
    void dealMysignal();

signals:
    void Login(const QString & username);

private slots:
    void on_loginBtn_clicked();
    void on_exitBtn_clicked();
    void on_registerBtn_clicked();
    void on_pushButton_clicked();

private:
    Ui::LoginDialog *ui;
    MainWindow w;
    Register* r = new Register;
    Changepwd* c = new Changepwd;
};

#endif // LOGINDIALOG_H
