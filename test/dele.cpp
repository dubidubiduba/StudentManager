#include "dele.h"
#include "ui_dele.h"
#include <QSqlQueryModel>
#include <QMessageBox>

Dele::Dele(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dele)
{
    ui->setupUi(this);
}

Dele::~Dele()
{
    delete ui;
}

void Dele::on_deleBtn_clicked()
{
    QSqlQueryModel model1,model2;
    QString sql = "select * from 学生 where 姓名 = '"+ui->lineEdit->text()+"' or 工号 = '"+ui->lineEdit->text()+"'";
    model1.setQuery(sql);
    sql = "select * from 账户 where 工号 = '"+ui->lineEdit->text()+"'";
    model2.setQuery(sql);
    if(model1.rowCount() == 0)
    {
        QMessageBox::warning(this,"警告","系统中没有该学生");
    }
    else if(model2.rowCount() == 0)
    {
        QMessageBox::warning(this,"警告","该学生为测试数据没有账户");
    }
    else
    {
        sql = "delete from 学生 where 姓名 = '"+ui->lineEdit->text()+"' or 工号 = '"+ui->lineEdit->text()+"'";
        model1.setQuery(sql);
        sql = "delete from 账户 where 工号 = '"+ui->lineEdit->text()+"'";
        model1.setQuery(sql);
        QMessageBox::information(this,"提示","删除成功");
    }
}
