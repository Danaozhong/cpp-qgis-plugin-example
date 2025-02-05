/********************************************************************************
** Form generated from reading UI file 'qgsowssourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSOWSSOURCESELECTBASE_H
#define UI_QGSOWSSOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
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

QT_BEGIN_NAMESPACE

class Ui_QgsOWSSourceSelectBase
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QLabel *mStatusLabel;
    QTabWidget *mTabWidget;
    QWidget *mLayersTab;
    QVBoxLayout *verticalLayout;
    QComboBox *mConnectionsComboBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *mConnectButton;
    QPushButton *mNewButton;
    QPushButton *mEditButton;
    QPushButton *mDeleteButton;
    QSpacerItem *horizontalSpacer_1;
    QPushButton *mLoadButton;
    QPushButton *mSaveButton;
    QPushButton *mAddDefaultButton;
    QTreeWidget *mLayersTreeWidget;
    QWidget *mTimeWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *mTimeLabel;
    QComboBox *mTimeComboBox;
    QWidget *mCRSWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mCRSLabel;
    QLabel *mSelectedCRSLabel;
    QPushButton *mChangeCRSButton;
    QWidget *mFormatWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *mFormatLabel;
    QComboBox *mFormatComboBox;
    QGroupBox *mWMSGroupBox;
    QGridLayout *gridLayout;
    QLabel *mLayerNameLabel;
    QLineEdit *mLayerNameLineEdit;
    QLineEdit *mTileWidthLineEdit;
    QLabel *mTileSizeLabel;
    QLineEdit *mTileHeightLineEdit;
    QLabel *mFeatureCountLabel;
    QLineEdit *mFeatureCountLineEdit;
    QWidget *mCacheWidget;
    QHBoxLayout *horizontalLayout_7;
    QLabel *mCacheLabel;
    QComboBox *mCacheComboBox;
    QWidget *mLayerOrderTab;
    QGridLayout *gridLayout1;
    QPushButton *mLayerUpButton;
    QPushButton *mLayerDownButton;
    QSpacerItem *horizontalSpacer_2;
    QTreeWidget *mLayerOrderTreeWidget;
    QWidget *mTilesetsTab;
    QGridLayout *gridLayout_3;
    QTableWidget *mTilesetsTableWidget;
    QWidget *mSearchTab;
    QGridLayout *gridLayout2;
    QLineEdit *mSearchTermLineEdit;
    QPushButton *mSearchButton;
    QTableWidget *mSearchTableWidget;
    QPushButton *mSearchAddButton;

    void setupUi(QDialog *QgsOWSSourceSelectBase)
    {
        if (QgsOWSSourceSelectBase->objectName().isEmpty())
            QgsOWSSourceSelectBase->setObjectName(QString::fromUtf8("QgsOWSSourceSelectBase"));
        QgsOWSSourceSelectBase->resize(743, 615);
        QIcon icon;
        icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsOWSSourceSelectBase->setWindowIcon(icon);
        QgsOWSSourceSelectBase->setSizeGripEnabled(true);
        QgsOWSSourceSelectBase->setModal(true);
        gridLayout_2 = new QGridLayout(QgsOWSSourceSelectBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        buttonBox = new QDialogButtonBox(QgsOWSSourceSelectBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Help);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);

        mStatusLabel = new QLabel(QgsOWSSourceSelectBase);
        mStatusLabel->setObjectName(QString::fromUtf8("mStatusLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mStatusLabel->sizePolicy().hasHeightForWidth());
        mStatusLabel->setSizePolicy(sizePolicy);
        mStatusLabel->setWordWrap(false);

        gridLayout_2->addWidget(mStatusLabel, 1, 0, 1, 1);

        mTabWidget = new QTabWidget(QgsOWSSourceSelectBase);
        mTabWidget->setObjectName(QString::fromUtf8("mTabWidget"));
        mTabWidget->setEnabled(true);
        mLayersTab = new QWidget();
        mLayersTab->setObjectName(QString::fromUtf8("mLayersTab"));
        verticalLayout = new QVBoxLayout(mLayersTab);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mConnectionsComboBox = new QComboBox(mLayersTab);
        mConnectionsComboBox->setObjectName(QString::fromUtf8("mConnectionsComboBox"));

        verticalLayout->addWidget(mConnectionsComboBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mConnectButton = new QPushButton(mLayersTab);
        mConnectButton->setObjectName(QString::fromUtf8("mConnectButton"));
        mConnectButton->setEnabled(false);

        horizontalLayout_3->addWidget(mConnectButton);

        mNewButton = new QPushButton(mLayersTab);
        mNewButton->setObjectName(QString::fromUtf8("mNewButton"));

        horizontalLayout_3->addWidget(mNewButton);

        mEditButton = new QPushButton(mLayersTab);
        mEditButton->setObjectName(QString::fromUtf8("mEditButton"));
        mEditButton->setEnabled(false);

        horizontalLayout_3->addWidget(mEditButton);

        mDeleteButton = new QPushButton(mLayersTab);
        mDeleteButton->setObjectName(QString::fromUtf8("mDeleteButton"));
        mDeleteButton->setEnabled(false);

        horizontalLayout_3->addWidget(mDeleteButton);

        horizontalSpacer_1 = new QSpacerItem(82, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_1);

        mLoadButton = new QPushButton(mLayersTab);
        mLoadButton->setObjectName(QString::fromUtf8("mLoadButton"));

        horizontalLayout_3->addWidget(mLoadButton);

        mSaveButton = new QPushButton(mLayersTab);
        mSaveButton->setObjectName(QString::fromUtf8("mSaveButton"));

        horizontalLayout_3->addWidget(mSaveButton);

        mAddDefaultButton = new QPushButton(mLayersTab);
        mAddDefaultButton->setObjectName(QString::fromUtf8("mAddDefaultButton"));

        horizontalLayout_3->addWidget(mAddDefaultButton);


        verticalLayout->addLayout(horizontalLayout_3);

        mLayersTreeWidget = new QTreeWidget(mLayersTab);
        mLayersTreeWidget->setObjectName(QString::fromUtf8("mLayersTreeWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLayersTreeWidget->sizePolicy().hasHeightForWidth());
        mLayersTreeWidget->setSizePolicy(sizePolicy1);
        mLayersTreeWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        mLayersTreeWidget->setAllColumnsShowFocus(true);

        verticalLayout->addWidget(mLayersTreeWidget);

        mTimeWidget = new QWidget(mLayersTab);
        mTimeWidget->setObjectName(QString::fromUtf8("mTimeWidget"));
        horizontalLayout = new QHBoxLayout(mTimeWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mTimeLabel = new QLabel(mTimeWidget);
        mTimeLabel->setObjectName(QString::fromUtf8("mTimeLabel"));

        horizontalLayout->addWidget(mTimeLabel);

        mTimeComboBox = new QComboBox(mTimeWidget);
        mTimeComboBox->setObjectName(QString::fromUtf8("mTimeComboBox"));
        mTimeComboBox->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mTimeComboBox->sizePolicy().hasHeightForWidth());
        mTimeComboBox->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(mTimeComboBox);


        verticalLayout->addWidget(mTimeWidget);

        mCRSWidget = new QWidget(mLayersTab);
        mCRSWidget->setObjectName(QString::fromUtf8("mCRSWidget"));
        horizontalLayout_2 = new QHBoxLayout(mCRSWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        mCRSLabel = new QLabel(mCRSWidget);
        mCRSLabel->setObjectName(QString::fromUtf8("mCRSLabel"));

        horizontalLayout_2->addWidget(mCRSLabel);

        mSelectedCRSLabel = new QLabel(mCRSWidget);
        mSelectedCRSLabel->setObjectName(QString::fromUtf8("mSelectedCRSLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mSelectedCRSLabel->sizePolicy().hasHeightForWidth());
        mSelectedCRSLabel->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(mSelectedCRSLabel);

        mChangeCRSButton = new QPushButton(mCRSWidget);
        mChangeCRSButton->setObjectName(QString::fromUtf8("mChangeCRSButton"));
        mChangeCRSButton->setEnabled(false);

        horizontalLayout_2->addWidget(mChangeCRSButton);


        verticalLayout->addWidget(mCRSWidget);

        mFormatWidget = new QWidget(mLayersTab);
        mFormatWidget->setObjectName(QString::fromUtf8("mFormatWidget"));
        horizontalLayout_6 = new QHBoxLayout(mFormatWidget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        mFormatLabel = new QLabel(mFormatWidget);
        mFormatLabel->setObjectName(QString::fromUtf8("mFormatLabel"));

        horizontalLayout_6->addWidget(mFormatLabel);

        mFormatComboBox = new QComboBox(mFormatWidget);
        mFormatComboBox->setObjectName(QString::fromUtf8("mFormatComboBox"));
        sizePolicy2.setHeightForWidth(mFormatComboBox->sizePolicy().hasHeightForWidth());
        mFormatComboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(mFormatComboBox);


        verticalLayout->addWidget(mFormatWidget);

        mWMSGroupBox = new QGroupBox(mLayersTab);
        mWMSGroupBox->setObjectName(QString::fromUtf8("mWMSGroupBox"));
        gridLayout = new QGridLayout(mWMSGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mLayerNameLabel = new QLabel(mWMSGroupBox);
        mLayerNameLabel->setObjectName(QString::fromUtf8("mLayerNameLabel"));

        gridLayout->addWidget(mLayerNameLabel, 0, 0, 1, 1);

        mLayerNameLineEdit = new QLineEdit(mWMSGroupBox);
        mLayerNameLineEdit->setObjectName(QString::fromUtf8("mLayerNameLineEdit"));

        gridLayout->addWidget(mLayerNameLineEdit, 0, 1, 1, 2);

        mTileWidthLineEdit = new QLineEdit(mWMSGroupBox);
        mTileWidthLineEdit->setObjectName(QString::fromUtf8("mTileWidthLineEdit"));

        gridLayout->addWidget(mTileWidthLineEdit, 1, 1, 1, 1);

        mTileSizeLabel = new QLabel(mWMSGroupBox);
        mTileSizeLabel->setObjectName(QString::fromUtf8("mTileSizeLabel"));

        gridLayout->addWidget(mTileSizeLabel, 1, 0, 1, 1);

        mTileHeightLineEdit = new QLineEdit(mWMSGroupBox);
        mTileHeightLineEdit->setObjectName(QString::fromUtf8("mTileHeightLineEdit"));

        gridLayout->addWidget(mTileHeightLineEdit, 1, 2, 1, 1);

        mFeatureCountLabel = new QLabel(mWMSGroupBox);
        mFeatureCountLabel->setObjectName(QString::fromUtf8("mFeatureCountLabel"));

        gridLayout->addWidget(mFeatureCountLabel, 2, 0, 1, 2);

        mFeatureCountLineEdit = new QLineEdit(mWMSGroupBox);
        mFeatureCountLineEdit->setObjectName(QString::fromUtf8("mFeatureCountLineEdit"));

        gridLayout->addWidget(mFeatureCountLineEdit, 2, 2, 1, 1);


        verticalLayout->addWidget(mWMSGroupBox);

        mCacheWidget = new QWidget(mLayersTab);
        mCacheWidget->setObjectName(QString::fromUtf8("mCacheWidget"));
        horizontalLayout_7 = new QHBoxLayout(mCacheWidget);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        mCacheLabel = new QLabel(mCacheWidget);
        mCacheLabel->setObjectName(QString::fromUtf8("mCacheLabel"));

        horizontalLayout_7->addWidget(mCacheLabel);

        mCacheComboBox = new QComboBox(mCacheWidget);
        mCacheComboBox->setObjectName(QString::fromUtf8("mCacheComboBox"));
        sizePolicy2.setHeightForWidth(mCacheComboBox->sizePolicy().hasHeightForWidth());
        mCacheComboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(mCacheComboBox);


        verticalLayout->addWidget(mCacheWidget);

        mTabWidget->addTab(mLayersTab, QString());
        mLayerOrderTab = new QWidget();
        mLayerOrderTab->setObjectName(QString::fromUtf8("mLayerOrderTab"));
        gridLayout1 = new QGridLayout(mLayerOrderTab);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        mLayerUpButton = new QPushButton(mLayerOrderTab);
        mLayerUpButton->setObjectName(QString::fromUtf8("mLayerUpButton"));

        gridLayout1->addWidget(mLayerUpButton, 0, 0, 1, 1);

        mLayerDownButton = new QPushButton(mLayerOrderTab);
        mLayerDownButton->setObjectName(QString::fromUtf8("mLayerDownButton"));

        gridLayout1->addWidget(mLayerDownButton, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(391, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        mLayerOrderTreeWidget = new QTreeWidget(mLayerOrderTab);
        mLayerOrderTreeWidget->setObjectName(QString::fromUtf8("mLayerOrderTreeWidget"));
        mLayerOrderTreeWidget->setColumnCount(2);

        gridLayout1->addWidget(mLayerOrderTreeWidget, 1, 0, 1, 3);

        mTabWidget->addTab(mLayerOrderTab, QString());
        mTilesetsTab = new QWidget();
        mTilesetsTab->setObjectName(QString::fromUtf8("mTilesetsTab"));
        gridLayout_3 = new QGridLayout(mTilesetsTab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mTilesetsTableWidget = new QTableWidget(mTilesetsTab);
        if (mTilesetsTableWidget->columnCount() < 5)
            mTilesetsTableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mTilesetsTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mTilesetsTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mTilesetsTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        mTilesetsTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        mTilesetsTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        mTilesetsTableWidget->setObjectName(QString::fromUtf8("mTilesetsTableWidget"));
        mTilesetsTableWidget->setAlternatingRowColors(true);
        mTilesetsTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        mTilesetsTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        mTilesetsTableWidget->setCornerButtonEnabled(false);
        mTilesetsTableWidget->verticalHeader()->setVisible(false);

        gridLayout_3->addWidget(mTilesetsTableWidget, 0, 0, 1, 1);

        mTabWidget->addTab(mTilesetsTab, QString());
        mSearchTab = new QWidget();
        mSearchTab->setObjectName(QString::fromUtf8("mSearchTab"));
        gridLayout2 = new QGridLayout(mSearchTab);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        mSearchTermLineEdit = new QLineEdit(mSearchTab);
        mSearchTermLineEdit->setObjectName(QString::fromUtf8("mSearchTermLineEdit"));

        gridLayout2->addWidget(mSearchTermLineEdit, 0, 0, 1, 1);

        mSearchButton = new QPushButton(mSearchTab);
        mSearchButton->setObjectName(QString::fromUtf8("mSearchButton"));

        gridLayout2->addWidget(mSearchButton, 0, 1, 1, 1);

        mSearchTableWidget = new QTableWidget(mSearchTab);
        if (mSearchTableWidget->columnCount() < 3)
            mSearchTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        mSearchTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        mSearchTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        mSearchTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        mSearchTableWidget->setObjectName(QString::fromUtf8("mSearchTableWidget"));
        mSearchTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        mSearchTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        mSearchTableWidget->setCornerButtonEnabled(false);
        mSearchTableWidget->verticalHeader()->setVisible(false);

        gridLayout2->addWidget(mSearchTableWidget, 1, 0, 1, 2);

        mSearchAddButton = new QPushButton(mSearchTab);
        mSearchAddButton->setObjectName(QString::fromUtf8("mSearchAddButton"));

        gridLayout2->addWidget(mSearchAddButton, 2, 0, 1, 2);

        mTabWidget->addTab(mSearchTab, QString());

        gridLayout_2->addWidget(mTabWidget, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        mSelectedCRSLabel->setBuddy(mChangeCRSButton);
        mLayerNameLabel->setBuddy(mLayerNameLineEdit);
        mTileSizeLabel->setBuddy(mTileWidthLineEdit);
        mFeatureCountLabel->setBuddy(mFeatureCountLineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mTabWidget, mConnectionsComboBox);
        QWidget::setTabOrder(mConnectionsComboBox, mConnectButton);
        QWidget::setTabOrder(mConnectButton, mNewButton);
        QWidget::setTabOrder(mNewButton, mEditButton);
        QWidget::setTabOrder(mEditButton, mDeleteButton);
        QWidget::setTabOrder(mDeleteButton, mLoadButton);
        QWidget::setTabOrder(mLoadButton, mSaveButton);
        QWidget::setTabOrder(mSaveButton, mAddDefaultButton);
        QWidget::setTabOrder(mAddDefaultButton, mLayersTreeWidget);
        QWidget::setTabOrder(mLayersTreeWidget, mTimeComboBox);
        QWidget::setTabOrder(mTimeComboBox, mChangeCRSButton);
        QWidget::setTabOrder(mChangeCRSButton, mFormatComboBox);
        QWidget::setTabOrder(mFormatComboBox, mLayerNameLineEdit);
        QWidget::setTabOrder(mLayerNameLineEdit, mTileWidthLineEdit);
        QWidget::setTabOrder(mTileWidthLineEdit, mTileHeightLineEdit);
        QWidget::setTabOrder(mTileHeightLineEdit, mFeatureCountLineEdit);
        QWidget::setTabOrder(mFeatureCountLineEdit, mCacheComboBox);
        QWidget::setTabOrder(mCacheComboBox, mLayerUpButton);
        QWidget::setTabOrder(mLayerUpButton, mLayerDownButton);
        QWidget::setTabOrder(mLayerDownButton, mLayerOrderTreeWidget);
        QWidget::setTabOrder(mLayerOrderTreeWidget, mTilesetsTableWidget);
        QWidget::setTabOrder(mTilesetsTableWidget, mSearchTermLineEdit);
        QWidget::setTabOrder(mSearchTermLineEdit, mSearchButton);
        QWidget::setTabOrder(mSearchButton, mSearchTableWidget);
        QWidget::setTabOrder(mSearchTableWidget, mSearchAddButton);
        QWidget::setTabOrder(mSearchAddButton, buttonBox);

        retranslateUi(QgsOWSSourceSelectBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsOWSSourceSelectBase, SLOT(reject()));

        mTabWidget->setCurrentIndex(0);
        mSearchButton->setDefault(true);


        QMetaObject::connectSlotsByName(QgsOWSSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsOWSSourceSelectBase)
    {
        QgsOWSSourceSelectBase->setWindowTitle(QApplication::translate("QgsOWSSourceSelectBase", "Add Layer(s) from a Server", nullptr));
        mStatusLabel->setText(QApplication::translate("QgsOWSSourceSelectBase", "Ready", nullptr));
#ifndef QT_NO_TOOLTIP
        mConnectButton->setToolTip(QApplication::translate("QgsOWSSourceSelectBase", "Connect to selected service", nullptr));
#endif // QT_NO_TOOLTIP
        mConnectButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "C&onnect", nullptr));
#ifndef QT_NO_TOOLTIP
        mNewButton->setToolTip(QApplication::translate("QgsOWSSourceSelectBase", "Create a new service connection", nullptr));
#endif // QT_NO_TOOLTIP
        mNewButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "&New", nullptr));
#ifndef QT_NO_TOOLTIP
        mEditButton->setToolTip(QApplication::translate("QgsOWSSourceSelectBase", "Edit selected service connection", nullptr));
#endif // QT_NO_TOOLTIP
        mEditButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "Edit", nullptr));
#ifndef QT_NO_TOOLTIP
        mDeleteButton->setToolTip(QApplication::translate("QgsOWSSourceSelectBase", "Remove connection to selected service", nullptr));
#endif // QT_NO_TOOLTIP
        mDeleteButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "Remove", nullptr));
#ifndef QT_NO_TOOLTIP
        mLoadButton->setToolTip(QApplication::translate("QgsOWSSourceSelectBase", "Load connections from file", nullptr));
#endif // QT_NO_TOOLTIP
        mLoadButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "Load", nullptr));
#ifndef QT_NO_TOOLTIP
        mSaveButton->setToolTip(QApplication::translate("QgsOWSSourceSelectBase", "Save connections to file", nullptr));
#endif // QT_NO_TOOLTIP
        mSaveButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "Save", nullptr));
#ifndef QT_NO_STATUSTIP
        mAddDefaultButton->setStatusTip(QApplication::translate("QgsOWSSourceSelectBase", "Adds a few example WMS servers", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        mAddDefaultButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        mAddDefaultButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "Add Default Servers", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = mLayersTreeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("QgsOWSSourceSelectBase", "Abstract", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsOWSSourceSelectBase", "Title", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsOWSSourceSelectBase", "Name", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsOWSSourceSelectBase", "ID", nullptr));
        mTimeLabel->setText(QApplication::translate("QgsOWSSourceSelectBase", "Time", nullptr));
        mCRSLabel->setText(QApplication::translate("QgsOWSSourceSelectBase", "Coordinate Reference System", nullptr));
        mSelectedCRSLabel->setText(QApplication::translate("QgsOWSSourceSelectBase", "Selected Coordinate Reference System", nullptr));
        mChangeCRSButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "Change\342\200\246", nullptr));
        mFormatLabel->setText(QApplication::translate("QgsOWSSourceSelectBase", "Format", nullptr));
        mWMSGroupBox->setTitle(QApplication::translate("QgsOWSSourceSelectBase", "Options", nullptr));
        mLayerNameLabel->setText(QApplication::translate("QgsOWSSourceSelectBase", "Layer name", nullptr));
        mTileSizeLabel->setText(QApplication::translate("QgsOWSSourceSelectBase", "Tile size", nullptr));
        mFeatureCountLabel->setText(QApplication::translate("QgsOWSSourceSelectBase", "Feature limit for GetFeatureInfo", nullptr));
        mCacheLabel->setText(QApplication::translate("QgsOWSSourceSelectBase", "Cache", nullptr));
#ifndef QT_NO_TOOLTIP
        mCacheComboBox->setToolTip(QApplication::translate("QgsOWSSourceSelectBase", "Cache preference\n"
"\n"
"Always cache: load from cache, even if it expired\n"
"\n"
"Prefer cache: load from cache if available, otherwise load from network. Note that this can return possibly stale (but not expired) items from cache\n"
"\n"
"Prefer network: default value; load from the network if the cached entry is older than the network entry\n"
"\n"
"Always network: always load from network and do not check if the cache has a valid entry (similar to the \"Reload\" feature in browsers)\n"
"", nullptr));
#endif // QT_NO_TOOLTIP
        mTabWidget->setTabText(mTabWidget->indexOf(mLayersTab), QApplication::translate("QgsOWSSourceSelectBase", "Layers", nullptr));
#ifndef QT_NO_TOOLTIP
        mLayerUpButton->setToolTip(QApplication::translate("QgsOWSSourceSelectBase", "Move selected layer UP", nullptr));
#endif // QT_NO_TOOLTIP
        mLayerUpButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "Up", nullptr));
#ifndef QT_NO_TOOLTIP
        mLayerDownButton->setToolTip(QApplication::translate("QgsOWSSourceSelectBase", "Move selected layer DOWN", nullptr));
#endif // QT_NO_TOOLTIP
        mLayerDownButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "Down", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = mLayerOrderTreeWidget->headerItem();
        ___qtreewidgetitem1->setText(1, QApplication::translate("QgsOWSSourceSelectBase", "Style", nullptr));
        ___qtreewidgetitem1->setText(0, QApplication::translate("QgsOWSSourceSelectBase", "Layer", nullptr));
        mTabWidget->setTabText(mTabWidget->indexOf(mLayerOrderTab), QApplication::translate("QgsOWSSourceSelectBase", "Layer Order", nullptr));
        QTableWidgetItem *___qtablewidgetitem = mTilesetsTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsOWSSourceSelectBase", "Layers", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = mTilesetsTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsOWSSourceSelectBase", "Styles", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = mTilesetsTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsOWSSourceSelectBase", "Size", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = mTilesetsTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsOWSSourceSelectBase", "Format", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = mTilesetsTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("QgsOWSSourceSelectBase", "CRS", nullptr));
        mTabWidget->setTabText(mTabWidget->indexOf(mTilesetsTab), QApplication::translate("QgsOWSSourceSelectBase", "Tilesets", nullptr));
        mSearchButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "Search", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = mSearchTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("QgsOWSSourceSelectBase", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = mSearchTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("QgsOWSSourceSelectBase", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = mSearchTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("QgsOWSSourceSelectBase", "URL", nullptr));
        mSearchAddButton->setText(QApplication::translate("QgsOWSSourceSelectBase", "Add Selected Row to WMS List", nullptr));
        mTabWidget->setTabText(mTabWidget->indexOf(mSearchTab), QApplication::translate("QgsOWSSourceSelectBase", "Server Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsOWSSourceSelectBase: public Ui_QgsOWSSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSOWSSOURCESELECTBASE_H
