#include "logindialog.h"
#include "ui_logindialog.h"
#include "register.h"
#include <QString>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QModelIndex>

LoginDialog::LoginDialog(QWidget *parent):
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    connect(r,&Register::Mysignal,this,&LoginDialog::dealMysignal);
    connect(this,&LoginDialog::Login,&w,&MainWindow::deallogin);
}

LoginDialog::~LoginDialog()
{
    delete ui;
    delete r;
    delete c;
}

void LoginDialog::on_loginBtn_clicked()
{
    QSqlTableModel* model = new QSqlTableModel;
    QModelIndex index;
    if(ui -> administer -> isChecked())
    {
        model ->setTable("账户");
        model ->setFilter(QString("工号 = '%1' and 密码 = '%2'").arg(ui->userEdit->text()).arg(ui->pwdEdit->text()));
        model ->select();
        int row = model ->rowCount();
        if(row > 0)
        {
            index = model->index(0,2);
            if(index.data() == "管理员")
            {
                emit Login(ui->userEdit->text());
                QMessageBox::information(this,"登录提示","登陆成功");
                this->close();
                w.show();
            }
            else
            {
                QMessageBox::warning(this,"警告","身份选择错误");
            }
        }
        else
        {
            QMessageBox::warning(this,"登录提示","登陆失败",QMessageBox::Yes);
            ui->userEdit->clear();
            ui->pwdEdit->clear();
            ui->userEdit->setFocus();
        }
        delete model;
    }
    else if(ui->teacher->isChecked())
    {
        model ->setTable("账户");
        model ->setFilter(QString("工号 = '%1' and 密码 = '%2'").arg(ui->userEdit->text()).arg(ui->pwdEdit->text()));
        model ->select();
        int row = model ->rowCount();
        if(row > 0)
        {
            index = model->index(0,2);
            if(index.data() == "教师")
            {
                emit Login(ui->userEdit->text());
                QMessageBox::information(this,"登录提示","登陆成功");
                this ->close();
                w.show();
            }
            else
            {
                QMessageBox::warning(this,"警告","身份选择错误");
            }
        }
        else
        {
            QMessageBox::warning(this,"登录提示","登陆失败",QMessageBox::Yes);
            ui->userEdit->clear();
            ui->pwdEdit->clear();
            ui->userEdit->setFocus();
        }
        delete model;
    }
    else if(ui->student->isChecked())
    {
        model ->setTable("账户");
        model ->setFilter(QString("工号 = '%1' and 密码 = '%2'").arg(ui->userEdit->text()).arg(ui->pwdEdit->text()));
        model ->select();
        int row = model ->rowCount();
        if(row > 0)
        {
            index = model->index(0,2);
            if(index.data() == "学生")
            {
                emit Login(ui->userEdit->text());
                QMessageBox::information(this,"登录提示","登陆成功");
                this ->close();
                w.show();
            }
            else
            {
                QMessageBox::warning(this,"警告","身份选择错误");
            }
        }
        else
        {
            QMessageBox::warning(this,"登录提示","登陆失败",QMessageBox::Yes);
            ui->userEdit->clear();
            ui->pwdEdit->clear();
            ui->userEdit->setFocus();
        }
        delete model;
    }
    else
    {
        QMessageBox::warning(this,"登陆提示","请选择身份");
        delete model;
    }
}

void LoginDialog::on_exitBtn_clicked()
{
    close();
}

void LoginDialog::on_registerBtn_clicked()
{
    this -> hide();
    r->show();
}

void LoginDialog::dealMysignal()
{
    r->hide();
    this->show();
}

void LoginDialog::on_pushButton_clicked()
{
    c->show();
}
