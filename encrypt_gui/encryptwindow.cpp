#include "encryptwindow.h"
#include "ui_encryptwindow.h"

#include <QFile>
#include <QDataStream>
#include <QClipboard>

QString input_text;
QString output_text;

EncryptWindow::EncryptWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EncryptWindow),
    e(NULL)
{
    ui->setupUi(this);
}

EncryptWindow::~EncryptWindow()
{
    delete ui;
    delete e;
}

void EncryptWindow::on_pushButton_NEW_clicked()
{
    e = new Encrypt;
    ui->label_DISPLAY->setText(s2q(e->get_code_array()));
}

QString EncryptWindow::s2q(const string &s)
{
    return QString(QString::fromLocal8Bit(s.c_str()));
}

string EncryptWindow::q2s(const QString &s)
{
    return string((const char *)s.toLocal8Bit());
}


void EncryptWindow::on_pushButton_SAVE_clicked()
{
    if(e != NULL)
    {
        QFile file("encryptor");

        file.open(QIODevice::WriteOnly);

        QDataStream out(& file);

        out << s2q(e->get_code_array());

        ui->label_DISPLAY->setText("ENCRYPT OBJECT IS SAVED");
    }
    else
    {
        ui->label_DISPLAY->setText("THERE IS NO ENCRYPT OBJECT");
    }
}

void EncryptWindow::on_pushButton_LOAD_clicked()
{
    QFile file("encryptor");

    if(file.open(QIODevice::ReadOnly))
    {
        QDataStream in(& file);

        QString temp;

        in >> temp;

        if(e == NULL)
        {
            e = new Encrypt;
        }
        e->set_code_array(q2s(temp));

        string s = "ENCRYPT OBJECT IS LOADED.\n";
        s += e->get_code_array();
        temp = s2q(s);

        ui->label_DISPLAY->setText(temp);

    }
    else
    {
        ui->label_DISPLAY->setText("ENCRYPT OBJECT IS NOT LOADED.");
    }
}

void EncryptWindow::on_pushButton_ENCODE_clicked()
{

    input_text = ui->lineEdit_INPUT->text();

    if(input_text == "")
    {
        ui->label_DISPLAY->setText("NO INPUT STRING!");
    }
    else
    {
        if(e == NULL)
        {
            ui->label_DISPLAY->setText("NO ENCRYPT OBJECT!");
        }
        else
        {
            output_text = s2q(e->ToEncode(q2s(input_text)));
            ui->lineEdit_OUTPUT->setText(output_text);
            ui->label_DISPLAY->setText("THE RESULT IS ABOVE");
        }
    }
}

void EncryptWindow::on_pushButton_DECODE_clicked()
{

    input_text = ui->lineEdit_INPUT->text();

    if(input_text == "")
    {
        ui->label_DISPLAY->setText("NO INPUT STRING!");
    }
    else
    {
        if(e == NULL)
        {
            ui->label_DISPLAY->setText("NO ENCRYPT OBJECT!");
        }
        else
        {
            output_text = s2q(e->ToDecode(q2s(input_text)));
            ui->lineEdit_OUTPUT->setText(output_text);
            ui->label_DISPLAY->setText("THE RESULT IS ABOVE");
        }
    }
}

void EncryptWindow::on_pushButton_CLEAR_clicked()
{
    input_text = "";
    output_text = "";
    ui->lineEdit_INPUT->setText("");
    ui->lineEdit_OUTPUT->setText("");
    ui->label_DISPLAY->setText("CLEANED");
}

void EncryptWindow::on_pushButton_COPY_clicked()
{
    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(output_text);
    ui->label_DISPLAY->setText("RESULT IS COPIED TO CLIPBOARD");
}

void EncryptWindow::on_lineEdit_INPUT_textChanged(const QString &arg1)
{
    ui->label_DISPLAY->setText("YOUR INPUT IS \"" + arg1 + "\".");
}
