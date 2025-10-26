/********************************************************************************
** Form generated from reading UI file 'qgsoraclenewconnectionbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
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
#include <QtWidgets/QSpacerItem>
#include "qgsauthsettingswidget.h"
#include "qgsfilterlineedit.h"
#include "qgsmessagebar.h"

QT_BEGIN_NAMESPACE

class Ui_QgsOracleNewConnectionBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout_2;
    QLineEdit *txtName;
    QLabel *TextLabel3_4;
    QLabel *TextLabel3_3;
    QLabel *label;
    QLineEdit *txtWorkspace;
    QLineEdit *txtDatabase;
    QLabel *TextLabel1;
    QLineEdit *txtOptions;
    QLabel *TextLabel1_2;
    QLineEdit *txtHost;
    QGroupBox *mAuthGroupBox;
    QGridLayout *gridLayout_3;
    QgsAuthSettingsWidget *mAuthSettings;
    QLineEdit *txtPort;
    QLabel *TextLabel2_2;
    QPushButton *btnConnect;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QLabel *TextLabel3_5;
    QgsFilterLineEdit *txtSchema;
    QCheckBox *cb_projectsInDatabase;
    QCheckBox *cb_includeGeoAttributes;
    QCheckBox *cb_onlyExistingTypes;
    QCheckBox *cb_useEstimatedMetadata;
    QCheckBox *cb_allowGeometrylessTables;
    QCheckBox *cb_userTablesOnly;
    QCheckBox *cb_geometryColumnsOnly;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QgsMessageBar *bar;

    void setupUi(QDialog *QgsOracleNewConnectionBase)
    {
        if (QgsOracleNewConnectionBase->objectName().isEmpty())
            QgsOracleNewConnectionBase->setObjectName(QString::fromUtf8("QgsOracleNewConnectionBase"));
        QgsOracleNewConnectionBase->resize(880, 600);
        QgsOracleNewConnectionBase->setSizeGripEnabled(true);
        QgsOracleNewConnectionBase->setModal(true);
        gridLayout = new QGridLayout(QgsOracleNewConnectionBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, 0, 9, 9);
        GroupBox1 = new QGroupBox(QgsOracleNewConnectionBase);
        GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
        gridLayout_2 = new QGridLayout(GroupBox1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        txtName = new QLineEdit(GroupBox1);
        txtName->setObjectName(QString::fromUtf8("txtName"));

        gridLayout_2->addWidget(txtName, 0, 1, 1, 2);

        TextLabel3_4 = new QLabel(GroupBox1);
        TextLabel3_4->setObjectName(QString::fromUtf8("TextLabel3_4"));

        gridLayout_2->addWidget(TextLabel3_4, 5, 0, 1, 1);

        TextLabel3_3 = new QLabel(GroupBox1);
        TextLabel3_3->setObjectName(QString::fromUtf8("TextLabel3_3"));

        gridLayout_2->addWidget(TextLabel3_3, 4, 0, 1, 1);

        label = new QLabel(GroupBox1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        txtWorkspace = new QLineEdit(GroupBox1);
        txtWorkspace->setObjectName(QString::fromUtf8("txtWorkspace"));
        txtWorkspace->setEchoMode(QLineEdit::Normal);

        gridLayout_2->addWidget(txtWorkspace, 5, 1, 1, 2);

        txtDatabase = new QLineEdit(GroupBox1);
        txtDatabase->setObjectName(QString::fromUtf8("txtDatabase"));

        gridLayout_2->addWidget(txtDatabase, 1, 1, 1, 2);

        TextLabel1 = new QLabel(GroupBox1);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));

        gridLayout_2->addWidget(TextLabel1, 2, 0, 1, 1);

        txtOptions = new QLineEdit(GroupBox1);
        txtOptions->setObjectName(QString::fromUtf8("txtOptions"));
        txtOptions->setEchoMode(QLineEdit::Normal);

        gridLayout_2->addWidget(txtOptions, 4, 1, 1, 2);

        TextLabel1_2 = new QLabel(GroupBox1);
        TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));

        gridLayout_2->addWidget(TextLabel1_2, 0, 0, 1, 1);

        txtHost = new QLineEdit(GroupBox1);
        txtHost->setObjectName(QString::fromUtf8("txtHost"));

        gridLayout_2->addWidget(txtHost, 2, 1, 1, 2);

        mAuthGroupBox = new QGroupBox(GroupBox1);
        mAuthGroupBox->setObjectName(QString::fromUtf8("mAuthGroupBox"));
        gridLayout_3 = new QGridLayout(mAuthGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(6, 6, 6, 6);
        mAuthSettings = new QgsAuthSettingsWidget(mAuthGroupBox);
        mAuthSettings->setObjectName(QString::fromUtf8("mAuthSettings"));
        mAuthSettings->setFocusPolicy(Qt::StrongFocus);

        gridLayout_3->addWidget(mAuthSettings, 0, 0, 1, 1);


        gridLayout_2->addWidget(mAuthGroupBox, 7, 0, 1, 3);

        txtPort = new QLineEdit(GroupBox1);
        txtPort->setObjectName(QString::fromUtf8("txtPort"));

        gridLayout_2->addWidget(txtPort, 3, 1, 1, 2);

        TextLabel2_2 = new QLabel(GroupBox1);
        TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));

        gridLayout_2->addWidget(TextLabel2_2, 3, 0, 1, 1);

        btnConnect = new QPushButton(GroupBox1);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

        gridLayout_2->addWidget(btnConnect, 10, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 11, 1, 1, 1);


        gridLayout->addWidget(GroupBox1, 1, 0, 1, 1);

        groupBox = new QGroupBox(QgsOracleNewConnectionBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        TextLabel3_5 = new QLabel(groupBox);
        TextLabel3_5->setObjectName(QString::fromUtf8("TextLabel3_5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TextLabel3_5->sizePolicy().hasHeightForWidth());
        TextLabel3_5->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(TextLabel3_5, 7, 0, 1, 1);

        txtSchema = new QgsFilterLineEdit(groupBox);
        txtSchema->setObjectName(QString::fromUtf8("txtSchema"));
        txtSchema->setEchoMode(QLineEdit::Normal);

        gridLayout_4->addWidget(txtSchema, 7, 1, 1, 1);

        cb_projectsInDatabase = new QCheckBox(groupBox);
        cb_projectsInDatabase->setObjectName(QString::fromUtf8("cb_projectsInDatabase"));

        gridLayout_4->addWidget(cb_projectsInDatabase, 6, 0, 1, 2);

        cb_includeGeoAttributes = new QCheckBox(groupBox);
        cb_includeGeoAttributes->setObjectName(QString::fromUtf8("cb_includeGeoAttributes"));

        gridLayout_4->addWidget(cb_includeGeoAttributes, 5, 0, 1, 2);

        cb_onlyExistingTypes = new QCheckBox(groupBox);
        cb_onlyExistingTypes->setObjectName(QString::fromUtf8("cb_onlyExistingTypes"));

        gridLayout_4->addWidget(cb_onlyExistingTypes, 4, 0, 1, 2);

        cb_useEstimatedMetadata = new QCheckBox(groupBox);
        cb_useEstimatedMetadata->setObjectName(QString::fromUtf8("cb_useEstimatedMetadata"));

        gridLayout_4->addWidget(cb_useEstimatedMetadata, 3, 0, 1, 2);

        cb_allowGeometrylessTables = new QCheckBox(groupBox);
        cb_allowGeometrylessTables->setObjectName(QString::fromUtf8("cb_allowGeometrylessTables"));
        cb_allowGeometrylessTables->setChecked(false);

        gridLayout_4->addWidget(cb_allowGeometrylessTables, 2, 0, 1, 2);

        cb_userTablesOnly = new QCheckBox(groupBox);
        cb_userTablesOnly->setObjectName(QString::fromUtf8("cb_userTablesOnly"));

        gridLayout_4->addWidget(cb_userTablesOnly, 1, 0, 1, 2);

        cb_geometryColumnsOnly = new QCheckBox(groupBox);
        cb_geometryColumnsOnly->setObjectName(QString::fromUtf8("cb_geometryColumnsOnly"));

        gridLayout_4->addWidget(cb_geometryColumnsOnly, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 8, 0, 1, 2);


        gridLayout->addWidget(groupBox, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsOracleNewConnectionBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);

        bar = new QgsMessageBar(QgsOracleNewConnectionBase);
        bar->setObjectName(QString::fromUtf8("bar"));

        gridLayout->addWidget(bar, 0, 0, 1, 2);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);
#if QT_CONFIG(shortcut)
        label->setBuddy(txtDatabase);
        TextLabel1->setBuddy(txtHost);
        TextLabel1_2->setBuddy(txtName);
        TextLabel2_2->setBuddy(txtPort);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(txtName, txtDatabase);
        QWidget::setTabOrder(txtDatabase, txtHost);
        QWidget::setTabOrder(txtHost, txtPort);
        QWidget::setTabOrder(txtPort, txtOptions);
        QWidget::setTabOrder(txtOptions, txtWorkspace);
        QWidget::setTabOrder(txtWorkspace, mAuthSettings);
        QWidget::setTabOrder(mAuthSettings, btnConnect);
        QWidget::setTabOrder(btnConnect, cb_geometryColumnsOnly);
        QWidget::setTabOrder(cb_geometryColumnsOnly, cb_userTablesOnly);
        QWidget::setTabOrder(cb_userTablesOnly, cb_allowGeometrylessTables);
        QWidget::setTabOrder(cb_allowGeometrylessTables, cb_useEstimatedMetadata);
        QWidget::setTabOrder(cb_useEstimatedMetadata, cb_onlyExistingTypes);
        QWidget::setTabOrder(cb_onlyExistingTypes, cb_includeGeoAttributes);
        QWidget::setTabOrder(cb_includeGeoAttributes, cb_projectsInDatabase);

        retranslateUi(QgsOracleNewConnectionBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsOracleNewConnectionBase, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsOracleNewConnectionBase, SLOT(accept()));

        QMetaObject::connectSlotsByName(QgsOracleNewConnectionBase);
    } // setupUi

    void retranslateUi(QDialog *QgsOracleNewConnectionBase)
    {
        QgsOracleNewConnectionBase->setWindowTitle(QCoreApplication::translate("QgsOracleNewConnectionBase", "Create a New Oracle Connection", nullptr));
        GroupBox1->setTitle(QCoreApplication::translate("QgsOracleNewConnectionBase", "Connection Details", nullptr));
#if QT_CONFIG(tooltip)
        txtName->setToolTip(QCoreApplication::translate("QgsOracleNewConnectionBase", "Name of the new connection", nullptr));
#endif // QT_CONFIG(tooltip)
        TextLabel3_4->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Workspace", nullptr));
        TextLabel3_3->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Options", nullptr));
        label->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Database", nullptr));
#if QT_CONFIG(tooltip)
        txtDatabase->setToolTip(QCoreApplication::translate("QgsOracleNewConnectionBase", "Database name, or service name (described in tnsnames.ora) if no host and port has been set", nullptr));
#endif // QT_CONFIG(tooltip)
        TextLabel1->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Host", nullptr));
        TextLabel1_2->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Name", nullptr));
        mAuthGroupBox->setTitle(QCoreApplication::translate("QgsOracleNewConnectionBase", "Authentication", nullptr));
        txtPort->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "1521", nullptr));
        TextLabel2_2->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Port", nullptr));
        btnConnect->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "&Test Connection", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsOracleNewConnectionBase", "Database Details", nullptr));
        TextLabel3_5->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Schema", nullptr));
#if QT_CONFIG(tooltip)
        txtSchema->setToolTip(QCoreApplication::translate("QgsOracleNewConnectionBase", "If specified, only tables from the matching schema will be fetched and listed for the provider", nullptr));
#endif // QT_CONFIG(tooltip)
        txtSchema->setPlaceholderText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Limit to tables from specific schema", nullptr));
        cb_projectsInDatabase->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Allow saving/loading QGIS projects in the database", nullptr));
#if QT_CONFIG(tooltip)
        cb_includeGeoAttributes->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        cb_includeGeoAttributes->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Include additional geometry attributes", nullptr));
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
        cb_allowGeometrylessTables->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Also list tables with no geometry", nullptr));
#if QT_CONFIG(tooltip)
        cb_userTablesOnly->setToolTip(QCoreApplication::translate("QgsOracleNewConnectionBase", "When searching for spatial tables restrict the search to tables that are owned by the user.", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_userTablesOnly->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Only look for user's tables", nullptr));
#if QT_CONFIG(tooltip)
        cb_geometryColumnsOnly->setToolTip(QCoreApplication::translate("QgsOracleNewConnectionBase", "<html><head/><body><p>Restricts the displayed tables to those that are in the all_sdo_geom_metadata view. This can speed up the initial display of spatial tables.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_geometryColumnsOnly->setText(QCoreApplication::translate("QgsOracleNewConnectionBase", "Only look in metadata table", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsOracleNewConnectionBase: public Ui_QgsOracleNewConnectionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSORACLENEWCONNECTIONBASE_H
