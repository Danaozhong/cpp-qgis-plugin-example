/********************************************************************************
** Form generated from reading UI file 'qgspointcloudelevationpropertieswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPOINTCLOUDELEVATIONPROPERTIESWIDGETBASE_H
#define UI_QGSPOINTCLOUDELEVATIONPROPERTIESWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPointCloudElevationPropertiesWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBox *mCrsGroupBox_2;
    QGridLayout *gridLayout_2;
    QgsDoubleSpinBox *mOffsetZSpinBox;
    QFrame *line_3;
    QgsDoubleSpinBox *mScaleZSpinBox;
    QLabel *label;
    QLabel *label_2;
    QPushButton *mShifPointCloudZAxisButton;
    QLabel *label_3;
    QGroupBox *mLayerRenderingGroupBox;
    QGridLayout *gridLayout_4;
    QgsDoubleSpinBox *mMaxErrorSpinBox;
    QgsUnitSelectionWidget *mMaxErrorUnitWidget;
    QLabel *lblTransparency_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QgsDoubleSpinBox *mPointSizeSpinBox;
    QCheckBox *mOpacityByDistanceCheckBox;
    QComboBox *mPointStyleComboBox;
    QLabel *label_6;
    QgsColorButton *mPointColorButton;
    QLabel *lblTransparency_4;
    QgsUnitSelectionWidget *mPointSizeUnitWidget;
    QLabel *label_5;
    QCheckBox *mCheckBoxRespectLayerColors;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsPointCloudElevationPropertiesWidgetBase)
    {
        if (QgsPointCloudElevationPropertiesWidgetBase->objectName().isEmpty())
            QgsPointCloudElevationPropertiesWidgetBase->setObjectName(QString::fromUtf8("QgsPointCloudElevationPropertiesWidgetBase"));
        QgsPointCloudElevationPropertiesWidgetBase->resize(413, 439);
        verticalLayout = new QVBoxLayout(QgsPointCloudElevationPropertiesWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mCrsGroupBox_2 = new QgsCollapsibleGroupBox(QgsPointCloudElevationPropertiesWidgetBase);
        mCrsGroupBox_2->setObjectName(QString::fromUtf8("mCrsGroupBox_2"));
        mCrsGroupBox_2->setFocusPolicy(Qt::StrongFocus);
        mCrsGroupBox_2->setCheckable(false);
        mCrsGroupBox_2->setProperty("syncGroup", QVariant(QString::fromUtf8("vectorgeneral")));
        gridLayout_2 = new QGridLayout(mCrsGroupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mOffsetZSpinBox = new QgsDoubleSpinBox(mCrsGroupBox_2);
        mOffsetZSpinBox->setObjectName(QString::fromUtf8("mOffsetZSpinBox"));
        mOffsetZSpinBox->setDecimals(6);
        mOffsetZSpinBox->setMinimum(-99999999999.000000000000000);
        mOffsetZSpinBox->setMaximum(99999999999.000000000000000);

        gridLayout_2->addWidget(mOffsetZSpinBox, 2, 1, 1, 1);

        line_3 = new QFrame(mCrsGroupBox_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 3, 0, 1, 1);

        mScaleZSpinBox = new QgsDoubleSpinBox(mCrsGroupBox_2);
        mScaleZSpinBox->setObjectName(QString::fromUtf8("mScaleZSpinBox"));
        mScaleZSpinBox->setDecimals(6);
        mScaleZSpinBox->setMinimum(0.000000000000000);
        mScaleZSpinBox->setMaximum(99999999999.000000000000000);
        mScaleZSpinBox->setValue(1.000000000000000);

        gridLayout_2->addWidget(mScaleZSpinBox, 1, 1, 1, 1);

        label = new QLabel(mCrsGroupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        label_2 = new QLabel(mCrsGroupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        mShifPointCloudZAxisButton = new QPushButton(mCrsGroupBox_2);
        mShifPointCloudZAxisButton->setObjectName(QString::fromUtf8("mShifPointCloudZAxisButton"));
        mShifPointCloudZAxisButton->setMinimumSize(QSize(24, 24));
        mShifPointCloudZAxisButton->setMaximumSize(QSize(24, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::On);
        mShifPointCloudZAxisButton->setIcon(icon);

        gridLayout_2->addWidget(mShifPointCloudZAxisButton, 2, 2, 1, 1);

        label_3 = new QLabel(mCrsGroupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 3);


        verticalLayout->addWidget(mCrsGroupBox_2);

        mLayerRenderingGroupBox = new QGroupBox(QgsPointCloudElevationPropertiesWidgetBase);
        mLayerRenderingGroupBox->setObjectName(QString::fromUtf8("mLayerRenderingGroupBox"));
        mLayerRenderingGroupBox->setFlat(true);
        mLayerRenderingGroupBox->setCheckable(false);
        gridLayout_4 = new QGridLayout(mLayerRenderingGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, -1, 3, -1);
        mMaxErrorSpinBox = new QgsDoubleSpinBox(mLayerRenderingGroupBox);
        mMaxErrorSpinBox->setObjectName(QString::fromUtf8("mMaxErrorSpinBox"));
        mMaxErrorSpinBox->setDecimals(6);
        mMaxErrorSpinBox->setMaximum(99999999999.000000000000000);
        mMaxErrorSpinBox->setValue(0.300000000000000);

        gridLayout_4->addWidget(mMaxErrorSpinBox, 0, 1, 1, 2);

        mMaxErrorUnitWidget = new QgsUnitSelectionWidget(mLayerRenderingGroupBox);
        mMaxErrorUnitWidget->setObjectName(QString::fromUtf8("mMaxErrorUnitWidget"));
        mMaxErrorUnitWidget->setMinimumSize(QSize(0, 0));
        mMaxErrorUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_4->addWidget(mMaxErrorUnitWidget, 0, 3, 1, 1);

        lblTransparency_2 = new QLabel(mLayerRenderingGroupBox);
        lblTransparency_2->setObjectName(QString::fromUtf8("lblTransparency_2"));

        gridLayout_4->addWidget(lblTransparency_2, 0, 0, 1, 1);

        gridLayout_4->setColumnStretch(0, 1);
        gridLayout_4->setColumnStretch(1, 2);
        gridLayout_4->setColumnStretch(2, 1);

        verticalLayout->addWidget(mLayerRenderingGroupBox);

        groupBox_2 = new QGroupBox(QgsPointCloudElevationPropertiesWidgetBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mPointSizeSpinBox = new QgsDoubleSpinBox(groupBox_2);
        mPointSizeSpinBox->setObjectName(QString::fromUtf8("mPointSizeSpinBox"));
        mPointSizeSpinBox->setDecimals(6);
        mPointSizeSpinBox->setMaximum(99999999999.000000000000000);

        gridLayout->addWidget(mPointSizeSpinBox, 0, 1, 1, 1);

        mOpacityByDistanceCheckBox = new QCheckBox(groupBox_2);
        mOpacityByDistanceCheckBox->setObjectName(QString::fromUtf8("mOpacityByDistanceCheckBox"));

        gridLayout->addWidget(mOpacityByDistanceCheckBox, 5, 0, 1, 3);

        mPointStyleComboBox = new QComboBox(groupBox_2);
        mPointStyleComboBox->setObjectName(QString::fromUtf8("mPointStyleComboBox"));

        gridLayout->addWidget(mPointStyleComboBox, 1, 1, 1, 2);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        mPointColorButton = new QgsColorButton(groupBox_2);
        mPointColorButton->setObjectName(QString::fromUtf8("mPointColorButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mPointColorButton->sizePolicy().hasHeightForWidth());
        mPointColorButton->setSizePolicy(sizePolicy);
        mPointColorButton->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(mPointColorButton, 3, 1, 1, 2);

        lblTransparency_4 = new QLabel(groupBox_2);
        lblTransparency_4->setObjectName(QString::fromUtf8("lblTransparency_4"));

        gridLayout->addWidget(lblTransparency_4, 0, 0, 1, 1);

        mPointSizeUnitWidget = new QgsUnitSelectionWidget(groupBox_2);
        mPointSizeUnitWidget->setObjectName(QString::fromUtf8("mPointSizeUnitWidget"));
        mPointSizeUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mPointSizeUnitWidget, 0, 2, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        mCheckBoxRespectLayerColors = new QCheckBox(groupBox_2);
        mCheckBoxRespectLayerColors->setObjectName(QString::fromUtf8("mCheckBoxRespectLayerColors"));

        gridLayout->addWidget(mCheckBoxRespectLayerColors, 4, 0, 1, 3);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);
        gridLayout->setColumnStretch(2, 1);

        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mCrsGroupBox_2, mScaleZSpinBox);
        QWidget::setTabOrder(mScaleZSpinBox, mOffsetZSpinBox);
        QWidget::setTabOrder(mOffsetZSpinBox, mShifPointCloudZAxisButton);

        retranslateUi(QgsPointCloudElevationPropertiesWidgetBase);

        QMetaObject::connectSlotsByName(QgsPointCloudElevationPropertiesWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsPointCloudElevationPropertiesWidgetBase)
    {
        QgsPointCloudElevationPropertiesWidgetBase->setWindowTitle(QCoreApplication::translate("QgsPointCloudElevationPropertiesWidgetBase", "Point Cloud Elevation Properties", nullptr));
        mCrsGroupBox_2->setTitle(QCoreApplication::translate("QgsPointCloudElevationPropertiesWidgetBase", "Elevation", nullptr));
        label->setText(QCoreApplication::translate("QgsPointCloudElevationPropertiesWidgetBase", "Offset", nullptr));
        label_2->setText(QCoreApplication::translate("QgsPointCloudElevationPropertiesWidgetBase", "Scale", nullptr));
#if QT_CONFIG(tooltip)
        mShifPointCloudZAxisButton->setToolTip(QCoreApplication::translate("QgsPointCloudElevationPropertiesWidgetBase", "Automatically sets the offset so that the lowest point in the cloud sits at an elevation of 0.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("QgsPointCloudElevationPropertiesWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">Elevation scaling and offset can be used to manually correct elevation values in the point cloud at render time.</span></p><p>The scale is applied to the point cloud elevation values before adding the offset.</p></body></html>", nullptr));
        mLayerRenderingGroupBox->setTitle(QCoreApplication::translate("QgsPointCloudElevationPropertiesWidgetBase", "Profile Chart Accuracy", nullptr));
        lblTransparency_2->setText(QCoreApplication::translate("QgsPointCloudElevationPropertiesWidgetBase", "Maximum error", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsPointCloudElevationPropertiesWidgetBase", "Profile Chart Appearance", nullptr));
        mOpacityByDistanceCheckBox->setText(QCoreApplication::translate("QgsPointCloudElevationPropertiesWidgetBase", "Apply opacity by distance from curve effect", nullptr));
        label_6->setText(QCoreApplication::translate("QgsPointCloudElevationPropertiesWidgetBase", "Color", nullptr));
        mPointColorButton->setText(QString());
        lblTransparency_4->setText(QCoreApplication::translate("QgsPointCloudElevationPropertiesWidgetBase", "Point size", nullptr));
        label_5->setText(QCoreApplication::translate("QgsPointCloudElevationPropertiesWidgetBase", "Style", nullptr));
        mCheckBoxRespectLayerColors->setText(QCoreApplication::translate("QgsPointCloudElevationPropertiesWidgetBase", "Respect layer's coloring", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsPointCloudElevationPropertiesWidgetBase: public Ui_QgsPointCloudElevationPropertiesWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPOINTCLOUDELEVATIONPROPERTIESWIDGETBASE_H
