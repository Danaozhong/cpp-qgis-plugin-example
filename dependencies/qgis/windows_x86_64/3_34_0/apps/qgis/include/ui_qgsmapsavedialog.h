/********************************************************************************
** Form generated from reading UI file 'qgsmapsavedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMAPSAVEDIALOG_H
#define UI_QGSMAPSAVEDIALOG_H

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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgscollapsiblegroupbox.h"
#include "qgsextentgroupbox.h"
#include "qgsratiolockbutton.h"
#include "qgsscalewidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMapSaveDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QCheckBox *mSaveWorldFile;
    QCheckBox *mExportMetadataCheckBox;
    QgsScaleWidget *mScaleWidget;
    QgsExtentGroupBox *mExtentGroupBox;
    QgsCollapsibleGroupBoxBasic *mGeoPDFGroupBox;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *mGeoPDFOptionsStackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QLabel *mGeoPdfUnavailableReason;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QComboBox *mGeoPdfFormatComboBox;
    QLabel *label;
    QCheckBox *mExportGeoPdfFeaturesCheckBox;
    QgsCollapsibleGroupBox *mAdvancedPdfSettings;
    QGridLayout *gridLayout_3;
    QLabel *mTextExportLabel;
    QComboBox *mTextRenderFormatComboBox;
    QCheckBox *mSimplifyGeometriesCheckbox;
    QCheckBox *mSaveAsRaster;
    QLabel *label_4;
    QCheckBox *mDrawAnnotations;
    QCheckBox *mDrawDecorations;
    QLabel *label_3;
    QGridLayout *gridLayout_4;
    QgsSpinBox *mOutputWidthSpinBox;
    QHBoxLayout *hboxLayout;
    QgsRatioLockButton *mLockAspectRatio;
    QgsSpinBox *mOutputHeightSpinBox;
    QgsSpinBox *mResolutionSpinBox;
    QLabel *label_1;
    QLabel *mInfo;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsMapSaveDialog)
    {
        if (QgsMapSaveDialog->objectName().isEmpty())
            QgsMapSaveDialog->setObjectName(QString::fromUtf8("QgsMapSaveDialog"));
        QgsMapSaveDialog->resize(600, 629);
        verticalLayout = new QVBoxLayout(QgsMapSaveDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(QgsMapSaveDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        mSaveWorldFile = new QCheckBox(QgsMapSaveDialog);
        mSaveWorldFile->setObjectName(QString::fromUtf8("mSaveWorldFile"));
        mSaveWorldFile->setChecked(true);

        gridLayout->addWidget(mSaveWorldFile, 7, 0, 1, 2);

        mExportMetadataCheckBox = new QCheckBox(QgsMapSaveDialog);
        mExportMetadataCheckBox->setObjectName(QString::fromUtf8("mExportMetadataCheckBox"));
        mExportMetadataCheckBox->setChecked(true);

        gridLayout->addWidget(mExportMetadataCheckBox, 8, 0, 1, 2);

        mScaleWidget = new QgsScaleWidget(QgsMapSaveDialog);
        mScaleWidget->setObjectName(QString::fromUtf8("mScaleWidget"));

        gridLayout->addWidget(mScaleWidget, 1, 1, 1, 1);

        mExtentGroupBox = new QgsExtentGroupBox(QgsMapSaveDialog);
        mExtentGroupBox->setObjectName(QString::fromUtf8("mExtentGroupBox"));
        mExtentGroupBox->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mExtentGroupBox, 0, 0, 1, 2);

        mGeoPDFGroupBox = new QgsCollapsibleGroupBoxBasic(QgsMapSaveDialog);
        mGeoPDFGroupBox->setObjectName(QString::fromUtf8("mGeoPDFGroupBox"));
        mGeoPDFGroupBox->setCheckable(true);
        mGeoPDFGroupBox->setChecked(true);
        verticalLayout_2 = new QVBoxLayout(mGeoPDFGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mGeoPDFOptionsStackedWidget = new QStackedWidget(mGeoPDFGroupBox);
        mGeoPDFOptionsStackedWidget->setObjectName(QString::fromUtf8("mGeoPDFOptionsStackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mGeoPdfUnavailableReason = new QLabel(page);
        mGeoPdfUnavailableReason->setObjectName(QString::fromUtf8("mGeoPdfUnavailableReason"));

        verticalLayout_3->addWidget(mGeoPdfUnavailableReason);

        mGeoPDFOptionsStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        mGeoPdfFormatComboBox = new QComboBox(page_2);
        mGeoPdfFormatComboBox->setObjectName(QString::fromUtf8("mGeoPdfFormatComboBox"));

        gridLayout_2->addWidget(mGeoPdfFormatComboBox, 1, 1, 1, 1);

        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        mExportGeoPdfFeaturesCheckBox = new QCheckBox(page_2);
        mExportGeoPdfFeaturesCheckBox->setObjectName(QString::fromUtf8("mExportGeoPdfFeaturesCheckBox"));
        mExportGeoPdfFeaturesCheckBox->setChecked(true);

        gridLayout_2->addWidget(mExportGeoPdfFeaturesCheckBox, 2, 0, 1, 2);

        gridLayout_2->setColumnStretch(1, 1);
        mGeoPDFOptionsStackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(mGeoPDFOptionsStackedWidget);


        gridLayout->addWidget(mGeoPDFGroupBox, 9, 0, 1, 2);

        mAdvancedPdfSettings = new QgsCollapsibleGroupBox(QgsMapSaveDialog);
        mAdvancedPdfSettings->setObjectName(QString::fromUtf8("mAdvancedPdfSettings"));
        gridLayout_3 = new QGridLayout(mAdvancedPdfSettings);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mTextExportLabel = new QLabel(mAdvancedPdfSettings);
        mTextExportLabel->setObjectName(QString::fromUtf8("mTextExportLabel"));

        gridLayout_3->addWidget(mTextExportLabel, 2, 0, 1, 1);

        mTextRenderFormatComboBox = new QComboBox(mAdvancedPdfSettings);
        mTextRenderFormatComboBox->setObjectName(QString::fromUtf8("mTextRenderFormatComboBox"));

        gridLayout_3->addWidget(mTextRenderFormatComboBox, 2, 1, 1, 1);

        mSimplifyGeometriesCheckbox = new QCheckBox(mAdvancedPdfSettings);
        mSimplifyGeometriesCheckbox->setObjectName(QString::fromUtf8("mSimplifyGeometriesCheckbox"));
        mSimplifyGeometriesCheckbox->setChecked(true);

        gridLayout_3->addWidget(mSimplifyGeometriesCheckbox, 1, 0, 1, 2);

        mSaveAsRaster = new QCheckBox(mAdvancedPdfSettings);
        mSaveAsRaster->setObjectName(QString::fromUtf8("mSaveAsRaster"));
        mSaveAsRaster->setVisible(true);
        mSaveAsRaster->setChecked(false);

        gridLayout_3->addWidget(mSaveAsRaster, 0, 0, 1, 2);

        gridLayout_3->setColumnStretch(1, 1);

        gridLayout->addWidget(mAdvancedPdfSettings, 10, 0, 1, 2);

        label_4 = new QLabel(QgsMapSaveDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        mDrawAnnotations = new QCheckBox(QgsMapSaveDialog);
        mDrawAnnotations->setObjectName(QString::fromUtf8("mDrawAnnotations"));
        mDrawAnnotations->setChecked(true);

        gridLayout->addWidget(mDrawAnnotations, 6, 0, 1, 2);

        mDrawDecorations = new QCheckBox(QgsMapSaveDialog);
        mDrawDecorations->setObjectName(QString::fromUtf8("mDrawDecorations"));
        mDrawDecorations->setChecked(true);

        gridLayout->addWidget(mDrawDecorations, 5, 0, 1, 2);

        label_3 = new QLabel(QgsMapSaveDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(0);
        gridLayout_4->setVerticalSpacing(6);
        mOutputWidthSpinBox = new QgsSpinBox(QgsMapSaveDialog);
        mOutputWidthSpinBox->setObjectName(QString::fromUtf8("mOutputWidthSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOutputWidthSpinBox->sizePolicy().hasHeightForWidth());
        mOutputWidthSpinBox->setSizePolicy(sizePolicy);
        mOutputWidthSpinBox->setMinimum(1);
        mOutputWidthSpinBox->setMaximum(99999);
        mOutputWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_4->addWidget(mOutputWidthSpinBox, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(2, 2, 0, 2);
        mLockAspectRatio = new QgsRatioLockButton(QgsMapSaveDialog);
        mLockAspectRatio->setObjectName(QString::fromUtf8("mLockAspectRatio"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLockAspectRatio->sizePolicy().hasHeightForWidth());
        mLockAspectRatio->setSizePolicy(sizePolicy1);
        mLockAspectRatio->setContentsMargins(13, -1, -1, -1);

        hboxLayout->addWidget(mLockAspectRatio);


        gridLayout_4->addLayout(hboxLayout, 0, 1, 2, 1);

        mOutputHeightSpinBox = new QgsSpinBox(QgsMapSaveDialog);
        mOutputHeightSpinBox->setObjectName(QString::fromUtf8("mOutputHeightSpinBox"));
        mOutputHeightSpinBox->setMinimum(1);
        mOutputHeightSpinBox->setMaximum(99999);
        mOutputHeightSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_4->addWidget(mOutputHeightSpinBox, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayout_4, 3, 1, 2, 1);

        mResolutionSpinBox = new QgsSpinBox(QgsMapSaveDialog);
        mResolutionSpinBox->setObjectName(QString::fromUtf8("mResolutionSpinBox"));
        mResolutionSpinBox->setMinimum(1);
        mResolutionSpinBox->setMaximum(3000);
        mResolutionSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout->addWidget(mResolutionSpinBox, 2, 1, 1, 1);

        label_1 = new QLabel(QgsMapSaveDialog);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        gridLayout->addWidget(label_1, 1, 0, 1, 1);

        mInfo = new QLabel(QgsMapSaveDialog);
        mInfo->setObjectName(QString::fromUtf8("mInfo"));
        mInfo->setWordWrap(true);
        mInfo->setOpenExternalLinks(false);

        gridLayout->addWidget(mInfo, 11, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(QgsMapSaveDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(mExtentGroupBox, mResolutionSpinBox);
        QWidget::setTabOrder(mResolutionSpinBox, mOutputWidthSpinBox);
        QWidget::setTabOrder(mOutputWidthSpinBox, mLockAspectRatio);
        QWidget::setTabOrder(mLockAspectRatio, mOutputHeightSpinBox);
        QWidget::setTabOrder(mOutputHeightSpinBox, mDrawDecorations);
        QWidget::setTabOrder(mDrawDecorations, mDrawAnnotations);
        QWidget::setTabOrder(mDrawAnnotations, mSaveWorldFile);
        QWidget::setTabOrder(mSaveWorldFile, mExportMetadataCheckBox);
        QWidget::setTabOrder(mExportMetadataCheckBox, mGeoPDFGroupBox);
        QWidget::setTabOrder(mGeoPDFGroupBox, mGeoPdfFormatComboBox);
        QWidget::setTabOrder(mGeoPdfFormatComboBox, mExportGeoPdfFeaturesCheckBox);
        QWidget::setTabOrder(mExportGeoPdfFeaturesCheckBox, mSaveAsRaster);
        QWidget::setTabOrder(mSaveAsRaster, mSimplifyGeometriesCheckbox);
        QWidget::setTabOrder(mSimplifyGeometriesCheckbox, mTextRenderFormatComboBox);

        retranslateUi(QgsMapSaveDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsMapSaveDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsMapSaveDialog, SLOT(reject()));

        mGeoPDFOptionsStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsMapSaveDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsMapSaveDialog)
    {
        QgsMapSaveDialog->setWindowTitle(QCoreApplication::translate("QgsMapSaveDialog", "Save Map as Image", nullptr));
        label_2->setText(QCoreApplication::translate("QgsMapSaveDialog", "Resolution", nullptr));
        mSaveWorldFile->setText(QCoreApplication::translate("QgsMapSaveDialog", "Append georeference information (embedded or via world file)", nullptr));
        mExportMetadataCheckBox->setText(QCoreApplication::translate("QgsMapSaveDialog", "Export RDF metadata (title, author, etc.)", nullptr));
        mExtentGroupBox->setTitle(QCoreApplication::translate("QgsMapSaveDialog", "Extent", nullptr));
        mGeoPDFGroupBox->setTitle(QCoreApplication::translate("QgsMapSaveDialog", "Create Geospatial PDF (GeoPDF)", nullptr));
        mGeoPdfUnavailableReason->setText(QString());
        label->setText(QCoreApplication::translate("QgsMapSaveDialog", "Format", nullptr));
        mExportGeoPdfFeaturesCheckBox->setText(QCoreApplication::translate("QgsMapSaveDialog", "Include vector feature information", nullptr));
        mAdvancedPdfSettings->setTitle(QCoreApplication::translate("QgsMapSaveDialog", "Advanced Settings", nullptr));
        mTextExportLabel->setText(QCoreApplication::translate("QgsMapSaveDialog", "Text export", nullptr));
        mSimplifyGeometriesCheckbox->setText(QCoreApplication::translate("QgsMapSaveDialog", "Simplify geometries to reduce output file size", nullptr));
#if QT_CONFIG(tooltip)
        mSaveAsRaster->setToolTip(QCoreApplication::translate("QgsMapSaveDialog", "Advanced effects such as blend modes or vector layer transparency cannot be exported as vectors.\n"
"Rasterizing the map is recommended when such effects are used.", nullptr));
#endif // QT_CONFIG(tooltip)
        mSaveAsRaster->setText(QCoreApplication::translate("QgsMapSaveDialog", "Rasterize map", nullptr));
        label_4->setText(QCoreApplication::translate("QgsMapSaveDialog", "Output height", nullptr));
        mDrawAnnotations->setText(QCoreApplication::translate("QgsMapSaveDialog", "Draw annotations", nullptr));
        mDrawDecorations->setText(QCoreApplication::translate("QgsMapSaveDialog", "Draw active decorations", nullptr));
        label_3->setText(QCoreApplication::translate("QgsMapSaveDialog", "Output width", nullptr));
        mOutputWidthSpinBox->setSuffix(QCoreApplication::translate("QgsMapSaveDialog", " px", nullptr));
        mOutputWidthSpinBox->setPrefix(QString());
#if QT_CONFIG(tooltip)
        mLockAspectRatio->setToolTip(QCoreApplication::translate("QgsMapSaveDialog", "Lock aspect ratio (including while drawing extent onto canvas)", nullptr));
#endif // QT_CONFIG(tooltip)
        mOutputHeightSpinBox->setSuffix(QCoreApplication::translate("QgsMapSaveDialog", " px", nullptr));
        mOutputHeightSpinBox->setPrefix(QString());
        mResolutionSpinBox->setSuffix(QCoreApplication::translate("QgsMapSaveDialog", " dpi", nullptr));
        mResolutionSpinBox->setPrefix(QString());
        label_1->setText(QCoreApplication::translate("QgsMapSaveDialog", "Scale", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsMapSaveDialog: public Ui_QgsMapSaveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMAPSAVEDIALOG_H
