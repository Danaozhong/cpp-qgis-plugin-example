/********************************************************************************
** Form generated from reading UI file 'qgspgnewconnectionbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPGNEWCONNECTIONBASE_H
#define UI_QGSPGNEWCONNECTIONBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgsauthsettingswidget.h"
#include "qgsmessagebar.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPgNewConnectionBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QgsMessageBar *bar;
    QGroupBox *GroupBox1;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *txtService;
    QLineEdit *txtPort;
    QLabel *TextLabel3_3;
    QLineEdit *txtName;
    QLineEdit *txtHost;
    QLineEdit *txtDatabase;
    QLabel *TextLabel2;
    QLabel *TextLabel1_2;
    QLabel *TextLabel1;
    QComboBox *cbxSSLmode;
    QLabel *label;
    QLabel *TextLabel2_2;
    QLineEdit *txtSessionRole;
    QLabel *label_2;
    QGroupBox *mAuthGroupBox;
    QGridLayout *gridLayout;
    QgsAuthSettingsWidget *mAuthSettings;
    QPushButton *btnConnect;
    QCheckBox *cb_geometryColumnsOnly;
    QCheckBox *cb_dontResolveType;
    QCheckBox *cb_publicSchemaOnly;
    QCheckBox *cb_allowGeometrylessTables;
    QCheckBox *cb_useEstimatedMetadata;
    QCheckBox *cb_projectsInDatabase;
    QCheckBox *cb_metadataInDatabase;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsPgNewConnectionBase)
    {
        if (QgsPgNewConnectionBase->objectName().isEmpty())
            QgsPgNewConnectionBase->setObjectName(QString::fromUtf8("QgsPgNewConnectionBase"));
        QgsPgNewConnectionBase->resize(448, 510);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsPgNewConnectionBase->sizePolicy().hasHeightForWidth());
        QgsPgNewConnectionBase->setSizePolicy(sizePolicy);
        QgsPgNewConnectionBase->setSizeGripEnabled(true);
        QgsPgNewConnectionBase->setModal(true);
        verticalLayout_2 = new QVBoxLayout(QgsPgNewConnectionBase);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        bar = new QgsMessageBar(QgsPgNewConnectionBase);
        bar->setObjectName(QString::fromUtf8("bar"));

        verticalLayout_2->addWidget(bar);

        GroupBox1 = new QGroupBox(QgsPgNewConnectionBase);
        GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
        verticalLayout = new QVBoxLayout(GroupBox1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        txtService = new QLineEdit(GroupBox1);
        txtService->setObjectName(QString::fromUtf8("txtService"));

        gridLayout_2->addWidget(txtService, 1, 1, 1, 1);

        txtPort = new QLineEdit(GroupBox1);
        txtPort->setObjectName(QString::fromUtf8("txtPort"));

        gridLayout_2->addWidget(txtPort, 3, 1, 1, 1);

        TextLabel3_3 = new QLabel(GroupBox1);
        TextLabel3_3->setObjectName(QString::fromUtf8("TextLabel3_3"));

        gridLayout_2->addWidget(TextLabel3_3, 5, 0, 1, 1);

        txtName = new QLineEdit(GroupBox1);
        txtName->setObjectName(QString::fromUtf8("txtName"));

        gridLayout_2->addWidget(txtName, 0, 1, 1, 1);

        txtHost = new QLineEdit(GroupBox1);
        txtHost->setObjectName(QString::fromUtf8("txtHost"));

        gridLayout_2->addWidget(txtHost, 2, 1, 1, 1);

        txtDatabase = new QLineEdit(GroupBox1);
        txtDatabase->setObjectName(QString::fromUtf8("txtDatabase"));

        gridLayout_2->addWidget(txtDatabase, 4, 1, 1, 1);

        TextLabel2 = new QLabel(GroupBox1);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));

        gridLayout_2->addWidget(TextLabel2, 4, 0, 1, 1);

        TextLabel1_2 = new QLabel(GroupBox1);
        TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));

        gridLayout_2->addWidget(TextLabel1_2, 0, 0, 1, 1);

        TextLabel1 = new QLabel(GroupBox1);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));

        gridLayout_2->addWidget(TextLabel1, 2, 0, 1, 1);

        cbxSSLmode = new QComboBox(GroupBox1);
        cbxSSLmode->setObjectName(QString::fromUtf8("cbxSSLmode"));

        gridLayout_2->addWidget(cbxSSLmode, 5, 1, 1, 1);

        label = new QLabel(GroupBox1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        TextLabel2_2 = new QLabel(GroupBox1);
        TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));

        gridLayout_2->addWidget(TextLabel2_2, 3, 0, 1, 1);

        txtSessionRole = new QLineEdit(GroupBox1);
        txtSessionRole->setObjectName(QString::fromUtf8("txtSessionRole"));

        gridLayout_2->addWidget(txtSessionRole, 6, 1, 1, 1);

        label_2 = new QLabel(GroupBox1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 6, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        mAuthGroupBox = new QGroupBox(GroupBox1);
        mAuthGroupBox->setObjectName(QString::fromUtf8("mAuthGroupBox"));
        gridLayout = new QGridLayout(mAuthGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(6, 6, 6, 6);
        mAuthSettings = new QgsAuthSettingsWidget(mAuthGroupBox);
        mAuthSettings->setObjectName(QString::fromUtf8("mAuthSettings"));

        gridLayout->addWidget(mAuthSettings, 0, 0, 1, 1);


        verticalLayout->addWidget(mAuthGroupBox);

        btnConnect = new QPushButton(GroupBox1);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

        verticalLayout->addWidget(btnConnect);

        cb_geometryColumnsOnly = new QCheckBox(GroupBox1);
        cb_geometryColumnsOnly->setObjectName(QString::fromUtf8("cb_geometryColumnsOnly"));

        verticalLayout->addWidget(cb_geometryColumnsOnly);

        cb_dontResolveType = new QCheckBox(GroupBox1);
        cb_dontResolveType->setObjectName(QString::fromUtf8("cb_dontResolveType"));

        verticalLayout->addWidget(cb_dontResolveType);

        cb_publicSchemaOnly = new QCheckBox(GroupBox1);
        cb_publicSchemaOnly->setObjectName(QString::fromUtf8("cb_publicSchemaOnly"));

        verticalLayout->addWidget(cb_publicSchemaOnly);

        cb_allowGeometrylessTables = new QCheckBox(GroupBox1);
        cb_allowGeometrylessTables->setObjectName(QString::fromUtf8("cb_allowGeometrylessTables"));
        cb_allowGeometrylessTables->setChecked(false);

        verticalLayout->addWidget(cb_allowGeometrylessTables);

        cb_useEstimatedMetadata = new QCheckBox(GroupBox1);
        cb_useEstimatedMetadata->setObjectName(QString::fromUtf8("cb_useEstimatedMetadata"));

        verticalLayout->addWidget(cb_useEstimatedMetadata);

        cb_projectsInDatabase = new QCheckBox(GroupBox1);
        cb_projectsInDatabase->setObjectName(QString::fromUtf8("cb_projectsInDatabase"));

        verticalLayout->addWidget(cb_projectsInDatabase);

        cb_metadataInDatabase = new QCheckBox(GroupBox1);
        cb_metadataInDatabase->setObjectName(QString::fromUtf8("cb_metadataInDatabase"));

        verticalLayout->addWidget(cb_metadataInDatabase);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addWidget(GroupBox1);

        buttonBox = new QDialogButtonBox(QgsPgNewConnectionBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        TextLabel3_3->setBuddy(cbxSSLmode);
        TextLabel2->setBuddy(txtDatabase);
        TextLabel1_2->setBuddy(txtName);
        TextLabel1->setBuddy(txtHost);
        label->setBuddy(txtService);
        TextLabel2_2->setBuddy(txtPort);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(txtName, txtService);
        QWidget::setTabOrder(txtService, txtHost);
        QWidget::setTabOrder(txtHost, txtPort);
        QWidget::setTabOrder(txtPort, txtDatabase);
        QWidget::setTabOrder(txtDatabase, cbxSSLmode);
        QWidget::setTabOrder(cbxSSLmode, btnConnect);
        QWidget::setTabOrder(btnConnect, cb_geometryColumnsOnly);
        QWidget::setTabOrder(cb_geometryColumnsOnly, cb_dontResolveType);
        QWidget::setTabOrder(cb_dontResolveType, cb_publicSchemaOnly);
        QWidget::setTabOrder(cb_publicSchemaOnly, cb_allowGeometrylessTables);
        QWidget::setTabOrder(cb_allowGeometrylessTables, cb_useEstimatedMetadata);
        QWidget::setTabOrder(cb_useEstimatedMetadata, cb_projectsInDatabase);

        retranslateUi(QgsPgNewConnectionBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsPgNewConnectionBase, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsPgNewConnectionBase, SLOT(accept()));

        QMetaObject::connectSlotsByName(QgsPgNewConnectionBase);
    } // setupUi

    void retranslateUi(QDialog *QgsPgNewConnectionBase)
    {
        QgsPgNewConnectionBase->setWindowTitle(QCoreApplication::translate("QgsPgNewConnectionBase", "Create a New PostGIS Connection", nullptr));
        GroupBox1->setTitle(QCoreApplication::translate("QgsPgNewConnectionBase", "Connection Information", nullptr));
        txtPort->setText(QCoreApplication::translate("QgsPgNewConnectionBase", "5432", nullptr));
        TextLabel3_3->setText(QCoreApplication::translate("QgsPgNewConnectionBase", "SSL &mode", nullptr));
#if QT_CONFIG(tooltip)
        txtName->setToolTip(QCoreApplication::translate("QgsPgNewConnectionBase", "Name of the new connection", nullptr));
#endif // QT_CONFIG(tooltip)
        TextLabel2->setText(QCoreApplication::translate("QgsPgNewConnectionBase", "&Database", nullptr));
        TextLabel1_2->setText(QCoreApplication::translate("QgsPgNewConnectionBase", "&Name", nullptr));
        TextLabel1->setText(QCoreApplication::translate("QgsPgNewConnectionBase", "Hos&t", nullptr));
        label->setText(QCoreApplication::translate("QgsPgNewConnectionBase", "Service", nullptr));
        TextLabel2_2->setText(QCoreApplication::translate("QgsPgNewConnectionBase", "Port", nullptr));
        label_2->setText(QCoreApplication::translate("QgsPgNewConnectionBase", "Session ROLE", nullptr));
        mAuthGroupBox->setTitle(QCoreApplication::translate("QgsPgNewConnectionBase", "Authentication", nullptr));
        btnConnect->setText(QCoreApplication::translate("QgsPgNewConnectionBase", "&Test Connection", nullptr));
#if QT_CONFIG(tooltip)
        cb_geometryColumnsOnly->setToolTip(QCoreApplication::translate("QgsPgNewConnectionBase", "Restrict the displayed tables to those that are in the layer registries.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        cb_geometryColumnsOnly->setWhatsThis(QCoreApplication::translate("QgsPgNewConnectionBase", "Restricts the displayed tables to those that are found in the layer registries (geometry_columns, geography_columns, topology.layer). This can speed up the initial display of spatial tables.", nullptr));
#endif // QT_CONFIG(whatsthis)
        cb_geometryColumnsOnly->setText(QCoreApplication::translate("QgsPgNewConnectionBase", "Only show layers in the layer registries", nullptr));
        cb_dontResolveType->setText(QCoreApplication::translate("QgsPgNewConnectionBase", "Don't resolve type of unrestricted columns (GEOMETRY)", nullptr));
#if QT_CONFIG(tooltip)
        cb_publicSchemaOnly->setToolTip(QCoreApplication::translate("QgsPgNewConnectionBase", "Restrict the search to the public schema for spatial tables not in the geometry_columns table", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        cb_publicSchemaOnly->setWhatsThis(QCoreApplication::translate("QgsPgNewConnectionBase", "When searching for spatial tables that are not in the geometry_columns tables, restrict the search to tables that are in the public schema (for some databases this can save lots of time)", nullptr));
#endif // QT_CONFIG(whatsthis)
        cb_publicSchemaOnly->setText(QCoreApplication::translate("QgsPgNewConnectionBase", "Only look in the 'public' schema", nullptr));
        cb_allowGeometrylessTables->setText(QCoreApplication::translate("QgsPgNewConnectionBase", "Also list tables with no geometry", nullptr));
#if QT_CONFIG(tooltip)
        cb_useEstimatedMetadata->setToolTip(QCoreApplication::translate("QgsPgNewConnectionBase", "Use estimated table statistics for the layer metadata.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        cb_useEstimatedMetadata->setWhatsThis(QCoreApplication::translate("QgsPgNewConnectionBase", "<html>\n"
"<body>\n"
"<p>When the layer is setup various metadata is required for the PostGIS table. This includes information such as the table row count, geometry type and spatial extents of the data in the geometry column. If the table contains a large number of rows determining this metadata is time consuming.</p>\n"
"<p>By activating this option the following fast table metadata operations are done:</p>\n"
"<p>1) Row count is determined from results of running the PostgreSQL Analyze function on the table.</p>\n"
"<p>2) Table extents are always determined with the estimated_extent PostGIS function even if a layer filter is applied.</p>\n"
"<p>3) If the table geometry type is unknown and is not exclusively taken from the geometry_columns table, then it is determined from the first 100 non-null geometry rows in the table.</p>\n"
"</body>\n"
"</html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        cb_useEstimatedMetadata->setText(QCoreApplication::translate("QgsPgNewConnectionBase", "Use estimated table metadata", nullptr));
        cb_projectsInDatabase->setText(QCoreApplication::translate("QgsPgNewConnectionBase", "Allow saving/loading QGIS projects in the database", nullptr));
        cb_metadataInDatabase->setText(QCoreApplication::translate("QgsPgNewConnectionBase", "Allow saving/loading QGIS layer metadata in the database", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsPgNewConnectionBase: public Ui_QgsPgNewConnectionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPGNEWCONNECTIONBASE_H
