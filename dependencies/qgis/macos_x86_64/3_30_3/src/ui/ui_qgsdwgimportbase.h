/********************************************************************************
** Form generated from reading UI file 'qgsdwgimportbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDWGIMPORTBASE_H
#define UI_QGSDWGIMPORTBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
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
#include <QtWidgets/QTableWidget>
#include "qgsfilewidget.h"
#include "qgsmessagebar.h"
#include "qgsprojectionselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDwgImportBase
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QGroupBox *mGroupBox;
    QGridLayout *gridLayout_2;
    QTableWidget *mLayers;
    QLineEdit *leLayerGroup;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *cbMergeLayers;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbDeselectAll;
    QPushButton *pbSelectAll;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QgsProjectionSelectionWidget *mCrsSelector;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *leDrawing;
    QPushButton *pbImportDrawing;
    QPushButton *pbBrowseDrawing;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QgsFileWidget *mDatabaseFileWidget;
    QPushButton *pbLoadDatabase;
    QLabel *lblMessage;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *cbExpandInserts;
    QCheckBox *cbUseCurves;
    QgsMessageBar *bar;

    void setupUi(QDialog *QgsDwgImportBase)
    {
        if (QgsDwgImportBase->objectName().isEmpty())
            QgsDwgImportBase->setObjectName(QString::fromUtf8("QgsDwgImportBase"));
        QgsDwgImportBase->resize(497, 415);
        gridLayout = new QGridLayout(QgsDwgImportBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(QgsDwgImportBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 8, 0, 1, 2);

        mGroupBox = new QGroupBox(QgsDwgImportBase);
        mGroupBox->setObjectName(QString::fromUtf8("mGroupBox"));
        mGroupBox->setCheckable(false);
        gridLayout_2 = new QGridLayout(mGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mLayers = new QTableWidget(mGroupBox);
        if (mLayers->columnCount() < 2)
            mLayers->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mLayers->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mLayers->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        mLayers->setObjectName(QString::fromUtf8("mLayers"));
        mLayers->setAlternatingRowColors(true);
        mLayers->setSortingEnabled(true);

        gridLayout_2->addWidget(mLayers, 1, 0, 1, 3);

        leLayerGroup = new QLineEdit(mGroupBox);
        leLayerGroup->setObjectName(QString::fromUtf8("leLayerGroup"));

        gridLayout_2->addWidget(leLayerGroup, 0, 2, 1, 1);

        label_3 = new QLabel(mGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        cbMergeLayers = new QCheckBox(mGroupBox);
        cbMergeLayers->setObjectName(QString::fromUtf8("cbMergeLayers"));

        horizontalLayout_3->addWidget(cbMergeLayers);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pbDeselectAll = new QPushButton(mGroupBox);
        pbDeselectAll->setObjectName(QString::fromUtf8("pbDeselectAll"));

        horizontalLayout_3->addWidget(pbDeselectAll);

        pbSelectAll = new QPushButton(mGroupBox);
        pbSelectAll->setObjectName(QString::fromUtf8("pbSelectAll"));

        horizontalLayout_3->addWidget(pbSelectAll);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 3);


        gridLayout->addWidget(mGroupBox, 3, 0, 1, 2);

        groupBox = new QGroupBox(QgsDwgImportBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mCrsSelector = new QgsProjectionSelectionWidget(groupBox);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        gridLayout_4->addWidget(mCrsSelector, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        leDrawing = new QLineEdit(groupBox);
        leDrawing->setObjectName(QString::fromUtf8("leDrawing"));
        leDrawing->setReadOnly(true);

        horizontalLayout_2->addWidget(leDrawing);

        pbImportDrawing = new QPushButton(groupBox);
        pbImportDrawing->setObjectName(QString::fromUtf8("pbImportDrawing"));

        horizontalLayout_2->addWidget(pbImportDrawing);

        pbBrowseDrawing = new QPushButton(groupBox);
        pbBrowseDrawing->setObjectName(QString::fromUtf8("pbBrowseDrawing"));

        horizontalLayout_2->addWidget(pbBrowseDrawing);


        gridLayout_4->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 3, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mDatabaseFileWidget = new QgsFileWidget(groupBox);
        mDatabaseFileWidget->setObjectName(QString::fromUtf8("mDatabaseFileWidget"));
        mDatabaseFileWidget->setFilter(QString::fromUtf8("*.gpkg;;*.GPKG"));

        horizontalLayout->addWidget(mDatabaseFileWidget);

        pbLoadDatabase = new QPushButton(groupBox);
        pbLoadDatabase->setObjectName(QString::fromUtf8("pbLoadDatabase"));

        horizontalLayout->addWidget(pbLoadDatabase);


        gridLayout_4->addLayout(horizontalLayout, 0, 1, 1, 1);

        lblMessage = new QLabel(groupBox);
        lblMessage->setObjectName(QString::fromUtf8("lblMessage"));
        lblMessage->setText(QString::fromUtf8("TextLabel"));

        gridLayout_4->addWidget(lblMessage, 5, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        cbExpandInserts = new QCheckBox(groupBox);
        cbExpandInserts->setObjectName(QString::fromUtf8("cbExpandInserts"));

        horizontalLayout_4->addWidget(cbExpandInserts);

        cbUseCurves = new QCheckBox(groupBox);
        cbUseCurves->setObjectName(QString::fromUtf8("cbUseCurves"));

        horizontalLayout_4->addWidget(cbUseCurves);


        gridLayout_4->addLayout(horizontalLayout_4, 7, 1, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 1, 2);

        bar = new QgsMessageBar(QgsDwgImportBase);
        bar->setObjectName(QString::fromUtf8("bar"));

        gridLayout->addWidget(bar, 0, 0, 1, 2);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(leLayerGroup);
        label_2->setBuddy(leDrawing);
        label_4->setBuddy(mCrsSelector);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(pbLoadDatabase, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, leDrawing);
        QWidget::setTabOrder(leDrawing, pbImportDrawing);
        QWidget::setTabOrder(pbImportDrawing, pbBrowseDrawing);
        QWidget::setTabOrder(pbBrowseDrawing, cbExpandInserts);
        QWidget::setTabOrder(cbExpandInserts, cbUseCurves);
        QWidget::setTabOrder(cbUseCurves, leLayerGroup);
        QWidget::setTabOrder(leLayerGroup, mLayers);
        QWidget::setTabOrder(mLayers, cbMergeLayers);
        QWidget::setTabOrder(cbMergeLayers, pbDeselectAll);
        QWidget::setTabOrder(pbDeselectAll, pbSelectAll);

        retranslateUi(QgsDwgImportBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsDwgImportBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsDwgImportBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsDwgImportBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDwgImportBase)
    {
        QgsDwgImportBase->setWindowTitle(QCoreApplication::translate("QgsDwgImportBase", "DWG/DXF Import", nullptr));
        mGroupBox->setTitle(QCoreApplication::translate("QgsDwgImportBase", "Layers to Import into Project", nullptr));
        QTableWidgetItem *___qtablewidgetitem = mLayers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("QgsDwgImportBase", "Layer", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = mLayers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("QgsDwgImportBase", "Visible", nullptr));
        label_3->setText(QCoreApplication::translate("QgsDwgImportBase", "Group name", nullptr));
        cbMergeLayers->setText(QCoreApplication::translate("QgsDwgImportBase", "Merge layers", nullptr));
        pbDeselectAll->setText(QCoreApplication::translate("QgsDwgImportBase", "Deselect All", nullptr));
        pbSelectAll->setText(QCoreApplication::translate("QgsDwgImportBase", "Select All", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsDwgImportBase", "Import Drawing into GeoPackage", nullptr));
        pbImportDrawing->setText(QCoreApplication::translate("QgsDwgImportBase", "Reload", nullptr));
        pbBrowseDrawing->setText(QCoreApplication::translate("QgsDwgImportBase", "Import", nullptr));
        label_2->setText(QCoreApplication::translate("QgsDwgImportBase", "Source drawing", nullptr));
        label->setText(QCoreApplication::translate("QgsDwgImportBase", "Target package", nullptr));
        label_4->setText(QCoreApplication::translate("QgsDwgImportBase", "CRS", nullptr));
        mDatabaseFileWidget->setDialogTitle(QCoreApplication::translate("QgsDwgImportBase", "Select GeoPackage Database", nullptr));
        pbLoadDatabase->setText(QCoreApplication::translate("QgsDwgImportBase", "Load layers", nullptr));
        cbExpandInserts->setText(QCoreApplication::translate("QgsDwgImportBase", "Expand block references", nullptr));
        cbUseCurves->setText(QCoreApplication::translate("QgsDwgImportBase", "Use curves", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsDwgImportBase: public Ui_QgsDwgImportBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDWGIMPORTBASE_H
