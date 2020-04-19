#include "direct.h"
#include "ui_direct.h"

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
