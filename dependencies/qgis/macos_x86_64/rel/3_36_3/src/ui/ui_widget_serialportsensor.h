/********************************************************************************
** Form generated from reading UI file 'widget_serialportsensor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SERIALPORTSENSOR_H
#define UI_WIDGET_SERIALPORTSENSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetSerialPortSensor
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *mSerialPortLabel;
    QComboBox *mSerialPortComboBox;
    QLabel *mBaudRateLabel;
    QComboBox *mBaudRateComboBox;
    QLabel *mSerialPortDetails;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetSerialPortSensor)
    {
        if (WidgetSerialPortSensor->objectName().isEmpty())
            WidgetSerialPortSensor->setObjectName(QString::fromUtf8("WidgetSerialPortSensor"));
        WidgetSerialPortSensor->resize(371, 409);
        WidgetSerialPortSensor->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(WidgetSerialPortSensor);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mSerialPortLabel = new QLabel(WidgetSerialPortSensor);
        mSerialPortLabel->setObjectName(QString::fromUtf8("mSerialPortLabel"));
        mSerialPortLabel->setWordWrap(true);

        verticalLayout->addWidget(mSerialPortLabel);

        mSerialPortComboBox = new QComboBox(WidgetSerialPortSensor);
        mSerialPortComboBox->setObjectName(QString::fromUtf8("mSerialPortComboBox"));

        verticalLayout->addWidget(mSerialPortComboBox);

        mBaudRateLabel = new QLabel(WidgetSerialPortSensor);
        mBaudRateLabel->setObjectName(QString::fromUtf8("mBaudRateLabel"));

        verticalLayout->addWidget(mBaudRateLabel);

        mBaudRateComboBox = new QComboBox(WidgetSerialPortSensor);
        mBaudRateComboBox->setObjectName(QString::fromUtf8("mBaudRateComboBox"));

        verticalLayout->addWidget(mBaudRateComboBox);

        mSerialPortDetails = new QLabel(WidgetSerialPortSensor);
        mSerialPortDetails->setObjectName(QString::fromUtf8("mSerialPortDetails"));
        mSerialPortDetails->setEnabled(false);
        mSerialPortDetails->setWordWrap(true);

        verticalLayout->addWidget(mSerialPortDetails);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(WidgetSerialPortSensor);

        mBaudRateComboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(WidgetSerialPortSensor);
    } // setupUi

    void retranslateUi(QWidget *WidgetSerialPortSensor)
    {
        mSerialPortLabel->setText(QCoreApplication::translate("WidgetSerialPortSensor", "Serial port name", nullptr));
#if QT_CONFIG(tooltip)
        mSerialPortComboBox->setToolTip(QCoreApplication::translate("WidgetSerialPortSensor", "Choose a serial port for the connection", nullptr));
#endif // QT_CONFIG(tooltip)
        mBaudRateLabel->setText(QCoreApplication::translate("WidgetSerialPortSensor", "Data baud rate", nullptr));
#if QT_CONFIG(tooltip)
        mBaudRateComboBox->setToolTip(QCoreApplication::translate("WidgetSerialPortSensor", "Choose a baudrate for the sensor connection", nullptr));
#endif // QT_CONFIG(tooltip)
        mBaudRateComboBox->setCurrentText(QString());
        (void)WidgetSerialPortSensor;
    } // retranslateUi

};

namespace Ui {
    class WidgetSerialPortSensor: public Ui_WidgetSerialPortSensor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SERIALPORTSENSOR_H
