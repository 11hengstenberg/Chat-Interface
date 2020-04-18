#include "chatgeneral.h"
#include "ui_chatgeneral.h"

chatgeneral::chatgeneral(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chatgeneral)
{
    ui->setupUi(this);
}

chatgeneral::~chatgeneral()
{
    delete ui;
}
