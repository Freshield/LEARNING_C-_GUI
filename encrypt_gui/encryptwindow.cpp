#include "encryptwindow.h"
#include "ui_encryptwindow.h"

EncryptWindow::EncryptWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EncryptWindow)
{
    ui->setupUi(this);
}

EncryptWindow::~EncryptWindow()
{
    delete ui;
}

void EncryptWindow::on_pushButton_NEW_clicked()
{
    ui->label_DISPLAY->setText("THIS IS A NEW BUTTON.");
}
