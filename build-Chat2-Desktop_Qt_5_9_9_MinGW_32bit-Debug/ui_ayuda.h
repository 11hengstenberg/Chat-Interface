/********************************************************************************
** Form generated from reading UI file 'ayuda.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AYUDA_H
#define UI_AYUDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Ayuda
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Ayuda)
    {
        if (Ayuda->objectName().isEmpty())
            Ayuda->setObjectName(QStringLiteral("Ayuda"));
        Ayuda->resize(763, 708);
        QPalette palette;
        QBrush brush(QColor(0, 255, 127, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush1(QColor(0, 148, 216, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(0, 85, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        QBrush brush3(QColor(0, 255, 127, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        QBrush brush4(QColor(120, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        Ayuda->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(26);
        Ayuda->setFont(font);
        Ayuda->setCursor(QCursor(Qt::CrossCursor));
        label = new QLabel(Ayuda);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 20, 111, 101));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label_2 = new QLabel(Ayuda);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 150, 711, 341));
        label_2->setMaximumSize(QSize(800, 600));
        pushButton_2 = new QPushButton(Ayuda);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 510, 151, 101));

        retranslateUi(Ayuda);

        QMetaObject::connectSlotsByName(Ayuda);
    } // setupUi

    void retranslateUi(QDialog *Ayuda)
    {
        Ayuda->setWindowTitle(QApplication::translate("Ayuda", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Ayuda", "AYUDA", Q_NULLPTR));
        label_2->setText(QApplication::translate("Ayuda", "<html><head/><body><p align=\"justify\"><span style=\" font-size:12pt;\">Aplicaci\303\263n de chat en la cual podr\303\241s realizar las siguientes actividades, solamente introduciendo tu nombre o un ID. </span></p><p><span style=\" font-size:12pt;\">Chat p\303\272blico: podr\303\241s ingresar al chat publico con el que podr\303\241s hablar con todas las personas conectadas. </span></p><p><span style=\" font-size:12pt;\">Chat privado: podr\303\241s tener conversaciones privadas con otros usuarios sin que la vean los dem\303\241s. </span></p><p><span style=\" font-size:12pt;\">Cambiar de estado: podr\303\241s cambiar tu estado de online a otros distintos. </span></p><p><span style=\" font-size:12pt;\">Informaci\303\263n: podr\303\241s ver informaci\303\263n de los usuarios con los que podr\303\241s chatear. </span></p><p><span style=\" font-size:12pt;\">Creado por:</span></p><p><span style=\" font-size:12pt;\">David Valenzuela</span></p><p><span style=\" font-size:12pt;\">Fernando Hengstenberg </span></p><p><sp"
                        "an style=\" font-size:12pt;\">Marcos Gutierrez</span></p><p><span style=\" font-size:12pt;\"><br/></span></p></body></html>", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Ayuda", "REGRESAR", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Ayuda: public Ui_Ayuda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AYUDA_H
