#include "to_gf.h"
#include "ui_to_gf.h"

#include<QThread>

QString temp = "不来了也不告诉我。。。人家还在默默的等你。。。不爱我了。。。\n";

TO_GF::TO_GF(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TO_GF)
{
    ui->setupUi(this);
}

TO_GF::~TO_GF()
{
    delete ui;
}

void TO_GF::on_pushButton_clicked()
{

    for(int i = 1;i < 1000;i ++)
    {

        QString foo = ui->label->text();
        foo += temp;
        ui->label->setText(foo);
        QCoreApplication::processEvents();

        QThread::msleep(200);


    }
}
