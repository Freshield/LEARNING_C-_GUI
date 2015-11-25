#ifndef TO_GF_H
#define TO_GF_H

#include <QMainWindow>



namespace Ui {
class TO_GF;
}

class TO_GF : public QMainWindow
{
    Q_OBJECT

public:
    explicit TO_GF(QWidget *parent = 0);
    ~TO_GF();

private slots:
    void on_pushButton_clicked();

private:
    Ui::TO_GF *ui;
};

#endif // TO_GF_H
