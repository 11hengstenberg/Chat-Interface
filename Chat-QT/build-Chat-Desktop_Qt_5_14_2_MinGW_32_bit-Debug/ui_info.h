/********************************************************************************
** Form generated from reading UI file 'info.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_H
#define UI_INFO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
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
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *ayuda)
    {
        if (ayuda->objectName().isEmpty())
            ayuda->setObjectName(QString::fromUtf8("ayuda"));
        ayuda->resize(751, 526);
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
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(24);
        ayuda->setFont(font);
        ayuda->setCursor(QCursor(Qt::CrossCursor));
        ayuda->setContextMenuPolicy(Qt::DefaultContextMenu);
        verticalLayoutWidget = new QWidget(ayuda);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 751, 131));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(50);
        sizePolicy.setVerticalStretch(50);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(50, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
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

        pushButton_2 = new QPushButton(ayuda);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 390, 131, 81));
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
        icon.addFile(QString::fromUtf8("salir.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(40, 40));
        pushButton = new QPushButton(ayuda);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 390, 131, 81));
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
        label_3 = new QLabel(ayuda);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-230, 150, 749, 129));
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
        label_4 = new QLabel(ayuda);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(-260, 180, 749, 129));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(50, 50));
        label_4->setFont(font1);
        label_4->setCursor(QCursor(Qt::CrossCursor));
        label_4->setFrameShape(QFrame::NoFrame);
        label_4->setFrameShadow(QFrame::Plain);
        label_4->setLineWidth(1200);
        label_4->setMidLineWidth(20);
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(true);
        label_5 = new QLabel(ayuda);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(-50, 110, 749, 129));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(50, 50));
        label_5->setFont(font1);
        label_5->setCursor(QCursor(Qt::CrossCursor));
        label_5->setFrameShape(QFrame::NoFrame);
        label_5->setFrameShadow(QFrame::Plain);
        label_5->setLineWidth(1200);
        label_5->setMidLineWidth(20);
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setWordWrap(true);
        label_6 = new QLabel(ayuda);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(-50, 170, 749, 129));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(50, 50));
        label_6->setFont(font1);
        label_6->setCursor(QCursor(Qt::CrossCursor));
        label_6->setFrameShape(QFrame::NoFrame);
        label_6->setFrameShadow(QFrame::Plain);
        label_6->setLineWidth(1200);
        label_6->setMidLineWidth(20);
        label_6->setAlignment(Qt::AlignCenter);
        label_6->setWordWrap(true);

        retranslateUi(ayuda);

        QMetaObject::connectSlotsByName(ayuda);
    } // setupUi

    void retranslateUi(QDialog *ayuda)
    {
        ayuda->setWindowTitle(QCoreApplication::translate("ayuda", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("ayuda", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; font-weight:600;\">INFORMACION</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ayuda", "REGRESO", nullptr));
        pushButton->setText(QCoreApplication::translate("ayuda", "SALIR", nullptr));
        label_3->setText(QCoreApplication::translate("ayuda", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600;\">ID:</span></p><p align=\"center\"><span style=\" font-size:24pt; font-weight:600;\"><br/></span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("ayuda", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600;\">ESTADO:</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("ayuda", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600;\">...........</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("ayuda", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600;\">...........</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ayuda: public Ui_ayuda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
