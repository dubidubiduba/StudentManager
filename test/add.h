#ifndef ADD_H
#define ADD_H

#include <QDialog>

namespace Ui {
class Add;
}

class Add : public QDialog
{
    Q_OBJECT

public:
    explicit Add(QWidget *parent = 0);
    ~Add();
    QString Sex();

private slots:
    void on_ADD_clicked();

private:
    Ui::Add *ui;
};

#endif // ADD_H
