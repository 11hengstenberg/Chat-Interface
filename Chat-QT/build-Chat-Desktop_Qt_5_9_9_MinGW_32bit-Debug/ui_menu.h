/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

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

class Ui_Dialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(800, 600);
        Dialog->setMinimumSize(QSize(800, 600));
        Dialog->setMaximumSize(QSize(800, 600));
        QPalette palette;
        QBrush brush(QColor(1, 232, 182, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 135, 198, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(7, 255, 160, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush2);
        QBrush brush3(QColor(14, 255, 175, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        QBrush brush4(QColor(255, 255, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush4);
        QBrush brush5(QColor(0, 85, 127, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush5);
        QBrush brush6(QColor(7, 255, 160, 128));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        QBrush brush8(QColor(120, 120, 120, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        Dialog->setPalette(palette);
        QFont font;
        font.setPointSize(24);
        Dialog->setFont(font);
        Dialog->setCursor(QCursor(Qt::CrossCursor));
        QIcon icon;
        icon.addFile(QStringLiteral("salir.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral("salir.png"), QSize(), QIcon::Normal, QIcon::On);
        Dialog->setWindowIcon(icon);
        verticalLayoutWidget = new QWidget(Dialog);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(19, 40, 751, 131));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(50);
        sizePolicy.setVerticalStretch(50);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(50, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(20);
        label->setFont(font1);
        label->setCursor(QCursor(Qt::CrossCursor));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setLineWidth(1200);
        label->setMidLineWidth(20);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 450, 131, 81));
        QPalette palette1;
        QBrush brush10(QColor(0, 0, 127, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        QBrush brush11(QColor(10, 255, 206, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        pushButton->setPalette(palette1);
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        pushButton->setFont(font2);
        pushButton->setCursor(QCursor(Qt::CrossCursor));
        QIcon icon1;
        icon1.addFile(QStringLiteral("salir.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(40, 40));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(420, 450, 131, 81));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        pushButton_2->setPalette(palette2);
        pushButton_2->setFont(font2);
        pushButton_2->setCursor(QCursor(Qt::CrossCursor));
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(40, 40));
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 170, 241, 81));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        pushButton_3->setPalette(palette3);
        pushButton_3->setFont(font2);
        pushButton_3->setCursor(QCursor(Qt::CrossCursor));
        pushButton_3->setIcon(icon1);
        pushButton_3->setIconSize(QSize(40, 40));
        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(100, 280, 241, 81));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        pushButton_4->setPalette(palette4);
        pushButton_4->setFont(font2);
        pushButton_4->setCursor(QCursor(Qt::CrossCursor));
        pushButton_4->setIcon(icon1);
        pushButton_4->setIconSize(QSize(40, 40));
        pushButton_5 = new QPushButton(Dialog);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(430, 170, 241, 81));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        pushButton_5->setPalette(palette5);
        pushButton_5->setFont(font2);
        pushButton_5->setCursor(QCursor(Qt::CrossCursor));
        pushButton_5->setIcon(icon1);
        pushButton_5->setIconSize(QSize(40, 40));
        pushButton_6 = new QPushButton(Dialog);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(430, 270, 241, 81));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        pushButton_6->setPalette(palette6);
        pushButton_6->setFont(font2);
        pushButton_6->setCursor(QCursor(Qt::CrossCursor));
        pushButton_6->setIcon(icon1);
        pushButton_6->setIconSize(QSize(40, 40));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        Dialog->setWhatsThis(QApplication::translate("Dialog", "<html><head/><body><p>asdf</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; font-weight:600;\">Menu</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog", "SALIR", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Dialog", "AYUDA", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Dialog", "MENSAJE DIRECTO", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Dialog", "MENSAJE PRIVADO", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Dialog", "INFO CONTACTO", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Dialog", "CAMBIAR ESTADO", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
