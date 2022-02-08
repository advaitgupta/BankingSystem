#include "withdraw.h"
#include "ui_withdraw.h"
#include<QMessageBox>
withdraw::withdraw(QWidget *parent, transaction *currentCust) :
    QDialog(parent),
    ui(new Ui::withdraw)
{
    ui->setupUi(this);

    customer = currentCust;
}

withdraw::~withdraw()
{
    delete ui;
}

void withdraw::on_pushButton_3_clicked()
{
    qApp->exit();
}

void withdraw::on_withdrawButton_clicked()
{
    int amount = ui->amountToWithdraw->value();



        if(customer->withdraw(amount))
        {
            QString hola="₹"+QString::number(amount)+" Successfully Withdrawn!";
                QMessageBox::about(this,"Withdrawal successful", hola);
}
        this->close();
        return;




}

void withdraw::on_pushButton_2_clicked()
{
    this->close();
}
