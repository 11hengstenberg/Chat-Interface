#ifndef CHATP_H
#define CHATP_H

#include <QDialog>

namespace Ui {
class Chatp;
}

class Chatp : public QDialog
{
    Q_OBJECT

public:
    explicit Chatp(QWidget *parent = nullptr);
    ~Chatp();

private slots:
    void on_pushButton_clicked();

    void on_Enviar1_clicked();

private:
    Ui::Chatp *ui;
};

#endif // CHATP_H
