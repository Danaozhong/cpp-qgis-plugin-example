/********************************************************************************
** Form generated from reading UI file 'qgspostgresrastertemporalsettingswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPOSTGRESRASTERTEMPORALSETTINGSWIDGETBASE_H
#define UI_QGSPOSTGRESRASTERTEMPORALSETTINGSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdatetimeedit.h"
#include "qgsfieldcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPostgresRasterTemporalSettingsWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *mPostgresRasterTemporalGroup;
    QGridLayout *gridLayout_18;
    QLabel *mPostgresRasterTemporalLabel;
    QgsFieldComboBox *mPostgresRasterTemporalFieldComboBox;
    QLabel *label_14;
    QStackedWidget *mDefaultTimeStackedWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QgsDateTimeEdit *mPostgresRasterDefaultTime;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_3;
    QComboBox *mDefaultTimeComboBox;
    QLabel *label;
    QLabel *label_12;

    void setupUi(QWidget *QgsPostgresRasterTemporalSettingsWidgetBase)
    {
        if (QgsPostgresRasterTemporalSettingsWidgetBase->objectName().isEmpty())
            QgsPostgresRasterTemporalSettingsWidgetBase->setObjectName(QString::fromUtf8("QgsPostgresRasterTemporalSettingsWidgetBase"));
        QgsPostgresRasterTemporalSettingsWidgetBase->resize(546, 285);
        verticalLayout = new QVBoxLayout(QgsPostgresRasterTemporalSettingsWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mPostgresRasterTemporalGroup = new QGroupBox(QgsPostgresRasterTemporalSettingsWidgetBase);
        mPostgresRasterTemporalGroup->setObjectName(QString::fromUtf8("mPostgresRasterTemporalGroup"));
        mPostgresRasterTemporalGroup->setCheckable(true);
        gridLayout_18 = new QGridLayout(mPostgresRasterTemporalGroup);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        mPostgresRasterTemporalLabel = new QLabel(mPostgresRasterTemporalGroup);
        mPostgresRasterTemporalLabel->setObjectName(QString::fromUtf8("mPostgresRasterTemporalLabel"));
        mPostgresRasterTemporalLabel->setWordWrap(true);

        gridLayout_18->addWidget(mPostgresRasterTemporalLabel, 0, 0, 1, 2);

        mPostgresRasterTemporalFieldComboBox = new QgsFieldComboBox(mPostgresRasterTemporalGroup);
        mPostgresRasterTemporalFieldComboBox->setObjectName(QString::fromUtf8("mPostgresRasterTemporalFieldComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mPostgresRasterTemporalFieldComboBox->sizePolicy().hasHeightForWidth());
        mPostgresRasterTemporalFieldComboBox->setSizePolicy(sizePolicy);

        gridLayout_18->addWidget(mPostgresRasterTemporalFieldComboBox, 1, 1, 1, 1);

        label_14 = new QLabel(mPostgresRasterTemporalGroup);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setWordWrap(true);

        gridLayout_18->addWidget(label_14, 2, 0, 1, 2);

        mDefaultTimeStackedWidget = new QStackedWidget(mPostgresRasterTemporalGroup);
        mDefaultTimeStackedWidget->setObjectName(QString::fromUtf8("mDefaultTimeStackedWidget"));
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mPostgresRasterDefaultTime = new QgsDateTimeEdit(widget);
        mPostgresRasterDefaultTime->setObjectName(QString::fromUtf8("mPostgresRasterDefaultTime"));

        verticalLayout_2->addWidget(mPostgresRasterDefaultTime);

        mDefaultTimeStackedWidget->addWidget(widget);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_3 = new QVBoxLayout(page_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mDefaultTimeComboBox = new QComboBox(page_2);
        mDefaultTimeComboBox->setObjectName(QString::fromUtf8("mDefaultTimeComboBox"));

        verticalLayout_3->addWidget(mDefaultTimeComboBox);

        mDefaultTimeStackedWidget->addWidget(page_2);

        gridLayout_18->addWidget(mDefaultTimeStackedWidget, 3, 1, 1, 1);

        label = new QLabel(mPostgresRasterTemporalGroup);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_18->addWidget(label, 1, 0, 1, 1);

        label_12 = new QLabel(mPostgresRasterTemporalGroup);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_18->addWidget(label_12, 3, 0, 1, 1);


        verticalLayout->addWidget(mPostgresRasterTemporalGroup);


        retranslateUi(QgsPostgresRasterTemporalSettingsWidgetBase);

        mDefaultTimeStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsPostgresRasterTemporalSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsPostgresRasterTemporalSettingsWidgetBase)
    {
        QgsPostgresRasterTemporalSettingsWidgetBase->setWindowTitle(QCoreApplication::translate("QgsPostgresRasterTemporalSettingsWidgetBase", "Postgres Raster Temporal Settings", nullptr));
        mPostgresRasterTemporalGroup->setTitle(QCoreApplication::translate("QgsPostgresRasterTemporalSettingsWidgetBase", "Temporal capabilities", nullptr));
        mPostgresRasterTemporalLabel->setText(QCoreApplication::translate("QgsPostgresRasterTemporalSettingsWidgetBase", "If the dataset contains multiple rasters belonging to a time series, specify the field that contains the time information, the type of the field can be any type that can be converted to a timestamp.", nullptr));
        label_14->setText(QCoreApplication::translate("QgsPostgresRasterTemporalSettingsWidgetBase", "<html><head/><body><p>A default value can be specified and it will be used when the temporal controller is not requesting any particular time.</p><p>It is recommended to set a default temporal value here instead of using a provider filter because the provider filter will still be active when using the temporal controller while this default value will be ignored.</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("QgsPostgresRasterTemporalSettingsWidgetBase", "Temporal field", nullptr));
        label_12->setText(QCoreApplication::translate("QgsPostgresRasterTemporalSettingsWidgetBase", "Default time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsPostgresRasterTemporalSettingsWidgetBase: public Ui_QgsPostgresRasterTemporalSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPOSTGRESRASTERTEMPORALSETTINGSWIDGETBASE_H
