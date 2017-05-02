#ifndef ACCOUNTCREATE_H
#define ACCOUNTCREATE_H
#include <QDialog>

namespace Ui {
class accountcreate;
}

class AccountCreate : public QDialog
{
    Q_OBJECT

public:
    explicit AccountCreate(QWidget *parent = 0);
    ~AccountCreate();

private slots:
    void on_closeButton_clicked();

signals:
    void showPrev();

private:
    Ui::accountcreate *ui;
};

#endif // ACCOUNTCREATE_H
