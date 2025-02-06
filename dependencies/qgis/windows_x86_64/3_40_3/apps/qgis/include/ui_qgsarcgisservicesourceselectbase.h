/********************************************************************************
** Form generated from reading UI file 'qgsarcgisservicesourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSARCGISSERVICESOURCESELECTBASE_H
#define UI_QGSARCGISSERVICESOURCESELECTBASE_H

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
#include <QtWidgets/QVBoxLayout>
#include "qgsbrowsertreeview.h"
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsArcGisServiceSourceSelectBase
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout_2;
    QComboBox *cmbConnections;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnConnect;
    QPushButton *btnNew;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QPushButton *btnRefresh;
    QSpacerItem *spacerItem;
    QPushButton *btnLoad;
    QPushButton *btnSave;
    QHBoxLayout *horizontalLayoutFilter;
    QgsFilterLineEdit *lineFilter;
    QgsBrowserTreeView *mBrowserView;
    QCheckBox *cbxFeatureCurrentViewExtent;
    QGroupBox *gbImageEncoding;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *gbCRS;
    QHBoxLayout *hboxLayout;
    QLabel *labelCoordRefSys;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsArcGisServiceSourceSelectBase)
    {
        if (QgsArcGisServiceSourceSelectBase->objectName().isEmpty())
            QgsArcGisServiceSourceSelectBase->setObjectName(QString::fromUtf8("QgsArcGisServiceSourceSelectBase"));
        QgsArcGisServiceSourceSelectBase->resize(790, 730);
        verticalLayout = new QVBoxLayout(QgsArcGisServiceSourceSelectBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        GroupBox1 = new QGroupBox(QgsArcGisServiceSourceSelectBase);
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

        btnRefresh = new QPushButton(GroupBox1);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));
        btnRefresh->setEnabled(true);

        horizontalLayout->addWidget(btnRefresh);

        spacerItem = new QSpacerItem(171, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem);

        btnLoad = new QPushButton(GroupBox1);
        btnLoad->setObjectName(QString::fromUtf8("btnLoad"));

        horizontalLayout->addWidget(btnLoad);

        btnSave = new QPushButton(GroupBox1);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        horizontalLayout->addWidget(btnSave);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        verticalLayout->addWidget(GroupBox1);

        horizontalLayoutFilter = new QHBoxLayout();
        horizontalLayoutFilter->setObjectName(QString::fromUtf8("horizontalLayoutFilter"));
        lineFilter = new QgsFilterLineEdit(QgsArcGisServiceSourceSelectBase);
        lineFilter->setObjectName(QString::fromUtf8("lineFilter"));
        lineFilter->setEnabled(true);
        lineFilter->setShowSearchIcon(true);

        horizontalLayoutFilter->addWidget(lineFilter);


        verticalLayout->addLayout(horizontalLayoutFilter);

        mBrowserView = new QgsBrowserTreeView(QgsArcGisServiceSourceSelectBase);
        mBrowserView->setObjectName(QString::fromUtf8("mBrowserView"));
        mBrowserView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mBrowserView->setAlternatingRowColors(true);
        mBrowserView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mBrowserView->setSortingEnabled(true);
        mBrowserView->header()->setVisible(true);

        verticalLayout->addWidget(mBrowserView);

        cbxFeatureCurrentViewExtent = new QCheckBox(QgsArcGisServiceSourceSelectBase);
        cbxFeatureCurrentViewExtent->setObjectName(QString::fromUtf8("cbxFeatureCurrentViewExtent"));

        verticalLayout->addWidget(cbxFeatureCurrentViewExtent);

        gbImageEncoding = new QGroupBox(QgsArcGisServiceSourceSelectBase);
        gbImageEncoding->setObjectName(QString::fromUtf8("gbImageEncoding"));
        horizontalLayout_2 = new QHBoxLayout(gbImageEncoding);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        verticalLayout->addWidget(gbImageEncoding);

        gbCRS = new QGroupBox(QgsArcGisServiceSourceSelectBase);
        gbCRS->setObjectName(QString::fromUtf8("gbCRS"));
        hboxLayout = new QHBoxLayout(gbCRS);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(9, 9, 9, 9);
        labelCoordRefSys = new QLabel(gbCRS);
        labelCoordRefSys->setObjectName(QString::fromUtf8("labelCoordRefSys"));

        hboxLayout->addWidget(labelCoordRefSys);


        verticalLayout->addWidget(gbCRS);

        buttonBox = new QDialogButtonBox(QgsArcGisServiceSourceSelectBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(cmbConnections, btnNew);
        QWidget::setTabOrder(btnNew, btnEdit);
        QWidget::setTabOrder(btnEdit, btnDelete);
        QWidget::setTabOrder(btnDelete, btnLoad);
        QWidget::setTabOrder(btnLoad, btnSave);
        QWidget::setTabOrder(btnSave, lineFilter);
        QWidget::setTabOrder(lineFilter, mBrowserView);
        QWidget::setTabOrder(mBrowserView, cbxFeatureCurrentViewExtent);

        retranslateUi(QgsArcGisServiceSourceSelectBase);

        QMetaObject::connectSlotsByName(QgsArcGisServiceSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsArcGisServiceSourceSelectBase)
    {
        GroupBox1->setTitle(QCoreApplication::translate("QgsArcGisServiceSourceSelectBase", "Server Connections", nullptr));
#if QT_CONFIG(tooltip)
        btnConnect->setToolTip(QCoreApplication::translate("QgsArcGisServiceSourceSelectBase", "Create a new database connection", nullptr));
#endif // QT_CONFIG(tooltip)
        btnConnect->setText(QCoreApplication::translate("QgsArcGisServiceSourceSelectBase", "Connect", nullptr));
#if QT_CONFIG(tooltip)
        btnNew->setToolTip(QCoreApplication::translate("QgsArcGisServiceSourceSelectBase", "Create a new database connection", nullptr));
#endif // QT_CONFIG(tooltip)
        btnNew->setText(QCoreApplication::translate("QgsArcGisServiceSourceSelectBase", "&New", nullptr));
#if QT_CONFIG(tooltip)
        btnEdit->setToolTip(QCoreApplication::translate("QgsArcGisServiceSourceSelectBase", "Edit selected database connection", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEdit->setText(QCoreApplication::translate("QgsArcGisServiceSourceSelectBase", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        btnDelete->setToolTip(QCoreApplication::translate("QgsArcGisServiceSourceSelectBase", "Remove connection to selected database", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDelete->setText(QCoreApplication::translate("QgsArcGisServiceSourceSelectBase", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        btnRefresh->setToolTip(QCoreApplication::translate("QgsArcGisServiceSourceSelectBase", "Remove connection to selected database", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRefresh->setText(QCoreApplication::translate("QgsArcGisServiceSourceSelectBase", "Refresh", nullptr));
#if QT_CONFIG(tooltip)
        btnLoad->setToolTip(QCoreApplication::translate("QgsArcGisServiceSourceSelectBase", "Load connections from file", nullptr));
#endif // QT_CONFIG(tooltip)
        btnLoad->setText(QCoreApplication::translate("QgsArcGisServiceSourceSelectBase", "Load", nullptr));
#if QT_CONFIG(tooltip)
        btnSave->setToolTip(QCoreApplication::translate("QgsArcGisServiceSourceSelectBase", "Save connections to file", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSave->setText(QCoreApplication::translate("QgsArcGisServiceSourceSelectBase", "Save", nullptr));
#if QT_CONFIG(tooltip)
        lineFilter->setToolTip(QCoreApplication::translate("QgsArcGisServiceSourceSelectBase", "Display WFS FeatureTypes containing this word in the title, name or abstract", nullptr));
#endif // QT_CONFIG(tooltip)
        cbxFeatureCurrentViewExtent->setText(QCoreApplication::translate("QgsArcGisServiceSourceSelectBase", "Only request features overlapping the current view extent", nullptr));
        gbImageEncoding->setTitle(QCoreApplication::translate("QgsArcGisServiceSourceSelectBase", "Image Encoding", nullptr));
        gbCRS->setTitle(QCoreApplication::translate("QgsArcGisServiceSourceSelectBase", "Coordinate Reference System", nullptr));
        labelCoordRefSys->setText(QString());
        (void)QgsArcGisServiceSourceSelectBase;
    } // retranslateUi

};

namespace Ui {
    class QgsArcGisServiceSourceSelectBase: public Ui_QgsArcGisServiceSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSARCGISSERVICESOURCESELECTBASE_H
