#include "cambioe.h"
#include "ui_cambioe.h"

Cambioe::Cambioe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cambioe)
{
    ui->setupUi(this);
}

Cambioe::~Cambioe()
{
    delete ui;
}

void Cambioe::on_pushButton_clicked()
{
    close();
}
