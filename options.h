#ifndef OPTIONS_H
#define OPTIONS_H
#include<transaction.h>
#include<fstream>
#include <QDialog>
#include<QFile>
#include<iostream>
#include<deposit.h>

#include<withdraw.h>
using namespace std;
namespace Ui {
class Options;
}

class Options : public QDialog
{
    Q_OBJECT

public:
    explicit Options(QWidget *parent = nullptr, QString name="Anonymous",QString salutation="Ms.");
    ~Options();




    QString name, balanceString;
    int balance;


    transaction *currentCust;
private slots:


    void on_logout_clicked();

    void on_viewBalance_clicked();

    void on_withdraw_clicked();

    void on_deposit_clicked();





    void on_pushButton_clicked();


private:
    Ui::Options *ui;
};

#endif // OPTIONS_H
