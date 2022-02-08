#include "welcome.h"

#include <QApplication>
#include<QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QIcon icon(":/icons/bank.ico");
    Welcome w;
    w.setWindowIcon(icon);


    w.setStyleSheet("background-color: rgb(17,21,60);color: white");

    w.show();
    return a.exec();

}
