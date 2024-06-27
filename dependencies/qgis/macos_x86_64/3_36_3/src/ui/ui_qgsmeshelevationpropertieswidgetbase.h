/********************************************************************************
** Form generated from reading UI file 'qgsmeshelevationpropertieswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHELEVATIONPROPERTIESWIDGETBASE_H
#define UI_QGSMESHELEVATIONPROPERTIESWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshElevationPropertiesWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *mElevationGroupBox;
    QGridLayout *gridLayout_2;
    QgsDoubleSpinBox *mOffsetZSpinBox;
    QLabel *label;
    QLabel *label_2;
    QgsDoubleSpinBox *mScaleZSpinBox;
    QLabel *label_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QComboBox *mStyleComboBox;
    QStackedWidget *mSymbologyStackedWidget;
    QWidget *mPageLine;
    QGridLayout *gridLayout;
    QgsSymbolButton *mLineStyleButton;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_2;
    QWidget *mPageFill;
    QGridLayout *gridLayout_4;
    QLabel *label_7;
    QLabel *label_8;
    QgsSymbolButton *mFillStyleButton;
    QgsDoubleSpinBox *mElevationLimitSpinBox;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsMeshElevationPropertiesWidgetBase)
    {
        if (QgsMeshElevationPropertiesWidgetBase->objectName().isEmpty())
            QgsMeshElevationPropertiesWidgetBase->setObjectName(QString::fromUtf8("QgsMeshElevationPropertiesWidgetBase"));
        QgsMeshElevationPropertiesWidgetBase->resize(435, 407);
        verticalLayout = new QVBoxLayout(QgsMeshElevationPropertiesWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mElevationGroupBox = new QGroupBox(QgsMeshElevationPropertiesWidgetBase);
        mElevationGroupBox->setObjectName(QString::fromUtf8("mElevationGroupBox"));
        mElevationGroupBox->setFocusPolicy(Qt::StrongFocus);
        mElevationGroupBox->setCheckable(false);
        mElevationGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("vectorgeneral")));
        gridLayout_2 = new QGridLayout(mElevationGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mOffsetZSpinBox = new QgsDoubleSpinBox(mElevationGroupBox);
        mOffsetZSpinBox->setObjectName(QString::fromUtf8("mOffsetZSpinBox"));
        mOffsetZSpinBox->setDecimals(6);
        mOffsetZSpinBox->setMinimum(-99999999999.000000000000000);
        mOffsetZSpinBox->setMaximum(99999999999.000000000000000);

        gridLayout_2->addWidget(mOffsetZSpinBox, 2, 1, 1, 2);

        label = new QLabel(mElevationGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        label_2 = new QLabel(mElevationGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        mScaleZSpinBox = new QgsDoubleSpinBox(mElevationGroupBox);
        mScaleZSpinBox->setObjectName(QString::fromUtf8("mScaleZSpinBox"));
        mScaleZSpinBox->setDecimals(6);
        mScaleZSpinBox->setMinimum(0.000000000000000);
        mScaleZSpinBox->setMaximum(99999999999.000000000000000);
        mScaleZSpinBox->setValue(1.000000000000000);

        gridLayout_2->addWidget(mScaleZSpinBox, 1, 1, 1, 2);

        label_3 = new QLabel(mElevationGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 3);


        verticalLayout->addWidget(mElevationGroupBox);

        groupBox_3 = new QGroupBox(QgsMeshElevationPropertiesWidgetBase);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        mStyleComboBox = new QComboBox(groupBox_3);
        mStyleComboBox->setObjectName(QString::fromUtf8("mStyleComboBox"));

        gridLayout_3->addWidget(mStyleComboBox, 0, 1, 1, 1);

        mSymbologyStackedWidget = new QStackedWidget(groupBox_3);
        mSymbologyStackedWidget->setObjectName(QString::fromUtf8("mSymbologyStackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSymbologyStackedWidget->sizePolicy().hasHeightForWidth());
        mSymbologyStackedWidget->setSizePolicy(sizePolicy);
        mPageLine = new QWidget();
        mPageLine->setObjectName(QString::fromUtf8("mPageLine"));
        gridLayout = new QGridLayout(mPageLine);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mLineStyleButton = new QgsSymbolButton(mPageLine);
        mLineStyleButton->setObjectName(QString::fromUtf8("mLineStyleButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLineStyleButton->sizePolicy().hasHeightForWidth());
        mLineStyleButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mLineStyleButton, 0, 1, 1, 1);

        label_5 = new QLabel(mPageLine);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);
        mSymbologyStackedWidget->addWidget(mPageLine);
        mPageFill = new QWidget();
        mPageFill->setObjectName(QString::fromUtf8("mPageFill"));
        gridLayout_4 = new QGridLayout(mPageFill);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(mPageFill);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 0, 0, 1, 1);

        label_8 = new QLabel(mPageFill);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 1, 0, 1, 1);

        mFillStyleButton = new QgsSymbolButton(mPageFill);
        mFillStyleButton->setObjectName(QString::fromUtf8("mFillStyleButton"));
        sizePolicy1.setHeightForWidth(mFillStyleButton->sizePolicy().hasHeightForWidth());
        mFillStyleButton->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(mFillStyleButton, 0, 1, 1, 1);

        mElevationLimitSpinBox = new QgsDoubleSpinBox(mPageFill);
        mElevationLimitSpinBox->setObjectName(QString::fromUtf8("mElevationLimitSpinBox"));
        mElevationLimitSpinBox->setDecimals(6);
        mElevationLimitSpinBox->setMinimum(-99999.000000000000000);
        mElevationLimitSpinBox->setMaximum(99999.000000000000000);

        gridLayout_4->addWidget(mElevationLimitSpinBox, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 2, 1, 1, 1);

        gridLayout_4->setColumnStretch(0, 1);
        gridLayout_4->setColumnStretch(1, 2);
        mSymbologyStackedWidget->addWidget(mPageFill);

        gridLayout_3->addWidget(mSymbologyStackedWidget, 1, 0, 1, 2);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 2);

        verticalLayout->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mElevationGroupBox, mScaleZSpinBox);
        QWidget::setTabOrder(mScaleZSpinBox, mOffsetZSpinBox);

        retranslateUi(QgsMeshElevationPropertiesWidgetBase);

        mSymbologyStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsMeshElevationPropertiesWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshElevationPropertiesWidgetBase)
    {
        QgsMeshElevationPropertiesWidgetBase->setWindowTitle(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Raster Elevation Properties", nullptr));
        mElevationGroupBox->setTitle(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Elevation Surface", nullptr));
        label->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Offset", nullptr));
        label_2->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Scale", nullptr));
        label_3->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">Elevation scaling and offset can be used to manually correct elevation values from the layer.</span></p><p>The scale is applied to the mesh values before adding the offset.</p></body></html>", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Profile Chart Appearance", nullptr));
        label_6->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Style", nullptr));
        mLineStyleButton->setText(QString());
        label_5->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Line style", nullptr));
        label_7->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Fill style", nullptr));
        label_8->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Limit", nullptr));
        mFillStyleButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsMeshElevationPropertiesWidgetBase: public Ui_QgsMeshElevationPropertiesWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHELEVATIONPROPERTIESWIDGETBASE_H
