/********************************************************************************
** Form generated from reading UI file 'qgsxyzsourcewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSXYZSOURCEWIDGETBASE_H
#define UI_QGSXYZSOURCEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include "qgsauthsettingswidget.h"
#include "qgsprovidersourcewidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsXyzSourceWidgetBase
{
public:
    QGridLayout *gridLayout;
    QCheckBox *mCheckBoxZMax;
    QgsSpinBox *mSpinZMax;
    QgsSpinBox *mSpinZMin;
    QComboBox *mComboTileResolution;
    QCheckBox *mCheckBoxZMin;
    QLabel *lblReferer;
    QLineEdit *mEditUrl;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *mAuthGroupBox;
    QVBoxLayout *verticalLayout_3;
    QgsAuthSettingsWidget *mAuthSettings;
    QLineEdit *mEditReferer;
    QHBoxLayout *mInterpretationLayout;
    QLabel *label;

    void setupUi(QgsProviderSourceWidget *QgsXyzSourceWidgetBase)
    {
        if (QgsXyzSourceWidgetBase->objectName().isEmpty())
            QgsXyzSourceWidgetBase->setObjectName(QString::fromUtf8("QgsXyzSourceWidgetBase"));
        QgsXyzSourceWidgetBase->resize(360, 237);
        gridLayout = new QGridLayout(QgsXyzSourceWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mCheckBoxZMax = new QCheckBox(QgsXyzSourceWidgetBase);
        mCheckBoxZMax->setObjectName(QString::fromUtf8("mCheckBoxZMax"));
        mCheckBoxZMax->setChecked(true);

        gridLayout->addWidget(mCheckBoxZMax, 3, 0, 1, 1);

        mSpinZMax = new QgsSpinBox(QgsXyzSourceWidgetBase);
        mSpinZMax->setObjectName(QString::fromUtf8("mSpinZMax"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSpinZMax->sizePolicy().hasHeightForWidth());
        mSpinZMax->setSizePolicy(sizePolicy);
        mSpinZMax->setValue(18);

        gridLayout->addWidget(mSpinZMax, 3, 1, 1, 1);

        mSpinZMin = new QgsSpinBox(QgsXyzSourceWidgetBase);
        mSpinZMin->setObjectName(QString::fromUtf8("mSpinZMin"));
        sizePolicy.setHeightForWidth(mSpinZMin->sizePolicy().hasHeightForWidth());
        mSpinZMin->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mSpinZMin, 2, 1, 1, 1);

        mComboTileResolution = new QComboBox(QgsXyzSourceWidgetBase);
        mComboTileResolution->addItem(QString());
        mComboTileResolution->addItem(QString());
        mComboTileResolution->addItem(QString());
        mComboTileResolution->setObjectName(QString::fromUtf8("mComboTileResolution"));

        gridLayout->addWidget(mComboTileResolution, 5, 1, 1, 1);

        mCheckBoxZMin = new QCheckBox(QgsXyzSourceWidgetBase);
        mCheckBoxZMin->setObjectName(QString::fromUtf8("mCheckBoxZMin"));
        mCheckBoxZMin->setChecked(true);

        gridLayout->addWidget(mCheckBoxZMin, 2, 0, 1, 1);

        lblReferer = new QLabel(QgsXyzSourceWidgetBase);
        lblReferer->setObjectName(QString::fromUtf8("lblReferer"));

        gridLayout->addWidget(lblReferer, 4, 0, 1, 1);

        mEditUrl = new QLineEdit(QgsXyzSourceWidgetBase);
        mEditUrl->setObjectName(QString::fromUtf8("mEditUrl"));

        gridLayout->addWidget(mEditUrl, 0, 1, 1, 1);

        label_2 = new QLabel(QgsXyzSourceWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(QgsXyzSourceWidgetBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        mAuthGroupBox = new QGroupBox(QgsXyzSourceWidgetBase);
        mAuthGroupBox->setObjectName(QString::fromUtf8("mAuthGroupBox"));
        verticalLayout_3 = new QVBoxLayout(mAuthGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        mAuthSettings = new QgsAuthSettingsWidget(mAuthGroupBox);
        mAuthSettings->setObjectName(QString::fromUtf8("mAuthSettings"));

        verticalLayout_3->addWidget(mAuthSettings);


        gridLayout->addWidget(mAuthGroupBox, 1, 0, 1, 2);

        mEditReferer = new QLineEdit(QgsXyzSourceWidgetBase);
        mEditReferer->setObjectName(QString::fromUtf8("mEditReferer"));

        gridLayout->addWidget(mEditReferer, 4, 1, 1, 1);

        mInterpretationLayout = new QHBoxLayout();
        mInterpretationLayout->setSpacing(0);
        mInterpretationLayout->setObjectName(QString::fromUtf8("mInterpretationLayout"));

        gridLayout->addLayout(mInterpretationLayout, 6, 1, 1, 1);

        label = new QLabel(QgsXyzSourceWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 6, 0, 1, 1);

#if QT_CONFIG(shortcut)
        lblReferer->setBuddy(mEditReferer);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mEditUrl, mCheckBoxZMin);
        QWidget::setTabOrder(mCheckBoxZMin, mSpinZMin);
        QWidget::setTabOrder(mSpinZMin, mCheckBoxZMax);
        QWidget::setTabOrder(mCheckBoxZMax, mSpinZMax);
        QWidget::setTabOrder(mSpinZMax, mEditReferer);
        QWidget::setTabOrder(mEditReferer, mComboTileResolution);

        retranslateUi(QgsXyzSourceWidgetBase);

        QMetaObject::connectSlotsByName(QgsXyzSourceWidgetBase);
    } // setupUi

    void retranslateUi(QgsProviderSourceWidget *QgsXyzSourceWidgetBase)
    {
        QgsXyzSourceWidgetBase->setWindowTitle(QCoreApplication::translate("QgsXyzSourceWidgetBase", "XYZ Connection", nullptr));
        mCheckBoxZMax->setText(QCoreApplication::translate("QgsXyzSourceWidgetBase", "Max. Zoom Level", nullptr));
        mComboTileResolution->setItemText(0, QCoreApplication::translate("QgsXyzSourceWidgetBase", "Unknown (not scaled)", nullptr));
        mComboTileResolution->setItemText(1, QCoreApplication::translate("QgsXyzSourceWidgetBase", "Standard (256x256 / 96 DPI)", nullptr));
        mComboTileResolution->setItemText(2, QCoreApplication::translate("QgsXyzSourceWidgetBase", "High (512x512 / 192 DPI)", nullptr));

        mCheckBoxZMin->setText(QCoreApplication::translate("QgsXyzSourceWidgetBase", "Min. Zoom Level", nullptr));
        lblReferer->setText(QCoreApplication::translate("QgsXyzSourceWidgetBase", "Referer", nullptr));
#if QT_CONFIG(tooltip)
        mEditUrl->setToolTip(QCoreApplication::translate("QgsXyzSourceWidgetBase", "URL of the connection, {x}, {y}, and {z} will be replaced with actual values. Use {-y} for inverted y axis.", nullptr));
#endif // QT_CONFIG(tooltip)
        mEditUrl->setPlaceholderText(QCoreApplication::translate("QgsXyzSourceWidgetBase", "http://example.com/{z}/{x}/{y}.png", nullptr));
        label_2->setText(QCoreApplication::translate("QgsXyzSourceWidgetBase", "URL", nullptr));
        label_3->setText(QCoreApplication::translate("QgsXyzSourceWidgetBase", "Tile Resolution", nullptr));
        mAuthGroupBox->setTitle(QCoreApplication::translate("QgsXyzSourceWidgetBase", "Authentication", nullptr));
#if QT_CONFIG(tooltip)
        mEditReferer->setToolTip(QCoreApplication::translate("QgsXyzSourceWidgetBase", "Optional custom referer", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("QgsXyzSourceWidgetBase", "Interpretation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsXyzSourceWidgetBase: public Ui_QgsXyzSourceWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSXYZSOURCEWIDGETBASE_H
