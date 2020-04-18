#include "dialog.h"
#include "ui_dialog.h"

//importamos los headers de las clases

#include "ayuda.h"
#include "chatgeneral.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    close();
}

void Dialog::on_pushButton_2_clicked()
{
	ayuda *PantallaAyuda = new ayuda(this);
	PantallaAyuda->setModal(true);
	PantallaAyuda->show();
}