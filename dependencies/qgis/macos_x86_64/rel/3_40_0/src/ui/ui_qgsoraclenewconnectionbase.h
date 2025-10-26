/********************************************************************************
** Form generated from reading UI file 'qgsoraclenewconnectionbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSORACLENEWCONNECTIONBASE_H
#define UI_QGSORACLENEWCONNECTIONBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include "qgsauthsettingswidget.h"
#include "qgsfilterlineedit.h"
#include "qgsmessagebar.h"

QT_BEGIN_NAMESPACE

class Ui_QgsOracleNewConnectionBase
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout_1;
    QLabel *label;
    QCheckBox *cb_onlyExistingTypes;
    QCheckBox *cb_useEstimatedMetadata;
    QLabel *TextLabel2_2;
    QLabel *TextLabel3_5;
    QLineEdit *txtDatabase;
    QLineEdit *txtHost;
    QLabel *TextLabel3_3;
    QLineEdit *txtPort;
    QLineEdit *txtOptions;
    QCheckBox *cb_allowGeometrylessTables;
    QGroupBox *mAuthGroupBox;
    QGridLayout *gridLayout_2;
    QgsAuthSettingsWidget *mAuthSettings;
    QgsFilterLineEdit *txtSchema;
    QLineEdit *txtName;
    QPushButton *btnConnect;
    QCheckBox *cb_userTablesOnly;
    QCheckBox *cb_geometryColumnsOnly;
    QLabel *TextLabel1_2;
    QLabel *TextLabel1;
    QCheckBox *cb_includeGeoAttributes;
    QLabel *TextLabel3_4;
    QLineEdit *txtWorkspace;
    QCheckBox *cb_projectsInDatabase;
    QgsMessageBar *bar;

    void setupUi(QDialog *QgsOracleNewConnectionBase)
    {
        if (QgsOracleNewConnectionBase->objectName().isEmpty())
            QgsOracleNewConnectionBase->setObjectName(QString::fromUtf8("QgsOracleNewConnectionBase"));
        QgsOracleNewConnectionBase->resize(400, 637);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsOracleNewConnectionBase->sizePolicy().hasHeightForWidth());
        QgsOracleNewConnectionBase->setSizePolicy(sizePolicy);
        QgsOracleNewConnectionBase->setSizeGripEnabled(true);
        QgsOracleNewConnectionBase->setModal(true);
        gridLayout = new QGridLayout(QgsOracleNewConnectionBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        buttonBox = new QDialogButtonBox(QgsOracleNewConnectionBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        GroupBox1 = new QGroupBox(QgsOracleNewConnectionBase);
        GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
        gridLayout_1 = new QGridLayout(GroupBox1);
        gridLayout_1->setSpacing(6);
        gridLayout_1->setContentsMargins(11, 11, 11, 11);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        label = new QLabel(GroupBox1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_1->addWidget(label, 1, 0, 1, 1);

        cb_onlyExistingTypes = new QCheckBox(GroupBox1);
        cb_onlyExistingTypes->setObjectName(QString::fromUtf8("cb_onlyExistingTypes"));

        gridLayout_1->addWidget(cb_onlyExistingTypes, 15, 0, 1, 3);

        cb_useEstimatedMetadata = new QCheckBox(GroupBox1);
        cb_useEstimatedMetadata->setObjectName(QString::fromUtf8("cb_useEstimatedMetadata"));

        gridLayout_1->addWidget(cb_useEstimatedMetadata, 14, 0, 1, 3);

        TextLabel2_2 = new QLabel(GroupBox1);
        TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));

        gridLayout_1->addWidget(TextLabel2_2, 3, 0, 1, 1);

        TextLabel3_5 = new QLabel(GroupBox1);
        TextLabel3_5->setObjectName(QString::fromUtf8("TextLabel3_5"));

        gridLayout_1->addWidget(TextLabel3_5, 6, 0, 1, 1);

        txtDatabase = new QLineEdit(GroupBox1);
        txtDatabase->setObjectName(QString::fromUtf8("txtDatabase"));

        gridLayout_1->addWidget(txtDatabase, 1, 1, 1, 2);

        txtHost = new QLineEdit(GroupBox1);
        txtHost->setObjectName(QString::fromUtf8("txtHost"));

        gridLayout_1->addWidget(txtHost, 2, 1, 1, 2);

        TextLabel3_3 = new QLabel(GroupBox1);
        TextLabel3_3->setObjectName(QString::fromUtf8("TextLabel3_3"));

        gridLayout_1->addWidget(TextLabel3_3, 4, 0, 1, 1);

        txtPort = new QLineEdit(GroupBox1);
        txtPort->setObjectName(QString::fromUtf8("txtPort"));

        gridLayout_1->addWidget(txtPort, 3, 1, 1, 2);

        txtOptions = new QLineEdit(GroupBox1);
        txtOptions->setObjectName(QString::fromUtf8("txtOptions"));
        txtOptions->setEchoMode(QLineEdit::Normal);

        gridLayout_1->addWidget(txtOptions, 4, 1, 1, 2);

        cb_allowGeometrylessTables = new QCheckBox(GroupBox1);
        cb_allowGeometrylessTables->setObjectName(QString::fromUtf8("cb_allowGeometrylessTables"));
        cb_allowGeometrylessTables->setChecked(false);

        gridLayout_1->addWidget(cb_allowGeometrylessTables, 13, 0, 1, 3);

        mAuthGroupBox = new QGroupBox(GroupBox1);
        mAuthGroupBox->setObjectName(QString::fromUtf8("mAuthGroupBox"));
        gridLayout_2 = new QGridLayout(mAuthGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        mAuthSettings = new QgsAuthSettingsWidget(mAuthGroupBox);
        mAuthSettings->setObjectName(QString::fromUtf8("mAuthSettings"));

        gridLayout_2->addWidget(mAuthSettings, 0, 0, 1, 1);


        gridLayout_1->addWidget(mAuthGroupBox, 7, 0, 1, 3);

        txtSchema = new QgsFilterLineEdit(GroupBox1);
        txtSchema->setObjectName(QString::fromUtf8("txtSchema"));
        txtSchema->setEchoMode(QLineEdit::Normal);

        gridLayout_1->addWidget(txtSchema, 6, 1, 1, 2);

        txtName = new QLineEdit(GroupBox1);
        txtName->setObjectName(QString::fromUtf8("txtName"));

        gridLayout_1->addWidget(txtName, 0, 1, 1, 2);

        btnConnect = new QPushButton(GroupBox1);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

        gridLayout_1->addWidget(btnConnect, 10, 2, 1, 1);

        cb_userTablesOnly = new QCheckBox(GroupBox1);
        cb_userTablesOnly->setObjectName(QString::fromUtf8("cb_userTablesOnly"));

        gridLayout_1->addWidget(cb_userTablesOnly, 12, 0, 1, 3);

        cb_geometryColumnsOnly = new QCheckBox(GroupBox1);
        cb_geometryColumnsOnly->setObjectName(QString::fromUtf8("cb_geometryColumnsOnly"));

        gridLayout_1->addWidget(cb_geometryColumnsOnly, 10, 0, 1, 2);

        TextLabel1_2 = new QLabel(GroupBox1);
        TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));

        gridLayout_1->addWidget(TextLabel1_2, 0, 0, 1, 1);

        TextLabel1 = new QLabel(GroupBox1);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));

        gridLayout_1->addWidget(TextLabel1, 2, 0, 1, 1);

        cb_includeGeoAttributes = new QCheckBox(GroupBox1);
        cb_includeGeoAttributes->setObjectName(QString::fromUtf8("cb_includeGeoAttributes"));

        gridLayout_1->addWidget(cb_includeGeoAttributes, 16, 0, 1, 3);

        TextLabel3_4 = new QLabel(GroupBox1);
        TextLabel3_4->setObjectName(QString::fromUtf8("TextLabel3_4"));

        gridLayout_1->addWidget(TextLabel3_4, 5, 0, 1, 1);

        txtWorkspace = new QLineEdit(GroupBox1);
        txtWorkspace->setObjectName(QString::fromUtf8("txtWorkspace"));
        txtWorkspace->setEchoMode(QLineEdit::Normal);

        gridLayout_1->addWidget(txtWorkspace, 5, 1, 1, 2);

        cb_projectsInDatabase = new QCheckBox(GroupBox1);
        cb_projectsInDatabase->setObjectName(QString::fromUtf8("cb_projectsInDatabase"));

        gridLayout_1->addWidget(cb_projectsInDatabase, 17, 0, 1, 1);


        gridLayout->addWidget(GroupBox1, 1, 0, 1, 1);

        bar = new QgsMessageBar(QgsOracleNewConnectionBase);
        bar->setObjectName(QString::fromUtf8("bar"));

        gridLayout->addWidget(bar, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(txtDatabase);
        TextLabel2_2->setBuddy(txtPort);
        TextLabel1_2->setBuddy(txtName);
        TextLabel1->setBuddy(txtHost);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(txtName, txtDatabase);
        QWidget::setTabOrder(txtDatabase, txtHost);
        QWidget::setTabOrder(txtHost, txtPort);
        QWidget::setTabOrder(txtPort, txtOptions);
        QWidget::setTabOrder(txtOptions, txtWorkspace);
        QWidget::setTabOrder(txtWorkspace, txtSchema);
        QWidget::setTabOrder(txtSchema, btnConnect);
        QWidget::setTabOrder(btnConnect, cb_geometryColumnsOnly);
        QWidget::setTabOrder(cb_geometryColumnsOnly, cb_userTablesOnly);
        QWidget::setTabOrder(cb_userTablesOnly, cb_allowGeometrylessTables);
        QWidget::setTabOrder(cb_allowGeometrylessTables, cb_useEstimatedMetadata);
        QWidget::setTabOrder(cb_useEstimatedMetadata, cb_onlyExistingTypes);
        QWidget::setTabOrder(cb_onlyExistingTypes, cb_includeGeoAttributes);

        retranslateUi(QgsOracleNewConnectionBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsOracleNewConnectionBase, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsOracleNewConnectionBase, SLOT(accept()));

        QMetaObject::connectSlotsByName(QgsOracleNewConnectionBase);
    } // setupUi

    void retranslateUi(QDialog *QgsOracleNewConnectionBase)
    {
        QgsOracleNewConnectionBase->setWindowTitle(QCoreApplication::translate("QgsOracleNewConnectionBase", "Create a New Oracle Connection", nullptr));
        GroupBox1->setTitle(QCoreApplication::translate("QgsOracleNewConnectionBase", "Connection Information", nullptr));
        label->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Database", nullptr));
#if QT_CONFIG(tooltip)
        cb_onlyExistingTypes->setToolTip(QCoreApplication::translate("QgsOracleNewConnectionBase", "<html><head/><body><p><b>Only list the existing geometry types and don't offer to add others.</b></p>\n"
"<p>When the layer is setup various metadata is required for the Oracle table. This includes information such as the table row count, geometry type and spatial extents of the data in the geometry column. If the table contains a large number of rows determining this metadata is time consuming.</p><p>By activating this option the following fast table metadata operations are done:</p><p>1) Row count is determined from all_tables.num_rows.</p><p>2) Table extents are always determined with the SDO_TUNE.EXTENTS_OF function even if a layer filter is applied.</p><p>3) The table geometry is determined from the first 100 non-null geometry rows in the table.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_onlyExistingTypes->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Only existing geometry types", nullptr));
#if QT_CONFIG(tooltip)
        cb_useEstimatedMetadata->setToolTip(QCoreApplication::translate("QgsOracleNewConnectionBase", "<html><head/><body><p><b>Use estimated table statistics for the layer metadata.</b></p>\n"
"<p>When the layer is setup various metadata is required for the Oracle table. This includes information such as the table row count, geometry type and spatial extents of the data in the geometry column. If the table contains a large number of rows determining this metadata is time consuming.</p><p>By activating this option the following fast table metadata operations are done:</p><p>1) Row count is determined from all_tables.num_rows.</p><p>2) Table extents are always determined with the SDO_TUNE.EXTENTS_OF function even if a layer filter is applied.</p><p>3) The table geometry is determined from the first 100 non-null geometry rows in the table.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_useEstimatedMetadata->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Use estimated table metadata", nullptr));
        TextLabel2_2->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Port", nullptr));
        TextLabel3_5->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Schema", nullptr));
#if QT_CONFIG(tooltip)
        txtDatabase->setToolTip(QCoreApplication::translate("QgsOracleNewConnectionBase", "Database name, or service name (described in tnsnames.ora) if no host and port has been set", nullptr));
#endif // QT_CONFIG(tooltip)
        TextLabel3_3->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Options", nullptr));
        txtPort->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "1521", nullptr));
        cb_allowGeometrylessTables->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Also list tables with no geometry", nullptr));
        mAuthGroupBox->setTitle(QCoreApplication::translate("QgsOracleNewConnectionBase", "Authentication", nullptr));
#if QT_CONFIG(tooltip)
        txtSchema->setToolTip(QCoreApplication::translate("QgsOracleNewConnectionBase", "If specified, only tables from the matching schema will be fetched and listed for the provider", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        txtName->setToolTip(QCoreApplication::translate("QgsOracleNewConnectionBase", "Name of the new connection", nullptr));
#endif // QT_CONFIG(tooltip)
        btnConnect->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "&Test Connect", nullptr));
#if QT_CONFIG(tooltip)
        cb_userTablesOnly->setToolTip(QCoreApplication::translate("QgsOracleNewConnectionBase", "When searching for spatial tables restrict the search to tables that are owned by the user.", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_userTablesOnly->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Only look for user's tables", nullptr));
#if QT_CONFIG(tooltip)
        cb_geometryColumnsOnly->setToolTip(QCoreApplication::translate("QgsOracleNewConnectionBase", "<html><head/><body><p>Restricts the displayed tables to those that are in the all_sdo_geom_metadata view. This can speed up the initial display of spatial tables.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_geometryColumnsOnly->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Only look in metadata table", nullptr));
        TextLabel1_2->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Name", nullptr));
        TextLabel1->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Host", nullptr));
#if QT_CONFIG(tooltip)
        cb_includeGeoAttributes->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        cb_includeGeoAttributes->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Include additional geometry attributes", nullptr));
        TextLabel3_4->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Workspace", nullptr));
        cb_projectsInDatabase->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Allow saving/loading QGIS projects in the database", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsOracleNewConnectionBase: public Ui_QgsOracleNewConnectionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSORACLENEWCONNECTIONBASE_H
