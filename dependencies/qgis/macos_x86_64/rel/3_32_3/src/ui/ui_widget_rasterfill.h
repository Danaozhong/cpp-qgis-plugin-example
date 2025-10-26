/********************************************************************************
** Form generated from reading UI file 'widget_rasterfill.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_RASTERFILL_H
#define UI_WIDGET_RASTERFILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsfilecontentsourcelineedit.h"
#include "qgsopacitywidget.h"
#include "qgspropertyoverridebutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetRasterFill
{
public:
    QGridLayout *gridLayout_2;
    QgsPropertyOverrideButton *mRotationDDBtn;
    QgsImageSourceLineEdit *mImageSourceLineEdit;
    QgsPropertyOverrideButton *mWidthDDBtn;
    QGridLayout *gridLayout;
    QgsDoubleSpinBox *mSpinOffsetY;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QgsDoubleSpinBox *mSpinOffsetX;
    QSpacerItem *verticalSpacer;
    QComboBox *cboCoordinateMode;
    QHBoxLayout *horizontalLayout_4;
    QLabel *mLabelImagePreview;
    QSpacerItem *horizontalSpacer;
    QgsDoubleSpinBox *mRotationSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QgsDoubleSpinBox *mWidthSpinBox;
    QgsUnitSelectionWidget *mWidthUnitWidget;
    QgsPropertyOverrideButton *mFilenameDDBtn;
    QgsOpacityWidget *mOpacityWidget;
    QgsPropertyOverrideButton *mOpacityDDBtn;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *mRotationLabel;
    QLabel *label;
    QLabel *label_3;
    QLabel *mTextureWidthLabel;
    QgsPropertyOverrideButton *mOffsetDDBtn;

    void setupUi(QWidget *WidgetRasterFill)
    {
        if (WidgetRasterFill->objectName().isEmpty())
            WidgetRasterFill->setObjectName(QString::fromUtf8("WidgetRasterFill"));
        WidgetRasterFill->resize(338, 419);
        WidgetRasterFill->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_2 = new QGridLayout(WidgetRasterFill);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mRotationDDBtn = new QgsPropertyOverrideButton(WidgetRasterFill);
        mRotationDDBtn->setObjectName(QString::fromUtf8("mRotationDDBtn"));

        gridLayout_2->addWidget(mRotationDDBtn, 5, 3, 1, 1);

        mImageSourceLineEdit = new QgsImageSourceLineEdit(WidgetRasterFill);
        mImageSourceLineEdit->setObjectName(QString::fromUtf8("mImageSourceLineEdit"));
        mImageSourceLineEdit->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mImageSourceLineEdit, 1, 0, 1, 3);

        mWidthDDBtn = new QgsPropertyOverrideButton(WidgetRasterFill);
        mWidthDDBtn->setObjectName(QString::fromUtf8("mWidthDDBtn"));

        gridLayout_2->addWidget(mWidthDDBtn, 2, 3, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mSpinOffsetY = new QgsDoubleSpinBox(WidgetRasterFill);
        mSpinOffsetY->setObjectName(QString::fromUtf8("mSpinOffsetY"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSpinOffsetY->sizePolicy().hasHeightForWidth());
        mSpinOffsetY->setSizePolicy(sizePolicy);
        mSpinOffsetY->setDecimals(6);
        mSpinOffsetY->setMinimum(-99999999.989999994635582);
        mSpinOffsetY->setMaximum(99999999.989999994635582);
        mSpinOffsetY->setSingleStep(0.200000000000000);

        gridLayout->addWidget(mSpinOffsetY, 1, 0, 1, 1);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetRasterFill);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mOffsetUnitWidget, 0, 1, 2, 1);

        mSpinOffsetX = new QgsDoubleSpinBox(WidgetRasterFill);
        mSpinOffsetX->setObjectName(QString::fromUtf8("mSpinOffsetX"));
        sizePolicy.setHeightForWidth(mSpinOffsetX->sizePolicy().hasHeightForWidth());
        mSpinOffsetX->setSizePolicy(sizePolicy);
        mSpinOffsetX->setDecimals(6);
        mSpinOffsetX->setMinimum(-99999999.989999994635582);
        mSpinOffsetX->setMaximum(99999999.989999994635582);
        mSpinOffsetX->setSingleStep(0.200000000000000);

        gridLayout->addWidget(mSpinOffsetX, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 8, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 9, 0, 1, 1);

        cboCoordinateMode = new QComboBox(WidgetRasterFill);
        cboCoordinateMode->addItem(QString());
        cboCoordinateMode->addItem(QString());
        cboCoordinateMode->setObjectName(QString::fromUtf8("cboCoordinateMode"));

        gridLayout_2->addWidget(cboCoordinateMode, 3, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        mLabelImagePreview = new QLabel(WidgetRasterFill);
        mLabelImagePreview->setObjectName(QString::fromUtf8("mLabelImagePreview"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLabelImagePreview->sizePolicy().hasHeightForWidth());
        mLabelImagePreview->setSizePolicy(sizePolicy1);
        mLabelImagePreview->setMinimumSize(QSize(150, 150));
        mLabelImagePreview->setFrameShape(QFrame::Panel);
        mLabelImagePreview->setFrameShadow(QFrame::Sunken);
        mLabelImagePreview->setLineWidth(1);
        mLabelImagePreview->setMidLineWidth(0);

        horizontalLayout_4->addWidget(mLabelImagePreview);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 4);

        mRotationSpinBox = new QgsDoubleSpinBox(WidgetRasterFill);
        mRotationSpinBox->setObjectName(QString::fromUtf8("mRotationSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mRotationSpinBox->sizePolicy().hasHeightForWidth());
        mRotationSpinBox->setSizePolicy(sizePolicy2);
        mRotationSpinBox->setWrapping(true);
        mRotationSpinBox->setMinimum(-360.000000000000000);
        mRotationSpinBox->setMaximum(360.000000000000000);
        mRotationSpinBox->setSingleStep(0.500000000000000);

        gridLayout_2->addWidget(mRotationSpinBox, 5, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mWidthSpinBox = new QgsDoubleSpinBox(WidgetRasterFill);
        mWidthSpinBox->setObjectName(QString::fromUtf8("mWidthSpinBox"));
        sizePolicy.setHeightForWidth(mWidthSpinBox->sizePolicy().hasHeightForWidth());
        mWidthSpinBox->setSizePolicy(sizePolicy);
        mWidthSpinBox->setDecimals(6);
        mWidthSpinBox->setMaximum(99999999.000000000000000);
        mWidthSpinBox->setSingleStep(0.200000000000000);

        horizontalLayout_2->addWidget(mWidthSpinBox);

        mWidthUnitWidget = new QgsUnitSelectionWidget(WidgetRasterFill);
        mWidthUnitWidget->setObjectName(QString::fromUtf8("mWidthUnitWidget"));
        mWidthUnitWidget->setMinimumSize(QSize(0, 0));
        mWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(mWidthUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 2, 1, 1);

        mFilenameDDBtn = new QgsPropertyOverrideButton(WidgetRasterFill);
        mFilenameDDBtn->setObjectName(QString::fromUtf8("mFilenameDDBtn"));

        gridLayout_2->addWidget(mFilenameDDBtn, 1, 3, 1, 1);

        mOpacityWidget = new QgsOpacityWidget(WidgetRasterFill);
        mOpacityWidget->setObjectName(QString::fromUtf8("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mOpacityWidget, 4, 2, 1, 1);

        mOpacityDDBtn = new QgsPropertyOverrideButton(WidgetRasterFill);
        mOpacityDDBtn->setObjectName(QString::fromUtf8("mOpacityDDBtn"));

        gridLayout_2->addWidget(mOpacityDDBtn, 4, 3, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(WidgetRasterFill);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 1, 1, 1);

        label_4 = new QLabel(WidgetRasterFill);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 1, 1, 1, 1);

        label_7 = new QLabel(WidgetRasterFill);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 2, 1);

        gridLayout_3->setColumnStretch(0, 1);

        gridLayout_2->addLayout(gridLayout_3, 8, 0, 1, 2);

        mRotationLabel = new QLabel(WidgetRasterFill);
        mRotationLabel->setObjectName(QString::fromUtf8("mRotationLabel"));

        gridLayout_2->addWidget(mRotationLabel, 5, 0, 1, 2);

        label = new QLabel(WidgetRasterFill);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 4, 0, 1, 2);

        label_3 = new QLabel(WidgetRasterFill);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 3, 0, 1, 2);

        mTextureWidthLabel = new QLabel(WidgetRasterFill);
        mTextureWidthLabel->setObjectName(QString::fromUtf8("mTextureWidthLabel"));

        gridLayout_2->addWidget(mTextureWidthLabel, 2, 0, 1, 2);

        mOffsetDDBtn = new QgsPropertyOverrideButton(WidgetRasterFill);
        mOffsetDDBtn->setObjectName(QString::fromUtf8("mOffsetDDBtn"));

        gridLayout_2->addWidget(mOffsetDDBtn, 8, 3, 1, 1);

#if QT_CONFIG(shortcut)
        label_7->setBuddy(mSpinOffsetX);
        mRotationLabel->setBuddy(mRotationSpinBox);
        label_3->setBuddy(cboCoordinateMode);
        mTextureWidthLabel->setBuddy(mWidthSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mImageSourceLineEdit, mFilenameDDBtn);
        QWidget::setTabOrder(mFilenameDDBtn, mWidthSpinBox);
        QWidget::setTabOrder(mWidthSpinBox, mWidthUnitWidget);
        QWidget::setTabOrder(mWidthUnitWidget, mWidthDDBtn);
        QWidget::setTabOrder(mWidthDDBtn, cboCoordinateMode);
        QWidget::setTabOrder(cboCoordinateMode, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, mOpacityDDBtn);
        QWidget::setTabOrder(mOpacityDDBtn, mRotationSpinBox);
        QWidget::setTabOrder(mRotationSpinBox, mRotationDDBtn);
        QWidget::setTabOrder(mRotationDDBtn, mSpinOffsetX);
        QWidget::setTabOrder(mSpinOffsetX, mSpinOffsetY);
        QWidget::setTabOrder(mSpinOffsetY, mOffsetUnitWidget);

        retranslateUi(WidgetRasterFill);

        QMetaObject::connectSlotsByName(WidgetRasterFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetRasterFill)
    {
        mRotationDDBtn->setText(QCoreApplication::translate("WidgetRasterFill", "\342\200\246", nullptr));
        mWidthDDBtn->setText(QCoreApplication::translate("WidgetRasterFill", "\342\200\246", nullptr));
        cboCoordinateMode->setItemText(0, QCoreApplication::translate("WidgetRasterFill", "Object", nullptr));
        cboCoordinateMode->setItemText(1, QCoreApplication::translate("WidgetRasterFill", "Viewport", nullptr));

        mLabelImagePreview->setText(QString());
        mRotationSpinBox->setSuffix(QCoreApplication::translate("WidgetRasterFill", " \302\260", nullptr));
        mWidthSpinBox->setSpecialValueText(QCoreApplication::translate("WidgetRasterFill", "Original", nullptr));
        mFilenameDDBtn->setText(QCoreApplication::translate("WidgetRasterFill", "\342\200\246", nullptr));
        mOpacityDDBtn->setText(QCoreApplication::translate("WidgetRasterFill", "\342\200\246", nullptr));
        label_2->setText(QCoreApplication::translate("WidgetRasterFill", "x", nullptr));
        label_4->setText(QCoreApplication::translate("WidgetRasterFill", "y", nullptr));
        label_7->setText(QCoreApplication::translate("WidgetRasterFill", "Offset", nullptr));
        mRotationLabel->setText(QCoreApplication::translate("WidgetRasterFill", "Rotation", nullptr));
        label->setText(QCoreApplication::translate("WidgetRasterFill", "Opacity", nullptr));
        label_3->setText(QCoreApplication::translate("WidgetRasterFill", "Coord mode", nullptr));
        mTextureWidthLabel->setText(QCoreApplication::translate("WidgetRasterFill", "Image width", nullptr));
        mOffsetDDBtn->setText(QCoreApplication::translate("WidgetRasterFill", "\342\200\246", nullptr));
        (void)WidgetRasterFill;
    } // retranslateUi

};

namespace Ui {
    class WidgetRasterFill: public Ui_WidgetRasterFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_RASTERFILL_H
