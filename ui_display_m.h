/********************************************************************************
** Form generated from reading UI file 'display_m.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAY_M_H
#define UI_DISPLAY_M_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Display_m
{
public:
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QWidget *Display_m)
    {
        if (Display_m->objectName().isEmpty())
            Display_m->setObjectName(QString::fromUtf8("Display_m"));
        Display_m->resize(480, 136);
        label = new QLabel(Display_m);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 151, 41));
        comboBox = new QComboBox(Display_m);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(220, 50, 241, 22));

        retranslateUi(Display_m);

        QMetaObject::connectSlotsByName(Display_m);
    } // setupUi

    void retranslateUi(QWidget *Display_m)
    {
        Display_m->setWindowTitle(QCoreApplication::translate("Display_m", "Form", nullptr));
        label->setText(QCoreApplication::translate("Display_m", "8888888888888888888", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Display_m", "Presentation", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Display_m", "Bright", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Display_m", "Cinema", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Display_m", "Film", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Display_m", "Vivid ", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("Display_m", "Game", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("Display_m", "sRGB", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("Display_m", "Reference", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("Display_m", "DICOM SIM.", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("Display_m", "User", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("Display_m", "3D", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("Display_m", "User (3D)", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("Display_m", "ISF Day", nullptr));
        comboBox->setItemText(13, QCoreApplication::translate("Display_m", "ISF Night", nullptr));
        comboBox->setItemText(14, QCoreApplication::translate("Display_m", "ISF 3D", nullptr));
        comboBox->setItemText(15, QCoreApplication::translate("Display_m", "2D High Speed", nullptr));
        comboBox->setItemText(16, QCoreApplication::translate("Display_m", "Blending", nullptr));
        comboBox->setItemText(17, QCoreApplication::translate("Display_m", "Sport", nullptr));
        comboBox->setItemText(18, QCoreApplication::translate("Display_m", "HDR", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Display_m: public Ui_Display_m {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_M_H
