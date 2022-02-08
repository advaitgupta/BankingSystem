#ifndef HISTORY_H
#define HISTORY_H
#include <QDialog>

namespace Ui {
class history;
}

class history : public QDialog
{
    Q_OBJECT

public:
    explicit history(int amt1=0, QString type="deposit");
    ~history();
    QString hola2=" ";
private slots:


    void on_pushButton_clicked();



private:
    Ui::history *ui;
};
#endif // HISTORY_H
