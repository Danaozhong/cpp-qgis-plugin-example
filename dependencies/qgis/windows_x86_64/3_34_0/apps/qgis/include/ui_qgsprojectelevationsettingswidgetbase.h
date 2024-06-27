/********************************************************************************
** Form generated from reading UI file 'qgsprojectelevationsettingswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROJECTELEVATIONSETTINGSWIDGETBASE_H
#define UI_QGSPROJECTELEVATIONSETTINGSWIDGETBASE_H

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
#include "qgsmaplayercombobox.h"
#include "qgsmessagebar.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProjectElevationSettingsWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsMessageBar *mMessageBar;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QLabel *labelTerrainType;
    QComboBox *mComboTerrainType;
    QStackedWidget *mStackedWidget;
    QWidget *mPageFlat;
    QGridLayout *gridLayout;
    QLabel *label_13;
    QgsDoubleSpinBox *mFlatHeightSpinBox;
    QSpacerItem *verticalSpacer_2;
    QWidget *mPageRasterDem;
    QGridLayout *gridLayout_2;
    QLabel *label_14;
    QLabel *labelTerrainScale;
    QgsDoubleSpinBox *mDemOffsetSpinBox;
    QgsMapLayerComboBox *mComboDemLayer;
    QgsDoubleSpinBox *mDemScaleSpinBox;
    QLabel *labelTerrainLayer;
    QWidget *mPageMesh;
    QGridLayout *gridLayout_3;
    QLabel *labelTerrainScale_2;
    QLabel *labelTerrainLayer_2;
    QgsDoubleSpinBox *mMeshOffsetSpinBox;
    QgsMapLayerComboBox *mComboMeshLayer;
    QgsDoubleSpinBox *mMeshScaleSpinBox;
    QLabel *label_15;
    QVBoxLayout *mElevationShadingSettingsLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsProjectElevationSettingsWidgetBase)
    {
        if (QgsProjectElevationSettingsWidgetBase->objectName().isEmpty())
            QgsProjectElevationSettingsWidgetBase->setObjectName(QString::fromUtf8("QgsProjectElevationSettingsWidgetBase"));
        QgsProjectElevationSettingsWidgetBase->resize(504, 486);
        verticalLayout = new QVBoxLayout(QgsProjectElevationSettingsWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mMessageBar = new QgsMessageBar(QgsProjectElevationSettingsWidgetBase);
        mMessageBar->setObjectName(QString::fromUtf8("mMessageBar"));

        verticalLayout->addWidget(mMessageBar);

        groupBox = new QGroupBox(QgsProjectElevationSettingsWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        labelTerrainType = new QLabel(groupBox);
        labelTerrainType->setObjectName(QString::fromUtf8("labelTerrainType"));

        gridLayout_4->addWidget(labelTerrainType, 0, 0, 1, 1);

        mComboTerrainType = new QComboBox(groupBox);
        mComboTerrainType->setObjectName(QString::fromUtf8("mComboTerrainType"));

        gridLayout_4->addWidget(mComboTerrainType, 0, 1, 1, 1);

        mStackedWidget = new QStackedWidget(groupBox);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));
        mPageFlat = new QWidget();
        mPageFlat->setObjectName(QString::fromUtf8("mPageFlat"));
        gridLayout = new QGridLayout(mPageFlat);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(mPageFlat);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 0, 0, 1, 1);

        mFlatHeightSpinBox = new QgsDoubleSpinBox(mPageFlat);
        mFlatHeightSpinBox->setObjectName(QString::fromUtf8("mFlatHeightSpinBox"));
        mFlatHeightSpinBox->setMinimum(-1000000.000000000000000);
        mFlatHeightSpinBox->setMaximum(1000000.000000000000000);

        gridLayout->addWidget(mFlatHeightSpinBox, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);
        mStackedWidget->addWidget(mPageFlat);
        mPageRasterDem = new QWidget();
        mPageRasterDem->setObjectName(QString::fromUtf8("mPageRasterDem"));
        gridLayout_2 = new QGridLayout(mPageRasterDem);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(mPageRasterDem);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 2, 0, 1, 1);

        labelTerrainScale = new QLabel(mPageRasterDem);
        labelTerrainScale->setObjectName(QString::fromUtf8("labelTerrainScale"));

        gridLayout_2->addWidget(labelTerrainScale, 1, 0, 1, 1);

        mDemOffsetSpinBox = new QgsDoubleSpinBox(mPageRasterDem);
        mDemOffsetSpinBox->setObjectName(QString::fromUtf8("mDemOffsetSpinBox"));
        mDemOffsetSpinBox->setMinimum(-1000000.000000000000000);
        mDemOffsetSpinBox->setMaximum(1000000.000000000000000);

        gridLayout_2->addWidget(mDemOffsetSpinBox, 2, 1, 1, 1);

        mComboDemLayer = new QgsMapLayerComboBox(mPageRasterDem);
        mComboDemLayer->setObjectName(QString::fromUtf8("mComboDemLayer"));

        gridLayout_2->addWidget(mComboDemLayer, 0, 1, 1, 1);

        mDemScaleSpinBox = new QgsDoubleSpinBox(mPageRasterDem);
        mDemScaleSpinBox->setObjectName(QString::fromUtf8("mDemScaleSpinBox"));
        mDemScaleSpinBox->setValue(1.000000000000000);

        gridLayout_2->addWidget(mDemScaleSpinBox, 1, 1, 1, 1);

        labelTerrainLayer = new QLabel(mPageRasterDem);
        labelTerrainLayer->setObjectName(QString::fromUtf8("labelTerrainLayer"));

        gridLayout_2->addWidget(labelTerrainLayer, 0, 0, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 2);
        mStackedWidget->addWidget(mPageRasterDem);
        mPageMesh = new QWidget();
        mPageMesh->setObjectName(QString::fromUtf8("mPageMesh"));
        gridLayout_3 = new QGridLayout(mPageMesh);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        labelTerrainScale_2 = new QLabel(mPageMesh);
        labelTerrainScale_2->setObjectName(QString::fromUtf8("labelTerrainScale_2"));

        gridLayout_3->addWidget(labelTerrainScale_2, 1, 0, 1, 1);

        labelTerrainLayer_2 = new QLabel(mPageMesh);
        labelTerrainLayer_2->setObjectName(QString::fromUtf8("labelTerrainLayer_2"));

        gridLayout_3->addWidget(labelTerrainLayer_2, 0, 0, 1, 1);

        mMeshOffsetSpinBox = new QgsDoubleSpinBox(mPageMesh);
        mMeshOffsetSpinBox->setObjectName(QString::fromUtf8("mMeshOffsetSpinBox"));
        mMeshOffsetSpinBox->setMinimum(-1000000.000000000000000);
        mMeshOffsetSpinBox->setMaximum(1000000.000000000000000);

        gridLayout_3->addWidget(mMeshOffsetSpinBox, 2, 1, 1, 1);

        mComboMeshLayer = new QgsMapLayerComboBox(mPageMesh);
        mComboMeshLayer->setObjectName(QString::fromUtf8("mComboMeshLayer"));

        gridLayout_3->addWidget(mComboMeshLayer, 0, 1, 1, 1);

        mMeshScaleSpinBox = new QgsDoubleSpinBox(mPageMesh);
        mMeshScaleSpinBox->setObjectName(QString::fromUtf8("mMeshScaleSpinBox"));
        mMeshScaleSpinBox->setValue(1.000000000000000);

        gridLayout_3->addWidget(mMeshScaleSpinBox, 1, 1, 1, 1);

        label_15 = new QLabel(mPageMesh);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_3->addWidget(label_15, 2, 0, 1, 1);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 2);
        mStackedWidget->addWidget(mPageMesh);

        gridLayout_4->addWidget(mStackedWidget, 1, 0, 1, 2);

        gridLayout_4->setColumnStretch(0, 1);
        gridLayout_4->setColumnStretch(1, 2);

        verticalLayout->addWidget(groupBox);

        mElevationShadingSettingsLayout = new QVBoxLayout();
        mElevationShadingSettingsLayout->setObjectName(QString::fromUtf8("mElevationShadingSettingsLayout"));

        verticalLayout->addLayout(mElevationShadingSettingsLayout);

        verticalSpacer = new QSpacerItem(20, 140, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(3, 1);

        retranslateUi(QgsProjectElevationSettingsWidgetBase);

        mStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsProjectElevationSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsProjectElevationSettingsWidgetBase)
    {
        QgsProjectElevationSettingsWidgetBase->setWindowTitle(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Project Elevation Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Terrain", nullptr));
        labelTerrainType->setText(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Type", nullptr));
        label_13->setText(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Terrain height", nullptr));
        label_14->setText(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Offset", nullptr));
        labelTerrainScale->setText(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Vertical scale", nullptr));
        labelTerrainLayer->setText(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "DEM layer", nullptr));
        labelTerrainScale_2->setText(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Vertical scale", nullptr));
        labelTerrainLayer_2->setText(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Mesh layer", nullptr));
        label_15->setText(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Offset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsProjectElevationSettingsWidgetBase: public Ui_QgsProjectElevationSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROJECTELEVATIONSETTINGSWIDGETBASE_H
