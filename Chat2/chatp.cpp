#include "chatp.h"
#include "ui_chatp.h"

Chatp::Chatp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Chatp)
{
    ui->setupUi(this);
}

Chatp::~Chatp()
{
    delete ui;
}

void Chatp::on_pushButton_clicked()
{
    close();
}
