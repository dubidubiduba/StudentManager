#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QModelIndex>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //建立数据库，连接数据库
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("学生成绩管理系统.db");
    db.open();
    if(db.open())   qDebug() << "数据库打开成功！";
    else            QMessageBox::warning(nullptr,"警告","数据库打开失败");

    //分配内存
    query = new QSqlQuery;
    model = new QSqlQueryModel;
    s = new Seek;
    a = new Add;
    d = new Dele;

    //处理信号与槽的连接
    connect(s,&Seek::find,this,&MainWindow::dealfind);

    //后来添加的成绩统计表
    query->exec("create table 成绩统计(""语文平均成绩 INTEGER NOT NULL,"
                                       "数学平均成绩 INTEGER NOT NULL,"
                                       "语文及格率 VARCHAR(10) NOT NULL,"
                                       "数学及格率 VARCHAR(10) NOT NULL,"
                                       "语文优秀率 VARCHAR(10) NOT NULL,"
                                       "数学优秀率 VARCHAR(10) NOT NULL"")");

    //在第一次设置登陆界面时插入的测试数据
    query -> exec("create table 账户(""工号 INTEGER PRIMARY KEY AUTOINCREMENT,"
                                      "密码 VARCHAR(40) NOT NULL"")");
    query -> exec("insert into 账户(工号,密码)values(123,'123')");

    query ->exec("create table 学生(""姓名 VARCHAR(40) NOT NULL,"
                                    "工号 INTEGER PRIMARY KEY AUTOINCREMENT,"
                                   "性别 VARCHAR(40) NOT NULL,"
                                   "班级 VARCHAR(40) NOT NULL,"
                                    "年龄 INTEGER NOT NULL,"
                                    "数学 INTEGER NOT NULL,"
                                    "语文 INTEGER NOT NULL,"
                                    "总分 INTEGER NOT NULL,"
                                    "密码 VARCHAR(40) NOT NULL"")");
    query ->exec("insert or ignore into 学生(姓名,工号,性别,班级,年龄,数学,语文,总分,密码)values('程卫','2021212143','男','0401333','20','0','0','0','123456')");
    query ->exec("insert or ignore into 学生(姓名,工号,性别,班级,年龄,数学,语文,总分,密码)values('小丑','2021212144','男','0401333','20','26','32','58','123456')");
    query ->exec("insert or ignore into 学生(姓名,工号,性别,班级,年龄,数学,语文,总分,密码)values('赵家辉','2021212145','男','0401333','20','88','12','100','123456')");
}

MainWindow::~MainWindow()
{
    delete ui;
    delete s;
    delete a;
    delete model;
    delete query;
    db.close();
}

void MainWindow::on_Staction_triggered()
{
    QString sql = "select 姓名,工号,性别,班级,年龄,数学,语文,总分 from 学生";
    model ->setQuery(sql);
    ui->tableView->setModel(model);
}

void MainWindow::on_Acaction_triggered()
{
    QString sql = "select 工号,密码,权限 from 账户";
    model ->setQuery(sql);
    ui->tableView->setModel(model);
}

void MainWindow::on_nameaction_triggered()
{
    s->show();
}

void MainWindow::on_idaction_triggered()
{
    s->show();
}

void MainWindow::dealfind(const QString &input)
{
    QString sql = "select 姓名,工号,性别,班级,年龄,数学,语文,总分 from 学生 where 姓名 = '"+input+"' or 工号 = '"+input+"'";
    model ->setQuery(sql);
    if(model->rowCount() == 0)
        QMessageBox::information(s,"查询","未找到该学生信息");
    else
        ui->tableView->setModel(model);
}

void MainWindow::deallogin(const QString &username)
{
    user = username;
}

void MainWindow::on_addaction_triggered()
{
    QModelIndex index;
    QString sql = "select * from 账户 where 工号 = '"+user+"'";
    model->setQuery(sql);
    index = model->index(0,2);
    if(index.data() != "管理员")
    {
        QMessageBox::warning(this,"警告","你没有该权限");
    }
    else
    {
        a->show();
    }
}

void MainWindow::on_deleteaction_triggered()
{
    QModelIndex index;
    QString sql = "select * from 账户 where 工号 = '"+user+"'";
    model->setQuery(sql);
    index = model->index(0,2);
    if(index.data() != "管理员")
    {
        QMessageBox::warning(this,"警告","你没有该权限");
    }
    else
    {
        d->show();
    }
}

void MainWindow::on_ScoreStaaction_triggered()
{
    QModelIndex index;
    int passrate[2],outrate[2];
    double number,passnumber,outnumber;
    double math,chinese,avemath,avechinese;
    QString pr[3],Or[3];
    QString sql = "select count(*) from 学生";
    model->setQuery(sql);
    index = model->index(0,0);
    number = index.data().toDouble();
    sql = "select sum(语文) from 学生";
    model ->setQuery(sql);
    index = model->index(0,0);
    math = index.data().toDouble();
    avemath = math/number;
    pr[2] = QString::number(avemath);
    sql = "select sum(数学) from 学生";
    model ->setQuery(sql);
    index = model->index(0,0);
    chinese = index.data().toDouble();
    avechinese = chinese/number;
    Or[2] = QString::number(avechinese);
    sql = "select count(*) from 学生 where 数学 >= 60";
    model->setQuery(sql);
    index = model->index(0,0);
    passnumber = index.data().toDouble();
    passrate[0] = qRound64(passnumber/number*100);
    pr[0] = QString::number(passrate[0]);
    pr[0].append('%');
    sql = "select count(*) from 学生 where 语文 >= 60";
    model->setQuery(sql);
    index = model->index(0,0);
    passnumber = index.data().toDouble();
    passrate[1] = qRound64(passnumber/number*100);
    pr[1] = QString::number(passrate[1]);
    pr[1].append('%');
    sql = "select count(*) from 学生 where 数学 >= 90";
    model->setQuery(sql);
    index = model->index(0,0);
    outnumber = index.data().toDouble();
    outrate[0] = qRound64(outnumber/number*100);
    Or[0] = QString::number(outrate[0]);
    Or[0].append('%');
    sql = "select count(*) from 学生 where 语文 >= 90";
    model->setQuery(sql);
    index = model->index(0,0);
    outnumber = index.data().toDouble();
    outrate[1] = qRound64(outnumber/number*100);
    Or[1] = QString::number(outrate[1]);
    Or[1].append('%');
    sql = "insert into 成绩统计(语文平均成绩,数学平均成绩,语文及格率,数学及格率,语文优秀率,数学优秀率)values('"+Or[2]+"','"+pr[2]+"','"+pr[1]+"','"+pr[0]+"','"+Or[1]+"','"+Or[0]+"')";
    model->setQuery(sql);
    sql = "select * from 成绩统计";
    model ->setQuery(sql);
    ui->tableView->setModel(model);
    if(model->rowCount() > 5)
    {
        sql = "delete from 成绩统计";
        model->setQuery(sql);
    }
}

void MainWindow::on_Rankmathaction_triggered()
{
    QString sql = "select 姓名,工号,性别,班级,年龄,数学,语文,总分 from 学生 order by 数学 DESC";
    model ->setQuery(sql);
    ui->tableView->setModel(model);
}

void MainWindow::on_Rankchineseaction_triggered()
{
    QString sql = "select 姓名,工号,性别,班级,年龄,数学,语文,总分 from 学生 order by 语文 DESC";
    model ->setQuery(sql);
    ui->tableView->setModel(model);
}

void MainWindow::on_Ranktotalaction_triggered()
{
    QString sql = "select 姓名,工号,性别,班级,年龄,数学,语文,总分 from 学生 order by 总分 DESC";
    model ->setQuery(sql);
    ui->tableView->setModel(model);
}
