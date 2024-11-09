/********************************************************************************
** Form generated from reading UI file 'qgsvectortilelayerpropertiesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORTILELAYERPROPERTIESBASE_H
#define UI_QGSVECTORTILELAYERPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsfilterlineedit.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsscalerangewidget.h"
#include "qgsscrollarea.h"
#include "qgswebview.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorTileLayerPropertiesBase
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *mOptionsSplitter;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout_2;
    QgsFilterLineEdit *mSearchLineEdit;
    QListWidget *mOptionsListWidget;
    QFrame *mOptionsFrame;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *mOptsPage_Information;
    QVBoxLayout *verticalLayout_20;
    QgsWebView *mMetadataViewer;
    QWidget *mOptsPage_Source;
    QVBoxLayout *verticalLayout_6;
    QgsScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_8;
    QLineEdit *mLayerOrigNameLineEd;
    QgsCollapsibleGroupBox *mCrsGroupBox;
    QVBoxLayout *verticalLayout_28;
    QgsProjectionSelectionWidget *mCrsSelector;
    QLabel *label_17;
    QFrame *line_4;
    QgsCollapsibleGroupBox *mSourceGroupBox;
    QSpacerItem *verticalSpacer_3;
    QWidget *mOptsPage_Style;
    QVBoxLayout *verticalLayout_14;
    QWidget *mOptsPage_Labeling;
    QVBoxLayout *verticalLayout_4;
    QWidget *mOptsPage_Rendering;
    QVBoxLayout *verticalLayout_8;
    QgsCollapsibleGroupBox *chkUseScaleDependentRendering;
    QGridLayout *_5;
    QgsScaleRangeWidget *mScaleRangeWidget;
    QSpacerItem *verticalSpacer;
    QWidget *mOptsPage_Metadata;
    QVBoxLayout *verticalLayout_5;
    QFrame *metadataFrame;
    QWidget *mOptsPage_Server;
    QVBoxLayout *verticalLayout_9;
    QgsCollapsibleGroupBox *mMetaDescriptionGrpBx;
    QGridLayout *gridLayout_5;
    QLabel *mLayerTitleLabel;
    QLineEdit *mLayerKeywordListLineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *mLayerDataUrlLineEdit;
    QLabel *mLayerDataUrlFormatLabel;
    QComboBox *mLayerDataUrlFormatComboBox;
    QLabel *mLayerKeywordListLabel;
    QLabel *mLayerShortNameLabel;
    QLineEdit *mLayerShortNameLineEdit;
    QLineEdit *mLayerTitleLineEdit;
    QLabel *mLayerAbstractLabel;
    QPlainTextEdit *mLayerAbstractTextEdit;
    QLabel *mLayerDataUrlLabel;
    QgsCollapsibleGroupBox *mMetaAttributionGrpBx;
    QGridLayout *gridLayout_7;
    QLabel *mLayerAttributionLabel;
    QLineEdit *mLayerAttributionLineEdit;
    QLabel *mLayerAttributionUrlLabel;
    QLineEdit *mLayerAttributionUrlLineEdit;
    QgsCollapsibleGroupBox *mMetaLegendGrpBx;
    QGridLayout *gridLayout_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *mLayerLegendUrlLabel;
    QLineEdit *mLayerLegendUrlLineEdit;
    QLabel *mLayerLegendUrlFormatLabel;
    QComboBox *mLayerLegendUrlFormatComboBox;
    QSpacerItem *verticalSpacer_2;
    QFrame *mButtonBoxFrame;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsVectorTileLayerPropertiesBase)
    {
        if (QgsVectorTileLayerPropertiesBase->objectName().isEmpty())
            QgsVectorTileLayerPropertiesBase->setObjectName(QString::fromUtf8("QgsVectorTileLayerPropertiesBase"));
        QgsVectorTileLayerPropertiesBase->resize(815, 557);
        QgsVectorTileLayerPropertiesBase->setMinimumSize(QSize(700, 0));
        verticalLayout = new QVBoxLayout(QgsVectorTileLayerPropertiesBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, -1);
        mOptionsSplitter = new QSplitter(QgsVectorTileLayerPropertiesBase);
        mOptionsSplitter->setObjectName(QString::fromUtf8("mOptionsSplitter"));
        mOptionsSplitter->setOrientation(Qt::Horizontal);
        mOptionsSplitter->setChildrenCollapsible(false);
        mOptionsListFrame = new QFrame(mOptionsSplitter);
        mOptionsListFrame->setObjectName(QString::fromUtf8("mOptionsListFrame"));
        mOptionsListFrame->setMinimumSize(QSize(0, 0));
        mOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(mOptionsListFrame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mSearchLineEdit = new QgsFilterLineEdit(mOptionsListFrame);
        mSearchLineEdit->setObjectName(QString::fromUtf8("mSearchLineEdit"));

        verticalLayout_2->addWidget(mSearchLineEdit);

        mOptionsListWidget = new QListWidget(mOptionsListFrame);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/metadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/system.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/symbology.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labels.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/rendering.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/editmetadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem5->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/network_and_proxy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem6->setIcon(icon6);
        mOptionsListWidget->setObjectName(QString::fromUtf8("mOptionsListWidget"));
        mOptionsListWidget->setMinimumSize(QSize(58, 0));
        mOptionsListWidget->setMaximumSize(QSize(150, 16777215));
        mOptionsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOptionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mOptionsListWidget->setIconSize(QSize(32, 32));
        mOptionsListWidget->setTextElideMode(Qt::ElideNone);
        mOptionsListWidget->setResizeMode(QListView::Adjust);
        mOptionsListWidget->setWordWrap(true);

        verticalLayout_2->addWidget(mOptionsListWidget);

        mOptionsSplitter->addWidget(mOptionsListFrame);
        mOptionsFrame = new QFrame(mOptionsSplitter);
        mOptionsFrame->setObjectName(QString::fromUtf8("mOptionsFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOptionsFrame->sizePolicy().hasHeightForWidth());
        mOptionsFrame->setSizePolicy(sizePolicy);
        mOptionsFrame->setFrameShape(QFrame::NoFrame);
        mOptionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(mOptionsFrame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mOptionsStackedWidget = new QStackedWidget(mOptionsFrame);
        mOptionsStackedWidget->setObjectName(QString::fromUtf8("mOptionsStackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOptionsStackedWidget->sizePolicy().hasHeightForWidth());
        mOptionsStackedWidget->setSizePolicy(sizePolicy1);
        mOptionsStackedWidget->setFrameShadow(QFrame::Plain);
        mOptsPage_Information = new QWidget();
        mOptsPage_Information->setObjectName(QString::fromUtf8("mOptsPage_Information"));
        verticalLayout_20 = new QVBoxLayout(mOptsPage_Information);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        mMetadataViewer = new QgsWebView(mOptsPage_Information);
        mMetadataViewer->setObjectName(QString::fromUtf8("mMetadataViewer"));

        verticalLayout_20->addWidget(mMetadataViewer);

        mOptionsStackedWidget->addWidget(mOptsPage_Information);
        mOptsPage_Source = new QWidget();
        mOptsPage_Source->setObjectName(QString::fromUtf8("mOptsPage_Source"));
        verticalLayout_6 = new QVBoxLayout(mOptsPage_Source);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        scrollArea_3 = new QgsScrollArea(mOptsPage_Source);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setFrameShape(QFrame::NoFrame);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 661, 507));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_8 = new QLabel(scrollAreaWidgetContents_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_14->addWidget(label_8);

        mLayerOrigNameLineEd = new QLineEdit(scrollAreaWidgetContents_3);
        mLayerOrigNameLineEd->setObjectName(QString::fromUtf8("mLayerOrigNameLineEd"));

        horizontalLayout_14->addWidget(mLayerOrigNameLineEd);


        verticalLayout_7->addLayout(horizontalLayout_14);

        mCrsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_3);
        mCrsGroupBox->setObjectName(QString::fromUtf8("mCrsGroupBox"));
        mCrsGroupBox->setFocusPolicy(Qt::StrongFocus);
        mCrsGroupBox->setCheckable(false);
        mCrsGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("vectorgeneral")));
        verticalLayout_28 = new QVBoxLayout(mCrsGroupBox);
        verticalLayout_28->setSpacing(6);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        mCrsSelector = new QgsProjectionSelectionWidget(mCrsGroupBox);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        verticalLayout_28->addWidget(mCrsSelector);

        label_17 = new QLabel(mCrsGroupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setTextFormat(Qt::RichText);
        label_17->setWordWrap(true);

        verticalLayout_28->addWidget(label_17);

        line_4 = new QFrame(mCrsGroupBox);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_28->addWidget(line_4);


        verticalLayout_7->addWidget(mCrsGroupBox);

        mSourceGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_3);
        mSourceGroupBox->setObjectName(QString::fromUtf8("mSourceGroupBox"));

        verticalLayout_7->addWidget(mSourceGroupBox);

        verticalSpacer_3 = new QSpacerItem(17, 111, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_6->addWidget(scrollArea_3);

        mOptionsStackedWidget->addWidget(mOptsPage_Source);
        mOptsPage_Style = new QWidget();
        mOptsPage_Style->setObjectName(QString::fromUtf8("mOptsPage_Style"));
        verticalLayout_14 = new QVBoxLayout(mOptsPage_Style);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        mOptionsStackedWidget->addWidget(mOptsPage_Style);
        mOptsPage_Labeling = new QWidget();
        mOptsPage_Labeling->setObjectName(QString::fromUtf8("mOptsPage_Labeling"));
        verticalLayout_4 = new QVBoxLayout(mOptsPage_Labeling);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        mOptionsStackedWidget->addWidget(mOptsPage_Labeling);
        mOptsPage_Rendering = new QWidget();
        mOptsPage_Rendering->setObjectName(QString::fromUtf8("mOptsPage_Rendering"));
        verticalLayout_8 = new QVBoxLayout(mOptsPage_Rendering);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        chkUseScaleDependentRendering = new QgsCollapsibleGroupBox(mOptsPage_Rendering);
        chkUseScaleDependentRendering->setObjectName(QString::fromUtf8("chkUseScaleDependentRendering"));
        chkUseScaleDependentRendering->setCheckable(true);
        chkUseScaleDependentRendering->setChecked(false);
        chkUseScaleDependentRendering->setProperty("syncGroup", QVariant(QString::fromUtf8("rastergeneral")));
        _5 = new QGridLayout(chkUseScaleDependentRendering);
        _5->setObjectName(QString::fromUtf8("_5"));
        _5->setVerticalSpacing(6);
        _5->setContentsMargins(11, 11, 11, 11);
        mScaleRangeWidget = new QgsScaleRangeWidget(chkUseScaleDependentRendering);
        mScaleRangeWidget->setObjectName(QString::fromUtf8("mScaleRangeWidget"));

        _5->addWidget(mScaleRangeWidget, 0, 0, 1, 2);


        verticalLayout_8->addWidget(chkUseScaleDependentRendering);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        mOptionsStackedWidget->addWidget(mOptsPage_Rendering);
        mOptsPage_Metadata = new QWidget();
        mOptsPage_Metadata->setObjectName(QString::fromUtf8("mOptsPage_Metadata"));
        verticalLayout_5 = new QVBoxLayout(mOptsPage_Metadata);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        metadataFrame = new QFrame(mOptsPage_Metadata);
        metadataFrame->setObjectName(QString::fromUtf8("metadataFrame"));
        metadataFrame->setFrameShape(QFrame::NoFrame);
        metadataFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_5->addWidget(metadataFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_Metadata);
        mOptsPage_Server = new QWidget();
        mOptsPage_Server->setObjectName(QString::fromUtf8("mOptsPage_Server"));
        verticalLayout_9 = new QVBoxLayout(mOptsPage_Server);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        mMetaDescriptionGrpBx = new QgsCollapsibleGroupBox(mOptsPage_Server);
        mMetaDescriptionGrpBx->setObjectName(QString::fromUtf8("mMetaDescriptionGrpBx"));
        mMetaDescriptionGrpBx->setProperty("syncGroup", QVariant(QString::fromUtf8("vectormeta")));
        gridLayout_5 = new QGridLayout(mMetaDescriptionGrpBx);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mLayerTitleLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerTitleLabel->setObjectName(QString::fromUtf8("mLayerTitleLabel"));

        gridLayout_5->addWidget(mLayerTitleLabel, 1, 0, 1, 1);

        mLayerKeywordListLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerKeywordListLineEdit->setObjectName(QString::fromUtf8("mLayerKeywordListLineEdit"));

        gridLayout_5->addWidget(mLayerKeywordListLineEdit, 5, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        mLayerDataUrlLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerDataUrlLineEdit->setObjectName(QString::fromUtf8("mLayerDataUrlLineEdit"));

        horizontalLayout_7->addWidget(mLayerDataUrlLineEdit);

        mLayerDataUrlFormatLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerDataUrlFormatLabel->setObjectName(QString::fromUtf8("mLayerDataUrlFormatLabel"));

        horizontalLayout_7->addWidget(mLayerDataUrlFormatLabel);

        mLayerDataUrlFormatComboBox = new QComboBox(mMetaDescriptionGrpBx);
        mLayerDataUrlFormatComboBox->addItem(QString::fromUtf8("text/html"));
        mLayerDataUrlFormatComboBox->addItem(QString::fromUtf8("text/plain"));
        mLayerDataUrlFormatComboBox->addItem(QString::fromUtf8("application/pdf"));
        mLayerDataUrlFormatComboBox->setObjectName(QString::fromUtf8("mLayerDataUrlFormatComboBox"));

        horizontalLayout_7->addWidget(mLayerDataUrlFormatComboBox);


        gridLayout_5->addLayout(horizontalLayout_7, 6, 1, 1, 1);

        mLayerKeywordListLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerKeywordListLabel->setObjectName(QString::fromUtf8("mLayerKeywordListLabel"));

        gridLayout_5->addWidget(mLayerKeywordListLabel, 5, 0, 1, 1);

        mLayerShortNameLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerShortNameLabel->setObjectName(QString::fromUtf8("mLayerShortNameLabel"));

        gridLayout_5->addWidget(mLayerShortNameLabel, 0, 0, 1, 1);

        mLayerShortNameLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerShortNameLineEdit->setObjectName(QString::fromUtf8("mLayerShortNameLineEdit"));

        gridLayout_5->addWidget(mLayerShortNameLineEdit, 0, 1, 1, 1);

        mLayerTitleLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerTitleLineEdit->setObjectName(QString::fromUtf8("mLayerTitleLineEdit"));

        gridLayout_5->addWidget(mLayerTitleLineEdit, 1, 1, 1, 1);

        mLayerAbstractLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerAbstractLabel->setObjectName(QString::fromUtf8("mLayerAbstractLabel"));

        gridLayout_5->addWidget(mLayerAbstractLabel, 3, 0, 1, 1);

        mLayerAbstractTextEdit = new QPlainTextEdit(mMetaDescriptionGrpBx);
        mLayerAbstractTextEdit->setObjectName(QString::fromUtf8("mLayerAbstractTextEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mLayerAbstractTextEdit->sizePolicy().hasHeightForWidth());
        mLayerAbstractTextEdit->setSizePolicy(sizePolicy2);
        mLayerAbstractTextEdit->setMaximumSize(QSize(16777215, 150));

        gridLayout_5->addWidget(mLayerAbstractTextEdit, 3, 1, 1, 1);

        mLayerDataUrlLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerDataUrlLabel->setObjectName(QString::fromUtf8("mLayerDataUrlLabel"));

        gridLayout_5->addWidget(mLayerDataUrlLabel, 6, 0, 1, 1);


        verticalLayout_9->addWidget(mMetaDescriptionGrpBx);

        mMetaAttributionGrpBx = new QgsCollapsibleGroupBox(mOptsPage_Server);
        mMetaAttributionGrpBx->setObjectName(QString::fromUtf8("mMetaAttributionGrpBx"));
        mMetaAttributionGrpBx->setProperty("syncGroup", QVariant(QString::fromUtf8("vectormeta")));
        gridLayout_7 = new QGridLayout(mMetaAttributionGrpBx);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        mLayerAttributionLabel = new QLabel(mMetaAttributionGrpBx);
        mLayerAttributionLabel->setObjectName(QString::fromUtf8("mLayerAttributionLabel"));

        gridLayout_7->addWidget(mLayerAttributionLabel, 0, 0, 1, 1);

        mLayerAttributionLineEdit = new QLineEdit(mMetaAttributionGrpBx);
        mLayerAttributionLineEdit->setObjectName(QString::fromUtf8("mLayerAttributionLineEdit"));

        gridLayout_7->addWidget(mLayerAttributionLineEdit, 0, 1, 1, 1);

        mLayerAttributionUrlLabel = new QLabel(mMetaAttributionGrpBx);
        mLayerAttributionUrlLabel->setObjectName(QString::fromUtf8("mLayerAttributionUrlLabel"));

        gridLayout_7->addWidget(mLayerAttributionUrlLabel, 2, 0, 1, 1);

        mLayerAttributionUrlLineEdit = new QLineEdit(mMetaAttributionGrpBx);
        mLayerAttributionUrlLineEdit->setObjectName(QString::fromUtf8("mLayerAttributionUrlLineEdit"));

        gridLayout_7->addWidget(mLayerAttributionUrlLineEdit, 2, 1, 1, 1);


        verticalLayout_9->addWidget(mMetaAttributionGrpBx);

        mMetaLegendGrpBx = new QgsCollapsibleGroupBox(mOptsPage_Server);
        mMetaLegendGrpBx->setObjectName(QString::fromUtf8("mMetaLegendGrpBx"));
        gridLayout_10 = new QGridLayout(mMetaLegendGrpBx);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        mLayerLegendUrlLabel = new QLabel(mMetaLegendGrpBx);
        mLayerLegendUrlLabel->setObjectName(QString::fromUtf8("mLayerLegendUrlLabel"));

        horizontalLayout_11->addWidget(mLayerLegendUrlLabel);

        mLayerLegendUrlLineEdit = new QLineEdit(mMetaLegendGrpBx);
        mLayerLegendUrlLineEdit->setObjectName(QString::fromUtf8("mLayerLegendUrlLineEdit"));

        horizontalLayout_11->addWidget(mLayerLegendUrlLineEdit);

        mLayerLegendUrlFormatLabel = new QLabel(mMetaLegendGrpBx);
        mLayerLegendUrlFormatLabel->setObjectName(QString::fromUtf8("mLayerLegendUrlFormatLabel"));

        horizontalLayout_11->addWidget(mLayerLegendUrlFormatLabel);

        mLayerLegendUrlFormatComboBox = new QComboBox(mMetaLegendGrpBx);
        mLayerLegendUrlFormatComboBox->addItem(QString::fromUtf8("image/png"));
        mLayerLegendUrlFormatComboBox->addItem(QString::fromUtf8("image/jpeg"));
        mLayerLegendUrlFormatComboBox->setObjectName(QString::fromUtf8("mLayerLegendUrlFormatComboBox"));
        mLayerLegendUrlFormatComboBox->setMinimumSize(QSize(137, 0));

        horizontalLayout_11->addWidget(mLayerLegendUrlFormatComboBox);


        gridLayout_10->addLayout(horizontalLayout_11, 0, 0, 1, 1);


        verticalLayout_9->addWidget(mMetaLegendGrpBx);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        mOptionsStackedWidget->addWidget(mOptsPage_Server);

        verticalLayout_3->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout->addWidget(mOptionsSplitter);

        mButtonBoxFrame = new QFrame(QgsVectorTileLayerPropertiesBase);
        mButtonBoxFrame->setObjectName(QString::fromUtf8("mButtonBoxFrame"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mButtonBoxFrame->sizePolicy().hasHeightForWidth());
        mButtonBoxFrame->setSizePolicy(sizePolicy3);
        mButtonBoxFrame->setFrameShape(QFrame::NoFrame);
        mButtonBoxFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(mButtonBoxFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(mButtonBoxFrame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 0, 0, 1, 2);


        verticalLayout->addWidget(mButtonBoxFrame);

        QWidget::setTabOrder(mSearchLineEdit, mOptionsListWidget);

        retranslateUi(QgsVectorTileLayerPropertiesBase);
        QObject::connect(mOptionsListWidget, SIGNAL(currentRowChanged(int)), mOptionsStackedWidget, SLOT(setCurrentIndex(int)));

        mOptionsStackedWidget->setCurrentIndex(0);
        mLayerLegendUrlFormatComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsVectorTileLayerPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsVectorTileLayerPropertiesBase)
    {
        QgsVectorTileLayerPropertiesBase->setWindowTitle(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Vector Tile Layer Properties", nullptr));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Information", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem->setToolTip(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Information", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Source", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem1->setToolTip(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Source", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Symbology", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem2->setToolTip(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Symbology", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Labels", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem3->setToolTip(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Labels", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem4 = mOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Rendering", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem4->setToolTip(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Rendering", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem5 = mOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Metadata", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem5->setToolTip(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Metadata", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem6 = mOptionsListWidget->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "QGIS Server", nullptr));
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        label_8->setText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Layer name", nullptr));
        mCrsGroupBox->setTitle(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Assigned Coordinate Reference System (CRS)", nullptr));
        label_17->setText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "<html><head/><body><p><span style=\" font-weight:600;\">Changing this option does not modify the original data source or perform any reprojection of the vector tile layer. Rather, it can be used to override the layer's CRS within this project if it could not be detected or has been incorrectly detected.</span></p></body></html>", nullptr));
        mSourceGroupBox->setTitle(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Layer Source", nullptr));
        chkUseScaleDependentRendering->setTitle(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Scale Dependent Visibility", nullptr));
#if QT_CONFIG(tooltip)
        mScaleRangeWidget->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        mScaleRangeWidget->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        mMetaDescriptionGrpBx->setTitle(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Description", nullptr));
        mLayerTitleLabel->setText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Title", nullptr));
#if QT_CONFIG(tooltip)
        mLayerKeywordListLineEdit->setToolTip(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "List of keywords separated by comma to help catalog searching.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerKeywordListLineEdit->setPlaceholderText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "List of keywords separated by comma to help catalog searching.", nullptr));
#if QT_CONFIG(tooltip)
        mLayerDataUrlLineEdit->setToolTip(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "A URL of the data presentation.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerDataUrlLineEdit->setPlaceholderText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "A URL of the data presentation.", nullptr));
        mLayerDataUrlFormatLabel->setText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Format", nullptr));

        mLayerKeywordListLabel->setText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Keyword list", nullptr));
        mLayerShortNameLabel->setText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Short name", nullptr));
#if QT_CONFIG(tooltip)
        mLayerShortNameLineEdit->setToolTip(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "A name used to identify the layer. The short name is a text string used for machine-to-machine communication.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerShortNameLineEdit->setInputMask(QString());
        mLayerShortNameLineEdit->setText(QString());
        mLayerShortNameLineEdit->setPlaceholderText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "A name used to identify the layer. The short name is a text string used for machine-to-machine communication.", nullptr));
#if QT_CONFIG(tooltip)
        mLayerTitleLineEdit->setToolTip(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "The title is for the benefit of humans to identify layer.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerTitleLineEdit->setPlaceholderText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "The title is for the benefit of humans to identify layer.", nullptr));
        mLayerAbstractLabel->setText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Abstract", nullptr));
#if QT_CONFIG(tooltip)
        mLayerAbstractTextEdit->setToolTip(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "The abstract is a descriptive narrative providing more information about the layer.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerDataUrlLabel->setText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Data URL", nullptr));
        mMetaAttributionGrpBx->setTitle(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Attribution", nullptr));
        mLayerAttributionLabel->setText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Title", nullptr));
#if QT_CONFIG(tooltip)
        mLayerAttributionLineEdit->setToolTip(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Attribution's title indicates the provider of the layer.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerAttributionLineEdit->setPlaceholderText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Attribution's title indicates the provider of the data layer.", nullptr));
        mLayerAttributionUrlLabel->setText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "URL", nullptr));
#if QT_CONFIG(tooltip)
        mLayerAttributionUrlLineEdit->setToolTip(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Attribution's url gives a link to the webpage of the provider of the data layer.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerAttributionUrlLineEdit->setPlaceholderText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Attribution's url gives a link to the webpage of the provider of the data layer.", nullptr));
        mMetaLegendGrpBx->setTitle(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Legend URL", nullptr));
        mLayerLegendUrlLabel->setText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "URL", nullptr));
#if QT_CONFIG(tooltip)
        mLayerLegendUrlLineEdit->setToolTip(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "A URL of the legend image.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerLegendUrlLineEdit->setPlaceholderText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "A URL of the legend image.", nullptr));
        mLayerLegendUrlFormatLabel->setText(QCoreApplication::translate("QgsVectorTileLayerPropertiesBase", "Format", nullptr));

    } // retranslateUi

};

namespace Ui {
    class QgsVectorTileLayerPropertiesBase: public Ui_QgsVectorTileLayerPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORTILELAYERPROPERTIESBASE_H
