#include "transaction.h"
#include<QFile>
#include<QMessageBox>
#include<QTextStream>



transaction::transaction(QWidget* parent)
{
    this->parent = parent;



}


void transaction::deposit(int amount){

    this->bal = this->bal + amount;
        balanceString = QString::number(bal);
        this->amt1=amount;
        this->type="CREDIT";

}
bool transaction::withdraw(int amount){
        if( (this->bal - amount) < 0  ){
            QMessageBox::warning(parent,"Invalid Value","Insufficient balance to withdraw entered amount");
            return false;
        }
        this->bal = this->bal - amount;
        balanceString = QString::number(bal);
        this->amt1=amount;
        this->type="DEBIT";


        return true;
}
QString transaction::getBalance(){
        return balanceString;
}
QString transaction::last_transaction()
{
    QString last="Transaction Type: "+this->type+"\nTransaction amount: "+QString::number(amt1);
    return last;
}

