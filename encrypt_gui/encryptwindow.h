#ifndef ENCRYPTWINDOW_H
#define ENCRYPTWINDOW_H

#include <QMainWindow>

namespace Ui {
class EncryptWindow;
}

class EncryptWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EncryptWindow(QWidget *parent = 0);
    ~EncryptWindow();

private slots:
    void on_pushButton_NEW_clicked();

private:
    Ui::EncryptWindow *ui;
};

#endif // ENCRYPTWINDOW_H
