#include "add.h"
#include "ui_add.h"
#include <QSqlQueryModel>
#include <QMessageBox>

Add::Add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add)
{
    ui->setupUi(this);
}

Add::~Add()
{
    delete ui;
}

QString Add::Sex()
{
    if(ui->radioButton_man->isChecked())
    {
        ui->radioButton_man->setChecked(false);
        return "男";
    }
    if(ui->radioButton_woman->isChecked())
    {
        ui->radioButton_woman->setChecked(false);
        return "女";
    }
    return "";
}

void Add::on_ADD_clicked()
{
    int age = ui->spinBox->value();
    QString name = ui->Add_nameEdit->text();
    QString id = ui->Add_idEdit->text();
    QString Class = ui->Add_classEdit->text();
    QString chinese = ui->Add_chineseEdit->text();
    QString math = ui->Add_mathEdit->text();
    int mathscore = math.toInt();
    int chinesescore = chinese.toInt();
    int totalscore = mathscore+chinesescore;
    QString pwd = "123";
    QString sex = Sex();
    QSqlQueryModel model;
    QString sql = "select * from 学生 where 工号 = '"+id+"'";
    model.setQuery(sql);
    if(model.rowCount())
    {
        QMessageBox::warning(this,"警告","系统中已有该学生");
    }
    else if(name.isEmpty() || id.isEmpty() || Class.isEmpty() || chinese.isEmpty() || math.isEmpty() || sex.isEmpty() || age == 0)
    {
        QMessageBox::warning(this,"警告","请检查输入的信息是否正确");
    }
    else
    {
        sql = "insert into 学生(姓名,工号,性别,班级,年龄,数学,语文,总分,密码)values('"+name+"','"+id+"','"+sex+"','"+Class+"',"+QString::number(age)+","+QString::number(mathscore)+","+QString::number(chinesescore)+","+QString::number(totalscore)+",'"+pwd+"')";
        model.setQuery(sql);
        sql = "insert into 账户(工号,密码,权限)values('"+id+"','"+pwd+"','学生')";
        model.setQuery(sql);
        QMessageBox::information(this,"提示","信息添加成功");
        ui->spinBox->clear();
        ui->Add_nameEdit->clear();
        ui->Add_idEdit->clear();
        ui->Add_classEdit->clear();
        ui->Add_chineseEdit->clear();
        ui->Add_mathEdit->clear();
    }
}
