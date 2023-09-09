#include "changepwd.h"
#include "ui_changepwd.h"
#include <QSqlQueryModel>
#include <QMessageBox>

Changepwd::Changepwd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Changepwd)
{
    ui->setupUi(this);
}

Changepwd::~Changepwd()
{
    delete ui;
}

void Changepwd::on_Change_clicked()
{
    QString name = ui->Cname->text();
    QString oldpwd = ui->Cpwd->text();
    QString newpwd = ui->Cnewpwd->text();
    QString definepwd = ui->Cnewpwd_2->text();
    QSqlQueryModel model;
    QString sql = "select * from 账户 where 工号 = '"+name+"' and 密码 = '"+oldpwd+"'";
    model.setQuery(sql);
    if(model.rowCount() == 0)
    {
        QMessageBox::warning(this,"警告","系统中没有该账户");
    }
    else if(newpwd != definepwd)
    {
        QMessageBox::warning(this,"警告","两次密码不一致");
    }
    else
    {
        sql = "update 学生 set 密码 = '"+newpwd+"' where 工号 = '"+name+"'";
        model.setQuery(sql);
        sql = "update 账户 set 密码 = '"+newpwd+"' where 工号 = '"+name+"'";
        model.setQuery(sql);
        QMessageBox::information(this,"提示","密码修改成功");
    }
}
