/********************************************************************************
** Form generated from reading UI file 'qgsmeshelevationpropertieswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHELEVATIONPROPERTIESWIDGETBASE_H
#define UI_QGSMESHELEVATIONPROPERTIESWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsstackedwidget.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshElevationPropertiesWidgetBase
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_9;
    QComboBox *mModeComboBox;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QComboBox *mStyleComboBox;
    QLabel *label_6;
    QgsStackedWidget *mSymbologyStackedWidget;
    QWidget *mPageLine;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QgsSymbolButton *mLineStyleButton;
    QWidget *mPageFill;
    QGridLayout *gridLayout_4;
    QLabel *label_8;
    QLabel *label_7;
    QgsDoubleSpinBox *mElevationLimitSpinBox;
    QgsSymbolButton *mFillStyleButton;
    QSpacerItem *verticalSpacer;
    QgsStackedWidget *mStackedWidget;
    QWidget *mPageFromVertices;
    QGridLayout *gridLayout_5;
    QLabel *label_4;
    QLabel *label_11;
    QgsDoubleSpinBox *mOffsetZSpinBox;
    QLabel *label_10;
    QgsDoubleSpinBox *mScaleZSpinBox;
    QWidget *mPageFixedRange;
    QGridLayout *gridLayout_6;
    QLabel *label_13;
    QComboBox *mLimitsComboBox;
    QLabel *label_14;
    QLabel *mLimitsLabel;
    QgsDoubleSpinBox *mFixedUpperSpinBox;
    QgsDoubleSpinBox *mFixedLowerSpinBox;
    QLabel *label_15;
    QWidget *mPageFixedRangePerGroup;
    QVBoxLayout *verticalLayout;
    QLabel *mFixedRangePerBandLabel;
    QTableView *mGroupElevationTable;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *mCalculateFixedRangePerGroupButton;

    void setupUi(QWidget *QgsMeshElevationPropertiesWidgetBase)
    {
        if (QgsMeshElevationPropertiesWidgetBase->objectName().isEmpty())
            QgsMeshElevationPropertiesWidgetBase->setObjectName(QString::fromUtf8("QgsMeshElevationPropertiesWidgetBase"));
        QgsMeshElevationPropertiesWidgetBase->resize(515, 424);
        gridLayout_2 = new QGridLayout(QgsMeshElevationPropertiesWidgetBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(QgsMeshElevationPropertiesWidgetBase);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        mModeComboBox = new QComboBox(QgsMeshElevationPropertiesWidgetBase);
        mModeComboBox->setObjectName(QString::fromUtf8("mModeComboBox"));

        gridLayout_2->addWidget(mModeComboBox, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(QgsMeshElevationPropertiesWidgetBase);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mStyleComboBox = new QComboBox(groupBox_3);
        mStyleComboBox->setObjectName(QString::fromUtf8("mStyleComboBox"));

        gridLayout_3->addWidget(mStyleComboBox, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        mSymbologyStackedWidget = new QgsStackedWidget(groupBox_3);
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
        label_5 = new QLabel(mPageLine);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        mLineStyleButton = new QgsSymbolButton(mPageLine);
        mLineStyleButton->setObjectName(QString::fromUtf8("mLineStyleButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLineStyleButton->sizePolicy().hasHeightForWidth());
        mLineStyleButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mLineStyleButton, 0, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        mSymbologyStackedWidget->addWidget(mPageLine);
        mPageFill = new QWidget();
        mPageFill->setObjectName(QString::fromUtf8("mPageFill"));
        gridLayout_4 = new QGridLayout(mPageFill);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(mPageFill);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 1, 0, 1, 1);

        label_7 = new QLabel(mPageFill);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 0, 0, 1, 1);

        mElevationLimitSpinBox = new QgsDoubleSpinBox(mPageFill);
        mElevationLimitSpinBox->setObjectName(QString::fromUtf8("mElevationLimitSpinBox"));
        mElevationLimitSpinBox->setDecimals(6);
        mElevationLimitSpinBox->setMinimum(-99999.000000000000000);
        mElevationLimitSpinBox->setMaximum(99999.000000000000000);

        gridLayout_4->addWidget(mElevationLimitSpinBox, 1, 1, 1, 1);

        mFillStyleButton = new QgsSymbolButton(mPageFill);
        mFillStyleButton->setObjectName(QString::fromUtf8("mFillStyleButton"));
        sizePolicy1.setHeightForWidth(mFillStyleButton->sizePolicy().hasHeightForWidth());
        mFillStyleButton->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(mFillStyleButton, 0, 1, 1, 1);

        gridLayout_4->setColumnStretch(0, 1);
        gridLayout_4->setColumnStretch(1, 2);
        mSymbologyStackedWidget->addWidget(mPageFill);

        gridLayout_3->addWidget(mSymbologyStackedWidget, 1, 0, 1, 2);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 2);

        gridLayout_2->addWidget(groupBox_3, 2, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 1);

        mStackedWidget = new QgsStackedWidget(QgsMeshElevationPropertiesWidgetBase);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));
        sizePolicy.setHeightForWidth(mStackedWidget->sizePolicy().hasHeightForWidth());
        mStackedWidget->setSizePolicy(sizePolicy);
        mStackedWidget->setFrameShape(QFrame::NoFrame);
        mPageFromVertices = new QWidget();
        mPageFromVertices->setObjectName(QString::fromUtf8("mPageFromVertices"));
        sizePolicy.setHeightForWidth(mPageFromVertices->sizePolicy().hasHeightForWidth());
        mPageFromVertices->setSizePolicy(sizePolicy);
        gridLayout_5 = new QGridLayout(mPageFromVertices);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_4 = new QLabel(mPageFromVertices);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_5->addWidget(label_4, 1, 0, 1, 1);

        label_11 = new QLabel(mPageFromVertices);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setWordWrap(true);

        gridLayout_5->addWidget(label_11, 0, 0, 1, 2);

        mOffsetZSpinBox = new QgsDoubleSpinBox(mPageFromVertices);
        mOffsetZSpinBox->setObjectName(QString::fromUtf8("mOffsetZSpinBox"));
        mOffsetZSpinBox->setDecimals(6);
        mOffsetZSpinBox->setMinimum(-99999999999.000000000000000);
        mOffsetZSpinBox->setMaximum(99999999999.000000000000000);

        gridLayout_5->addWidget(mOffsetZSpinBox, 2, 1, 1, 1);

        label_10 = new QLabel(mPageFromVertices);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_5->addWidget(label_10, 2, 0, 1, 1);

        mScaleZSpinBox = new QgsDoubleSpinBox(mPageFromVertices);
        mScaleZSpinBox->setObjectName(QString::fromUtf8("mScaleZSpinBox"));
        mScaleZSpinBox->setDecimals(6);
        mScaleZSpinBox->setMinimum(-99999999999.000000000000000);
        mScaleZSpinBox->setMaximum(99999999999.000000000000000);
        mScaleZSpinBox->setValue(1.000000000000000);

        gridLayout_5->addWidget(mScaleZSpinBox, 1, 1, 1, 1);

        gridLayout_5->setColumnStretch(0, 1);
        gridLayout_5->setColumnStretch(1, 2);
        mStackedWidget->addWidget(mPageFromVertices);
        mPageFixedRange = new QWidget();
        mPageFixedRange->setObjectName(QString::fromUtf8("mPageFixedRange"));
        sizePolicy.setHeightForWidth(mPageFixedRange->sizePolicy().hasHeightForWidth());
        mPageFixedRange->setSizePolicy(sizePolicy);
        mPageFixedRange->setAutoFillBackground(false);
        gridLayout_6 = new QGridLayout(mPageFixedRange);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_13 = new QLabel(mPageFixedRange);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_6->addWidget(label_13, 1, 0, 1, 1);

        mLimitsComboBox = new QComboBox(mPageFixedRange);
        mLimitsComboBox->setObjectName(QString::fromUtf8("mLimitsComboBox"));

        gridLayout_6->addWidget(mLimitsComboBox, 3, 1, 1, 1);

        label_14 = new QLabel(mPageFixedRange);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_6->addWidget(label_14, 2, 0, 1, 1);

        mLimitsLabel = new QLabel(mPageFixedRange);
        mLimitsLabel->setObjectName(QString::fromUtf8("mLimitsLabel"));

        gridLayout_6->addWidget(mLimitsLabel, 3, 0, 1, 1);

        mFixedUpperSpinBox = new QgsDoubleSpinBox(mPageFixedRange);
        mFixedUpperSpinBox->setObjectName(QString::fromUtf8("mFixedUpperSpinBox"));
        mFixedUpperSpinBox->setDecimals(4);
        mFixedUpperSpinBox->setMinimum(-9999999998.000000000000000);
        mFixedUpperSpinBox->setMaximum(9999999999.000000000000000);

        gridLayout_6->addWidget(mFixedUpperSpinBox, 2, 1, 1, 1);

        mFixedLowerSpinBox = new QgsDoubleSpinBox(mPageFixedRange);
        mFixedLowerSpinBox->setObjectName(QString::fromUtf8("mFixedLowerSpinBox"));
        mFixedLowerSpinBox->setDecimals(4);
        mFixedLowerSpinBox->setMinimum(-9999999998.000000000000000);
        mFixedLowerSpinBox->setMaximum(9999999999.000000000000000);

        gridLayout_6->addWidget(mFixedLowerSpinBox, 1, 1, 1, 1);

        label_15 = new QLabel(mPageFixedRange);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);
        label_15->setWordWrap(true);

        gridLayout_6->addWidget(label_15, 0, 0, 1, 2);

        gridLayout_6->setColumnStretch(0, 1);
        gridLayout_6->setColumnStretch(1, 2);
        mStackedWidget->addWidget(mPageFixedRange);
        mPageFixedRangePerGroup = new QWidget();
        mPageFixedRangePerGroup->setObjectName(QString::fromUtf8("mPageFixedRangePerGroup"));
        verticalLayout = new QVBoxLayout(mPageFixedRangePerGroup);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mFixedRangePerBandLabel = new QLabel(mPageFixedRangePerGroup);
        mFixedRangePerBandLabel->setObjectName(QString::fromUtf8("mFixedRangePerBandLabel"));
        sizePolicy.setHeightForWidth(mFixedRangePerBandLabel->sizePolicy().hasHeightForWidth());
        mFixedRangePerBandLabel->setSizePolicy(sizePolicy);
        mFixedRangePerBandLabel->setWordWrap(true);

        verticalLayout->addWidget(mFixedRangePerBandLabel);

        mGroupElevationTable = new QTableView(mPageFixedRangePerGroup);
        mGroupElevationTable->setObjectName(QString::fromUtf8("mGroupElevationTable"));

        verticalLayout->addWidget(mGroupElevationTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer = new QSpacerItem(494, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mCalculateFixedRangePerGroupButton = new QToolButton(mPageFixedRangePerGroup);
        mCalculateFixedRangePerGroupButton->setObjectName(QString::fromUtf8("mCalculateFixedRangePerGroupButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mCalculateFixedRangePerGroupButton->setIcon(icon);
        mCalculateFixedRangePerGroupButton->setPopupMode(QToolButton::MenuButtonPopup);
        mCalculateFixedRangePerGroupButton->setAutoRaise(false);

        horizontalLayout->addWidget(mCalculateFixedRangePerGroupButton);


        verticalLayout->addLayout(horizontalLayout);

        mStackedWidget->addWidget(mPageFixedRangePerGroup);

        gridLayout_2->addWidget(mStackedWidget, 1, 0, 1, 2);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 2);

        retranslateUi(QgsMeshElevationPropertiesWidgetBase);

        mSymbologyStackedWidget->setCurrentIndex(0);
        mStackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(QgsMeshElevationPropertiesWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshElevationPropertiesWidgetBase)
    {
        QgsMeshElevationPropertiesWidgetBase->setWindowTitle(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Raster Elevation Properties", nullptr));
        label_9->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Configuration", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Profile Chart Appearance", nullptr));
        label_6->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Style", nullptr));
        label_5->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Line style", nullptr));
        mLineStyleButton->setText(QString());
        label_8->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Limit", nullptr));
        label_7->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Fill style", nullptr));
        mFillStyleButton->setText(QString());
        label_4->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Scale", nullptr));
        label_11->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">The elevation will be taken from the mesh vertices.</span></p><p>Elevation scaling and offset can be used to manually correct elevation values from the layer. The scale is applied to the raster values before adding the offset.</p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Offset", nullptr));
        label_13->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Lower", nullptr));
        label_14->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Upper", nullptr));
        mLimitsLabel->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Limits", nullptr));
        label_15->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">The mesh layer is associated with a fixed elevation range.</span></p><p>This mode can be used when a layer has a single fixed elevation, or a range (slice) of elevation values. If a range is specified, mesh values will be extruded over this range.</p></body></html>", nullptr));
        mFixedRangePerBandLabel->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">Each group in the mesh layer is associated with a fixed elevation range.</span></p><p>This mode can be used when a layer has elevation data exposed through different dataset groups.</p></body></html>", nullptr));
        mCalculateFixedRangePerGroupButton->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsMeshElevationPropertiesWidgetBase: public Ui_QgsMeshElevationPropertiesWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHELEVATIONPROPERTIESWIDGETBASE_H
