/********************************************************************************
** Form generated from reading UI file 'qgswfssourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSWFSSOURCESELECTBASE_H
#define UI_QGSWFSSOURCESELECTBASE_H

#include <QtCore/QVariant>
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsWFSSourceSelectBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *gbCRS;
    QHBoxLayout *hboxLayout;
    QLabel *labelCoordRefSys;
    QSpacerItem *spacerItem;
    QPushButton *btnChangeSpatialRefSys;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *cbxUseTitleLayerName;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mHoldDialogOpen;
    QDialogButtonBox *buttonBox;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout_2;
    QComboBox *cmbConnections;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnConnect;
    QPushButton *btnNew;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QSpacerItem *spacerItem1;
    QPushButton *btnLoad;
    QPushButton *btnSave;
    QTreeView *treeView;
    QCheckBox *cbxFeatureCurrentViewExtent;
    QHBoxLayout *horizontalLayoutFilter;
    QgsFilterLineEdit *lineFilter;

    void setupUi(QDialog *QgsWFSSourceSelectBase)
    {
        if (QgsWFSSourceSelectBase->objectName().isEmpty())
            QgsWFSSourceSelectBase->setObjectName(QString::fromUtf8("QgsWFSSourceSelectBase"));
        QgsWFSSourceSelectBase->resize(592, 439);
        gridLayout = new QGridLayout(QgsWFSSourceSelectBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gbCRS = new QGroupBox(QgsWFSSourceSelectBase);
        gbCRS->setObjectName(QString::fromUtf8("gbCRS"));
        hboxLayout = new QHBoxLayout(gbCRS);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(9, 9, 9, 9);
        labelCoordRefSys = new QLabel(gbCRS);
        labelCoordRefSys->setObjectName(QString::fromUtf8("labelCoordRefSys"));

        hboxLayout->addWidget(labelCoordRefSys);

        spacerItem = new QSpacerItem(441, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnChangeSpatialRefSys = new QPushButton(gbCRS);
        btnChangeSpatialRefSys->setObjectName(QString::fromUtf8("btnChangeSpatialRefSys"));
        btnChangeSpatialRefSys->setEnabled(false);

        hboxLayout->addWidget(btnChangeSpatialRefSys);


        gridLayout->addWidget(gbCRS, 7, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        cbxUseTitleLayerName = new QCheckBox(QgsWFSSourceSelectBase);
        cbxUseTitleLayerName->setObjectName(QString::fromUtf8("cbxUseTitleLayerName"));

        horizontalLayout_4->addWidget(cbxUseTitleLayerName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        mHoldDialogOpen = new QCheckBox(QgsWFSSourceSelectBase);
        mHoldDialogOpen->setObjectName(QString::fromUtf8("mHoldDialogOpen"));

        horizontalLayout_4->addWidget(mHoldDialogOpen);


        gridLayout->addLayout(horizontalLayout_4, 5, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsWFSSourceSelectBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Help);

        gridLayout->addWidget(buttonBox, 8, 0, 1, 1);

        GroupBox1 = new QGroupBox(QgsWFSSourceSelectBase);
        GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
        gridLayout_2 = new QGridLayout(GroupBox1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        cmbConnections = new QComboBox(GroupBox1);
        cmbConnections->setObjectName(QString::fromUtf8("cmbConnections"));

        gridLayout_2->addWidget(cmbConnections, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnConnect = new QPushButton(GroupBox1);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));
        btnConnect->setEnabled(false);

        horizontalLayout->addWidget(btnConnect);

        btnNew = new QPushButton(GroupBox1);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));

        horizontalLayout->addWidget(btnNew);

        btnEdit = new QPushButton(GroupBox1);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));
        btnEdit->setEnabled(false);

        horizontalLayout->addWidget(btnEdit);

        btnDelete = new QPushButton(GroupBox1);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        btnDelete->setEnabled(false);

        horizontalLayout->addWidget(btnDelete);

        spacerItem1 = new QSpacerItem(171, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem1);

        btnLoad = new QPushButton(GroupBox1);
        btnLoad->setObjectName(QString::fromUtf8("btnLoad"));

        horizontalLayout->addWidget(btnLoad);

        btnSave = new QPushButton(GroupBox1);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        horizontalLayout->addWidget(btnSave);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout->addWidget(GroupBox1, 0, 0, 1, 1);

        treeView = new QTreeView(QgsWFSSourceSelectBase);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeView->setAlternatingRowColors(true);
        treeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeView->setSortingEnabled(true);
        treeView->header()->setVisible(true);

        gridLayout->addWidget(treeView, 3, 0, 1, 1);

        cbxFeatureCurrentViewExtent = new QCheckBox(QgsWFSSourceSelectBase);
        cbxFeatureCurrentViewExtent->setObjectName(QString::fromUtf8("cbxFeatureCurrentViewExtent"));

        gridLayout->addWidget(cbxFeatureCurrentViewExtent, 6, 0, 1, 1);

        horizontalLayoutFilter = new QHBoxLayout();
        horizontalLayoutFilter->setObjectName(QString::fromUtf8("horizontalLayoutFilter"));

        gridLayout->addLayout(horizontalLayoutFilter, 1, 0, 1, 1);

        lineFilter = new QgsFilterLineEdit(QgsWFSSourceSelectBase);
        lineFilter->setObjectName(QString::fromUtf8("lineFilter"));
        lineFilter->setShowSearchIcon(true);
        lineFilter->setProperty("qgisRelation", QVariant(QString::fromUtf8("")));

        gridLayout->addWidget(lineFilter, 2, 0, 1, 1);

        QWidget::setTabOrder(cmbConnections, btnConnect);
        QWidget::setTabOrder(btnConnect, btnNew);
        QWidget::setTabOrder(btnNew, btnEdit);
        QWidget::setTabOrder(btnEdit, btnDelete);
        QWidget::setTabOrder(btnDelete, btnLoad);
        QWidget::setTabOrder(btnLoad, btnSave);
        QWidget::setTabOrder(btnSave, treeView);
        QWidget::setTabOrder(treeView, cbxUseTitleLayerName);
        QWidget::setTabOrder(cbxUseTitleLayerName, mHoldDialogOpen);
        QWidget::setTabOrder(mHoldDialogOpen, cbxFeatureCurrentViewExtent);
        QWidget::setTabOrder(cbxFeatureCurrentViewExtent, btnChangeSpatialRefSys);

        retranslateUi(QgsWFSSourceSelectBase);

        QMetaObject::connectSlotsByName(QgsWFSSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsWFSSourceSelectBase)
    {
        QgsWFSSourceSelectBase->setWindowTitle(QCoreApplication::translate("QgsWFSSourceSelectBase", "Add WFS Layer from a Server", nullptr));
        gbCRS->setTitle(QCoreApplication::translate("QgsWFSSourceSelectBase", "Coordinate Reference System", nullptr));
        labelCoordRefSys->setText(QString());
        btnChangeSpatialRefSys->setText(QCoreApplication::translate("QgsWFSSourceSelectBase", "Change\342\200\246", nullptr));
        cbxUseTitleLayerName->setText(QCoreApplication::translate("QgsWFSSourceSelectBase", "Use title for layer name", nullptr));
        mHoldDialogOpen->setText(QCoreApplication::translate("QgsWFSSourceSelectBase", "Keep dialog open", nullptr));
        GroupBox1->setTitle(QCoreApplication::translate("QgsWFSSourceSelectBase", "Server Connections", nullptr));
#if QT_CONFIG(tooltip)
        btnConnect->setToolTip(QCoreApplication::translate("QgsWFSSourceSelectBase", "Connect to selected service", nullptr));
#endif // QT_CONFIG(tooltip)
        btnConnect->setText(QCoreApplication::translate("QgsWFSSourceSelectBase", "C&onnect", nullptr));
#if QT_CONFIG(tooltip)
        btnNew->setToolTip(QCoreApplication::translate("QgsWFSSourceSelectBase", "Create a new service connection", nullptr));
#endif // QT_CONFIG(tooltip)
        btnNew->setText(QCoreApplication::translate("QgsWFSSourceSelectBase", "&New", nullptr));
#if QT_CONFIG(tooltip)
        btnEdit->setToolTip(QCoreApplication::translate("QgsWFSSourceSelectBase", "Edit selected service connection", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEdit->setText(QCoreApplication::translate("QgsWFSSourceSelectBase", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        btnDelete->setToolTip(QCoreApplication::translate("QgsWFSSourceSelectBase", "Remove connection to selected service", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDelete->setText(QCoreApplication::translate("QgsWFSSourceSelectBase", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        btnLoad->setToolTip(QCoreApplication::translate("QgsWFSSourceSelectBase", "Load connections from file", nullptr));
#endif // QT_CONFIG(tooltip)
        btnLoad->setText(QCoreApplication::translate("QgsWFSSourceSelectBase", "Load", nullptr));
#if QT_CONFIG(tooltip)
        btnSave->setToolTip(QCoreApplication::translate("QgsWFSSourceSelectBase", "Save connections to file", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSave->setText(QCoreApplication::translate("QgsWFSSourceSelectBase", "Save", nullptr));
        cbxFeatureCurrentViewExtent->setText(QCoreApplication::translate("QgsWFSSourceSelectBase", "Only request features overlapping the view extent", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsWFSSourceSelectBase: public Ui_QgsWFSSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSWFSSOURCESELECTBASE_H
