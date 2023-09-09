#ifndef REGISTER_H
#define REGISTER_H

#include <QSqlQuery>
#include <QDialog>

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = 0);
    ~Register();

signals:
    void Mysignal();

private slots:
    void on_exit_clicked();
    void on_registrBtn_clicked();

private:
    Ui::Register *ui;
    QSqlQuery * query = new QSqlQuery;
};

#endif // REGISTER_H
