/********************************************************************************
** Form generated from reading UI file 'qgshananewconnectionbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSHANANEWCONNECTIONBASE_H
#define UI_QGSHANANEWCONNECTIONBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsauthsettingswidget.h"
#include "qgsmessagebar.h"

QT_BEGIN_NAMESPACE

class Ui_QgsHanaNewConnectionBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QgsMessageBar *bar;
    QGroupBox *GroupBox1;
    QVBoxLayout *verticalLayout;
    QFormLayout *frmMain;
    QLabel *lblConnectionType;
    QLabel *lblName;
    QLineEdit *txtName;
    QComboBox *cmbConnectionType;
    QFrame *line_2;
    QStackedWidget *swConnectionControls;
    QWidget *pageHostPort;
    QWidget *layoutWidget;
    QGridLayout *grdConnectionSettings;
    QFrame *frmMode;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *rbtnSingleContainer;
    QFrame *frmMultipleContainers;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *rbtnMultipleContainers;
    QFrame *frmMultitenantSettings;
    QFormLayout *formLayout;
    QRadioButton *rbtnTenantDatabase;
    QFrame *frame;
    QFormLayout *formLayout_4;
    QLabel *lblTenantDatabaseName;
    QLineEdit *txtTenantDatabaseName;
    QRadioButton *rbtnSystemDatabase;
    QLineEdit *txtHost;
    QLabel *lblHost;
    QLabel *lbIdentifier;
    QLineEdit *txtDriver;
    QLabel *lblMode;
    QGridLayout *gridLayout;
    QComboBox *cmbIdentifierType;
    QLineEdit *txtIdentifier;
    QSpacerItem *horizontalSpacer;
    QLabel *lblDriver;
    QWidget *pageDsn;
    QWidget *formLayoutWidget;
    QFormLayout *frmDsn;
    QLabel *lblDsn;
    QComboBox *cmbDsn;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout;
    QLabel *lblSchema;
    QLineEdit *txtSchema;
    QTabWidget *tabAdditionalSettings;
    QWidget *tbpAuthentication;
    QVBoxLayout *verticalLayout_3;
    QgsAuthSettingsWidget *mAuthSettings;
    QWidget *tbpSSLSettings;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *chkEnableSSL;
    QFrame *line;
    QFormLayout *frmLayoutSSL;
    QLabel *lblCryptoProvider;
    QComboBox *cbxCryptoProvider;
    QCheckBox *chkValidateCertificate;
    QLabel *lblOverrideHostName;
    QLineEdit *txtOverrideHostName;
    QLabel *lblKeyStore;
    QLabel *lblTrustStore;
    QLineEdit *txtKeyStore;
    QLineEdit *txtTrustStore;
    QWidget *tbpProxySettings;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *chkEnableProxy;
    QFrame *line_5;
    QFormLayout *frmLayoutProxy;
    QLabel *lblProxyType;
    QComboBox *cmbProxyType;
    QLabel *lblProxyHost;
    QLineEdit *txtProxyHost;
    QLabel *lblProxyPort;
    QLineEdit *txtProxyPort;
    QLabel *lblProxyUsername;
    QLineEdit *txtProxyUsername;
    QLabel *lblProxyPassword;
    QLineEdit *txtProxyPassword;
    QPushButton *btnConnect;
    QCheckBox *chkUserTablesOnly;
    QCheckBox *chkUseEstimatedMetadata;
    QCheckBox *chkAllowGeometrylessTables;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QButtonGroup *buttonGroup_2;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *QgsHanaNewConnectionBase)
    {
        if (QgsHanaNewConnectionBase->objectName().isEmpty())
            QgsHanaNewConnectionBase->setObjectName(QString::fromUtf8("QgsHanaNewConnectionBase"));
        QgsHanaNewConnectionBase->resize(464, 851);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsHanaNewConnectionBase->sizePolicy().hasHeightForWidth());
        QgsHanaNewConnectionBase->setSizePolicy(sizePolicy);
        QgsHanaNewConnectionBase->setMaximumSize(QSize(4000, 6000));
        QgsHanaNewConnectionBase->setSizeGripEnabled(true);
        QgsHanaNewConnectionBase->setModal(true);
        verticalLayout_2 = new QVBoxLayout(QgsHanaNewConnectionBase);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        bar = new QgsMessageBar(QgsHanaNewConnectionBase);
        bar->setObjectName(QString::fromUtf8("bar"));

        verticalLayout_2->addWidget(bar);

        GroupBox1 = new QGroupBox(QgsHanaNewConnectionBase);
        GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
        verticalLayout = new QVBoxLayout(GroupBox1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frmMain = new QFormLayout();
        frmMain->setSpacing(6);
        frmMain->setObjectName(QString::fromUtf8("frmMain"));
        lblConnectionType = new QLabel(GroupBox1);
        lblConnectionType->setObjectName(QString::fromUtf8("lblConnectionType"));

        frmMain->setWidget(1, QFormLayout::LabelRole, lblConnectionType);

        lblName = new QLabel(GroupBox1);
        lblName->setObjectName(QString::fromUtf8("lblName"));

        frmMain->setWidget(0, QFormLayout::LabelRole, lblName);

        txtName = new QLineEdit(GroupBox1);
        txtName->setObjectName(QString::fromUtf8("txtName"));

        frmMain->setWidget(0, QFormLayout::FieldRole, txtName);

        cmbConnectionType = new QComboBox(GroupBox1);
        cmbConnectionType->addItem(QString());
        cmbConnectionType->addItem(QString());
        cmbConnectionType->setObjectName(QString::fromUtf8("cmbConnectionType"));

        frmMain->setWidget(1, QFormLayout::FieldRole, cmbConnectionType);


        verticalLayout->addLayout(frmMain);

        line_2 = new QFrame(GroupBox1);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        swConnectionControls = new QStackedWidget(GroupBox1);
        swConnectionControls->setObjectName(QString::fromUtf8("swConnectionControls"));
        swConnectionControls->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(swConnectionControls->sizePolicy().hasHeightForWidth());
        swConnectionControls->setSizePolicy(sizePolicy1);
        swConnectionControls->setMinimumSize(QSize(0, 0));
        swConnectionControls->setMaximumSize(QSize(16777215, 16777215));
        pageHostPort = new QWidget();
        pageHostPort->setObjectName(QString::fromUtf8("pageHostPort"));
        pageHostPort->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(pageHostPort->sizePolicy().hasHeightForWidth());
        pageHostPort->setSizePolicy(sizePolicy2);
        pageHostPort->setMinimumSize(QSize(0, 0));
        pageHostPort->setAutoFillBackground(false);
        layoutWidget = new QWidget(pageHostPort);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 421, 220));
        grdConnectionSettings = new QGridLayout(layoutWidget);
        grdConnectionSettings->setSpacing(6);
        grdConnectionSettings->setContentsMargins(11, 11, 11, 11);
        grdConnectionSettings->setObjectName(QString::fromUtf8("grdConnectionSettings"));
        grdConnectionSettings->setSizeConstraint(QLayout::SetNoConstraint);
        grdConnectionSettings->setHorizontalSpacing(6);
        grdConnectionSettings->setVerticalSpacing(4);
        grdConnectionSettings->setContentsMargins(0, 0, 1, 0);
        frmMode = new QFrame(layoutWidget);
        frmMode->setObjectName(QString::fromUtf8("frmMode"));
        sizePolicy1.setHeightForWidth(frmMode->sizePolicy().hasHeightForWidth());
        frmMode->setSizePolicy(sizePolicy1);
        frmMode->setMinimumSize(QSize(0, 0));
        frmMode->setMaximumSize(QSize(16777215, 16777215));
        frmMode->setFrameShape(QFrame::NoFrame);
        frmMode->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frmMode);
        verticalLayout_5->setSpacing(1);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        rbtnSingleContainer = new QRadioButton(frmMode);
        buttonGroup = new QButtonGroup(QgsHanaNewConnectionBase);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(rbtnSingleContainer);
        rbtnSingleContainer->setObjectName(QString::fromUtf8("rbtnSingleContainer"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(rbtnSingleContainer->sizePolicy().hasHeightForWidth());
        rbtnSingleContainer->setSizePolicy(sizePolicy3);
        rbtnSingleContainer->setChecked(true);

        verticalLayout_5->addWidget(rbtnSingleContainer);

        frmMultipleContainers = new QFrame(frmMode);
        frmMultipleContainers->setObjectName(QString::fromUtf8("frmMultipleContainers"));
        sizePolicy.setHeightForWidth(frmMultipleContainers->sizePolicy().hasHeightForWidth());
        frmMultipleContainers->setSizePolicy(sizePolicy);
        frmMultipleContainers->setFrameShape(QFrame::NoFrame);
        frmMultipleContainers->setFrameShadow(QFrame::Raised);
        frmMultipleContainers->setLineWidth(0);
        verticalLayout_6 = new QVBoxLayout(frmMultipleContainers);
        verticalLayout_6->setSpacing(2);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        rbtnMultipleContainers = new QRadioButton(frmMultipleContainers);
        buttonGroup->addButton(rbtnMultipleContainers);
        rbtnMultipleContainers->setObjectName(QString::fromUtf8("rbtnMultipleContainers"));
        rbtnMultipleContainers->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(rbtnMultipleContainers->sizePolicy().hasHeightForWidth());
        rbtnMultipleContainers->setSizePolicy(sizePolicy4);

        verticalLayout_6->addWidget(rbtnMultipleContainers);

        frmMultitenantSettings = new QFrame(frmMultipleContainers);
        frmMultitenantSettings->setObjectName(QString::fromUtf8("frmMultitenantSettings"));
        frmMultitenantSettings->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(frmMultitenantSettings->sizePolicy().hasHeightForWidth());
        frmMultitenantSettings->setSizePolicy(sizePolicy5);
        frmMultitenantSettings->setFrameShape(QFrame::NoFrame);
        frmMultitenantSettings->setFrameShadow(QFrame::Plain);
        formLayout = new QFormLayout(frmMultitenantSettings);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(0);
        formLayout->setVerticalSpacing(3);
        formLayout->setContentsMargins(20, 0, 0, 0);
        rbtnTenantDatabase = new QRadioButton(frmMultitenantSettings);
        buttonGroup_2 = new QButtonGroup(QgsHanaNewConnectionBase);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(rbtnTenantDatabase);
        rbtnTenantDatabase->setObjectName(QString::fromUtf8("rbtnTenantDatabase"));
        rbtnTenantDatabase->setEnabled(true);
        rbtnTenantDatabase->setChecked(true);

        formLayout->setWidget(0, QFormLayout::SpanningRole, rbtnTenantDatabase);

        frame = new QFrame(frmMultitenantSettings);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        formLayout_4 = new QFormLayout(frame);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setHorizontalSpacing(2);
        formLayout_4->setVerticalSpacing(2);
        formLayout_4->setContentsMargins(16, 0, 0, 0);
        lblTenantDatabaseName = new QLabel(frame);
        lblTenantDatabaseName->setObjectName(QString::fromUtf8("lblTenantDatabaseName"));
        lblTenantDatabaseName->setEnabled(true);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, lblTenantDatabaseName);

        txtTenantDatabaseName = new QLineEdit(frame);
        txtTenantDatabaseName->setObjectName(QString::fromUtf8("txtTenantDatabaseName"));
        txtTenantDatabaseName->setEnabled(true);
        txtTenantDatabaseName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, txtTenantDatabaseName);


        formLayout->setWidget(1, QFormLayout::FieldRole, frame);

        rbtnSystemDatabase = new QRadioButton(frmMultitenantSettings);
        buttonGroup_2->addButton(rbtnSystemDatabase);
        rbtnSystemDatabase->setObjectName(QString::fromUtf8("rbtnSystemDatabase"));
        rbtnSystemDatabase->setEnabled(true);

        formLayout->setWidget(3, QFormLayout::SpanningRole, rbtnSystemDatabase);


        verticalLayout_6->addWidget(frmMultitenantSettings);


        verticalLayout_5->addWidget(frmMultipleContainers);


        grdConnectionSettings->addWidget(frmMode, 4, 1, 1, 1);

        txtHost = new QLineEdit(layoutWidget);
        txtHost->setObjectName(QString::fromUtf8("txtHost"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(txtHost->sizePolicy().hasHeightForWidth());
        txtHost->setSizePolicy(sizePolicy6);

        grdConnectionSettings->addWidget(txtHost, 2, 1, 1, 1);

        lblHost = new QLabel(layoutWidget);
        lblHost->setObjectName(QString::fromUtf8("lblHost"));

        grdConnectionSettings->addWidget(lblHost, 2, 0, 1, 1);

        lbIdentifier = new QLabel(layoutWidget);
        lbIdentifier->setObjectName(QString::fromUtf8("lbIdentifier"));
        sizePolicy1.setHeightForWidth(lbIdentifier->sizePolicy().hasHeightForWidth());
        lbIdentifier->setSizePolicy(sizePolicy1);
        lbIdentifier->setMaximumSize(QSize(16777215, 16777215));

        grdConnectionSettings->addWidget(lbIdentifier, 3, 0, 1, 1);

        txtDriver = new QLineEdit(layoutWidget);
        txtDriver->setObjectName(QString::fromUtf8("txtDriver"));
        sizePolicy6.setHeightForWidth(txtDriver->sizePolicy().hasHeightForWidth());
        txtDriver->setSizePolicy(sizePolicy6);

        grdConnectionSettings->addWidget(txtDriver, 1, 1, 1, 1);

        lblMode = new QLabel(layoutWidget);
        lblMode->setObjectName(QString::fromUtf8("lblMode"));
        lblMode->setMinimumSize(QSize(82, 100));
        lblMode->setMaximumSize(QSize(16777215, 16777215));
        lblMode->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        grdConnectionSettings->addWidget(lblMode, 4, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cmbIdentifierType = new QComboBox(layoutWidget);
        cmbIdentifierType->addItem(QString());
        cmbIdentifierType->addItem(QString());
        cmbIdentifierType->setObjectName(QString::fromUtf8("cmbIdentifierType"));
        sizePolicy2.setHeightForWidth(cmbIdentifierType->sizePolicy().hasHeightForWidth());
        cmbIdentifierType->setSizePolicy(sizePolicy2);
        cmbIdentifierType->setMaximumSize(QSize(400, 16777215));

        gridLayout->addWidget(cmbIdentifierType, 0, 0, 1, 1);

        txtIdentifier = new QLineEdit(layoutWidget);
        txtIdentifier->setObjectName(QString::fromUtf8("txtIdentifier"));
        sizePolicy2.setHeightForWidth(txtIdentifier->sizePolicy().hasHeightForWidth());
        txtIdentifier->setSizePolicy(sizePolicy2);
        txtIdentifier->setMinimumSize(QSize(0, 0));
        txtIdentifier->setMaximumSize(QSize(120, 16777215));
        txtIdentifier->setMaxLength(5);

        gridLayout->addWidget(txtIdentifier, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        gridLayout->setColumnStretch(0, 4);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnMinimumWidth(0, 100);
        gridLayout->setColumnMinimumWidth(1, 20);

        grdConnectionSettings->addLayout(gridLayout, 3, 1, 1, 1);

        lblDriver = new QLabel(layoutWidget);
        lblDriver->setObjectName(QString::fromUtf8("lblDriver"));

        grdConnectionSettings->addWidget(lblDriver, 1, 0, 1, 1);

        grdConnectionSettings->setRowStretch(0, 1);
        swConnectionControls->addWidget(pageHostPort);
        pageDsn = new QWidget();
        pageDsn->setObjectName(QString::fromUtf8("pageDsn"));
        sizePolicy1.setHeightForWidth(pageDsn->sizePolicy().hasHeightForWidth());
        pageDsn->setSizePolicy(sizePolicy1);
        formLayoutWidget = new QWidget(pageDsn);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 0, 421, 58));
        frmDsn = new QFormLayout(formLayoutWidget);
        frmDsn->setSpacing(6);
        frmDsn->setContentsMargins(11, 11, 11, 11);
        frmDsn->setObjectName(QString::fromUtf8("frmDsn"));
        frmDsn->setContentsMargins(0, 1, 1, 0);
        lblDsn = new QLabel(formLayoutWidget);
        lblDsn->setObjectName(QString::fromUtf8("lblDsn"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(lblDsn->sizePolicy().hasHeightForWidth());
        lblDsn->setSizePolicy(sizePolicy7);

        frmDsn->setWidget(0, QFormLayout::LabelRole, lblDsn);

        cmbDsn = new QComboBox(formLayoutWidget);
        cmbDsn->setObjectName(QString::fromUtf8("cmbDsn"));

        frmDsn->setWidget(0, QFormLayout::FieldRole, cmbDsn);

        swConnectionControls->addWidget(pageDsn);

        verticalLayout->addWidget(swConnectionControls);

        line_3 = new QFrame(GroupBox1);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setEnabled(true);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblSchema = new QLabel(GroupBox1);
        lblSchema->setObjectName(QString::fromUtf8("lblSchema"));

        horizontalLayout->addWidget(lblSchema);

        txtSchema = new QLineEdit(GroupBox1);
        txtSchema->setObjectName(QString::fromUtf8("txtSchema"));
        sizePolicy4.setHeightForWidth(txtSchema->sizePolicy().hasHeightForWidth());
        txtSchema->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(txtSchema);


        verticalLayout->addLayout(horizontalLayout);

        tabAdditionalSettings = new QTabWidget(GroupBox1);
        tabAdditionalSettings->setObjectName(QString::fromUtf8("tabAdditionalSettings"));
        sizePolicy.setHeightForWidth(tabAdditionalSettings->sizePolicy().hasHeightForWidth());
        tabAdditionalSettings->setSizePolicy(sizePolicy);
        tabAdditionalSettings->setAutoFillBackground(false);
        tbpAuthentication = new QWidget();
        tbpAuthentication->setObjectName(QString::fromUtf8("tbpAuthentication"));
        verticalLayout_3 = new QVBoxLayout(tbpAuthentication);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mAuthSettings = new QgsAuthSettingsWidget(tbpAuthentication);
        mAuthSettings->setObjectName(QString::fromUtf8("mAuthSettings"));
        mAuthSettings->setAutoFillBackground(false);

        verticalLayout_3->addWidget(mAuthSettings);

        tabAdditionalSettings->addTab(tbpAuthentication, QString());
        tbpSSLSettings = new QWidget();
        tbpSSLSettings->setObjectName(QString::fromUtf8("tbpSSLSettings"));
        verticalLayout_4 = new QVBoxLayout(tbpSSLSettings);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        chkEnableSSL = new QCheckBox(tbpSSLSettings);
        chkEnableSSL->setObjectName(QString::fromUtf8("chkEnableSSL"));

        verticalLayout_4->addWidget(chkEnableSSL);

        line = new QFrame(tbpSSLSettings);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        frmLayoutSSL = new QFormLayout();
        frmLayoutSSL->setSpacing(6);
        frmLayoutSSL->setObjectName(QString::fromUtf8("frmLayoutSSL"));
        lblCryptoProvider = new QLabel(tbpSSLSettings);
        lblCryptoProvider->setObjectName(QString::fromUtf8("lblCryptoProvider"));

        frmLayoutSSL->setWidget(0, QFormLayout::LabelRole, lblCryptoProvider);

        cbxCryptoProvider = new QComboBox(tbpSSLSettings);
        cbxCryptoProvider->setObjectName(QString::fromUtf8("cbxCryptoProvider"));

        frmLayoutSSL->setWidget(0, QFormLayout::FieldRole, cbxCryptoProvider);

        chkValidateCertificate = new QCheckBox(tbpSSLSettings);
        chkValidateCertificate->setObjectName(QString::fromUtf8("chkValidateCertificate"));

        frmLayoutSSL->setWidget(1, QFormLayout::LabelRole, chkValidateCertificate);

        lblOverrideHostName = new QLabel(tbpSSLSettings);
        lblOverrideHostName->setObjectName(QString::fromUtf8("lblOverrideHostName"));

        frmLayoutSSL->setWidget(2, QFormLayout::LabelRole, lblOverrideHostName);

        txtOverrideHostName = new QLineEdit(tbpSSLSettings);
        txtOverrideHostName->setObjectName(QString::fromUtf8("txtOverrideHostName"));

        frmLayoutSSL->setWidget(2, QFormLayout::FieldRole, txtOverrideHostName);

        lblKeyStore = new QLabel(tbpSSLSettings);
        lblKeyStore->setObjectName(QString::fromUtf8("lblKeyStore"));

        frmLayoutSSL->setWidget(3, QFormLayout::LabelRole, lblKeyStore);

        lblTrustStore = new QLabel(tbpSSLSettings);
        lblTrustStore->setObjectName(QString::fromUtf8("lblTrustStore"));

        frmLayoutSSL->setWidget(4, QFormLayout::LabelRole, lblTrustStore);

        txtKeyStore = new QLineEdit(tbpSSLSettings);
        txtKeyStore->setObjectName(QString::fromUtf8("txtKeyStore"));

        frmLayoutSSL->setWidget(3, QFormLayout::FieldRole, txtKeyStore);

        txtTrustStore = new QLineEdit(tbpSSLSettings);
        txtTrustStore->setObjectName(QString::fromUtf8("txtTrustStore"));

        frmLayoutSSL->setWidget(4, QFormLayout::FieldRole, txtTrustStore);


        verticalLayout_4->addLayout(frmLayoutSSL);

        tabAdditionalSettings->addTab(tbpSSLSettings, QString());
        tbpProxySettings = new QWidget();
        tbpProxySettings->setObjectName(QString::fromUtf8("tbpProxySettings"));
        sizePolicy.setHeightForWidth(tbpProxySettings->sizePolicy().hasHeightForWidth());
        tbpProxySettings->setSizePolicy(sizePolicy);
        verticalLayout_7 = new QVBoxLayout(tbpProxySettings);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        chkEnableProxy = new QCheckBox(tbpProxySettings);
        chkEnableProxy->setObjectName(QString::fromUtf8("chkEnableProxy"));

        verticalLayout_7->addWidget(chkEnableProxy);

        line_5 = new QFrame(tbpProxySettings);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_5);

        frmLayoutProxy = new QFormLayout();
        frmLayoutProxy->setSpacing(6);
        frmLayoutProxy->setObjectName(QString::fromUtf8("frmLayoutProxy"));
        lblProxyType = new QLabel(tbpProxySettings);
        lblProxyType->setObjectName(QString::fromUtf8("lblProxyType"));

        frmLayoutProxy->setWidget(0, QFormLayout::LabelRole, lblProxyType);

        cmbProxyType = new QComboBox(tbpProxySettings);
        cmbProxyType->addItem(QString());
        cmbProxyType->addItem(QString());
        cmbProxyType->setObjectName(QString::fromUtf8("cmbProxyType"));

        frmLayoutProxy->setWidget(0, QFormLayout::FieldRole, cmbProxyType);

        lblProxyHost = new QLabel(tbpProxySettings);
        lblProxyHost->setObjectName(QString::fromUtf8("lblProxyHost"));

        frmLayoutProxy->setWidget(1, QFormLayout::LabelRole, lblProxyHost);

        txtProxyHost = new QLineEdit(tbpProxySettings);
        txtProxyHost->setObjectName(QString::fromUtf8("txtProxyHost"));
        sizePolicy6.setHeightForWidth(txtProxyHost->sizePolicy().hasHeightForWidth());
        txtProxyHost->setSizePolicy(sizePolicy6);

        frmLayoutProxy->setWidget(1, QFormLayout::FieldRole, txtProxyHost);

        lblProxyPort = new QLabel(tbpProxySettings);
        lblProxyPort->setObjectName(QString::fromUtf8("lblProxyPort"));

        frmLayoutProxy->setWidget(2, QFormLayout::LabelRole, lblProxyPort);

        txtProxyPort = new QLineEdit(tbpProxySettings);
        txtProxyPort->setObjectName(QString::fromUtf8("txtProxyPort"));
        sizePolicy6.setHeightForWidth(txtProxyPort->sizePolicy().hasHeightForWidth());
        txtProxyPort->setSizePolicy(sizePolicy6);

        frmLayoutProxy->setWidget(2, QFormLayout::FieldRole, txtProxyPort);

        lblProxyUsername = new QLabel(tbpProxySettings);
        lblProxyUsername->setObjectName(QString::fromUtf8("lblProxyUsername"));

        frmLayoutProxy->setWidget(3, QFormLayout::LabelRole, lblProxyUsername);

        txtProxyUsername = new QLineEdit(tbpProxySettings);
        txtProxyUsername->setObjectName(QString::fromUtf8("txtProxyUsername"));
        sizePolicy6.setHeightForWidth(txtProxyUsername->sizePolicy().hasHeightForWidth());
        txtProxyUsername->setSizePolicy(sizePolicy6);

        frmLayoutProxy->setWidget(3, QFormLayout::FieldRole, txtProxyUsername);

        lblProxyPassword = new QLabel(tbpProxySettings);
        lblProxyPassword->setObjectName(QString::fromUtf8("lblProxyPassword"));

        frmLayoutProxy->setWidget(4, QFormLayout::LabelRole, lblProxyPassword);

        txtProxyPassword = new QLineEdit(tbpProxySettings);
        txtProxyPassword->setObjectName(QString::fromUtf8("txtProxyPassword"));
        sizePolicy6.setHeightForWidth(txtProxyPassword->sizePolicy().hasHeightForWidth());
        txtProxyPassword->setSizePolicy(sizePolicy6);
        txtProxyPassword->setEchoMode(QLineEdit::Password);

        frmLayoutProxy->setWidget(4, QFormLayout::FieldRole, txtProxyPassword);


        verticalLayout_7->addLayout(frmLayoutProxy);

        tabAdditionalSettings->addTab(tbpProxySettings, QString());

        verticalLayout->addWidget(tabAdditionalSettings);

        btnConnect = new QPushButton(GroupBox1);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

        verticalLayout->addWidget(btnConnect);

        chkUserTablesOnly = new QCheckBox(GroupBox1);
        chkUserTablesOnly->setObjectName(QString::fromUtf8("chkUserTablesOnly"));

        verticalLayout->addWidget(chkUserTablesOnly);

        chkUseEstimatedMetadata = new QCheckBox(GroupBox1);
        chkUseEstimatedMetadata->setObjectName(QString::fromUtf8("chkUseEstimatedMetadata"));

        verticalLayout->addWidget(chkUseEstimatedMetadata);

        chkAllowGeometrylessTables = new QCheckBox(GroupBox1);
        chkAllowGeometrylessTables->setObjectName(QString::fromUtf8("chkAllowGeometrylessTables"));
        chkAllowGeometrylessTables->setChecked(false);

        verticalLayout->addWidget(chkAllowGeometrylessTables);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addWidget(GroupBox1);

        buttonBox = new QDialogButtonBox(QgsHanaNewConnectionBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        lblName->setBuddy(txtName);
        lblTenantDatabaseName->setBuddy(txtDriver);
        lblHost->setBuddy(txtHost);
        lblDriver->setBuddy(txtDriver);
        lblSchema->setBuddy(txtSchema);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(txtName, cmbConnectionType);
        QWidget::setTabOrder(cmbConnectionType, txtDriver);
        QWidget::setTabOrder(txtDriver, txtHost);
        QWidget::setTabOrder(txtHost, rbtnSingleContainer);
        QWidget::setTabOrder(rbtnSingleContainer, rbtnMultipleContainers);
        QWidget::setTabOrder(rbtnMultipleContainers, rbtnTenantDatabase);
        QWidget::setTabOrder(rbtnTenantDatabase, txtTenantDatabaseName);
        QWidget::setTabOrder(txtTenantDatabaseName, rbtnSystemDatabase);
        QWidget::setTabOrder(rbtnSystemDatabase, txtSchema);
        QWidget::setTabOrder(txtSchema, tabAdditionalSettings);
        QWidget::setTabOrder(tabAdditionalSettings, btnConnect);
        QWidget::setTabOrder(btnConnect, chkUserTablesOnly);
        QWidget::setTabOrder(chkUserTablesOnly, chkAllowGeometrylessTables);
        QWidget::setTabOrder(chkAllowGeometrylessTables, chkValidateCertificate);
        QWidget::setTabOrder(chkValidateCertificate, cbxCryptoProvider);
        QWidget::setTabOrder(cbxCryptoProvider, chkEnableSSL);
        QWidget::setTabOrder(chkEnableSSL, txtKeyStore);
        QWidget::setTabOrder(txtKeyStore, txtOverrideHostName);
        QWidget::setTabOrder(txtOverrideHostName, txtTrustStore);

        retranslateUi(QgsHanaNewConnectionBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsHanaNewConnectionBase, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsHanaNewConnectionBase, SLOT(accept()));

        swConnectionControls->setCurrentIndex(0);
        tabAdditionalSettings->setCurrentIndex(0);
        cmbProxyType->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsHanaNewConnectionBase);
    } // setupUi

    void retranslateUi(QDialog *QgsHanaNewConnectionBase)
    {
        QgsHanaNewConnectionBase->setWindowTitle(QCoreApplication::translate("QgsHanaNewConnectionBase", "Create a New SAP HANA Connection", nullptr));
        GroupBox1->setTitle(QCoreApplication::translate("QgsHanaNewConnectionBase", "Connection Information", nullptr));
        lblConnectionType->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "Connection Type", nullptr));
        lblName->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "&Name", nullptr));
#if QT_CONFIG(tooltip)
        txtName->setToolTip(QCoreApplication::translate("QgsHanaNewConnectionBase", "Name of the new connection", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbConnectionType->setItemText(0, QCoreApplication::translate("QgsHanaNewConnectionBase", "Host:Port", nullptr));
        cmbConnectionType->setItemText(1, QCoreApplication::translate("QgsHanaNewConnectionBase", "Data Source Name (DSN)", nullptr));

        rbtnSingleContainer->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "Single container", nullptr));
        rbtnMultipleContainers->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "Multiple containers", nullptr));
        rbtnTenantDatabase->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "Tenant database", nullptr));
        lblTenantDatabaseName->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "Name", nullptr));
        rbtnSystemDatabase->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "System database", nullptr));
        lblHost->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "Hos&t", nullptr));
        lbIdentifier->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "Identifier", nullptr));
        lblMode->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "Mode", nullptr));
        cmbIdentifierType->setItemText(0, QCoreApplication::translate("QgsHanaNewConnectionBase", "Instance Number", nullptr));
        cmbIdentifierType->setItemText(1, QCoreApplication::translate("QgsHanaNewConnectionBase", "Port Number", nullptr));

        txtIdentifier->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "00", nullptr));
        lblDriver->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "Driver", nullptr));
        lblDsn->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "DSN                        ", nullptr));
        lblSchema->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "&Schema", nullptr));
        tabAdditionalSettings->setTabText(tabAdditionalSettings->indexOf(tbpAuthentication), QCoreApplication::translate("QgsHanaNewConnectionBase", "Authentication", nullptr));
        chkEnableSSL->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "Enable TLS/SSL encryption", nullptr));
        lblCryptoProvider->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "Provider", nullptr));
#if QT_CONFIG(tooltip)
        chkValidateCertificate->setToolTip(QCoreApplication::translate("QgsHanaNewConnectionBase", "Restricts the displayed tables to those that are found in the layer registries (geometry_columns, geography_columns, topology.layer). This can speed up the initial display of spatial tables.", nullptr));
#endif // QT_CONFIG(tooltip)
        chkValidateCertificate->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "Validate SSL certificate", nullptr));
        lblOverrideHostName->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "Override host name in the certificate", nullptr));
        lblKeyStore->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "Keystore file with private key", nullptr));
        lblTrustStore->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "Trust store file with public key", nullptr));
        tabAdditionalSettings->setTabText(tabAdditionalSettings->indexOf(tbpSSLSettings), QCoreApplication::translate("QgsHanaNewConnectionBase", "SSL", nullptr));
        chkEnableProxy->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "Enable proxy", nullptr));
        lblProxyType->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "Type", nullptr));
        cmbProxyType->setItemText(0, QCoreApplication::translate("QgsHanaNewConnectionBase", "HTTP", nullptr));
        cmbProxyType->setItemText(1, QCoreApplication::translate("QgsHanaNewConnectionBase", "SOCKS5", nullptr));

        lblProxyHost->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "Host", nullptr));
        lblProxyPort->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "Port", nullptr));
        lblProxyUsername->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "User name", nullptr));
        lblProxyPassword->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "Password", nullptr));
        tabAdditionalSettings->setTabText(tabAdditionalSettings->indexOf(tbpProxySettings), QCoreApplication::translate("QgsHanaNewConnectionBase", "Proxy", nullptr));
        btnConnect->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "&Test Connection", nullptr));
#if QT_CONFIG(tooltip)
        chkUserTablesOnly->setToolTip(QCoreApplication::translate("QgsHanaNewConnectionBase", "Restricts the displayed tables to those that are found in the layer registries (geometry_columns, geography_columns, topology.layer). This can speed up the initial display of spatial tables.", nullptr));
#endif // QT_CONFIG(tooltip)
        chkUserTablesOnly->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "Only look for user's tables", nullptr));
#if QT_CONFIG(tooltip)
        chkUseEstimatedMetadata->setToolTip(QCoreApplication::translate("QgsHanaNewConnectionBase", "<html><head/><body><p>If checked, estimated table metadata will be used if available. For large tables, this avoids slow table loads and potentially expensive computations, but may result in incorrect layer properties such as layer extent. The fast extent estimation is available starting with QRC1/2024 and SP8 in HANA Cloud and HANA On-Premise respectively.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        chkUseEstimatedMetadata->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "Use estimated table metadata", nullptr));
        chkAllowGeometrylessTables->setText(QCoreApplication::translate("QgsHanaNewConnectionBase", "Also list tables with no geometry", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsHanaNewConnectionBase: public Ui_QgsHanaNewConnectionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSHANANEWCONNECTIONBASE_H
