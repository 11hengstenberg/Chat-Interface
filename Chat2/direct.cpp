#include "direct.h"
#include "ui_direct.h"

#include <QDebug>
#include <QListWidget>

Direct::Direct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Direct)
{
    ui->setupUi(this);
}

Direct::~Direct()
{
    delete ui;
}

void Direct::on_pushButton_clicked()
{
    close();
}

void Direct::on_enviar_clicked()
{
    QString str = ui->mensajeEntrada->toPlainText();
    qDebug()<<"READ DATA"<<str;

    ui->mensajes->setText(str);
    ui->mensajeEntrada->clear();
}
