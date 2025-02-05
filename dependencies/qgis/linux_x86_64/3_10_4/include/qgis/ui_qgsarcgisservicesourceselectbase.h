/********************************************************************************
** Form generated from reading UI file 'qgsarcgisservicesourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

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
    QSpacerItem *spacerItem;
    QPushButton *btnLoad;
    QPushButton *btnSave;
    QHBoxLayout *horizontalLayoutFilter;
    QLabel *labelFilter;
    QLineEdit *lineFilter;
    QTreeView *treeView;
    QCheckBox *cbxUseTitleLayerName;
    QCheckBox *cbxFeatureCurrentViewExtent;
    QGroupBox *gbImageEncoding;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *gbCRS;
    QHBoxLayout *hboxLayout;
    QLabel *labelCoordRefSys;
    QSpacerItem *spacerItem1;
    QPushButton *btnChangeSpatialRefSys;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsArcGisServiceSourceSelectBase)
    {
        if (QgsArcGisServiceSourceSelectBase->objectName().isEmpty())
            QgsArcGisServiceSourceSelectBase->setObjectName(QString::fromUtf8("QgsArcGisServiceSourceSelectBase"));
        QgsArcGisServiceSourceSelectBase->resize(592, 440);
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
        labelFilter = new QLabel(QgsArcGisServiceSourceSelectBase);
        labelFilter->setObjectName(QString::fromUtf8("labelFilter"));
        labelFilter->setEnabled(true);

        horizontalLayoutFilter->addWidget(labelFilter);

        lineFilter = new QLineEdit(QgsArcGisServiceSourceSelectBase);
        lineFilter->setObjectName(QString::fromUtf8("lineFilter"));
        lineFilter->setEnabled(true);

        horizontalLayoutFilter->addWidget(lineFilter);


        verticalLayout->addLayout(horizontalLayoutFilter);

        treeView = new QTreeView(QgsArcGisServiceSourceSelectBase);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeView->setAlternatingRowColors(true);
        treeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeView->setSortingEnabled(true);
        treeView->header()->setVisible(true);

        verticalLayout->addWidget(treeView);

        cbxUseTitleLayerName = new QCheckBox(QgsArcGisServiceSourceSelectBase);
        cbxUseTitleLayerName->setObjectName(QString::fromUtf8("cbxUseTitleLayerName"));

        verticalLayout->addWidget(cbxUseTitleLayerName);

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

        spacerItem1 = new QSpacerItem(441, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        btnChangeSpatialRefSys = new QPushButton(gbCRS);
        btnChangeSpatialRefSys->setObjectName(QString::fromUtf8("btnChangeSpatialRefSys"));
        btnChangeSpatialRefSys->setEnabled(false);

        hboxLayout->addWidget(btnChangeSpatialRefSys);


        verticalLayout->addWidget(gbCRS);

        buttonBox = new QDialogButtonBox(QgsArcGisServiceSourceSelectBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        labelFilter->setBuddy(lineFilter);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(cmbConnections, btnConnect);
        QWidget::setTabOrder(btnConnect, btnNew);
        QWidget::setTabOrder(btnNew, btnEdit);
        QWidget::setTabOrder(btnEdit, btnDelete);
        QWidget::setTabOrder(btnDelete, btnLoad);
        QWidget::setTabOrder(btnLoad, btnSave);
        QWidget::setTabOrder(btnSave, lineFilter);
        QWidget::setTabOrder(lineFilter, treeView);
        QWidget::setTabOrder(treeView, cbxUseTitleLayerName);
        QWidget::setTabOrder(cbxUseTitleLayerName, cbxFeatureCurrentViewExtent);
        QWidget::setTabOrder(cbxFeatureCurrentViewExtent, btnChangeSpatialRefSys);

        retranslateUi(QgsArcGisServiceSourceSelectBase);

        QMetaObject::connectSlotsByName(QgsArcGisServiceSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsArcGisServiceSourceSelectBase)
    {
        GroupBox1->setTitle(QApplication::translate("QgsArcGisServiceSourceSelectBase", "Server Connections", nullptr));
#ifndef QT_NO_TOOLTIP
        btnConnect->setToolTip(QApplication::translate("QgsArcGisServiceSourceSelectBase", "Connect to selected database", nullptr));
#endif // QT_NO_TOOLTIP
        btnConnect->setText(QApplication::translate("QgsArcGisServiceSourceSelectBase", "C&onnect", nullptr));
#ifndef QT_NO_TOOLTIP
        btnNew->setToolTip(QApplication::translate("QgsArcGisServiceSourceSelectBase", "Create a new database connection", nullptr));
#endif // QT_NO_TOOLTIP
        btnNew->setText(QApplication::translate("QgsArcGisServiceSourceSelectBase", "&New", nullptr));
#ifndef QT_NO_TOOLTIP
        btnEdit->setToolTip(QApplication::translate("QgsArcGisServiceSourceSelectBase", "Edit selected database connection", nullptr));
#endif // QT_NO_TOOLTIP
        btnEdit->setText(QApplication::translate("QgsArcGisServiceSourceSelectBase", "Edit", nullptr));
#ifndef QT_NO_TOOLTIP
        btnDelete->setToolTip(QApplication::translate("QgsArcGisServiceSourceSelectBase", "Remove connection to selected database", nullptr));
#endif // QT_NO_TOOLTIP
        btnDelete->setText(QApplication::translate("QgsArcGisServiceSourceSelectBase", "Remove", nullptr));
#ifndef QT_NO_TOOLTIP
        btnLoad->setToolTip(QApplication::translate("QgsArcGisServiceSourceSelectBase", "Load connections from file", nullptr));
#endif // QT_NO_TOOLTIP
        btnLoad->setText(QApplication::translate("QgsArcGisServiceSourceSelectBase", "Load", nullptr));
#ifndef QT_NO_TOOLTIP
        btnSave->setToolTip(QApplication::translate("QgsArcGisServiceSourceSelectBase", "Save connections to file", nullptr));
#endif // QT_NO_TOOLTIP
        btnSave->setText(QApplication::translate("QgsArcGisServiceSourceSelectBase", "Save", nullptr));
        labelFilter->setText(QApplication::translate("QgsArcGisServiceSourceSelectBase", "Fi&lter", nullptr));
#ifndef QT_NO_TOOLTIP
        lineFilter->setToolTip(QApplication::translate("QgsArcGisServiceSourceSelectBase", "Display WFS FeatureTypes containing this word in the title, name or abstract", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineFilter->setWhatsThis(QApplication::translate("QgsArcGisServiceSourceSelectBase", "Display WFS FeatureTypes containing this word in the title, name or abstract", nullptr));
#endif // QT_NO_WHATSTHIS
        cbxUseTitleLayerName->setText(QApplication::translate("QgsArcGisServiceSourceSelectBase", "Use title for layer name", nullptr));
        cbxFeatureCurrentViewExtent->setText(QApplication::translate("QgsArcGisServiceSourceSelectBase", "Only request features overlapping the current view extent", nullptr));
        gbImageEncoding->setTitle(QApplication::translate("QgsArcGisServiceSourceSelectBase", "Image Encoding", nullptr));
        gbCRS->setTitle(QApplication::translate("QgsArcGisServiceSourceSelectBase", "Coordinate Reference System", nullptr));
        labelCoordRefSys->setText(QString());
        btnChangeSpatialRefSys->setText(QApplication::translate("QgsArcGisServiceSourceSelectBase", "Change\342\200\246", nullptr));
        Q_UNUSED(QgsArcGisServiceSourceSelectBase);
    } // retranslateUi

};

namespace Ui {
    class QgsArcGisServiceSourceSelectBase: public Ui_QgsArcGisServiceSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSARCGISSERVICESOURCESELECTBASE_H
