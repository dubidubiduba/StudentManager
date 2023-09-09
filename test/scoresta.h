#ifndef SCORESTA_H
#define SCORESTA_H

#include <QDialog>

namespace Ui {
class ScoreSta;
}

class ScoreSta : public QDialog
{
    Q_OBJECT

public:
    explicit ScoreSta(QWidget *parent = 0);
    ~ScoreSta();

private:
    Ui::ScoreSta *ui;
};

#endif // SCORESTA_H
