/********************************************************************************
** Form generated from reading UI file 'qgspdfexportoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPDFEXPORTOPTIONS_H
#define UI_QGSPDFEXPORTOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPdfExportOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_6;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QComboBox *mTextRenderFormatComboBox;
    QCheckBox *mForceVectorCheckBox;
    QCheckBox *mAppendGeoreferenceCheckbox;
    QCheckBox *mIncludeMetadataCheckbox;
    QLabel *label_3;
    QComboBox *mComboImageCompression;
    QgsCollapsibleGroupBoxBasic *mGeoPDFGroupBox;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *mGeoPDFOptionsStackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QLabel *mGeoPdfUnavailableReason;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QgsCollapsibleGroupBoxBasic *mIncludeMapThemesCheck;
    QVBoxLayout *verticalLayout_4;
    QListWidget *mThemesList;
    QLabel *label;
    QComboBox *mGeoPdfFormatComboBox;
    QGroupBox *mExportGeoPdfFeaturesCheckBox;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QTreeView *mGeoPdfStructureTree;
    QgsCollapsibleGroupBoxBasic *groupBox_2;
    QGridLayout *gridLayout_2;
    QCheckBox *mDisableRasterTilingCheckBox;
    QCheckBox *mSimplifyGeometriesCheckbox;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsPdfExportOptionsDialog)
    {
        if (QgsPdfExportOptionsDialog->objectName().isEmpty())
            QgsPdfExportOptionsDialog->setObjectName(QString::fromUtf8("QgsPdfExportOptionsDialog"));
        QgsPdfExportOptionsDialog->resize(489, 730);
        verticalLayout = new QVBoxLayout(QgsPdfExportOptionsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QgsScrollArea(QgsPdfExportOptionsDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 457, 944));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        mTextRenderFormatComboBox = new QComboBox(groupBox);
        mTextRenderFormatComboBox->setObjectName(QString::fromUtf8("mTextRenderFormatComboBox"));

        gridLayout->addWidget(mTextRenderFormatComboBox, 4, 1, 1, 1);

        mForceVectorCheckBox = new QCheckBox(groupBox);
        mForceVectorCheckBox->setObjectName(QString::fromUtf8("mForceVectorCheckBox"));

        gridLayout->addWidget(mForceVectorCheckBox, 0, 0, 1, 2);

        mAppendGeoreferenceCheckbox = new QCheckBox(groupBox);
        mAppendGeoreferenceCheckbox->setObjectName(QString::fromUtf8("mAppendGeoreferenceCheckbox"));
        mAppendGeoreferenceCheckbox->setChecked(true);

        gridLayout->addWidget(mAppendGeoreferenceCheckbox, 1, 0, 1, 2);

        mIncludeMetadataCheckbox = new QCheckBox(groupBox);
        mIncludeMetadataCheckbox->setObjectName(QString::fromUtf8("mIncludeMetadataCheckbox"));
        mIncludeMetadataCheckbox->setChecked(true);

        gridLayout->addWidget(mIncludeMetadataCheckbox, 2, 0, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        mComboImageCompression = new QComboBox(groupBox);
        mComboImageCompression->setObjectName(QString::fromUtf8("mComboImageCompression"));

        gridLayout->addWidget(mComboImageCompression, 5, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout_6->addWidget(groupBox);

        mGeoPDFGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mGeoPDFGroupBox->setObjectName(QString::fromUtf8("mGeoPDFGroupBox"));
        mGeoPDFGroupBox->setCheckable(true);
        mGeoPDFGroupBox->setChecked(true);
        verticalLayout_2 = new QVBoxLayout(mGeoPDFGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mGeoPDFOptionsStackedWidget = new QStackedWidget(mGeoPDFGroupBox);
        mGeoPDFOptionsStackedWidget->setObjectName(QString::fromUtf8("mGeoPDFOptionsStackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mGeoPDFOptionsStackedWidget->sizePolicy().hasHeightForWidth());
        mGeoPDFOptionsStackedWidget->setSizePolicy(sizePolicy);
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
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mIncludeMapThemesCheck = new QgsCollapsibleGroupBoxBasic(page_2);
        mIncludeMapThemesCheck->setObjectName(QString::fromUtf8("mIncludeMapThemesCheck"));
        mIncludeMapThemesCheck->setCheckable(true);
        mIncludeMapThemesCheck->setChecked(false);
        verticalLayout_4 = new QVBoxLayout(mIncludeMapThemesCheck);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        mThemesList = new QListWidget(mIncludeMapThemesCheck);
        mThemesList->setObjectName(QString::fromUtf8("mThemesList"));

        verticalLayout_4->addWidget(mThemesList);


        gridLayout_3->addWidget(mIncludeMapThemesCheck, 2, 0, 1, 2);

        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        mGeoPdfFormatComboBox = new QComboBox(page_2);
        mGeoPdfFormatComboBox->setObjectName(QString::fromUtf8("mGeoPdfFormatComboBox"));

        gridLayout_3->addWidget(mGeoPdfFormatComboBox, 1, 1, 1, 1);

        mExportGeoPdfFeaturesCheckBox = new QGroupBox(page_2);
        mExportGeoPdfFeaturesCheckBox->setObjectName(QString::fromUtf8("mExportGeoPdfFeaturesCheckBox"));
        mExportGeoPdfFeaturesCheckBox->setCheckable(false);
        verticalLayout_5 = new QVBoxLayout(mExportGeoPdfFeaturesCheckBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_2 = new QLabel(mExportGeoPdfFeaturesCheckBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        verticalLayout_5->addWidget(label_2);

        mGeoPdfStructureTree = new QTreeView(mExportGeoPdfFeaturesCheckBox);
        mGeoPdfStructureTree->setObjectName(QString::fromUtf8("mGeoPdfStructureTree"));
        mGeoPdfStructureTree->setHeaderHidden(true);

        verticalLayout_5->addWidget(mGeoPdfStructureTree);


        gridLayout_3->addWidget(mExportGeoPdfFeaturesCheckBox, 3, 0, 1, 2);

        gridLayout_3->setRowStretch(2, 2);
        gridLayout_3->setRowStretch(3, 5);
        mGeoPDFOptionsStackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(mGeoPDFOptionsStackedWidget);


        verticalLayout_6->addWidget(mGeoPDFGroupBox);

        groupBox_2 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mDisableRasterTilingCheckBox = new QCheckBox(groupBox_2);
        mDisableRasterTilingCheckBox->setObjectName(QString::fromUtf8("mDisableRasterTilingCheckBox"));
        mDisableRasterTilingCheckBox->setChecked(false);

        gridLayout_2->addWidget(mDisableRasterTilingCheckBox, 0, 0, 1, 2);

        mSimplifyGeometriesCheckbox = new QCheckBox(groupBox_2);
        mSimplifyGeometriesCheckbox->setObjectName(QString::fromUtf8("mSimplifyGeometriesCheckbox"));
        mSimplifyGeometriesCheckbox->setChecked(true);

        gridLayout_2->addWidget(mSimplifyGeometriesCheckbox, 1, 0, 1, 1);


        verticalLayout_6->addWidget(groupBox_2);

        horizontalSpacer = new QSpacerItem(6, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(horizontalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        buttonBox = new QDialogButtonBox(QgsPdfExportOptionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(scrollArea, mForceVectorCheckBox);
        QWidget::setTabOrder(mForceVectorCheckBox, mAppendGeoreferenceCheckbox);
        QWidget::setTabOrder(mAppendGeoreferenceCheckbox, mIncludeMetadataCheckbox);
        QWidget::setTabOrder(mIncludeMetadataCheckbox, mTextRenderFormatComboBox);
        QWidget::setTabOrder(mTextRenderFormatComboBox, mComboImageCompression);
        QWidget::setTabOrder(mComboImageCompression, mGeoPDFGroupBox);
        QWidget::setTabOrder(mGeoPDFGroupBox, mGeoPdfFormatComboBox);
        QWidget::setTabOrder(mGeoPdfFormatComboBox, mIncludeMapThemesCheck);
        QWidget::setTabOrder(mIncludeMapThemesCheck, mThemesList);
        QWidget::setTabOrder(mThemesList, mGeoPdfStructureTree);
        QWidget::setTabOrder(mGeoPdfStructureTree, mDisableRasterTilingCheckBox);
        QWidget::setTabOrder(mDisableRasterTilingCheckBox, mSimplifyGeometriesCheckbox);

        retranslateUi(QgsPdfExportOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsPdfExportOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsPdfExportOptionsDialog, SLOT(reject()));

        mGeoPDFOptionsStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsPdfExportOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsPdfExportOptionsDialog)
    {
        QgsPdfExportOptionsDialog->setWindowTitle(QCoreApplication::translate("QgsPdfExportOptionsDialog", "PDF Export Options", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Export Options", nullptr));
        label_6->setText(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Text export", nullptr));
#if QT_CONFIG(tooltip)
        mForceVectorCheckBox->setToolTip(QCoreApplication::translate("QgsPdfExportOptionsDialog", "If checked, the layout will always be kept as vector objects when exported to a compatible format, even if the appearance of the resultant file does not match the layouts settings. If unchecked, some elements in the layout may be rasterized in order to keep their appearance intact.", nullptr));
#endif // QT_CONFIG(tooltip)
        mForceVectorCheckBox->setText(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Always export as vectors", nullptr));
        mAppendGeoreferenceCheckbox->setText(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Append georeference information", nullptr));
        mIncludeMetadataCheckbox->setText(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Export RDF metadata (title, author, etc.)", nullptr));
        label_3->setText(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Image compression", nullptr));
        mGeoPDFGroupBox->setTitle(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Create Geospatial PDF (GeoPDF)", nullptr));
        mGeoPdfUnavailableReason->setText(QString());
        mIncludeMapThemesCheck->setTitle(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Include multiple map themes", nullptr));
        label->setText(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Format", nullptr));
        mExportGeoPdfFeaturesCheckBox->setTitle(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Layer Structure", nullptr));
        label_2->setText(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Uncheck layers to avoid exporting vector feature information for those layers, and optionally set the group name to allow multiple layers to be joined into a single logical PDF group. Layers can be dragged and dropped to rearrange their order in the generated GeoPDF table of contents.", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Advanced Options", nullptr));
#if QT_CONFIG(tooltip)
        mDisableRasterTilingCheckBox->setToolTip(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Disables tiled rendering of raster layers. This setting may improve the export quality in some circumstances, at the cost of much greater memory usage during exports.", nullptr));
#endif // QT_CONFIG(tooltip)
        mDisableRasterTilingCheckBox->setText(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Disable tiled raster layer exports", nullptr));
        mSimplifyGeometriesCheckbox->setText(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Simplify geometries to reduce output file size", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsPdfExportOptionsDialog: public Ui_QgsPdfExportOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPDFEXPORTOPTIONS_H
