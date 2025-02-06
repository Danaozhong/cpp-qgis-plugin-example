/********************************************************************************
** Form generated from reading UI file 'qgsrasterlayerpropertiesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERLAYERPROPERTIESBASE_H
#define UI_QGSRASTERLAYERPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfilterlineedit.h"
#include "qgslayertreeembeddedconfigwidget.h"
#include "qgsopacitywidget.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsrasterbandcombobox.h"
#include "qgsscalerangewidget.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"
#include "qgswebview.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterLayerPropertiesBase
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
    QLabel *label_9;
    QLineEdit *leDisplayName;
    QgsCollapsibleGroupBox *mCrsGroupBox;
    QVBoxLayout *verticalLayout_28;
    QgsProjectionSelectionWidget *mCrsSelector;
    QLabel *label_17;
    QFrame *line_4;
    QgsCollapsibleGroupBox *mSourceGroupBox;
    QSpacerItem *verticalSpacer_3;
    QWidget *mOptsPage_Style;
    QVBoxLayout *verticalLayout_14;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_10;
    QgsCollapsibleGroupBox *mBandRenderingGrpBx;
    QGridLayout *gridLayout_14;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mRenderTypeLabel;
    QComboBox *mRenderTypeComboBox;
    QSpacerItem *horizontalSpacer_2;
    QStackedWidget *mRendererStackedWidget;
    QgsCollapsibleGroupBox *mColorRenderingGrpBox;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLabel *mBlendTypeLabel;
    QLabel *label_2;
    QSlider *mSliderBrightness;
    QgsSpinBox *mBrightnessSpinBox;
    QSlider *mSliderContrast;
    QLabel *label_5;
    QgsSpinBox *mContrastSpinBox;
    QFrame *line_2;
    QFrame *line;
    QLabel *labelGrayscale;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *mColorizeCheck;
    QgsColorButton *btnColorizeColor;
    QLabel *labelColorizeStrength;
    QSlider *sliderColorizeStrength;
    QgsSpinBox *spinColorizeStrength;
    QgsBlendModeComboBox *mBlendModeComboBox;
    QComboBox *comboGrayscale;
    QToolButton *mResetColorRenderingBtn;
    QLabel *label_15;
    QSlider *mSliderGamma;
    QgsDoubleSpinBox *mGammaSpinBox;
    QFrame *line_3;
    QLabel *labelSaturation;
    QSlider *sliderSaturation;
    QgsSpinBox *spinBoxSaturation;
    QgsCollapsibleGroupBox *mResamplingGroupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *mZoomedInResamplingLabel;
    QComboBox *mZoomedInResamplingComboBox;
    QLabel *mZoomedOutResamplingLabel;
    QComboBox *mZoomedOutResamplingComboBox;
    QLabel *mMaximumOversamplingLabel;
    QgsDoubleSpinBox *mMaximumOversamplingSpinBox;
    QCheckBox *mCbEarlyResampling;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QWidget *mOptsPage_Transparency;
    QVBoxLayout *verticalLayout_4;
    QgsScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_5;
    QgsCollapsibleGroupBox *gboxNoDataValue_2;
    QGridLayout *gridLayout_13;
    QgsOpacityWidget *mOpacityWidget;
    QgsCollapsibleGroupBox *gboxNoDataValue;
    QGridLayout *gridLayout_11;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *mSrcNoDataValueCheckBox;
    QLabel *lblSrcNoDataValue;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lblUserNoDataValueLabel;
    QLineEdit *leNoDataValue;
    QgsCollapsibleGroupBox *gboxCustomTransparency;
    QGridLayout *gridLayout_3;
    QTableWidget *tableTransparency;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lblTransparent;
    QgsRasterBandComboBox *cboxTransparencyBand;
    QVBoxLayout *_2;
    QToolButton *pbnAddValuesManually;
    QToolButton *pbnAddValuesFromDisplay;
    QToolButton *pbnRemoveSelectedRow;
    QToolButton *pbnDefaultValues;
    QToolButton *pbnImportTransparentPixelValues;
    QToolButton *pbnExportTransparentPixelValues;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_5;
    QWidget *mOptsPage_Histogram;
    QVBoxLayout *verticalLayout_15;
    QgsScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_6;
    QVBoxLayout *verticalLayout_16;
    QGroupBox *mHistogramGrpBx;
    QVBoxLayout *verticalLayout_19;
    QStackedWidget *mHistogramStackedWidget;
    QWidget *mOptsPage_Rendering;
    QVBoxLayout *verticalLayout_11;
    QgsCollapsibleGroupBox *chkUseScaleDependentRendering;
    QGridLayout *_5;
    QgsScaleRangeWidget *mScaleRangeWidget;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *mRefreshLayerCheckBox;
    QgsDoubleSpinBox *mRefreshLayerIntervalSpinBox;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_6;
    QWidget *mOptsPage_Temporal;
    QVBoxLayout *verticalLayout_21;
    QFrame *temporalFrame;
    QWidget *mOptsPage_Pyramids;
    QVBoxLayout *verticalLayout_9;
    QgsScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *mPyramidsGrpBx;
    QGridLayout *gridLayout_6;
    QLabel *textLabel4_2;
    QGridLayout *gridLayout_8;
    QLabel *textLabel5;
    QListWidget *lbxPyramidResolutions;
    QTextEdit *tePyramidDescription;
    QPushButton *buttonBuildPyramids;
    QComboBox *cboResamplingMethod;
    QProgressBar *mPyramidProgress;
    QComboBox *cbxPyramidsFormat;
    QLabel *label_11;
    QWidget *mOptsPage_Metadata;
    QVBoxLayout *verticalLayout_13;
    QFrame *metadataFrame;
    QWidget *mOptsPage_Legend;
    QVBoxLayout *verticalLayout_18;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_17;
    QgsLayerTreeEmbeddedConfigWidget *mLegendConfigEmbeddedWidget;
    QWidget *mOptsPage_Server;
    QVBoxLayout *verticalLayout_8;
    QgsScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QGridLayout *gridLayout_12;
    QgsCollapsibleGroupBox *mMetaDescriptionGrpBx;
    QGridLayout *gridLayout_5;
    QLabel *mLayerTitleLabel;
    QLabel *mLayerKeywordListLabel_3;
    QHBoxLayout *horizontalLayout_13;
    QLineEdit *mLayerDataUrlLineEdit;
    QLabel *mLayerDataUrlFormatLabel;
    QComboBox *mLayerDataUrlFormatComboBox;
    QLineEdit *mLayerKeywordListLineEdit;
    QLabel *mLayerKeywordListLabel;
    QLineEdit *mLayerShortNameLineEdit;
    QLabel *mLayerShortNameLabel;
    QLabel *mLayerAbstractLabel;
    QTextEdit *mLayerAbstractTextEdit;
    QLineEdit *mLayerTitleLineEdit;
    QgsCollapsibleGroupBox *mMetaAttributionGrpBx;
    QGridLayout *gridLayout_7;
    QLabel *mLayerAttributionLabel;
    QLineEdit *mLayerAttributionLineEdit;
    QLabel *mLayerAttributionUrlLabel;
    QLineEdit *mLayerAttributionUrlLineEdit;
    QgsCollapsibleGroupBox *mMetaMetaUrlGrpBx;
    QGridLayout *gridLayout_9;
    QLabel *mLayerMetadataUrlLabel;
    QLineEdit *mLayerMetadataUrlLineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *mLayerMetadataUrlTypeLabel;
    QComboBox *mLayerMetadataUrlTypeComboBox;
    QLabel *mLayerMetadataUrlFormatLabel;
    QComboBox *mLayerMetadataUrlFormatComboBox;
    QSpacerItem *horizontalSpacer_4;
    QgsCollapsibleGroupBox *mMetaLegendGrpBx;
    QGridLayout *gridLayout_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *mLayerLegendUrlLabel;
    QLineEdit *mLayerLegendUrlLineEdit;
    QLabel *mLayerLegendUrlFormatLabel;
    QComboBox *mLayerLegendUrlFormatComboBox;
    QgsCollapsibleGroupBox *mWMSPrintGroupBox;
    QGridLayout *gridLayout_4;
    QLineEdit *mWMSPrintLayerLineEdit;
    QCheckBox *mPublishDataSourceUrlCheckBox;
    QCheckBox *mBackgroundLayerCheckBox;
    QSpacerItem *verticalSpacer_4;
    QFrame *mButtonBoxFrame;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsRasterLayerPropertiesBase)
    {
        if (QgsRasterLayerPropertiesBase->objectName().isEmpty())
            QgsRasterLayerPropertiesBase->setObjectName(QString::fromUtf8("QgsRasterLayerPropertiesBase"));
        QgsRasterLayerPropertiesBase->resize(815, 730);
        QgsRasterLayerPropertiesBase->setMinimumSize(QSize(700, 0));
        verticalLayout = new QVBoxLayout(QgsRasterLayerPropertiesBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mOptionsSplitter = new QSplitter(QgsRasterLayerPropertiesBase);
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
        icon3.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/transparency.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/histogram.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/rendering.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem5->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/temporal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem6->setIcon(icon6);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/pyramids.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem7->setIcon(icon7);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/editmetadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem8->setIcon(icon8);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/themes/default/legend.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem9->setIcon(icon9);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/network_and_proxy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem10 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem10->setIcon(icon10);
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
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 643, 679));
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

        label_9 = new QLabel(scrollAreaWidgetContents_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_14->addWidget(label_9);

        leDisplayName = new QLineEdit(scrollAreaWidgetContents_3);
        leDisplayName->setObjectName(QString::fromUtf8("leDisplayName"));
        leDisplayName->setStyleSheet(QString::fromUtf8("color: #505050;\n"
"background-color: #F0F0F0;\n"
"border: 1px solid #B0B0B0;\n"
"border-radius: 2px;"));
        leDisplayName->setReadOnly(true);

        horizontalLayout_14->addWidget(leDisplayName);


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
        scrollArea = new QgsScrollArea(mOptsPage_Style);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 619, 383));
        verticalLayout_10 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        mBandRenderingGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mBandRenderingGrpBx->setObjectName(QString::fromUtf8("mBandRenderingGrpBx"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(5);
        sizePolicy2.setHeightForWidth(mBandRenderingGrpBx->sizePolicy().hasHeightForWidth());
        mBandRenderingGrpBx->setSizePolicy(sizePolicy2);
        mBandRenderingGrpBx->setProperty("syncGroup", QVariant(QString::fromUtf8("rasterstyle")));
        gridLayout_14 = new QGridLayout(mBandRenderingGrpBx);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, 0, -1);
        mRenderTypeLabel = new QLabel(mBandRenderingGrpBx);
        mRenderTypeLabel->setObjectName(QString::fromUtf8("mRenderTypeLabel"));

        horizontalLayout_2->addWidget(mRenderTypeLabel);

        mRenderTypeComboBox = new QComboBox(mBandRenderingGrpBx);
        mRenderTypeComboBox->setObjectName(QString::fromUtf8("mRenderTypeComboBox"));

        horizontalLayout_2->addWidget(mRenderTypeComboBox);

        horizontalSpacer_2 = new QSpacerItem(0, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_14->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        mRendererStackedWidget = new QStackedWidget(mBandRenderingGrpBx);
        mRendererStackedWidget->setObjectName(QString::fromUtf8("mRendererStackedWidget"));

        gridLayout_14->addWidget(mRendererStackedWidget, 1, 0, 1, 1);


        verticalLayout_10->addWidget(mBandRenderingGrpBx);

        mColorRenderingGrpBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mColorRenderingGrpBox->setObjectName(QString::fromUtf8("mColorRenderingGrpBox"));
        mColorRenderingGrpBox->setProperty("collapsed", QVariant(false));
        mColorRenderingGrpBox->setProperty("syncGroup", QVariant(QString::fromUtf8("rasterstyle")));
        mColorRenderingGrpBox->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_2 = new QGridLayout(mColorRenderingGrpBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(mColorRenderingGrpBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 4, 0, 1, 1);

        mBlendTypeLabel = new QLabel(mColorRenderingGrpBox);
        mBlendTypeLabel->setObjectName(QString::fromUtf8("mBlendTypeLabel"));

        gridLayout_2->addWidget(mBlendTypeLabel, 0, 0, 1, 1);

        label_2 = new QLabel(mColorRenderingGrpBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        mSliderBrightness = new QSlider(mColorRenderingGrpBox);
        mSliderBrightness->setObjectName(QString::fromUtf8("mSliderBrightness"));
        mSliderBrightness->setMinimumSize(QSize(75, 0));
        mSliderBrightness->setMinimum(-255);
        mSliderBrightness->setMaximum(255);
        mSliderBrightness->setOrientation(Qt::Horizontal);
        mSliderBrightness->setTickPosition(QSlider::NoTicks);
        mSliderBrightness->setTickInterval(0);

        gridLayout_2->addWidget(mSliderBrightness, 1, 1, 1, 1);

        mBrightnessSpinBox = new QgsSpinBox(mColorRenderingGrpBox);
        mBrightnessSpinBox->setObjectName(QString::fromUtf8("mBrightnessSpinBox"));
        mBrightnessSpinBox->setMinimum(-255);
        mBrightnessSpinBox->setMaximum(255);

        gridLayout_2->addWidget(mBrightnessSpinBox, 1, 2, 1, 1);

        mSliderContrast = new QSlider(mColorRenderingGrpBox);
        mSliderContrast->setObjectName(QString::fromUtf8("mSliderContrast"));
        mSliderContrast->setMinimumSize(QSize(75, 0));
        mSliderContrast->setMinimum(-100);
        mSliderContrast->setMaximum(100);
        mSliderContrast->setSingleStep(1);
        mSliderContrast->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(mSliderContrast, 1, 5, 1, 1);

        label_5 = new QLabel(mColorRenderingGrpBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 4, 1, 1);

        mContrastSpinBox = new QgsSpinBox(mColorRenderingGrpBox);
        mContrastSpinBox->setObjectName(QString::fromUtf8("mContrastSpinBox"));
        mContrastSpinBox->setMinimum(-100);
        mContrastSpinBox->setMaximum(100);

        gridLayout_2->addWidget(mContrastSpinBox, 1, 6, 1, 1);

        line_2 = new QFrame(mColorRenderingGrpBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 3, 3, 1, 1);

        line = new QFrame(mColorRenderingGrpBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 1, 3, 1, 1);

        labelGrayscale = new QLabel(mColorRenderingGrpBox);
        labelGrayscale->setObjectName(QString::fromUtf8("labelGrayscale"));

        gridLayout_2->addWidget(labelGrayscale, 3, 4, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        mColorizeCheck = new QCheckBox(mColorRenderingGrpBox);
        mColorizeCheck->setObjectName(QString::fromUtf8("mColorizeCheck"));

        horizontalLayout_12->addWidget(mColorizeCheck);

        btnColorizeColor = new QgsColorButton(mColorRenderingGrpBox);
        btnColorizeColor->setObjectName(QString::fromUtf8("btnColorizeColor"));
        btnColorizeColor->setMinimumSize(QSize(100, 0));
        btnColorizeColor->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_12->addWidget(btnColorizeColor);

        labelColorizeStrength = new QLabel(mColorRenderingGrpBox);
        labelColorizeStrength->setObjectName(QString::fromUtf8("labelColorizeStrength"));

        horizontalLayout_12->addWidget(labelColorizeStrength);

        sliderColorizeStrength = new QSlider(mColorRenderingGrpBox);
        sliderColorizeStrength->setObjectName(QString::fromUtf8("sliderColorizeStrength"));
        sliderColorizeStrength->setMaximum(100);
        sliderColorizeStrength->setValue(100);
        sliderColorizeStrength->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(sliderColorizeStrength);

        spinColorizeStrength = new QgsSpinBox(mColorRenderingGrpBox);
        spinColorizeStrength->setObjectName(QString::fromUtf8("spinColorizeStrength"));
        spinColorizeStrength->setMinimum(0);
        spinColorizeStrength->setMaximum(100);
        spinColorizeStrength->setValue(100);

        horizontalLayout_12->addWidget(spinColorizeStrength);


        gridLayout_2->addLayout(horizontalLayout_12, 4, 1, 1, 6);

        mBlendModeComboBox = new QgsBlendModeComboBox(mColorRenderingGrpBox);
        mBlendModeComboBox->setObjectName(QString::fromUtf8("mBlendModeComboBox"));
        mBlendModeComboBox->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(mBlendModeComboBox, 0, 1, 1, 3);

        comboGrayscale = new QComboBox(mColorRenderingGrpBox);
        comboGrayscale->addItem(QString());
        comboGrayscale->addItem(QString());
        comboGrayscale->addItem(QString());
        comboGrayscale->addItem(QString());
        comboGrayscale->setObjectName(QString::fromUtf8("comboGrayscale"));

        gridLayout_2->addWidget(comboGrayscale, 3, 5, 1, 2);

        mResetColorRenderingBtn = new QToolButton(mColorRenderingGrpBox);
        mResetColorRenderingBtn->setObjectName(QString::fromUtf8("mResetColorRenderingBtn"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/themes/default/mActionUndo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mResetColorRenderingBtn->setIcon(icon11);
        mResetColorRenderingBtn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_2->addWidget(mResetColorRenderingBtn, 0, 6, 1, 1);

        label_15 = new QLabel(mColorRenderingGrpBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 2, 0, 1, 1);

        mSliderGamma = new QSlider(mColorRenderingGrpBox);
        mSliderGamma->setObjectName(QString::fromUtf8("mSliderGamma"));
        mSliderGamma->setMinimum(10);
        mSliderGamma->setMaximum(1000);
        mSliderGamma->setSingleStep(10);
        mSliderGamma->setPageStep(100);
        mSliderGamma->setValue(100);
        mSliderGamma->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(mSliderGamma, 2, 1, 1, 1);

        mGammaSpinBox = new QgsDoubleSpinBox(mColorRenderingGrpBox);
        mGammaSpinBox->setObjectName(QString::fromUtf8("mGammaSpinBox"));
        mGammaSpinBox->setMinimum(0.100000000000000);
        mGammaSpinBox->setMaximum(10.000000000000000);
        mGammaSpinBox->setSingleStep(0.100000000000000);
        mGammaSpinBox->setValue(1.000000000000000);

        gridLayout_2->addWidget(mGammaSpinBox, 2, 2, 1, 1);

        line_3 = new QFrame(mColorRenderingGrpBox);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 2, 3, 1, 1);

        labelSaturation = new QLabel(mColorRenderingGrpBox);
        labelSaturation->setObjectName(QString::fromUtf8("labelSaturation"));

        gridLayout_2->addWidget(labelSaturation, 2, 4, 1, 1);

        sliderSaturation = new QSlider(mColorRenderingGrpBox);
        sliderSaturation->setObjectName(QString::fromUtf8("sliderSaturation"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sliderSaturation->sizePolicy().hasHeightForWidth());
        sliderSaturation->setSizePolicy(sizePolicy3);
        sliderSaturation->setMinimumSize(QSize(75, 0));
        sliderSaturation->setMinimum(-100);
        sliderSaturation->setMaximum(100);
        sliderSaturation->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderSaturation, 2, 5, 1, 1);

        spinBoxSaturation = new QgsSpinBox(mColorRenderingGrpBox);
        spinBoxSaturation->setObjectName(QString::fromUtf8("spinBoxSaturation"));
        spinBoxSaturation->setMinimum(-100);
        spinBoxSaturation->setMaximum(100);
        spinBoxSaturation->setValue(0);
        spinBoxSaturation->setProperty("decimals", QVariant(0));

        gridLayout_2->addWidget(spinBoxSaturation, 2, 6, 1, 1);


        verticalLayout_10->addWidget(mColorRenderingGrpBox);

        mResamplingGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mResamplingGroupBox->setObjectName(QString::fromUtf8("mResamplingGroupBox"));
        mResamplingGroupBox->setCheckable(false);
        mResamplingGroupBox->setProperty("collapsed", QVariant(false));
        mResamplingGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("rasterstyle")));
        mResamplingGroupBox->setProperty("saveCollapsedState", QVariant(true));
        horizontalLayout = new QHBoxLayout(mResamplingGroupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mZoomedInResamplingLabel = new QLabel(mResamplingGroupBox);
        mZoomedInResamplingLabel->setObjectName(QString::fromUtf8("mZoomedInResamplingLabel"));

        horizontalLayout->addWidget(mZoomedInResamplingLabel);

        mZoomedInResamplingComboBox = new QComboBox(mResamplingGroupBox);
        mZoomedInResamplingComboBox->setObjectName(QString::fromUtf8("mZoomedInResamplingComboBox"));

        horizontalLayout->addWidget(mZoomedInResamplingComboBox);

        mZoomedOutResamplingLabel = new QLabel(mResamplingGroupBox);
        mZoomedOutResamplingLabel->setObjectName(QString::fromUtf8("mZoomedOutResamplingLabel"));

        horizontalLayout->addWidget(mZoomedOutResamplingLabel);

        mZoomedOutResamplingComboBox = new QComboBox(mResamplingGroupBox);
        mZoomedOutResamplingComboBox->setObjectName(QString::fromUtf8("mZoomedOutResamplingComboBox"));

        horizontalLayout->addWidget(mZoomedOutResamplingComboBox);

        mMaximumOversamplingLabel = new QLabel(mResamplingGroupBox);
        mMaximumOversamplingLabel->setObjectName(QString::fromUtf8("mMaximumOversamplingLabel"));

        horizontalLayout->addWidget(mMaximumOversamplingLabel);

        mMaximumOversamplingSpinBox = new QgsDoubleSpinBox(mResamplingGroupBox);
        mMaximumOversamplingSpinBox->setObjectName(QString::fromUtf8("mMaximumOversamplingSpinBox"));

        horizontalLayout->addWidget(mMaximumOversamplingSpinBox);

        mCbEarlyResampling = new QCheckBox(mResamplingGroupBox);
        mCbEarlyResampling->setObjectName(QString::fromUtf8("mCbEarlyResampling"));

        horizontalLayout->addWidget(mCbEarlyResampling);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_10->addWidget(mResamplingGroupBox);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_14->addWidget(scrollArea);

        mOptionsStackedWidget->addWidget(mOptsPage_Style);
        mOptsPage_Transparency = new QWidget();
        mOptsPage_Transparency->setObjectName(QString::fromUtf8("mOptsPage_Transparency"));
        verticalLayout_4 = new QVBoxLayout(mOptsPage_Transparency);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QgsScrollArea(mOptsPage_Transparency);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 343, 474));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        gboxNoDataValue_2 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        gboxNoDataValue_2->setObjectName(QString::fromUtf8("gboxNoDataValue_2"));
        gboxNoDataValue_2->setProperty("syncGroup", QVariant(QString::fromUtf8("rastertransp")));
        gridLayout_13 = new QGridLayout(gboxNoDataValue_2);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        mOpacityWidget = new QgsOpacityWidget(gboxNoDataValue_2);
        mOpacityWidget->setObjectName(QString::fromUtf8("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_13->addWidget(mOpacityWidget, 0, 0, 1, 1);


        verticalLayout_5->addWidget(gboxNoDataValue_2);

        gboxNoDataValue = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        gboxNoDataValue->setObjectName(QString::fromUtf8("gboxNoDataValue"));
        gboxNoDataValue->setProperty("syncGroup", QVariant(QString::fromUtf8("rastertransp")));
        gridLayout_11 = new QGridLayout(gboxNoDataValue);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(1, -1, -1, -1);
        mSrcNoDataValueCheckBox = new QCheckBox(gboxNoDataValue);
        mSrcNoDataValueCheckBox->setObjectName(QString::fromUtf8("mSrcNoDataValueCheckBox"));

        horizontalLayout_5->addWidget(mSrcNoDataValueCheckBox);

        lblSrcNoDataValue = new QLabel(gboxNoDataValue);
        lblSrcNoDataValue->setObjectName(QString::fromUtf8("lblSrcNoDataValue"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lblSrcNoDataValue->sizePolicy().hasHeightForWidth());
        lblSrcNoDataValue->setSizePolicy(sizePolicy4);

        horizontalLayout_5->addWidget(lblSrcNoDataValue);


        gridLayout_11->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lblUserNoDataValueLabel = new QLabel(gboxNoDataValue);
        lblUserNoDataValueLabel->setObjectName(QString::fromUtf8("lblUserNoDataValueLabel"));

        horizontalLayout_6->addWidget(lblUserNoDataValueLabel);

        leNoDataValue = new QLineEdit(gboxNoDataValue);
        leNoDataValue->setObjectName(QString::fromUtf8("leNoDataValue"));

        horizontalLayout_6->addWidget(leNoDataValue);


        gridLayout_11->addLayout(horizontalLayout_6, 1, 0, 1, 1);


        verticalLayout_5->addWidget(gboxNoDataValue);

        gboxCustomTransparency = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        gboxCustomTransparency->setObjectName(QString::fromUtf8("gboxCustomTransparency"));
        sizePolicy2.setHeightForWidth(gboxCustomTransparency->sizePolicy().hasHeightForWidth());
        gboxCustomTransparency->setSizePolicy(sizePolicy2);
        gboxCustomTransparency->setProperty("syncGroup", QVariant(QString::fromUtf8("rastertransp")));
        gridLayout_3 = new QGridLayout(gboxCustomTransparency);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tableTransparency = new QTableWidget(gboxCustomTransparency);
        tableTransparency->setObjectName(QString::fromUtf8("tableTransparency"));
        tableTransparency->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableTransparency->setAlternatingRowColors(true);
        tableTransparency->setSelectionMode(QAbstractItemView::SingleSelection);
        tableTransparency->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableTransparency->setShowGrid(false);
        tableTransparency->setRowCount(0);
        tableTransparency->setColumnCount(0);
        tableTransparency->horizontalHeader()->setStretchLastSection(true);

        gridLayout_3->addWidget(tableTransparency, 2, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lblTransparent = new QLabel(gboxCustomTransparency);
        lblTransparent->setObjectName(QString::fromUtf8("lblTransparent"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lblTransparent->sizePolicy().hasHeightForWidth());
        lblTransparent->setSizePolicy(sizePolicy5);

        horizontalLayout_7->addWidget(lblTransparent);

        cboxTransparencyBand = new QgsRasterBandComboBox(gboxCustomTransparency);
        cboxTransparencyBand->setObjectName(QString::fromUtf8("cboxTransparencyBand"));
        cboxTransparencyBand->setEnabled(true);
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(cboxTransparencyBand->sizePolicy().hasHeightForWidth());
        cboxTransparencyBand->setSizePolicy(sizePolicy6);
        cboxTransparencyBand->setMinimumSize(QSize(150, 0));

        horizontalLayout_7->addWidget(cboxTransparencyBand);


        gridLayout_3->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        _2 = new QVBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(0, 6, 0, 6);
        pbnAddValuesManually = new QToolButton(gboxCustomTransparency);
        pbnAddValuesManually->setObjectName(QString::fromUtf8("pbnAddValuesManually"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnAddValuesManually->setIcon(icon12);

        _2->addWidget(pbnAddValuesManually);

        pbnAddValuesFromDisplay = new QToolButton(gboxCustomTransparency);
        pbnAddValuesFromDisplay->setObjectName(QString::fromUtf8("pbnAddValuesFromDisplay"));
        pbnAddValuesFromDisplay->setEnabled(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/themes/default/mActionContextHelp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbnAddValuesFromDisplay->setIcon(icon13);

        _2->addWidget(pbnAddValuesFromDisplay);

        pbnRemoveSelectedRow = new QToolButton(gboxCustomTransparency);
        pbnRemoveSelectedRow->setObjectName(QString::fromUtf8("pbnRemoveSelectedRow"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnRemoveSelectedRow->setIcon(icon14);

        _2->addWidget(pbnRemoveSelectedRow);

        pbnDefaultValues = new QToolButton(gboxCustomTransparency);
        pbnDefaultValues->setObjectName(QString::fromUtf8("pbnDefaultValues"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/themes/default/mActionOpenTable.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnDefaultValues->setIcon(icon15);

        _2->addWidget(pbnDefaultValues);

        pbnImportTransparentPixelValues = new QToolButton(gboxCustomTransparency);
        pbnImportTransparentPixelValues->setObjectName(QString::fromUtf8("pbnImportTransparentPixelValues"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnImportTransparentPixelValues->setIcon(icon16);

        _2->addWidget(pbnImportTransparentPixelValues);

        pbnExportTransparentPixelValues = new QToolButton(gboxCustomTransparency);
        pbnExportTransparentPixelValues->setObjectName(QString::fromUtf8("pbnExportTransparentPixelValues"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnExportTransparentPixelValues->setIcon(icon17);

        _2->addWidget(pbnExportTransparentPixelValues);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        _2->addItem(verticalSpacer_2);


        gridLayout_3->addLayout(_2, 2, 1, 1, 1);

        label_6 = new QLabel(gboxCustomTransparency);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);


        verticalLayout_5->addWidget(gboxCustomTransparency);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_4->addWidget(scrollArea_2);

        mOptionsStackedWidget->addWidget(mOptsPage_Transparency);
        mOptsPage_Histogram = new QWidget();
        mOptsPage_Histogram->setObjectName(QString::fromUtf8("mOptsPage_Histogram"));
        verticalLayout_15 = new QVBoxLayout(mOptsPage_Histogram);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        scrollArea_6 = new QgsScrollArea(mOptsPage_Histogram);
        scrollArea_6->setObjectName(QString::fromUtf8("scrollArea_6"));
        scrollArea_6->setFrameShape(QFrame::NoFrame);
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 86, 41));
        verticalLayout_16 = new QVBoxLayout(scrollAreaWidgetContents_6);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        mHistogramGrpBx = new QGroupBox(scrollAreaWidgetContents_6);
        mHistogramGrpBx->setObjectName(QString::fromUtf8("mHistogramGrpBx"));
        verticalLayout_19 = new QVBoxLayout(mHistogramGrpBx);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(-1, -1, 0, -1);
        mHistogramStackedWidget = new QStackedWidget(mHistogramGrpBx);
        mHistogramStackedWidget->setObjectName(QString::fromUtf8("mHistogramStackedWidget"));

        verticalLayout_19->addWidget(mHistogramStackedWidget);


        verticalLayout_16->addWidget(mHistogramGrpBx);

        scrollArea_6->setWidget(scrollAreaWidgetContents_6);

        verticalLayout_15->addWidget(scrollArea_6);

        mOptionsStackedWidget->addWidget(mOptsPage_Histogram);
        mOptsPage_Rendering = new QWidget();
        mOptsPage_Rendering->setObjectName(QString::fromUtf8("mOptsPage_Rendering"));
        verticalLayout_11 = new QVBoxLayout(mOptsPage_Rendering);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
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


        verticalLayout_11->addWidget(chkUseScaleDependentRendering);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mRefreshLayerCheckBox = new QCheckBox(mOptsPage_Rendering);
        mRefreshLayerCheckBox->setObjectName(QString::fromUtf8("mRefreshLayerCheckBox"));

        horizontalLayout_3->addWidget(mRefreshLayerCheckBox);

        mRefreshLayerIntervalSpinBox = new QgsDoubleSpinBox(mOptsPage_Rendering);
        mRefreshLayerIntervalSpinBox->setObjectName(QString::fromUtf8("mRefreshLayerIntervalSpinBox"));
        mRefreshLayerIntervalSpinBox->setDecimals(2);
        mRefreshLayerIntervalSpinBox->setMinimum(0.000000000000000);
        mRefreshLayerIntervalSpinBox->setMaximum(100000000000000000000.000000000000000);
        mRefreshLayerIntervalSpinBox->setSingleStep(5.000000000000000);
        mRefreshLayerIntervalSpinBox->setValue(10.000000000000000);

        horizontalLayout_3->addWidget(mRefreshLayerIntervalSpinBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_11->addLayout(horizontalLayout_3);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_6);

        mOptionsStackedWidget->addWidget(mOptsPage_Rendering);
        mOptsPage_Temporal = new QWidget();
        mOptsPage_Temporal->setObjectName(QString::fromUtf8("mOptsPage_Temporal"));
        verticalLayout_21 = new QVBoxLayout(mOptsPage_Temporal);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        temporalFrame = new QFrame(mOptsPage_Temporal);
        temporalFrame->setObjectName(QString::fromUtf8("temporalFrame"));
        temporalFrame->setMinimumSize(QSize(100, 450));
        temporalFrame->setStyleSheet(QString::fromUtf8(""));
        temporalFrame->setFrameShape(QFrame::NoFrame);
        temporalFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_21->addWidget(temporalFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_Temporal);
        mOptsPage_Pyramids = new QWidget();
        mOptsPage_Pyramids->setObjectName(QString::fromUtf8("mOptsPage_Pyramids"));
        verticalLayout_9 = new QVBoxLayout(mOptsPage_Pyramids);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        scrollArea_5 = new QgsScrollArea(mOptsPage_Pyramids);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setFrameShape(QFrame::NoFrame);
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 577, 190));
        verticalLayout_12 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        mPyramidsGrpBx = new QGroupBox(scrollAreaWidgetContents_5);
        mPyramidsGrpBx->setObjectName(QString::fromUtf8("mPyramidsGrpBx"));
        gridLayout_6 = new QGridLayout(mPyramidsGrpBx);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        textLabel4_2 = new QLabel(mPyramidsGrpBx);
        textLabel4_2->setObjectName(QString::fromUtf8("textLabel4_2"));

        gridLayout_6->addWidget(textLabel4_2, 2, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        textLabel5 = new QLabel(mPyramidsGrpBx);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));

        gridLayout_8->addWidget(textLabel5, 0, 1, 1, 1);

        lbxPyramidResolutions = new QListWidget(mPyramidsGrpBx);
        lbxPyramidResolutions->setObjectName(QString::fromUtf8("lbxPyramidResolutions"));
        lbxPyramidResolutions->setMinimumSize(QSize(150, 0));
        lbxPyramidResolutions->setMaximumSize(QSize(150, 32767));
        lbxPyramidResolutions->setSelectionMode(QAbstractItemView::MultiSelection);

        gridLayout_8->addWidget(lbxPyramidResolutions, 1, 1, 1, 1);

        tePyramidDescription = new QTextEdit(mPyramidsGrpBx);
        tePyramidDescription->setObjectName(QString::fromUtf8("tePyramidDescription"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(4);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(tePyramidDescription->sizePolicy().hasHeightForWidth());
        tePyramidDescription->setSizePolicy(sizePolicy7);

        gridLayout_8->addWidget(tePyramidDescription, 0, 0, 2, 1);


        gridLayout_6->addLayout(gridLayout_8, 0, 0, 1, 5);

        buttonBuildPyramids = new QPushButton(mPyramidsGrpBx);
        buttonBuildPyramids->setObjectName(QString::fromUtf8("buttonBuildPyramids"));
        buttonBuildPyramids->setEnabled(false);

        gridLayout_6->addWidget(buttonBuildPyramids, 2, 4, 1, 1);

        cboResamplingMethod = new QComboBox(mPyramidsGrpBx);
        cboResamplingMethod->addItem(QString());
        cboResamplingMethod->addItem(QString());
        cboResamplingMethod->setObjectName(QString::fromUtf8("cboResamplingMethod"));

        gridLayout_6->addWidget(cboResamplingMethod, 2, 1, 1, 1);

        mPyramidProgress = new QProgressBar(mPyramidsGrpBx);
        mPyramidProgress->setObjectName(QString::fromUtf8("mPyramidProgress"));
        mPyramidProgress->setValue(0);

        gridLayout_6->addWidget(mPyramidProgress, 2, 2, 1, 2);

        cbxPyramidsFormat = new QComboBox(mPyramidsGrpBx);
        cbxPyramidsFormat->addItem(QString());
        cbxPyramidsFormat->addItem(QString());
        cbxPyramidsFormat->addItem(QString());
        cbxPyramidsFormat->setObjectName(QString::fromUtf8("cbxPyramidsFormat"));
        sizePolicy3.setHeightForWidth(cbxPyramidsFormat->sizePolicy().hasHeightForWidth());
        cbxPyramidsFormat->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(cbxPyramidsFormat, 1, 1, 1, 1);

        label_11 = new QLabel(mPyramidsGrpBx);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_6->addWidget(label_11, 1, 0, 1, 1);


        verticalLayout_12->addWidget(mPyramidsGrpBx);

        scrollArea_5->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_9->addWidget(scrollArea_5);

        mOptionsStackedWidget->addWidget(mOptsPage_Pyramids);
        mOptsPage_Metadata = new QWidget();
        mOptsPage_Metadata->setObjectName(QString::fromUtf8("mOptsPage_Metadata"));
        verticalLayout_13 = new QVBoxLayout(mOptsPage_Metadata);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        metadataFrame = new QFrame(mOptsPage_Metadata);
        metadataFrame->setObjectName(QString::fromUtf8("metadataFrame"));
        metadataFrame->setFrameShape(QFrame::NoFrame);
        metadataFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_13->addWidget(metadataFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_Metadata);
        mOptsPage_Legend = new QWidget();
        mOptsPage_Legend->setObjectName(QString::fromUtf8("mOptsPage_Legend"));
        verticalLayout_18 = new QVBoxLayout(mOptsPage_Legend);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(mOptsPage_Legend);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_17 = new QVBoxLayout(groupBox);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        mLegendConfigEmbeddedWidget = new QgsLayerTreeEmbeddedConfigWidget(groupBox);
        mLegendConfigEmbeddedWidget->setObjectName(QString::fromUtf8("mLegendConfigEmbeddedWidget"));

        verticalLayout_17->addWidget(mLegendConfigEmbeddedWidget);


        verticalLayout_18->addWidget(groupBox);

        mOptionsStackedWidget->addWidget(mOptsPage_Legend);
        mOptsPage_Server = new QWidget();
        mOptsPage_Server->setObjectName(QString::fromUtf8("mOptsPage_Server"));
        verticalLayout_8 = new QVBoxLayout(mOptsPage_Server);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        scrollArea_4 = new QgsScrollArea(mOptsPage_Server);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setFrameShape(QFrame::NoFrame);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 343, 684));
        gridLayout_12 = new QGridLayout(scrollAreaWidgetContents_4);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        mMetaDescriptionGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mMetaDescriptionGrpBx->setObjectName(QString::fromUtf8("mMetaDescriptionGrpBx"));
        mMetaDescriptionGrpBx->setProperty("syncGroup", QVariant(QString::fromUtf8("rastermeta")));
        gridLayout_5 = new QGridLayout(mMetaDescriptionGrpBx);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mLayerTitleLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerTitleLabel->setObjectName(QString::fromUtf8("mLayerTitleLabel"));

        gridLayout_5->addWidget(mLayerTitleLabel, 1, 0, 1, 1);

        mLayerKeywordListLabel_3 = new QLabel(mMetaDescriptionGrpBx);
        mLayerKeywordListLabel_3->setObjectName(QString::fromUtf8("mLayerKeywordListLabel_3"));

        gridLayout_5->addWidget(mLayerKeywordListLabel_3, 6, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        mLayerDataUrlLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerDataUrlLineEdit->setObjectName(QString::fromUtf8("mLayerDataUrlLineEdit"));

        horizontalLayout_13->addWidget(mLayerDataUrlLineEdit);

        mLayerDataUrlFormatLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerDataUrlFormatLabel->setObjectName(QString::fromUtf8("mLayerDataUrlFormatLabel"));

        horizontalLayout_13->addWidget(mLayerDataUrlFormatLabel);

        mLayerDataUrlFormatComboBox = new QComboBox(mMetaDescriptionGrpBx);
        mLayerDataUrlFormatComboBox->addItem(QString::fromUtf8("text/html"));
        mLayerDataUrlFormatComboBox->addItem(QString::fromUtf8("text/plain"));
        mLayerDataUrlFormatComboBox->addItem(QString::fromUtf8("application/pdf"));
        mLayerDataUrlFormatComboBox->setObjectName(QString::fromUtf8("mLayerDataUrlFormatComboBox"));

        horizontalLayout_13->addWidget(mLayerDataUrlFormatComboBox);


        gridLayout_5->addLayout(horizontalLayout_13, 6, 1, 1, 1);

        mLayerKeywordListLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerKeywordListLineEdit->setObjectName(QString::fromUtf8("mLayerKeywordListLineEdit"));

        gridLayout_5->addWidget(mLayerKeywordListLineEdit, 5, 1, 1, 1);

        mLayerKeywordListLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerKeywordListLabel->setObjectName(QString::fromUtf8("mLayerKeywordListLabel"));

        gridLayout_5->addWidget(mLayerKeywordListLabel, 5, 0, 1, 1);

        mLayerShortNameLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerShortNameLineEdit->setObjectName(QString::fromUtf8("mLayerShortNameLineEdit"));

        gridLayout_5->addWidget(mLayerShortNameLineEdit, 0, 1, 1, 1);

        mLayerShortNameLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerShortNameLabel->setObjectName(QString::fromUtf8("mLayerShortNameLabel"));

        gridLayout_5->addWidget(mLayerShortNameLabel, 0, 0, 1, 1);

        mLayerAbstractLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerAbstractLabel->setObjectName(QString::fromUtf8("mLayerAbstractLabel"));

        gridLayout_5->addWidget(mLayerAbstractLabel, 3, 0, 1, 1);

        mLayerAbstractTextEdit = new QTextEdit(mMetaDescriptionGrpBx);
        mLayerAbstractTextEdit->setObjectName(QString::fromUtf8("mLayerAbstractTextEdit"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(mLayerAbstractTextEdit->sizePolicy().hasHeightForWidth());
        mLayerAbstractTextEdit->setSizePolicy(sizePolicy8);
        mLayerAbstractTextEdit->setMaximumSize(QSize(16777215, 50));

        gridLayout_5->addWidget(mLayerAbstractTextEdit, 3, 1, 1, 1);

        mLayerTitleLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerTitleLineEdit->setObjectName(QString::fromUtf8("mLayerTitleLineEdit"));

        gridLayout_5->addWidget(mLayerTitleLineEdit, 1, 1, 1, 1);


        gridLayout_12->addWidget(mMetaDescriptionGrpBx, 0, 0, 1, 1);

        mMetaAttributionGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
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


        gridLayout_12->addWidget(mMetaAttributionGrpBx, 1, 0, 1, 1);

        mMetaMetaUrlGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mMetaMetaUrlGrpBx->setObjectName(QString::fromUtf8("mMetaMetaUrlGrpBx"));
        mMetaMetaUrlGrpBx->setProperty("syncGroup", QVariant(QString::fromUtf8("vectormeta")));
        gridLayout_9 = new QGridLayout(mMetaMetaUrlGrpBx);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        mLayerMetadataUrlLabel = new QLabel(mMetaMetaUrlGrpBx);
        mLayerMetadataUrlLabel->setObjectName(QString::fromUtf8("mLayerMetadataUrlLabel"));

        gridLayout_9->addWidget(mLayerMetadataUrlLabel, 0, 0, 1, 1);

        mLayerMetadataUrlLineEdit = new QLineEdit(mMetaMetaUrlGrpBx);
        mLayerMetadataUrlLineEdit->setObjectName(QString::fromUtf8("mLayerMetadataUrlLineEdit"));

        gridLayout_9->addWidget(mLayerMetadataUrlLineEdit, 0, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        mLayerMetadataUrlTypeLabel = new QLabel(mMetaMetaUrlGrpBx);
        mLayerMetadataUrlTypeLabel->setObjectName(QString::fromUtf8("mLayerMetadataUrlTypeLabel"));

        horizontalLayout_8->addWidget(mLayerMetadataUrlTypeLabel);

        mLayerMetadataUrlTypeComboBox = new QComboBox(mMetaMetaUrlGrpBx);
        mLayerMetadataUrlTypeComboBox->addItem(QString::fromUtf8(""));
        mLayerMetadataUrlTypeComboBox->addItem(QString::fromUtf8("FGDC"));
        mLayerMetadataUrlTypeComboBox->addItem(QString::fromUtf8("TC211"));
        mLayerMetadataUrlTypeComboBox->setObjectName(QString::fromUtf8("mLayerMetadataUrlTypeComboBox"));

        horizontalLayout_8->addWidget(mLayerMetadataUrlTypeComboBox);

        mLayerMetadataUrlFormatLabel = new QLabel(mMetaMetaUrlGrpBx);
        mLayerMetadataUrlFormatLabel->setObjectName(QString::fromUtf8("mLayerMetadataUrlFormatLabel"));

        horizontalLayout_8->addWidget(mLayerMetadataUrlFormatLabel);

        mLayerMetadataUrlFormatComboBox = new QComboBox(mMetaMetaUrlGrpBx);
        mLayerMetadataUrlFormatComboBox->addItem(QString::fromUtf8(""));
        mLayerMetadataUrlFormatComboBox->addItem(QString::fromUtf8("text/plain"));
        mLayerMetadataUrlFormatComboBox->addItem(QString::fromUtf8("text/xml"));
        mLayerMetadataUrlFormatComboBox->setObjectName(QString::fromUtf8("mLayerMetadataUrlFormatComboBox"));

        horizontalLayout_8->addWidget(mLayerMetadataUrlFormatComboBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);


        gridLayout_9->addLayout(horizontalLayout_8, 1, 1, 1, 1);


        gridLayout_12->addWidget(mMetaMetaUrlGrpBx, 2, 0, 1, 1);

        mMetaLegendGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
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


        gridLayout_12->addWidget(mMetaLegendGrpBx, 3, 0, 1, 1);

        mWMSPrintGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mWMSPrintGroupBox->setObjectName(QString::fromUtf8("mWMSPrintGroupBox"));
        gridLayout_4 = new QGridLayout(mWMSPrintGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mWMSPrintLayerLineEdit = new QLineEdit(mWMSPrintGroupBox);
        mWMSPrintLayerLineEdit->setObjectName(QString::fromUtf8("mWMSPrintLayerLineEdit"));

        gridLayout_4->addWidget(mWMSPrintLayerLineEdit, 0, 0, 1, 1);


        gridLayout_12->addWidget(mWMSPrintGroupBox, 4, 0, 1, 1);

        mPublishDataSourceUrlCheckBox = new QCheckBox(scrollAreaWidgetContents_4);
        mPublishDataSourceUrlCheckBox->setObjectName(QString::fromUtf8("mPublishDataSourceUrlCheckBox"));

        gridLayout_12->addWidget(mPublishDataSourceUrlCheckBox, 5, 0, 1, 1);

        mBackgroundLayerCheckBox = new QCheckBox(scrollAreaWidgetContents_4);
        mBackgroundLayerCheckBox->setObjectName(QString::fromUtf8("mBackgroundLayerCheckBox"));

        gridLayout_12->addWidget(mBackgroundLayerCheckBox, 6, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_4, 7, 0, 1, 1);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_8->addWidget(scrollArea_4);

        mOptionsStackedWidget->addWidget(mOptsPage_Server);

        verticalLayout_3->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout->addWidget(mOptionsSplitter);

        mButtonBoxFrame = new QFrame(QgsRasterLayerPropertiesBase);
        mButtonBoxFrame->setObjectName(QString::fromUtf8("mButtonBoxFrame"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(mButtonBoxFrame->sizePolicy().hasHeightForWidth());
        mButtonBoxFrame->setSizePolicy(sizePolicy9);
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
        QWidget::setTabOrder(mOptionsListWidget, scrollArea_3);
        QWidget::setTabOrder(scrollArea_3, mLayerOrigNameLineEd);
        QWidget::setTabOrder(mLayerOrigNameLineEd, leDisplayName);
        QWidget::setTabOrder(leDisplayName, mCrsGroupBox);
        QWidget::setTabOrder(mCrsGroupBox, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mResetColorRenderingBtn);
        QWidget::setTabOrder(mResetColorRenderingBtn, scrollArea);
        QWidget::setTabOrder(scrollArea, mRenderTypeComboBox);
        QWidget::setTabOrder(mRenderTypeComboBox, mBlendModeComboBox);
        QWidget::setTabOrder(mBlendModeComboBox, mSliderBrightness);
        QWidget::setTabOrder(mSliderBrightness, mBrightnessSpinBox);
        QWidget::setTabOrder(mBrightnessSpinBox, mSliderContrast);
        QWidget::setTabOrder(mSliderContrast, mContrastSpinBox);
        QWidget::setTabOrder(mContrastSpinBox, mSliderGamma);
        QWidget::setTabOrder(mSliderGamma, mGammaSpinBox);
        QWidget::setTabOrder(mGammaSpinBox, sliderSaturation);
        QWidget::setTabOrder(sliderSaturation, spinBoxSaturation);
        QWidget::setTabOrder(spinBoxSaturation, comboGrayscale);
        QWidget::setTabOrder(comboGrayscale, mColorizeCheck);
        QWidget::setTabOrder(mColorizeCheck, btnColorizeColor);
        QWidget::setTabOrder(btnColorizeColor, sliderColorizeStrength);
        QWidget::setTabOrder(sliderColorizeStrength, spinColorizeStrength);
        QWidget::setTabOrder(spinColorizeStrength, mZoomedInResamplingComboBox);
        QWidget::setTabOrder(mZoomedInResamplingComboBox, mZoomedOutResamplingComboBox);
        QWidget::setTabOrder(mZoomedOutResamplingComboBox, mMaximumOversamplingSpinBox);
        QWidget::setTabOrder(mMaximumOversamplingSpinBox, mCbEarlyResampling);
        QWidget::setTabOrder(mCbEarlyResampling, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, mSrcNoDataValueCheckBox);
        QWidget::setTabOrder(mSrcNoDataValueCheckBox, leNoDataValue);
        QWidget::setTabOrder(leNoDataValue, cboxTransparencyBand);
        QWidget::setTabOrder(cboxTransparencyBand, tableTransparency);
        QWidget::setTabOrder(tableTransparency, pbnAddValuesManually);
        QWidget::setTabOrder(pbnAddValuesManually, pbnAddValuesFromDisplay);
        QWidget::setTabOrder(pbnAddValuesFromDisplay, pbnRemoveSelectedRow);
        QWidget::setTabOrder(pbnRemoveSelectedRow, pbnDefaultValues);
        QWidget::setTabOrder(pbnDefaultValues, pbnImportTransparentPixelValues);
        QWidget::setTabOrder(pbnImportTransparentPixelValues, pbnExportTransparentPixelValues);
        QWidget::setTabOrder(pbnExportTransparentPixelValues, scrollArea_6);
        QWidget::setTabOrder(scrollArea_6, chkUseScaleDependentRendering);
        QWidget::setTabOrder(chkUseScaleDependentRendering, mRefreshLayerCheckBox);
        QWidget::setTabOrder(mRefreshLayerCheckBox, mRefreshLayerIntervalSpinBox);
        QWidget::setTabOrder(mRefreshLayerIntervalSpinBox, scrollArea_5);
        QWidget::setTabOrder(scrollArea_5, tePyramidDescription);
        QWidget::setTabOrder(tePyramidDescription, lbxPyramidResolutions);
        QWidget::setTabOrder(lbxPyramidResolutions, cbxPyramidsFormat);
        QWidget::setTabOrder(cbxPyramidsFormat, cboResamplingMethod);
        QWidget::setTabOrder(cboResamplingMethod, buttonBuildPyramids);
        QWidget::setTabOrder(buttonBuildPyramids, scrollArea_4);
        QWidget::setTabOrder(scrollArea_4, mLayerShortNameLineEdit);
        QWidget::setTabOrder(mLayerShortNameLineEdit, mLayerTitleLineEdit);
        QWidget::setTabOrder(mLayerTitleLineEdit, mLayerAbstractTextEdit);
        QWidget::setTabOrder(mLayerAbstractTextEdit, mLayerKeywordListLineEdit);
        QWidget::setTabOrder(mLayerKeywordListLineEdit, mLayerDataUrlLineEdit);
        QWidget::setTabOrder(mLayerDataUrlLineEdit, mLayerDataUrlFormatComboBox);
        QWidget::setTabOrder(mLayerDataUrlFormatComboBox, mLayerAttributionLineEdit);
        QWidget::setTabOrder(mLayerAttributionLineEdit, mLayerAttributionUrlLineEdit);
        QWidget::setTabOrder(mLayerAttributionUrlLineEdit, mLayerMetadataUrlLineEdit);
        QWidget::setTabOrder(mLayerMetadataUrlLineEdit, mLayerMetadataUrlTypeComboBox);
        QWidget::setTabOrder(mLayerMetadataUrlTypeComboBox, mLayerMetadataUrlFormatComboBox);
        QWidget::setTabOrder(mLayerMetadataUrlFormatComboBox, mLayerLegendUrlLineEdit);
        QWidget::setTabOrder(mLayerLegendUrlLineEdit, mLayerLegendUrlFormatComboBox);
        QWidget::setTabOrder(mLayerLegendUrlFormatComboBox, mWMSPrintLayerLineEdit);
        QWidget::setTabOrder(mWMSPrintLayerLineEdit, mPublishDataSourceUrlCheckBox);
        QWidget::setTabOrder(mPublishDataSourceUrlCheckBox, mBackgroundLayerCheckBox);

        retranslateUi(QgsRasterLayerPropertiesBase);
        QObject::connect(mOptionsListWidget, SIGNAL(currentRowChanged(int)), mOptionsStackedWidget, SLOT(setCurrentIndex(int)));

        mOptionsListWidget->setCurrentRow(0);
        mOptionsStackedWidget->setCurrentIndex(1);
        mLayerLegendUrlFormatComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsRasterLayerPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsRasterLayerPropertiesBase)
    {
        QgsRasterLayerPropertiesBase->setWindowTitle(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Raster Layer Properties", nullptr));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Information", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Source", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Symbology", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem2->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Symbology", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Transparency", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem3->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Transparency", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem4 = mOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Histogram", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem4->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Histogram", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem5 = mOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Rendering", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem5->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Rendering", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem6 = mOptionsListWidget->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Temporal", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem6->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Temporal Settings", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem7 = mOptionsListWidget->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Pyramids", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem7->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Pyramids", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem8 = mOptionsListWidget->item(8);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Metadata", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = mOptionsListWidget->item(9);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Legend", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = mOptionsListWidget->item(10);
        ___qlistwidgetitem10->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "QGIS Server", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem10->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Edit QGIS Server settings", nullptr));
#endif // QT_CONFIG(tooltip)
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        label_8->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Layer name", nullptr));
        label_9->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "displayed as", nullptr));
        mCrsGroupBox->setTitle(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Assigned Coordinate Reference System (CRS)", nullptr));
        label_17->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "<html><head/><body><p><span style=\" font-weight:600;\">Changing this option does not modify the original data source or perform any reprojection of the raster layer. Rather, it can be used to override the layer's CRS within this project if it could not be detected or has been incorrectly detected.</span></p><p>The Processing \342\200\234<span style=\" font-style:italic;\">Warp (reproject)</span>\342\200\235 tool should be used to reproject a raster source and permanently change the data source's CRS.</p></body></html>", nullptr));
        mSourceGroupBox->setTitle(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Layer Source", nullptr));
        mBandRenderingGrpBx->setTitle(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Band Rendering", nullptr));
        mRenderTypeLabel->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Render type", nullptr));
        mColorRenderingGrpBox->setTitle(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Color Rendering", nullptr));
        label_3->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Hue", nullptr));
        mBlendTypeLabel->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Blending mode", nullptr));
        label_2->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Brightness", nullptr));
        label_5->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Contrast", nullptr));
        labelGrayscale->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Grayscale", nullptr));
        mColorizeCheck->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Colorize", nullptr));
        btnColorizeColor->setText(QString());
        labelColorizeStrength->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Strength", nullptr));
        spinColorizeStrength->setSuffix(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "%", nullptr));
        comboGrayscale->setItemText(0, QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Off", nullptr));
        comboGrayscale->setItemText(1, QCoreApplication::translate("QgsRasterLayerPropertiesBase", "By lightness", nullptr));
        comboGrayscale->setItemText(2, QCoreApplication::translate("QgsRasterLayerPropertiesBase", "By luminosity", nullptr));
        comboGrayscale->setItemText(3, QCoreApplication::translate("QgsRasterLayerPropertiesBase", "By average", nullptr));

#if QT_CONFIG(tooltip)
        mResetColorRenderingBtn->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Reset all color rendering options to default", nullptr));
#endif // QT_CONFIG(tooltip)
        mResetColorRenderingBtn->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Reset", nullptr));
        label_15->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Gamma", nullptr));
        labelSaturation->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Saturation", nullptr));
        mResamplingGroupBox->setTitle(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Resampling", nullptr));
        mZoomedInResamplingLabel->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Zoomed: in", nullptr));
        mZoomedOutResamplingLabel->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "out", nullptr));
        mMaximumOversamplingLabel->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Oversampling", nullptr));
        mCbEarlyResampling->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Early resampling", nullptr));
        gboxNoDataValue_2->setTitle(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Global Opacity", nullptr));
        gboxNoDataValue->setTitle(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "No Data Value", nullptr));
#if QT_CONFIG(tooltip)
        mSrcNoDataValueCheckBox->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Use original source no data value.", nullptr));
#endif // QT_CONFIG(tooltip)
        mSrcNoDataValueCheckBox->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "No data value", nullptr));
#if QT_CONFIG(tooltip)
        lblSrcNoDataValue->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Original data source no data value, if exists.", nullptr));
#endif // QT_CONFIG(tooltip)
        lblSrcNoDataValue->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "<src no data value>", nullptr));
#if QT_CONFIG(tooltip)
        lblUserNoDataValueLabel->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Additional user defined no data value.", nullptr));
#endif // QT_CONFIG(tooltip)
        lblUserNoDataValueLabel->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Additional no data value", nullptr));
#if QT_CONFIG(tooltip)
        leNoDataValue->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Additional user defined no data value.", nullptr));
#endif // QT_CONFIG(tooltip)
        gboxCustomTransparency->setTitle(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Custom Transparency Options", nullptr));
        lblTransparent->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Transparency band", nullptr));
#if QT_CONFIG(tooltip)
        pbnAddValuesManually->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Add values manually", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnAddValuesManually->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        pbnAddValuesFromDisplay->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Add values from display", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnAddValuesFromDisplay->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        pbnRemoveSelectedRow->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Remove selected row", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnRemoveSelectedRow->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        pbnDefaultValues->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Default values", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnDefaultValues->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        pbnImportTransparentPixelValues->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Import from file", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnImportTransparentPixelValues->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        pbnExportTransparentPixelValues->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Export to file", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnExportTransparentPixelValues->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "\342\200\246", nullptr));
        label_6->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Transparent pixel list", nullptr));
        mHistogramGrpBx->setTitle(QString());
        chkUseScaleDependentRendering->setTitle(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Scale Dependent Visibility", nullptr));
#if QT_CONFIG(tooltip)
        mScaleRangeWidget->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        mScaleRangeWidget->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        mRefreshLayerCheckBox->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Refresh layer at interval (seconds)", nullptr));
#if QT_CONFIG(tooltip)
        mRefreshLayerIntervalSpinBox->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Higher values result in more simplification", nullptr));
#endif // QT_CONFIG(tooltip)
        mPyramidsGrpBx->setTitle(QString());
        textLabel4_2->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Resampling method", nullptr));
        textLabel5->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Resolutions", nullptr));
        tePyramidDescription->setHtml(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Fira Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\"><br /></span></p></body></html>", nullptr));
        buttonBuildPyramids->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Build Pyramids", nullptr));
        cboResamplingMethod->setItemText(0, QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Average", nullptr));
        cboResamplingMethod->setItemText(1, QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Nearest Neighbour", nullptr));

        cbxPyramidsFormat->setItemText(0, QCoreApplication::translate("QgsRasterLayerPropertiesBase", "External", nullptr));
        cbxPyramidsFormat->setItemText(1, QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Internal (if possible)", nullptr));
        cbxPyramidsFormat->setItemText(2, QCoreApplication::translate("QgsRasterLayerPropertiesBase", "External (Erdas Imagine)", nullptr));

        label_11->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Overview format", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Embedded Widgets in Legend", nullptr));
        mMetaDescriptionGrpBx->setTitle(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Description", nullptr));
        mLayerTitleLabel->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Title", nullptr));
        mLayerKeywordListLabel_3->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Data Url", nullptr));
#if QT_CONFIG(tooltip)
        mLayerDataUrlLineEdit->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "A URL of the data presentation.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerDataUrlLineEdit->setPlaceholderText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "A URL of the data presentation.", nullptr));
        mLayerDataUrlFormatLabel->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Format", nullptr));

#if QT_CONFIG(tooltip)
        mLayerKeywordListLineEdit->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "List of keywords separated by comma to help catalog searching.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerKeywordListLineEdit->setPlaceholderText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "List of keywords separated by comma to help catalog searching.", nullptr));
        mLayerKeywordListLabel->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Keyword list", nullptr));
#if QT_CONFIG(tooltip)
        mLayerShortNameLineEdit->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "A name used to identify the layer. The short name is a text string used for machine-to-machine communication.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerShortNameLineEdit->setPlaceholderText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "A name used to identify the layer. The short name is a text string used for machine-to-machine communication.", nullptr));
        mLayerShortNameLabel->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Short name", nullptr));
        mLayerAbstractLabel->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Abstract", nullptr));
#if QT_CONFIG(tooltip)
        mLayerAbstractTextEdit->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "The abstract is a descriptive narrative providing more information about the layer.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mLayerTitleLineEdit->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "The title is for the benefit of humans to identify layer.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerTitleLineEdit->setPlaceholderText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "The title is for the benefit of humans to identify layer.", nullptr));
        mMetaAttributionGrpBx->setTitle(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Attribution", nullptr));
        mLayerAttributionLabel->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Title", nullptr));
#if QT_CONFIG(tooltip)
        mLayerAttributionLineEdit->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Attribution's title indicates the provider of the layer.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerAttributionLineEdit->setPlaceholderText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Attribution's title indicates the provider of the layer.", nullptr));
        mLayerAttributionUrlLabel->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Url", nullptr));
#if QT_CONFIG(tooltip)
        mLayerAttributionUrlLineEdit->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Attribution's url gives a link to the webpage of the provider of the data layer.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerAttributionUrlLineEdit->setPlaceholderText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Attribution's url gives a link to the webpage of the provider of the data layer.", nullptr));
        mMetaMetaUrlGrpBx->setTitle(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "MetadataUrl", nullptr));
        mLayerMetadataUrlLabel->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Url", nullptr));
#if QT_CONFIG(tooltip)
        mLayerMetadataUrlLineEdit->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "The URL of the metadata document.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerMetadataUrlLineEdit->setPlaceholderText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "The URL of the metadata document.", nullptr));
        mLayerMetadataUrlTypeLabel->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Type", nullptr));

        mLayerMetadataUrlFormatLabel->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Format", nullptr));

        mMetaLegendGrpBx->setTitle(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "LegendUrl", nullptr));
        mLayerLegendUrlLabel->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Url", nullptr));
#if QT_CONFIG(tooltip)
        mLayerLegendUrlLineEdit->setToolTip(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "A URL of the legend image.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerLegendUrlLineEdit->setPlaceholderText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "A URL of the legend image.", nullptr));
        mLayerLegendUrlFormatLabel->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Format", nullptr));

        mWMSPrintGroupBox->setTitle(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "WMS Print layer", nullptr));
        mPublishDataSourceUrlCheckBox->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Publish WMS/WMTS data source uri", nullptr));
        mBackgroundLayerCheckBox->setText(QCoreApplication::translate("QgsRasterLayerPropertiesBase", "Advertise as background layer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsRasterLayerPropertiesBase: public Ui_QgsRasterLayerPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERLAYERPROPERTIESBASE_H
