#include "seek.h"
#include "ui_seek.h"
#include <QString>

Seek::Seek(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Seek)
{
    ui->setupUi(this);
}

Seek::~Seek()
{
    delete ui;
}

void Seek::on_pushButton_clicked()
{
    emit find(ui->lineEdit->text());
}
