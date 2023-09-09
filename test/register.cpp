#include "register.h"
#include "ui_register.h"
#include <QMessageBox>
#include <QSqlTableModel>

Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
    delete query;
}

void Register::on_exit_clicked()
{
    emit Mysignal();
}

void Register::on_registrBtn_clicked()
{
    QString username = ui->useredit->text();
    QString userpwd = ui->pwdedit->text();
    //判空
    if(username == "")
        QMessageBox::warning(this,"注册信息","用户名不能为空");
    else if(userpwd == "")
        QMessageBox::warning(this,"注册信息","密码不能为空");
    else
    {
    //不空则判断输入的账户是否重复
        QSqlTableModel* model = new QSqlTableModel;
        model ->setTable("账户");
        model ->setFilter(QString("工号 = '%1'").arg(username));
        model ->select();
        int row = model->rowCount();
        if(row == 0)
        {
            QMessageBox::information(this,"注册信息","注册成功");
            query->exec("insert into 账户(工号,密码,权限)values('"+username+"','"+userpwd+"','教师')");
        }
        else if(row)
        {
            QMessageBox::warning(this,"注册信息","用户名重复");
        }
        delete model;
    }

}
