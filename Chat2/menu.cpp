#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_clicked()
{
    close();
}

void Menu::on_pushButton_2_clicked()
{
    Cambioe *estado = new Cambioe(this);
    estado->setModal(true);
    estado->show();
}

void Menu::on_pushButton_3_clicked()
{
    Chatp *publico = new Chatp(this);
    publico->setModal(true);
    publico->show();
}

void Menu::on_pushButton_4_clicked()
{
    Direct *directo = new Direct(this);
    directo->setModal(true);
    directo->show();
}

void Menu::on_pushButton_5_clicked()
{
    Info *infor = new Info(this);
    infor->setModal(true);
    infor->show();
}
