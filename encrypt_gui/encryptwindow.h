#ifndef ENCRYPTWINDOW_H
#define ENCRYPTWINDOW_H

#include <QMainWindow>
#include "encrypt.h"

namespace Ui {
class EncryptWindow;
}

class EncryptWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EncryptWindow(QWidget *parent = 0);
    ~EncryptWindow();
    QString s2q(const string &);
    string q2s(const QString &);

private slots:
    void on_pushButton_NEW_clicked();

    void on_pushButton_SAVE_clicked();

    void on_pushButton_LOAD_clicked();

    void on_pushButton_ENCODE_clicked();

    void on_pushButton_DECODE_clicked();

    void on_pushButton_CLEAR_clicked();

    void on_pushButton_COPY_clicked();

private:
    Ui::EncryptWindow *ui;
    Encrypt *e;
};

#endif // ENCRYPTWINDOW_H
