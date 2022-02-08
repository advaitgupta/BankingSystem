#include "history.h"

#include<QMessageBox>
history::history(int amt1,QString type){




 hola2 = "Amount: "+QString::number(amt1)+"\nTransaction type: "+type;
        QMessageBox::about(this,"Last Transaction",hola2);
}




