#include "welcome.h"
#include "ui_welcome.h"
#include<QResource>
#include <QTemporaryDir>
#include<QTextStream>

Welcome::Welcome(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Welcome)
{

    this->setWindowTitle("Welcome to bank of RGPTI");
    ui->setupUi(this);


    this->setStyleSheet("background-color:rgb(17,21,60);");
    QPixmap pixmap = QPixmap (":/icons1/rgipt bank-7.ico");
    ui->label_7->setPixmap(pixmap);



}

Welcome::~Welcome()
{
    delete ui;
}
void Welcome::on_radioButton_toggled(bool checked)
{
    if(checked==true)
    salutation="Mr.";
}
void Welcome::on_radioButton_2_toggled(bool checked)
{
    if(checked==true)
    salutation="Ms.";
}

void Welcome::on_loginButton_clicked()
{
    name = ui->name->text();





               QString name1=ui->name->text();

                currentCutomer = new Options(this,name1,salutation);
                currentCutomer->setModal(true);
                currentCutomer->show();

                currentCutomer->exec();

                this->show();





       ui->name->setText("");





       return;
}





void Welcome::on_pushButton_clicked()
{
    qApp->exit();
}





























