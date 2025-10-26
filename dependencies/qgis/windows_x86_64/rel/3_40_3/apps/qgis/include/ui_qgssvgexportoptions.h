/********************************************************************************
** Form generated from reading UI file 'qgssvgexportoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSVGEXPORTOPTIONS_H
#define UI_QGSSVGEXPORTOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsSvgExportOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *mSimplifyGeometriesCheckbox;
    QCheckBox *mIncludeMetadataCheckbox;
    QLabel *label_6;
    QCheckBox *mForceVectorCheckBox;
    QCheckBox *chkMapLayersAsGroup;
    QComboBox *mTextRenderFormatComboBox;
    QgsCollapsibleGroupBoxBasic *mClipToContentGroupBox;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_5;
    QgsDoubleSpinBox *mTopMarginSpinBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QgsDoubleSpinBox *mLeftMarginSpinBox;
    QLabel *label_11;
    QgsDoubleSpinBox *mRightMarginSpinBox;
    QLabel *label_12;
    QgsDoubleSpinBox *mBottomMarginSpinBox;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QgsCollapsibleGroupBoxBasic *groupBox_2;
    QGridLayout *gridLayout_2;
    QCheckBox *mDisableRasterTilingCheckBox;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *mHelpButtonBox;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *mOpenAfterExportingCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsSvgExportOptionsDialog)
    {
        if (QgsSvgExportOptionsDialog->objectName().isEmpty())
            QgsSvgExportOptionsDialog->setObjectName(QString::fromUtf8("QgsSvgExportOptionsDialog"));
        QgsSvgExportOptionsDialog->resize(565, 486);
        verticalLayout = new QVBoxLayout(QgsSvgExportOptionsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(QgsSvgExportOptionsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mSimplifyGeometriesCheckbox = new QCheckBox(groupBox);
        mSimplifyGeometriesCheckbox->setObjectName(QString::fromUtf8("mSimplifyGeometriesCheckbox"));
        mSimplifyGeometriesCheckbox->setChecked(true);

        gridLayout->addWidget(mSimplifyGeometriesCheckbox, 3, 0, 1, 2);

        mIncludeMetadataCheckbox = new QCheckBox(groupBox);
        mIncludeMetadataCheckbox->setObjectName(QString::fromUtf8("mIncludeMetadataCheckbox"));
        mIncludeMetadataCheckbox->setChecked(true);

        gridLayout->addWidget(mIncludeMetadataCheckbox, 2, 0, 1, 2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        mForceVectorCheckBox = new QCheckBox(groupBox);
        mForceVectorCheckBox->setObjectName(QString::fromUtf8("mForceVectorCheckBox"));

        gridLayout->addWidget(mForceVectorCheckBox, 1, 0, 1, 2);

        chkMapLayersAsGroup = new QCheckBox(groupBox);
        chkMapLayersAsGroup->setObjectName(QString::fromUtf8("chkMapLayersAsGroup"));
        chkMapLayersAsGroup->setChecked(false);

        gridLayout->addWidget(chkMapLayersAsGroup, 0, 0, 1, 2);

        mTextRenderFormatComboBox = new QComboBox(groupBox);
        mTextRenderFormatComboBox->setObjectName(QString::fromUtf8("mTextRenderFormatComboBox"));

        gridLayout->addWidget(mTextRenderFormatComboBox, 4, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox);

        mClipToContentGroupBox = new QgsCollapsibleGroupBoxBasic(QgsSvgExportOptionsDialog);
        mClipToContentGroupBox->setObjectName(QString::fromUtf8("mClipToContentGroupBox"));
        mClipToContentGroupBox->setCheckable(true);
        mClipToContentGroupBox->setChecked(false);
        verticalLayout_5 = new QVBoxLayout(mClipToContentGroupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mTopMarginSpinBox = new QgsDoubleSpinBox(mClipToContentGroupBox);
        mTopMarginSpinBox->setObjectName(QString::fromUtf8("mTopMarginSpinBox"));
        mTopMarginSpinBox->setSingleStep(0.100000000000000);

        gridLayout_5->addWidget(mTopMarginSpinBox, 0, 2, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(mClipToContentGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        mLeftMarginSpinBox = new QgsDoubleSpinBox(mClipToContentGroupBox);
        mLeftMarginSpinBox->setObjectName(QString::fromUtf8("mLeftMarginSpinBox"));
        mLeftMarginSpinBox->setSingleStep(0.100000000000000);

        horizontalLayout_7->addWidget(mLeftMarginSpinBox);

        label_11 = new QLabel(mClipToContentGroupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_7->addWidget(label_11);

        mRightMarginSpinBox = new QgsDoubleSpinBox(mClipToContentGroupBox);
        mRightMarginSpinBox->setObjectName(QString::fromUtf8("mRightMarginSpinBox"));
        mRightMarginSpinBox->setSingleStep(0.100000000000000);

        horizontalLayout_7->addWidget(mRightMarginSpinBox);


        gridLayout_5->addLayout(horizontalLayout_7, 1, 0, 1, 4);

        label_12 = new QLabel(mClipToContentGroupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_5->addWidget(label_12, 2, 1, 1, 1);

        mBottomMarginSpinBox = new QgsDoubleSpinBox(mClipToContentGroupBox);
        mBottomMarginSpinBox->setObjectName(QString::fromUtf8("mBottomMarginSpinBox"));
        mBottomMarginSpinBox->setSingleStep(0.100000000000000);

        gridLayout_5->addWidget(mBottomMarginSpinBox, 2, 2, 1, 1);

        label_4 = new QLabel(mClipToContentGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_5->addWidget(label_4, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout_5);


        verticalLayout->addWidget(mClipToContentGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        groupBox_2 = new QgsCollapsibleGroupBoxBasic(QgsSvgExportOptionsDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mDisableRasterTilingCheckBox = new QCheckBox(groupBox_2);
        mDisableRasterTilingCheckBox->setObjectName(QString::fromUtf8("mDisableRasterTilingCheckBox"));
        mDisableRasterTilingCheckBox->setChecked(false);

        gridLayout_2->addWidget(mDisableRasterTilingCheckBox, 0, 0, 1, 2);


        verticalLayout->addWidget(groupBox_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mHelpButtonBox = new QDialogButtonBox(QgsSvgExportOptionsDialog);
        mHelpButtonBox->setObjectName(QString::fromUtf8("mHelpButtonBox"));
        mHelpButtonBox->setOrientation(Qt::Horizontal);
        mHelpButtonBox->setStandardButtons(QDialogButtonBox::Help);

        horizontalLayout->addWidget(mHelpButtonBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        mOpenAfterExportingCheckBox = new QCheckBox(QgsSvgExportOptionsDialog);
        mOpenAfterExportingCheckBox->setObjectName(QString::fromUtf8("mOpenAfterExportingCheckBox"));

        horizontalLayout->addWidget(mOpenAfterExportingCheckBox);

        buttonBox = new QDialogButtonBox(QgsSvgExportOptionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(chkMapLayersAsGroup, mForceVectorCheckBox);
        QWidget::setTabOrder(mForceVectorCheckBox, mIncludeMetadataCheckbox);
        QWidget::setTabOrder(mIncludeMetadataCheckbox, mSimplifyGeometriesCheckbox);
        QWidget::setTabOrder(mSimplifyGeometriesCheckbox, mTextRenderFormatComboBox);
        QWidget::setTabOrder(mTextRenderFormatComboBox, mClipToContentGroupBox);
        QWidget::setTabOrder(mClipToContentGroupBox, mTopMarginSpinBox);
        QWidget::setTabOrder(mTopMarginSpinBox, mLeftMarginSpinBox);
        QWidget::setTabOrder(mLeftMarginSpinBox, mRightMarginSpinBox);
        QWidget::setTabOrder(mRightMarginSpinBox, mBottomMarginSpinBox);
        QWidget::setTabOrder(mBottomMarginSpinBox, mDisableRasterTilingCheckBox);

        retranslateUi(QgsSvgExportOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsSvgExportOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsSvgExportOptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsSvgExportOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsSvgExportOptionsDialog)
    {
        QgsSvgExportOptionsDialog->setWindowTitle(QCoreApplication::translate("QgsSvgExportOptionsDialog", "SVG Export Options", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsSvgExportOptionsDialog", "Export Options", nullptr));
        mSimplifyGeometriesCheckbox->setText(QCoreApplication::translate("QgsSvgExportOptionsDialog", "Simplify geometries to reduce output file size", nullptr));
        mIncludeMetadataCheckbox->setText(QCoreApplication::translate("QgsSvgExportOptionsDialog", "Export RDF metadata (title, author, etc.)", nullptr));
        label_6->setText(QCoreApplication::translate("QgsSvgExportOptionsDialog", "Text export", nullptr));
#if QT_CONFIG(tooltip)
        mForceVectorCheckBox->setToolTip(QCoreApplication::translate("QgsSvgExportOptionsDialog", "If checked, the layout will always be kept as vector objects when exported to a compatible format, even if the appearance of the resultant file does not match the layouts settings. If unchecked, some elements in the layout may be rasterized in order to keep their appearance intact.", nullptr));
#endif // QT_CONFIG(tooltip)
        mForceVectorCheckBox->setText(QCoreApplication::translate("QgsSvgExportOptionsDialog", "Always export as vectors", nullptr));
        chkMapLayersAsGroup->setText(QCoreApplication::translate("QgsSvgExportOptionsDialog", "Export map layers as SVG groups", nullptr));
        mClipToContentGroupBox->setTitle(QCoreApplication::translate("QgsSvgExportOptionsDialog", "Crop to Content", nullptr));
        label_5->setText(QCoreApplication::translate("QgsSvgExportOptionsDialog", "Left", nullptr));
        label_11->setText(QCoreApplication::translate("QgsSvgExportOptionsDialog", "Right", nullptr));
        label_12->setText(QCoreApplication::translate("QgsSvgExportOptionsDialog", "Bottom", nullptr));
        label_4->setText(QCoreApplication::translate("QgsSvgExportOptionsDialog", "Top margin (mm)", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsSvgExportOptionsDialog", "Advanced Options", nullptr));
#if QT_CONFIG(tooltip)
        mDisableRasterTilingCheckBox->setToolTip(QCoreApplication::translate("QgsSvgExportOptionsDialog", "Disables tiled rendering of raster layers. This setting may improve the export quality in some circumstances, at the cost of much greater memory usage during exports.", nullptr));
#endif // QT_CONFIG(tooltip)
        mDisableRasterTilingCheckBox->setText(QCoreApplication::translate("QgsSvgExportOptionsDialog", "Disable tiled raster layer exports", nullptr));
        mOpenAfterExportingCheckBox->setText(QCoreApplication::translate("QgsSvgExportOptionsDialog", "Open file after exporting", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsSvgExportOptionsDialog: public Ui_QgsSvgExportOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSVGEXPORTOPTIONS_H
