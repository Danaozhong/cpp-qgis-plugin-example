/********************************************************************************
** Form generated from reading UI file 'qgsvectorelevationpropertieswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORELEVATIONPROPERTIESWIDGETBASE_H
#define UI_QGSVECTORELEVATIONPROPERTIESWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgspropertyoverridebutton.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorElevationPropertiesWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *mElevationGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *mLabelScale;
    QLabel *mLabelClampingExplanation;
    QLabel *mOffsetLabel;
    QgsDoubleSpinBox *mOffsetZSpinBox;
    QgsDoubleSpinBox *mScaleZSpinBox;
    QgsPropertyOverrideButton *mOffsetDDBtn;
    QComboBox *mComboClamping;
    QGroupBox *mBindingGroupBox;
    QGridLayout *gridLayout_3;
    QComboBox *mComboBinding;
    QFrame *line_4;
    QLabel *mLabelBindingExplanation;
    QGroupBox *mExtrusionGroupBox;
    QGridLayout *gridLayout_4;
    QFrame *line_5;
    QLabel *label_3;
    QgsDoubleSpinBox *mExtrusionSpinBox;
    QgsPropertyOverrideButton *mExtrusionDDBtn;
    QLabel *mLabelExtrusionExplanation;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QComboBox *mTypeComboBox;
    QLabel *label_7;
    QStackedWidget *mInterpretationStackedWidget;
    QWidget *mPageIndividualFeatures;
    QGridLayout *gridLayout_5;
    QgsSymbolButton *mLineStyleButton;
    QLabel *label_6;
    QgsSymbolButton *mFillStyleButton;
    QCheckBox *mCheckRespectLayerSymbology;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QgsSymbolButton *mMarkerStyleButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QWidget *mPageContinuousSurface;
    QGridLayout *gridLayout_7;
    QStackedWidget *mSymbologyStackedWidget;
    QWidget *mPageLine;
    QGridLayout *gridLayout_8;
    QLabel *label_9;
    QgsSymbolButton *mSurfaceLineStyleButton;
    QWidget *mPageFill;
    QGridLayout *gridLayout_6;
    QLabel *label_14;
    QgsSymbolButton *mSurfaceFillStyleButton;
    QgsDoubleSpinBox *mElevationLimitSpinBox;
    QLabel *label_10;
    QCheckBox *mCheckBoxShowMarkersAtSampledPoints;
    QLabel *label_8;
    QComboBox *mStyleComboBox;
    QHBoxLayout *horizontalLayout_3;
    QgsSymbolButton *mSurfaceMarkerStyleButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_11;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsVectorElevationPropertiesWidgetBase)
    {
        if (QgsVectorElevationPropertiesWidgetBase->objectName().isEmpty())
            QgsVectorElevationPropertiesWidgetBase->setObjectName(QString::fromUtf8("QgsVectorElevationPropertiesWidgetBase"));
        QgsVectorElevationPropertiesWidgetBase->resize(555, 779);
        verticalLayout = new QVBoxLayout(QgsVectorElevationPropertiesWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mElevationGroupBox = new QGroupBox(QgsVectorElevationPropertiesWidgetBase);
        mElevationGroupBox->setObjectName(QString::fromUtf8("mElevationGroupBox"));
        mElevationGroupBox->setFocusPolicy(Qt::StrongFocus);
        mElevationGroupBox->setCheckable(false);
        mElevationGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("vectorgeneral")));
        gridLayout_2 = new QGridLayout(mElevationGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mLabelScale = new QLabel(mElevationGroupBox);
        mLabelScale->setObjectName(QString::fromUtf8("mLabelScale"));

        gridLayout_2->addWidget(mLabelScale, 2, 0, 1, 1);

        mLabelClampingExplanation = new QLabel(mElevationGroupBox);
        mLabelClampingExplanation->setObjectName(QString::fromUtf8("mLabelClampingExplanation"));
        mLabelClampingExplanation->setWordWrap(true);

        gridLayout_2->addWidget(mLabelClampingExplanation, 1, 0, 1, 3);

        mOffsetLabel = new QLabel(mElevationGroupBox);
        mOffsetLabel->setObjectName(QString::fromUtf8("mOffsetLabel"));

        gridLayout_2->addWidget(mOffsetLabel, 3, 0, 1, 1);

        mOffsetZSpinBox = new QgsDoubleSpinBox(mElevationGroupBox);
        mOffsetZSpinBox->setObjectName(QString::fromUtf8("mOffsetZSpinBox"));
        mOffsetZSpinBox->setDecimals(6);
        mOffsetZSpinBox->setMinimum(-99999999999.000000000000000);
        mOffsetZSpinBox->setMaximum(99999999999.000000000000000);

        gridLayout_2->addWidget(mOffsetZSpinBox, 3, 1, 1, 2);

        mScaleZSpinBox = new QgsDoubleSpinBox(mElevationGroupBox);
        mScaleZSpinBox->setObjectName(QString::fromUtf8("mScaleZSpinBox"));
        mScaleZSpinBox->setDecimals(6);
        mScaleZSpinBox->setMinimum(0.000000000000000);
        mScaleZSpinBox->setMaximum(99999999999.000000000000000);
        mScaleZSpinBox->setValue(1.000000000000000);

        gridLayout_2->addWidget(mScaleZSpinBox, 2, 1, 1, 2);

        mOffsetDDBtn = new QgsPropertyOverrideButton(mElevationGroupBox);
        mOffsetDDBtn->setObjectName(QString::fromUtf8("mOffsetDDBtn"));

        gridLayout_2->addWidget(mOffsetDDBtn, 3, 3, 1, 1);

        mComboClamping = new QComboBox(mElevationGroupBox);
        mComboClamping->setObjectName(QString::fromUtf8("mComboClamping"));

        gridLayout_2->addWidget(mComboClamping, 0, 0, 1, 4);

        gridLayout_2->setColumnStretch(1, 1);

        verticalLayout->addWidget(mElevationGroupBox);

        mBindingGroupBox = new QGroupBox(QgsVectorElevationPropertiesWidgetBase);
        mBindingGroupBox->setObjectName(QString::fromUtf8("mBindingGroupBox"));
        mBindingGroupBox->setFocusPolicy(Qt::StrongFocus);
        mBindingGroupBox->setCheckable(false);
        mBindingGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("vectorgeneral")));
        gridLayout_3 = new QGridLayout(mBindingGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mComboBinding = new QComboBox(mBindingGroupBox);
        mComboBinding->setObjectName(QString::fromUtf8("mComboBinding"));

        gridLayout_3->addWidget(mComboBinding, 0, 0, 1, 2);

        line_4 = new QFrame(mBindingGroupBox);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_4, 2, 0, 1, 1);

        mLabelBindingExplanation = new QLabel(mBindingGroupBox);
        mLabelBindingExplanation->setObjectName(QString::fromUtf8("mLabelBindingExplanation"));
        mLabelBindingExplanation->setWordWrap(true);

        gridLayout_3->addWidget(mLabelBindingExplanation, 1, 0, 1, 2);


        verticalLayout->addWidget(mBindingGroupBox);

        mExtrusionGroupBox = new QGroupBox(QgsVectorElevationPropertiesWidgetBase);
        mExtrusionGroupBox->setObjectName(QString::fromUtf8("mExtrusionGroupBox"));
        mExtrusionGroupBox->setFocusPolicy(Qt::StrongFocus);
        mExtrusionGroupBox->setCheckable(true);
        mExtrusionGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("vectorgeneral")));
        gridLayout_4 = new QGridLayout(mExtrusionGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        line_5 = new QFrame(mExtrusionGroupBox);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_5, 3, 0, 1, 1);

        label_3 = new QLabel(mExtrusionGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 1, 0, 1, 1);

        mExtrusionSpinBox = new QgsDoubleSpinBox(mExtrusionGroupBox);
        mExtrusionSpinBox->setObjectName(QString::fromUtf8("mExtrusionSpinBox"));
        mExtrusionSpinBox->setDecimals(6);
        mExtrusionSpinBox->setMinimum(-99999999999.000000000000000);
        mExtrusionSpinBox->setMaximum(99999999999.000000000000000);

        gridLayout_4->addWidget(mExtrusionSpinBox, 1, 1, 1, 1);

        mExtrusionDDBtn = new QgsPropertyOverrideButton(mExtrusionGroupBox);
        mExtrusionDDBtn->setObjectName(QString::fromUtf8("mExtrusionDDBtn"));

        gridLayout_4->addWidget(mExtrusionDDBtn, 1, 2, 1, 1);

        mLabelExtrusionExplanation = new QLabel(mExtrusionGroupBox);
        mLabelExtrusionExplanation->setObjectName(QString::fromUtf8("mLabelExtrusionExplanation"));
        mLabelExtrusionExplanation->setTextFormat(Qt::PlainText);
        mLabelExtrusionExplanation->setWordWrap(true);

        gridLayout_4->addWidget(mLabelExtrusionExplanation, 0, 0, 1, 3);


        verticalLayout->addWidget(mExtrusionGroupBox);

        groupBox_2 = new QGroupBox(QgsVectorElevationPropertiesWidgetBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));

        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(QgsVectorElevationPropertiesWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mTypeComboBox = new QComboBox(groupBox);
        mTypeComboBox->setObjectName(QString::fromUtf8("mTypeComboBox"));

        gridLayout->addWidget(mTypeComboBox, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        mInterpretationStackedWidget = new QStackedWidget(groupBox);
        mInterpretationStackedWidget->setObjectName(QString::fromUtf8("mInterpretationStackedWidget"));
        mPageIndividualFeatures = new QWidget();
        mPageIndividualFeatures->setObjectName(QString::fromUtf8("mPageIndividualFeatures"));
        gridLayout_5 = new QGridLayout(mPageIndividualFeatures);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        mLineStyleButton = new QgsSymbolButton(mPageIndividualFeatures);
        mLineStyleButton->setObjectName(QString::fromUtf8("mLineStyleButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLineStyleButton->sizePolicy().hasHeightForWidth());
        mLineStyleButton->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(mLineStyleButton, 3, 1, 1, 1);

        label_6 = new QLabel(mPageIndividualFeatures);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_5->addWidget(label_6, 4, 0, 1, 1);

        mFillStyleButton = new QgsSymbolButton(mPageIndividualFeatures);
        mFillStyleButton->setObjectName(QString::fromUtf8("mFillStyleButton"));
        sizePolicy.setHeightForWidth(mFillStyleButton->sizePolicy().hasHeightForWidth());
        mFillStyleButton->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(mFillStyleButton, 4, 1, 1, 1);

        mCheckRespectLayerSymbology = new QCheckBox(mPageIndividualFeatures);
        mCheckRespectLayerSymbology->setObjectName(QString::fromUtf8("mCheckRespectLayerSymbology"));

        gridLayout_5->addWidget(mCheckRespectLayerSymbology, 0, 0, 1, 2);

        label_4 = new QLabel(mPageIndividualFeatures);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_5->addWidget(label_4, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        mMarkerStyleButton = new QgsSymbolButton(mPageIndividualFeatures);
        mMarkerStyleButton->setObjectName(QString::fromUtf8("mMarkerStyleButton"));
        sizePolicy.setHeightForWidth(mMarkerStyleButton->sizePolicy().hasHeightForWidth());
        mMarkerStyleButton->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(mMarkerStyleButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_5->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        label_5 = new QLabel(mPageIndividualFeatures);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_5->addWidget(label_5, 2, 0, 1, 1);

        gridLayout_5->setColumnStretch(0, 1);
        gridLayout_5->setColumnStretch(1, 2);
        mInterpretationStackedWidget->addWidget(mPageIndividualFeatures);
        mPageContinuousSurface = new QWidget();
        mPageContinuousSurface->setObjectName(QString::fromUtf8("mPageContinuousSurface"));
        gridLayout_7 = new QGridLayout(mPageContinuousSurface);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        mSymbologyStackedWidget = new QStackedWidget(mPageContinuousSurface);
        mSymbologyStackedWidget->setObjectName(QString::fromUtf8("mSymbologyStackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mSymbologyStackedWidget->sizePolicy().hasHeightForWidth());
        mSymbologyStackedWidget->setSizePolicy(sizePolicy1);
        mPageLine = new QWidget();
        mPageLine->setObjectName(QString::fromUtf8("mPageLine"));
        gridLayout_8 = new QGridLayout(mPageLine);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(mPageLine);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_8->addWidget(label_9, 0, 0, 1, 1);

        mSurfaceLineStyleButton = new QgsSymbolButton(mPageLine);
        mSurfaceLineStyleButton->setObjectName(QString::fromUtf8("mSurfaceLineStyleButton"));
        sizePolicy.setHeightForWidth(mSurfaceLineStyleButton->sizePolicy().hasHeightForWidth());
        mSurfaceLineStyleButton->setSizePolicy(sizePolicy);

        gridLayout_8->addWidget(mSurfaceLineStyleButton, 0, 1, 1, 1);

        gridLayout_8->setColumnStretch(0, 1);
        gridLayout_8->setColumnStretch(1, 2);
        mSymbologyStackedWidget->addWidget(mPageLine);
        mPageFill = new QWidget();
        mPageFill->setObjectName(QString::fromUtf8("mPageFill"));
        gridLayout_6 = new QGridLayout(mPageFill);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(mPageFill);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_6->addWidget(label_14, 1, 0, 1, 1);

        mSurfaceFillStyleButton = new QgsSymbolButton(mPageFill);
        mSurfaceFillStyleButton->setObjectName(QString::fromUtf8("mSurfaceFillStyleButton"));
        sizePolicy.setHeightForWidth(mSurfaceFillStyleButton->sizePolicy().hasHeightForWidth());
        mSurfaceFillStyleButton->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(mSurfaceFillStyleButton, 0, 1, 1, 1);

        mElevationLimitSpinBox = new QgsDoubleSpinBox(mPageFill);
        mElevationLimitSpinBox->setObjectName(QString::fromUtf8("mElevationLimitSpinBox"));
        mElevationLimitSpinBox->setDecimals(6);
        mElevationLimitSpinBox->setMinimum(-99999.000000000000000);
        mElevationLimitSpinBox->setMaximum(99999.000000000000000);

        gridLayout_6->addWidget(mElevationLimitSpinBox, 1, 1, 1, 1);

        label_10 = new QLabel(mPageFill);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_6->addWidget(label_10, 0, 0, 1, 1);

        gridLayout_6->setColumnStretch(0, 1);
        gridLayout_6->setColumnStretch(1, 2);
        mSymbologyStackedWidget->addWidget(mPageFill);

        gridLayout_7->addWidget(mSymbologyStackedWidget, 1, 0, 1, 2);

        mCheckBoxShowMarkersAtSampledPoints = new QCheckBox(mPageContinuousSurface);
        mCheckBoxShowMarkersAtSampledPoints->setObjectName(QString::fromUtf8("mCheckBoxShowMarkersAtSampledPoints"));

        gridLayout_7->addWidget(mCheckBoxShowMarkersAtSampledPoints, 2, 0, 1, 2);

        label_8 = new QLabel(mPageContinuousSurface);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_7->addWidget(label_8, 0, 0, 1, 1);

        mStyleComboBox = new QComboBox(mPageContinuousSurface);
        mStyleComboBox->setObjectName(QString::fromUtf8("mStyleComboBox"));

        gridLayout_7->addWidget(mStyleComboBox, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        mSurfaceMarkerStyleButton = new QgsSymbolButton(mPageContinuousSurface);
        mSurfaceMarkerStyleButton->setObjectName(QString::fromUtf8("mSurfaceMarkerStyleButton"));
        sizePolicy.setHeightForWidth(mSurfaceMarkerStyleButton->sizePolicy().hasHeightForWidth());
        mSurfaceMarkerStyleButton->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(mSurfaceMarkerStyleButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout_7->addLayout(horizontalLayout_3, 3, 1, 1, 1);

        label_11 = new QLabel(mPageContinuousSurface);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_7->addWidget(label_11, 3, 0, 1, 1);

        gridLayout_7->setColumnStretch(0, 1);
        gridLayout_7->setColumnStretch(1, 2);
        mInterpretationStackedWidget->addWidget(mPageContinuousSurface);

        gridLayout->addWidget(mInterpretationStackedWidget, 1, 0, 1, 2);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);

        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mElevationGroupBox, mComboClamping);
        QWidget::setTabOrder(mComboClamping, mScaleZSpinBox);
        QWidget::setTabOrder(mScaleZSpinBox, mOffsetZSpinBox);
        QWidget::setTabOrder(mOffsetZSpinBox, mOffsetDDBtn);
        QWidget::setTabOrder(mOffsetDDBtn, mBindingGroupBox);
        QWidget::setTabOrder(mBindingGroupBox, mComboBinding);
        QWidget::setTabOrder(mComboBinding, mExtrusionGroupBox);
        QWidget::setTabOrder(mExtrusionGroupBox, mExtrusionSpinBox);
        QWidget::setTabOrder(mExtrusionSpinBox, mExtrusionDDBtn);
        QWidget::setTabOrder(mExtrusionDDBtn, mTypeComboBox);
        QWidget::setTabOrder(mTypeComboBox, mCheckRespectLayerSymbology);
        QWidget::setTabOrder(mCheckRespectLayerSymbology, mMarkerStyleButton);
        QWidget::setTabOrder(mMarkerStyleButton, mLineStyleButton);
        QWidget::setTabOrder(mLineStyleButton, mFillStyleButton);
        QWidget::setTabOrder(mFillStyleButton, mStyleComboBox);
        QWidget::setTabOrder(mStyleComboBox, mSurfaceLineStyleButton);
        QWidget::setTabOrder(mSurfaceLineStyleButton, mSurfaceFillStyleButton);
        QWidget::setTabOrder(mSurfaceFillStyleButton, mCheckBoxShowMarkersAtSampledPoints);

        retranslateUi(QgsVectorElevationPropertiesWidgetBase);

        mInterpretationStackedWidget->setCurrentIndex(1);
        mSymbologyStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsVectorElevationPropertiesWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsVectorElevationPropertiesWidgetBase)
    {
        QgsVectorElevationPropertiesWidgetBase->setWindowTitle(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Vector Elevation Properties", nullptr));
        mElevationGroupBox->setTitle(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Elevation Clamping", nullptr));
        mLabelScale->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Scale", nullptr));
        mLabelClampingExplanation->setText(QString());
        mOffsetLabel->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Offset", nullptr));
        mOffsetDDBtn->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "\342\200\246", nullptr));
        mBindingGroupBox->setTitle(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Elevation Binding", nullptr));
        mLabelBindingExplanation->setText(QString());
        mExtrusionGroupBox->setTitle(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Enable Extrusion", nullptr));
        label_3->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Height", nullptr));
        mExtrusionDDBtn->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "\342\200\246", nullptr));
        mLabelExtrusionExplanation->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Extrusion controls how high features extend vertically above their base.", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "GroupBox", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Profile Chart Appearance", nullptr));
        label_7->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Interpretation", nullptr));
        mLineStyleButton->setText(QString());
        label_6->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Fill style", nullptr));
        mFillStyleButton->setText(QString());
#if QT_CONFIG(tooltip)
        mCheckRespectLayerSymbology->setToolTip(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "If checked, then features will be shown in profile charts using the same symbols or colors as they use on 2D maps.", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckRespectLayerSymbology->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Respect layer's symbology", nullptr));
        label_4->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Line style", nullptr));
        mMarkerStyleButton->setText(QString());
        label_5->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Marker style", nullptr));
        label_9->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Line style", nullptr));
        mSurfaceLineStyleButton->setText(QString());
        label_14->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Limit", nullptr));
        mSurfaceFillStyleButton->setText(QString());
        label_10->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Fill style", nullptr));
        mCheckBoxShowMarkersAtSampledPoints->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Show markers at sampled points", nullptr));
        label_8->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Style", nullptr));
        mSurfaceMarkerStyleButton->setText(QString());
        label_11->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Marker style", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsVectorElevationPropertiesWidgetBase: public Ui_QgsVectorElevationPropertiesWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORELEVATIONPROPERTIESWIDGETBASE_H
