#include "scoresta.h"
#include "ui_scoresta.h"

ScoreSta::ScoreSta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ScoreSta)
{
    ui->setupUi(this);
}

ScoreSta::~ScoreSta()
{
    delete ui;
}
