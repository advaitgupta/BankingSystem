#ifndef WELCOME_H
#define WELCOME_H
#include<transaction.h>
#include <QMainWindow>
#include<string>
#include<fstream>
#include<iostream>
#include<QString>
#include<QDialog>
#include<QMessageBox>
#include<options.h>



using namespace  std;
QT_BEGIN_NAMESPACE
namespace Ui { class Welcome; }
QT_END_NAMESPACE

class Welcome : public QMainWindow
{
    Q_OBJECT

public:
    Welcome(QWidget *parent = nullptr);
    ~Welcome();

    QString name;


    Options *currentCutomer;
    QString salutation="Ms.";




private slots:
    void on_loginButton_clicked();

    void on_pushButton_clicked();












    void on_radioButton_toggled(bool checked);

    void on_radioButton_2_toggled(bool checked);


private:
    Ui::Welcome *ui;
};
#endif // WELCOME_H
