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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ayuda
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *ayuda)
    {
        if (ayuda->objectName().isEmpty())
            ayuda->setObjectName(QStringLiteral("ayuda"));
        ayuda->resize(751, 801);
        QPalette palette;
        QBrush brush(QColor(10, 255, 206, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush2(QColor(0, 85, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        QBrush brush3(QColor(10, 255, 206, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        QBrush brush4(QColor(120, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        ayuda->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(24);
        ayuda->setFont(font);
        ayuda->setCursor(QCursor(Qt::CrossCursor));
        ayuda->setContextMenuPolicy(Qt::DefaultContextMenu);
        verticalLayoutWidget = new QWidget(ayuda);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 751, 131));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(50);
        sizePolicy.setVerticalStretch(50);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(50, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(20);
        label_2->setFont(font1);
        label_2->setCursor(QCursor(Qt::CrossCursor));
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setFrameShadow(QFrame::Plain);
        label_2->setLineWidth(1200);
        label_2->setMidLineWidth(20);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(ayuda);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 711, 561));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(50, 50));
        label_3->setFont(font1);
        label_3->setCursor(QCursor(Qt::CrossCursor));
        label_3->setFrameShape(QFrame::NoFrame);
        label_3->setFrameShadow(QFrame::Plain);
        label_3->setLineWidth(1200);
        label_3->setMidLineWidth(20);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);
        pushButton_2 = new QPushButton(ayuda);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(430, 690, 131, 81));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush6(QColor(14, 255, 175, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush1);
        pushButton_2->setPalette(palette1);
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::CrossCursor));
        QIcon icon;
        icon.addFile(QStringLiteral("salir.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(40, 40));
        pushButton = new QPushButton(ayuda);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 690, 131, 81));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush1);
        pushButton->setPalette(palette2);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::CrossCursor));
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(40, 40));

        retranslateUi(ayuda);

        QMetaObject::connectSlotsByName(ayuda);
    } // setupUi

    void retranslateUi(QDialog *ayuda)
    {
        ayuda->setWindowTitle(QApplication::translate("ayuda", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("ayuda", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt; font-weight:600;\">RMBT CHAT</span></p", Q_NULLPTR));
        label_3->setText(QApplication::translate("ayuda", "<html><head/><body><p><span style=\" vertical-align:sub;\">AYUDA</span></p><p align=\"justify\"><span style=\" vertical-align:sub;\">En la secci\303\263n de Id ingresa tu nombre o un usuario con el que ser\303\241s visualizado por las otras personas del chat. Al darle continuar encontraras distintas opciones como chat p\303\272blico, mensaje privado, cambiar tu estado e informaci\303\263n de contacto, al seleccionar cualquiera de estas te llevara a la secci\303\263n que decidiste. </span></p><p><span style=\" font-weight:600; vertical-align:sub;\">Chat p\303\272blico</span><span style=\" vertical-align:sub;\">: podr\303\241s hablar con todas las personas que se encuentren conectadas. </span></p><p><span style=\" font-weight:600; vertical-align:sub;\">Mensaje privado:</span><span style=\" vertical-align:sub;\"> puedes enviar un mensaje que ser\303\241 entregado solo al usuario que decidiste y nadie m\303\241s podr\303\241 verlo solo entre t\303\272 y el </span></p><p><span style=\" font-weight:600; vertical-ali"
                        "gn:sub;\">Cambiar tu estad</span><span style=\" vertical-align:sub;\">o: puedes cambiar el estado de conectado a desconectado y a otros tipos de estado.</span></p><p><span style=\" font-weight:600; vertical-align:sub;\">informaci\303\263n de contacto:</span><span style=\" vertical-align:sub;\"> puedes ver la informaci\303\263n de un contacto su nombre y su estado. </span></p><p><span style=\" vertical-align:sub;\">Creado por David Valenzuela, Fernando Hengstenberg, Maros Gutierrez. </span></p></body></html>", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ayuda", "REGRESO", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ayuda", "SALIR", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ayuda: public Ui_ayuda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AYUDA_H
