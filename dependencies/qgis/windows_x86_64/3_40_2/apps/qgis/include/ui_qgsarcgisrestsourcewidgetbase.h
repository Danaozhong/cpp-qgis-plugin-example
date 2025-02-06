/********************************************************************************
** Form generated from reading UI file 'qgsarcgisrestsourcewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSARCGISRESTSOURCEWIDGETBASE_H
#define UI_QGSARCGISRESTSOURCEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include "qgsauthsettingswidget.h"
#include "qgsprovidersourcewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsArcGisRestSourceWidgetBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *mAuthGroupBox;
    QVBoxLayout *verticalLayout_3;
    QgsAuthSettingsWidget *mAuthSettings;
    QLabel *lblReferer;
    QLineEdit *mEditReferer;

    void setupUi(QgsProviderSourceWidget *QgsArcGisRestSourceWidgetBase)
    {
        if (QgsArcGisRestSourceWidgetBase->objectName().isEmpty())
            QgsArcGisRestSourceWidgetBase->setObjectName(QString::fromUtf8("QgsArcGisRestSourceWidgetBase"));
        QgsArcGisRestSourceWidgetBase->resize(362, 96);
        gridLayout = new QGridLayout(QgsArcGisRestSourceWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mAuthGroupBox = new QGroupBox(QgsArcGisRestSourceWidgetBase);
        mAuthGroupBox->setObjectName(QString::fromUtf8("mAuthGroupBox"));
        verticalLayout_3 = new QVBoxLayout(mAuthGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        mAuthSettings = new QgsAuthSettingsWidget(mAuthGroupBox);
        mAuthSettings->setObjectName(QString::fromUtf8("mAuthSettings"));

        verticalLayout_3->addWidget(mAuthSettings);


        gridLayout->addWidget(mAuthGroupBox, 0, 0, 1, 2);

        lblReferer = new QLabel(QgsArcGisRestSourceWidgetBase);
        lblReferer->setObjectName(QString::fromUtf8("lblReferer"));

        gridLayout->addWidget(lblReferer, 1, 0, 1, 1);

        mEditReferer = new QLineEdit(QgsArcGisRestSourceWidgetBase);
        mEditReferer->setObjectName(QString::fromUtf8("mEditReferer"));

        gridLayout->addWidget(mEditReferer, 1, 1, 1, 1);

#if QT_CONFIG(shortcut)
        lblReferer->setBuddy(mEditReferer);
#endif // QT_CONFIG(shortcut)

        retranslateUi(QgsArcGisRestSourceWidgetBase);

        QMetaObject::connectSlotsByName(QgsArcGisRestSourceWidgetBase);
    } // setupUi

    void retranslateUi(QgsProviderSourceWidget *QgsArcGisRestSourceWidgetBase)
    {
        QgsArcGisRestSourceWidgetBase->setWindowTitle(QCoreApplication::translate("QgsArcGisRestSourceWidgetBase", "ArcGIS REST Connection", nullptr));
        mAuthGroupBox->setTitle(QCoreApplication::translate("QgsArcGisRestSourceWidgetBase", "Authentication", nullptr));
        lblReferer->setText(QCoreApplication::translate("QgsArcGisRestSourceWidgetBase", "Referer", nullptr));
#if QT_CONFIG(tooltip)
        mEditReferer->setToolTip(QCoreApplication::translate("QgsArcGisRestSourceWidgetBase", "Optional custom referer", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class QgsArcGisRestSourceWidgetBase: public Ui_QgsArcGisRestSourceWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSARCGISRESTSOURCEWIDGETBASE_H
