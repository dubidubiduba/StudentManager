#ifndef CHANGEPWD_H
#define CHANGEPWD_H

#include <QDialog>

namespace Ui {
class Changepwd;
}

class Changepwd : public QDialog
{
    Q_OBJECT

public:
    explicit Changepwd(QWidget *parent = 0);
    ~Changepwd();

private slots:
    void on_Change_clicked();

private:
    Ui::Changepwd *ui;
};

#endif // CHANGEPWD_H
