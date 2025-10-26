/********************************************************************************
** Form generated from reading UI file 'qgswmssourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSWMSSOURCESELECTBASE_H
#define UI_QGSWMSSOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsfilterlineedit.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsWMSSourceSelectBase
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabServers;
    QWidget *tabLayers;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnConnect;
    QPushButton *btnNew;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnLoad;
    QPushButton *btnSave;
    QComboBox *cmbConnections;
    QGroupBox *btnGrpImageEncoding;
    QgsCollapsibleGroupBox *gbCRS;
    QGridLayout *gridLayout1;
    QLabel *label_2;
    QCheckBox *mContextualLegendCheckbox;
    QLabel *label_3;
    QLineEdit *mTileWidth;
    QLineEdit *mFeatureCount;
    QLineEdit *mTileHeight;
    QLabel *label_4;
    QLineEdit *mStepWidth;
    QLineEdit *mStepHeight;
    QgsProjectionSelectionWidget *mCrsSelector;
    QLabel *labelCoordRefSys;
    QTreeWidget *lstLayers;
    QHBoxLayout *horizontalLayout_3;
    QgsFilterLineEdit *mLayersFilterLineEdit;
    QWidget *tabLayerOrder;
    QGridLayout *gridLayout2;
    QPushButton *mLayerUpButton;
    QPushButton *mLayerDownButton;
    QSpacerItem *spacerItem;
    QTreeWidget *mLayerOrderTreeWidget;
    QWidget *tabTilesets;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QgsFilterLineEdit *mTilesetsFilterLineEdit;
    QHBoxLayout *mEncodingSchemeLayout;
    QLabel *label_5;
    QHBoxLayout *mInterpretationLayout;
    QTableWidget *lstTilesets;
    QCheckBox *mLoadLayersIndividuallyCheckBox;
    QLabel *labelStatus;

    void setupUi(QDialog *QgsWMSSourceSelectBase)
    {
        if (QgsWMSSourceSelectBase->objectName().isEmpty())
            QgsWMSSourceSelectBase->setObjectName(QString::fromUtf8("QgsWMSSourceSelectBase"));
        QgsWMSSourceSelectBase->resize(744, 679);
        QIcon icon;
        icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsWMSSourceSelectBase->setWindowIcon(icon);
        QgsWMSSourceSelectBase->setSizeGripEnabled(true);
        QgsWMSSourceSelectBase->setModal(true);
        gridLayout_2 = new QGridLayout(QgsWMSSourceSelectBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(QgsWMSSourceSelectBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Help);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);

        scrollArea = new QgsScrollArea(QgsWMSSourceSelectBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 744, 647));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabServers = new QTabWidget(scrollAreaWidgetContents);
        tabServers->setObjectName(QString::fromUtf8("tabServers"));
        tabServers->setEnabled(true);
        tabLayers = new QWidget();
        tabLayers->setObjectName(QString::fromUtf8("tabLayers"));
        gridLayout = new QGridLayout(tabLayers);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnConnect = new QPushButton(tabLayers);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));
        btnConnect->setEnabled(false);

        horizontalLayout_2->addWidget(btnConnect);

        btnNew = new QPushButton(tabLayers);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));

        horizontalLayout_2->addWidget(btnNew);

        btnEdit = new QPushButton(tabLayers);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));
        btnEdit->setEnabled(false);

        horizontalLayout_2->addWidget(btnEdit);

        btnDelete = new QPushButton(tabLayers);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        btnDelete->setEnabled(false);

        horizontalLayout_2->addWidget(btnDelete);

        horizontalSpacer_2 = new QSpacerItem(8, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btnLoad = new QPushButton(tabLayers);
        btnLoad->setObjectName(QString::fromUtf8("btnLoad"));

        horizontalLayout_2->addWidget(btnLoad);

        btnSave = new QPushButton(tabLayers);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        horizontalLayout_2->addWidget(btnSave);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        cmbConnections = new QComboBox(tabLayers);
        cmbConnections->setObjectName(QString::fromUtf8("cmbConnections"));

        gridLayout->addWidget(cmbConnections, 0, 0, 1, 1);

        btnGrpImageEncoding = new QGroupBox(tabLayers);
        btnGrpImageEncoding->setObjectName(QString::fromUtf8("btnGrpImageEncoding"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnGrpImageEncoding->sizePolicy().hasHeightForWidth());
        btnGrpImageEncoding->setSizePolicy(sizePolicy);
        btnGrpImageEncoding->setMinimumSize(QSize(16, 64));

        gridLayout->addWidget(btnGrpImageEncoding, 5, 0, 1, 1);

        gbCRS = new QgsCollapsibleGroupBox(tabLayers);
        gbCRS->setObjectName(QString::fromUtf8("gbCRS"));
        gridLayout1 = new QGridLayout(gbCRS);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label_2 = new QLabel(gbCRS);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        mContextualLegendCheckbox = new QCheckBox(gbCRS);
        mContextualLegendCheckbox->setObjectName(QString::fromUtf8("mContextualLegendCheckbox"));

        gridLayout1->addWidget(mContextualLegendCheckbox, 5, 0, 1, 1);

        label_3 = new QLabel(gbCRS);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 3, 0, 1, 2);

        mTileWidth = new QLineEdit(gbCRS);
        mTileWidth->setObjectName(QString::fromUtf8("mTileWidth"));

        gridLayout1->addWidget(mTileWidth, 1, 1, 1, 1);

        mFeatureCount = new QLineEdit(gbCRS);
        mFeatureCount->setObjectName(QString::fromUtf8("mFeatureCount"));

        gridLayout1->addWidget(mFeatureCount, 3, 2, 1, 1);

        mTileHeight = new QLineEdit(gbCRS);
        mTileHeight->setObjectName(QString::fromUtf8("mTileHeight"));

        gridLayout1->addWidget(mTileHeight, 1, 2, 1, 1);

        label_4 = new QLabel(gbCRS);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout1->addWidget(label_4, 2, 0, 1, 1);

        mStepWidth = new QLineEdit(gbCRS);
        mStepWidth->setObjectName(QString::fromUtf8("mStepWidth"));

        gridLayout1->addWidget(mStepWidth, 2, 1, 1, 1);

        mStepHeight = new QLineEdit(gbCRS);
        mStepHeight->setObjectName(QString::fromUtf8("mStepHeight"));

        gridLayout1->addWidget(mStepHeight, 2, 2, 1, 1);

        mCrsSelector = new QgsProjectionSelectionWidget(gbCRS);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        gridLayout1->addWidget(mCrsSelector, 4, 2, 1, 1);

        labelCoordRefSys = new QLabel(gbCRS);
        labelCoordRefSys->setObjectName(QString::fromUtf8("labelCoordRefSys"));

        gridLayout1->addWidget(labelCoordRefSys, 4, 0, 1, 2);


        gridLayout->addWidget(gbCRS, 6, 0, 1, 1);

        lstLayers = new QTreeWidget(tabLayers);
        lstLayers->setObjectName(QString::fromUtf8("lstLayers"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lstLayers->sizePolicy().hasHeightForWidth());
        lstLayers->setSizePolicy(sizePolicy1);
        lstLayers->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
        lstLayers->setAllColumnsShowFocus(true);

        gridLayout->addWidget(lstLayers, 4, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mLayersFilterLineEdit = new QgsFilterLineEdit(tabLayers);
        mLayersFilterLineEdit->setObjectName(QString::fromUtf8("mLayersFilterLineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mLayersFilterLineEdit->sizePolicy().hasHeightForWidth());
        mLayersFilterLineEdit->setSizePolicy(sizePolicy2);
        mLayersFilterLineEdit->setProperty("showSearchIcon", QVariant(true));
        mLayersFilterLineEdit->setProperty("qgisRelation", QVariant(QString::fromUtf8("")));

        horizontalLayout_3->addWidget(mLayersFilterLineEdit);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        tabServers->addTab(tabLayers, QString());
        tabLayerOrder = new QWidget();
        tabLayerOrder->setObjectName(QString::fromUtf8("tabLayerOrder"));
        gridLayout2 = new QGridLayout(tabLayerOrder);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        mLayerUpButton = new QPushButton(tabLayerOrder);
        mLayerUpButton->setObjectName(QString::fromUtf8("mLayerUpButton"));

        gridLayout2->addWidget(mLayerUpButton, 0, 0, 1, 1);

        mLayerDownButton = new QPushButton(tabLayerOrder);
        mLayerDownButton->setObjectName(QString::fromUtf8("mLayerDownButton"));

        gridLayout2->addWidget(mLayerDownButton, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(391, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem, 0, 2, 1, 1);

        mLayerOrderTreeWidget = new QTreeWidget(tabLayerOrder);
        mLayerOrderTreeWidget->setObjectName(QString::fromUtf8("mLayerOrderTreeWidget"));
        mLayerOrderTreeWidget->setColumnCount(3);

        gridLayout2->addWidget(mLayerOrderTreeWidget, 1, 0, 1, 3);

        tabServers->addTab(tabLayerOrder, QString());
        tabTilesets = new QWidget();
        tabTilesets->setObjectName(QString::fromUtf8("tabTilesets"));
        gridLayout_3 = new QGridLayout(tabTilesets);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mTilesetsFilterLineEdit = new QgsFilterLineEdit(tabTilesets);
        mTilesetsFilterLineEdit->setObjectName(QString::fromUtf8("mTilesetsFilterLineEdit"));
        sizePolicy2.setHeightForWidth(mTilesetsFilterLineEdit->sizePolicy().hasHeightForWidth());
        mTilesetsFilterLineEdit->setSizePolicy(sizePolicy2);
        mTilesetsFilterLineEdit->setProperty("showSearchIcon", QVariant(true));
        mTilesetsFilterLineEdit->setProperty("qgisRelation", QVariant(QString::fromUtf8("")));

        horizontalLayout_4->addWidget(mTilesetsFilterLineEdit);


        gridLayout_3->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        mEncodingSchemeLayout = new QHBoxLayout();
        mEncodingSchemeLayout->setSpacing(6);
        mEncodingSchemeLayout->setObjectName(QString::fromUtf8("mEncodingSchemeLayout"));
        mEncodingSchemeLayout->setContentsMargins(-1, 0, -1, -1);
        label_5 = new QLabel(tabTilesets);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        mEncodingSchemeLayout->addWidget(label_5);

        mInterpretationLayout = new QHBoxLayout();
        mInterpretationLayout->setSpacing(6);
        mInterpretationLayout->setObjectName(QString::fromUtf8("mInterpretationLayout"));

        mEncodingSchemeLayout->addLayout(mInterpretationLayout);

        mEncodingSchemeLayout->setStretch(1, 1);

        gridLayout_3->addLayout(mEncodingSchemeLayout, 3, 0, 1, 1);

        lstTilesets = new QTableWidget(tabTilesets);
        if (lstTilesets->columnCount() < 6)
            lstTilesets->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        lstTilesets->setObjectName(QString::fromUtf8("lstTilesets"));
        lstTilesets->setAlternatingRowColors(true);
        lstTilesets->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        lstTilesets->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        lstTilesets->setCornerButtonEnabled(false);
        lstTilesets->verticalHeader()->setVisible(false);

        gridLayout_3->addWidget(lstTilesets, 2, 0, 1, 1);

        tabServers->addTab(tabTilesets, QString());

        verticalLayout->addWidget(tabServers);

        mLoadLayersIndividuallyCheckBox = new QCheckBox(scrollAreaWidgetContents);
        mLoadLayersIndividuallyCheckBox->setObjectName(QString::fromUtf8("mLoadLayersIndividuallyCheckBox"));
        mLoadLayersIndividuallyCheckBox->setChecked(false);

        verticalLayout->addWidget(mLoadLayersIndividuallyCheckBox);

        labelStatus = new QLabel(scrollAreaWidgetContents);
        labelStatus->setObjectName(QString::fromUtf8("labelStatus"));
        QSizePolicy sizePolicy3(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelStatus->sizePolicy().hasHeightForWidth());
        labelStatus->setSizePolicy(sizePolicy3);
        labelStatus->setWordWrap(false);

        verticalLayout->addWidget(labelStatus);


        verticalLayout_2->addLayout(verticalLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(mTileWidth);
        label_3->setBuddy(mFeatureCount);
        label_4->setBuddy(mTileWidth);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(cmbConnections, btnConnect);
        QWidget::setTabOrder(btnConnect, btnNew);
        QWidget::setTabOrder(btnNew, btnEdit);
        QWidget::setTabOrder(btnEdit, btnDelete);
        QWidget::setTabOrder(btnDelete, btnLoad);
        QWidget::setTabOrder(btnLoad, btnSave);
        QWidget::setTabOrder(btnSave, mLayersFilterLineEdit);
        QWidget::setTabOrder(mLayersFilterLineEdit, lstLayers);
        QWidget::setTabOrder(lstLayers, mTileWidth);
        QWidget::setTabOrder(mTileWidth, mTileHeight);
        QWidget::setTabOrder(mTileHeight, mStepWidth);
        QWidget::setTabOrder(mStepWidth, mStepHeight);
        QWidget::setTabOrder(mStepHeight, mFeatureCount);
        QWidget::setTabOrder(mFeatureCount, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mContextualLegendCheckbox);
        QWidget::setTabOrder(mContextualLegendCheckbox, mLayerUpButton);
        QWidget::setTabOrder(mLayerUpButton, mLayerDownButton);
        QWidget::setTabOrder(mLayerDownButton, mLayerOrderTreeWidget);
        QWidget::setTabOrder(mLayerOrderTreeWidget, mTilesetsFilterLineEdit);
        QWidget::setTabOrder(mTilesetsFilterLineEdit, lstTilesets);

        retranslateUi(QgsWMSSourceSelectBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsWMSSourceSelectBase, SLOT(reject()));

        tabServers->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsWMSSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsWMSSourceSelectBase)
    {
        QgsWMSSourceSelectBase->setWindowTitle(QCoreApplication::translate("QgsWMSSourceSelectBase", "Add Layer(s) from a WM(T)S Server", nullptr));
#if QT_CONFIG(tooltip)
        btnConnect->setToolTip(QCoreApplication::translate("QgsWMSSourceSelectBase", "Connect to selected service", nullptr));
#endif // QT_CONFIG(tooltip)
        btnConnect->setText(QCoreApplication::translate("QgsWMSSourceSelectBase", "C&onnect", nullptr));
#if QT_CONFIG(tooltip)
        btnNew->setToolTip(QCoreApplication::translate("QgsWMSSourceSelectBase", "Create a new service connection", nullptr));
#endif // QT_CONFIG(tooltip)
        btnNew->setText(QCoreApplication::translate("QgsWMSSourceSelectBase", "&New", nullptr));
#if QT_CONFIG(tooltip)
        btnEdit->setToolTip(QCoreApplication::translate("QgsWMSSourceSelectBase", "Edit selected service connection", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEdit->setText(QCoreApplication::translate("QgsWMSSourceSelectBase", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        btnDelete->setToolTip(QCoreApplication::translate("QgsWMSSourceSelectBase", "Remove connection to selected service", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDelete->setText(QCoreApplication::translate("QgsWMSSourceSelectBase", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        btnLoad->setToolTip(QCoreApplication::translate("QgsWMSSourceSelectBase", "Load connections from file", nullptr));
#endif // QT_CONFIG(tooltip)
        btnLoad->setText(QCoreApplication::translate("QgsWMSSourceSelectBase", "Load", nullptr));
#if QT_CONFIG(tooltip)
        btnSave->setToolTip(QCoreApplication::translate("QgsWMSSourceSelectBase", "Save connections to file", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSave->setText(QCoreApplication::translate("QgsWMSSourceSelectBase", "Save", nullptr));
        btnGrpImageEncoding->setTitle(QCoreApplication::translate("QgsWMSSourceSelectBase", "Image Encoding", nullptr));
        gbCRS->setProperty("title", QVariant(QCoreApplication::translate("QgsWMSSourceSelectBase", "Options", nullptr)));
        label_2->setText(QCoreApplication::translate("QgsWMSSourceSelectBase", "Tile size", nullptr));
        mContextualLegendCheckbox->setText(QCoreApplication::translate("QgsWMSSourceSelectBase", "Use contextual WMS Legend", nullptr));
        label_3->setText(QCoreApplication::translate("QgsWMSSourceSelectBase", "Maximum number of GetFeatureInfo results", nullptr));
#if QT_CONFIG(tooltip)
        mTileWidth->setToolTip(QCoreApplication::translate("QgsWMSSourceSelectBase", "Tile width", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mFeatureCount->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mFeatureCount->setText(QCoreApplication::translate("QgsWMSSourceSelectBase", "10", nullptr));
#if QT_CONFIG(tooltip)
        mTileHeight->setToolTip(QCoreApplication::translate("QgsWMSSourceSelectBase", "Tile height", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("QgsWMSSourceSelectBase", "Request step size", nullptr));
#if QT_CONFIG(tooltip)
        mStepWidth->setToolTip(QCoreApplication::translate("QgsWMSSourceSelectBase", "Step width", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mStepHeight->setToolTip(QCoreApplication::translate("QgsWMSSourceSelectBase", "Step height", nullptr));
#endif // QT_CONFIG(tooltip)
        labelCoordRefSys->setText(QCoreApplication::translate("QgsWMSSourceSelectBase", "Coordinate Reference System", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = lstLayers->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("QgsWMSSourceSelectBase", "Abstract", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("QgsWMSSourceSelectBase", "Title", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("QgsWMSSourceSelectBase", "Name", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("QgsWMSSourceSelectBase", "ID", nullptr));
        tabServers->setTabText(tabServers->indexOf(tabLayers), QCoreApplication::translate("QgsWMSSourceSelectBase", "Layers", nullptr));
#if QT_CONFIG(tooltip)
        mLayerUpButton->setToolTip(QCoreApplication::translate("QgsWMSSourceSelectBase", "Move selected layer UP", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerUpButton->setText(QCoreApplication::translate("QgsWMSSourceSelectBase", "Up", nullptr));
#if QT_CONFIG(tooltip)
        mLayerDownButton->setToolTip(QCoreApplication::translate("QgsWMSSourceSelectBase", "Move selected layer DOWN", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerDownButton->setText(QCoreApplication::translate("QgsWMSSourceSelectBase", "Down", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = mLayerOrderTreeWidget->headerItem();
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("QgsWMSSourceSelectBase", "Title", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("QgsWMSSourceSelectBase", "Style", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("QgsWMSSourceSelectBase", "Layer", nullptr));
        tabServers->setTabText(tabServers->indexOf(tabLayerOrder), QCoreApplication::translate("QgsWMSSourceSelectBase", "Layer Order", nullptr));
        label_5->setText(QCoreApplication::translate("QgsWMSSourceSelectBase", "Interpretation", nullptr));
        QTableWidgetItem *___qtablewidgetitem = lstTilesets->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("QgsWMSSourceSelectBase", "Layer", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = lstTilesets->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("QgsWMSSourceSelectBase", "Format", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = lstTilesets->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("QgsWMSSourceSelectBase", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = lstTilesets->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("QgsWMSSourceSelectBase", "Style", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = lstTilesets->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("QgsWMSSourceSelectBase", "Tileset", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = lstTilesets->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("QgsWMSSourceSelectBase", "CRS", nullptr));
        tabServers->setTabText(tabServers->indexOf(tabTilesets), QCoreApplication::translate("QgsWMSSourceSelectBase", "Tilesets", nullptr));
#if QT_CONFIG(tooltip)
        mLoadLayersIndividuallyCheckBox->setToolTip(QCoreApplication::translate("QgsWMSSourceSelectBase", "Load each selected layer as an individual layer", nullptr));
#endif // QT_CONFIG(tooltip)
        mLoadLayersIndividuallyCheckBox->setText(QCoreApplication::translate("QgsWMSSourceSelectBase", "Load as separate layers", nullptr));
        labelStatus->setText(QCoreApplication::translate("QgsWMSSourceSelectBase", "Ready", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsWMSSourceSelectBase: public Ui_QgsWMSSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSWMSSOURCESELECTBASE_H
