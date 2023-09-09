#ifndef SEEK_H
#define SEEK_H

#include <QDialog>

namespace Ui {
class Seek;
}

class Seek : public QDialog
{
    Q_OBJECT

public:
    explicit Seek(QWidget *parent = 0);
    ~Seek();

signals:
    void find(const QString &input);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Seek *ui;
};

#endif // SEEK_H
