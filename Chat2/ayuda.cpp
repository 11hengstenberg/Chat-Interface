#include "ayuda.h"

#include "ui_ayuda.h"


Ayuda::Ayuda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ayuda)
{
    ui->setupUi(this);
}

Ayuda::~Ayuda()
{
    delete ui;
}

void Ayuda::on_pushButton_clicked()
{


}

void Ayuda::on_pushButton_2_clicked()
{
    close();
}
