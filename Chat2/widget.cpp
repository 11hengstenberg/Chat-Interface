#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    close();
}

void Widget::on_pushButton_2_clicked()
{
        Ayuda *ventana1 = new Ayuda(this);
        ventana1->setModal(true);
        ventana1->show();
}

void Widget::on_pushButton_3_clicked()
{
    Menu *menu = new Menu(this);
    menu->setModal(true);
    menu->show();
}
