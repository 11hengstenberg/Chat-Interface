#include "chatp.h"
#include "ui_chatp.h"

#include <QDebug>
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

void Chatp::on_Enviar1_clicked()
{
    QString str = ui->mensajesEntrada1->toPlainText();
    qDebug()<<"READ DATA"<<str;

    ui->mensajes1->setText(str);
    ui->mensajesEntrada1->clear();
}
