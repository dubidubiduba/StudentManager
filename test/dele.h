#ifndef DELE_H
#define DELE_H

#include <QDialog>

namespace Ui {
class Dele;
}

class Dele : public QDialog
{
    Q_OBJECT

public:
    explicit Dele(QWidget *parent = 0);
    ~Dele();

private slots:
    void on_deleBtn_clicked();

private:
    Ui::Dele *ui;
};

#endif // DELE_H
