#include "chatprivado.h"
#include "ui_chatprivado.h"

chatprivado::chatprivado(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chatprivado)
{
    ui->setupUi(this);
}

chatprivado::~chatprivado()
{
    delete ui;
}
