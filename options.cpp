#include "options.h"
#include "ui_options.h"
#include<QMessageBox>
#include<QTextStream>
Options::Options(QWidget *parent, QString name, QString salutation) :
    QDialog(parent),
    ui(new Ui::Options)
{
    ui->setupUi(this);





   currentCust = new transaction(this);



this->setStyleSheet("background-color:rgb(17,21,60);");
   this->setWindowTitle("Transactions");
   if(name=="")
       name="Anonymous";
   QFont f( "Azonix", 18, QFont::Bold);
     ui->label_5->setFont( f);
   ui->label_5->setText("Welcome "+salutation+" "+name+"!");
   ui->label_5->setAlignment(Qt::AlignCenter);
   ui->label_5->setStyleSheet("QLabel {color : white; }");



}

Options::~Options()
{
    delete ui;
}



void Options::on_logout_clicked()
{
    this->close();
}

void Options::on_viewBalance_clicked()
{
    QMessageBox::about(this,"Balance enquiry","Your remaining balance: ₹ "+currentCust->getBalance());
}

void Options::on_withdraw_clicked()
{
    withdraw *transact = new withdraw(this, currentCust);
    transact->setModal(true);
    transact->show();
    transact->exec();
}

void Options::on_deposit_clicked()
{
    Deposit *transact = new Deposit(this, currentCust);
    transact->setModal(true);
    transact->show();
    transact->exec();

}







void Options::on_pushButton_clicked()
{
    QMessageBox::about(this,"Last Transaction",currentCust->last_transaction());

}

