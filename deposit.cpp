#include "deposit.h"
#include "ui_deposit.h"
#include<QMessageBox>
Deposit::Deposit(QWidget *parent, transaction *currentCust) :
    QDialog(parent),
    ui(new Ui::Deposit)
{
    ui->setupUi(this);
    customer = currentCust;
}

Deposit::~Deposit()
{
    delete ui;
}

void Deposit::on_pushButton_3_clicked()
{

    qApp->exit();
}

void Deposit::on_pushButton_clicked()
{
        int amountStr = ui->amountToDeposit->value();

        customer->deposit(amountStr);
        QString hola1="₹"+QString::number(amountStr)+" Successfully Deposited!";



        QMessageBox::about(this,"Successfully deposited",hola1);
        setStyleSheet("QMessageBox{background: rgb(17,21,60);  border: none;font-family: Arial; font-style: normal;  font-size: 15pt; color: rgb(255,255,255) ; }");

        this->close();
        return;



}

void Deposit::on_pushButton_2_clicked()
{
    this->close();
}
