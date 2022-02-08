#ifndef TRANSACTION_H
#define TRANSACTION_H

#include<iostream>
#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include<string>
#include<sstream>
#include<fstream>
using namespace std;


class transaction
{

private:

public:
    transaction(QWidget* parent);
    transaction(const transaction &);
    transaction &operator=(const transaction &);
    ~transaction();

    int lineNo;


    QWidget *parent;
    QString balanceString;

    int bal=0;
    int amt1=0;
    QString type="NONE";


    void deposit(int amount);
    bool withdraw(int amount);
    QString last_transaction();

    QString getBalance();

};

#endif // TRANSACTION_H
