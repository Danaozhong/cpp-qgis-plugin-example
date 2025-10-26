/********************************************************************************
** Form generated from reading UI file 'qgsmssqlnewconnectionbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMSSQLNEWCONNECTIONBASE_H
#define UI_QGSMSSQLNEWCONNECTIONBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <qgscollapsiblegroupbox.h>
#include "qgsmessagebar.h"
#include "qgspasswordlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMssqlNewConnectionBase
{
public:
    QGridLayout *gridLayout;
    QgsMessageBar *bar;
    QGroupBox *GroupBox1;
    QFormLayout *formLayout;
    QLabel *TextLabel1_2;
    QLineEdit *txtName;
    QLabel *label;
    QLineEdit *txtService;
    QLabel *TextLabel1;
    QLineEdit *txtHost;
    QLabel *label_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QCheckBox *cb_trustedConnection;
    QLabel *TextLabel3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtUsername;
    QCheckBox *chkStoreUsername;
    QLabel *TextLabel3_2;
    QHBoxLayout *horizontalLayout_2;
    QgsPasswordLineEdit *txtPassword;
    QCheckBox *chkStorePassword;
    QLabel *lblWarning;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_3;
    QLabel *TextLabel2;
    QPushButton *btnListDatabase;
    QListWidget *listDatabase;
    QGroupBox *groupBoxGeometryColumns;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBoxExtentFromGeometryColumns;
    QCheckBox *checkBoxPKFromGeometryColumns;
    QCheckBox *cb_allowGeometrylessTables;
    QCheckBox *cb_useEstimatedMetadata;
    QCheckBox *mCheckNoInvalidGeometryHandling;
    QgsCollapsibleGroupBoxBasic *groupBoxSchemasFilter;
    QVBoxLayout *verticalLayout;
    QListView *schemaView;
    QPushButton *btnConnect;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsMssqlNewConnectionBase)
    {
        if (QgsMssqlNewConnectionBase->objectName().isEmpty())
            QgsMssqlNewConnectionBase->setObjectName(QString::fromUtf8("QgsMssqlNewConnectionBase"));
        QgsMssqlNewConnectionBase->resize(800, 755);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsMssqlNewConnectionBase->sizePolicy().hasHeightForWidth());
        QgsMssqlNewConnectionBase->setSizePolicy(sizePolicy);
        QgsMssqlNewConnectionBase->setSizeGripEnabled(true);
        QgsMssqlNewConnectionBase->setModal(true);
        gridLayout = new QGridLayout(QgsMssqlNewConnectionBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, 0, 9, 9);
        bar = new QgsMessageBar(QgsMssqlNewConnectionBase);
        bar->setObjectName(QString::fromUtf8("bar"));

        gridLayout->addWidget(bar, 0, 0, 1, 2);

        GroupBox1 = new QGroupBox(QgsMssqlNewConnectionBase);
        GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
        formLayout = new QFormLayout(GroupBox1);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        TextLabel1_2 = new QLabel(GroupBox1);
        TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, TextLabel1_2);

        txtName = new QLineEdit(GroupBox1);
        txtName->setObjectName(QString::fromUtf8("txtName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtName);

        label = new QLabel(GroupBox1);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        txtService = new QLineEdit(GroupBox1);
        txtService->setObjectName(QString::fromUtf8("txtService"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txtService);

        TextLabel1 = new QLabel(GroupBox1);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));

        formLayout->setWidget(2, QFormLayout::LabelRole, TextLabel1);

        txtHost = new QLineEdit(GroupBox1);
        txtHost->setObjectName(QString::fromUtf8("txtHost"));

        formLayout->setWidget(2, QFormLayout::FieldRole, txtHost);

        label_2 = new QLabel(GroupBox1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_2);

        groupBox = new QGroupBox(GroupBox1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFlat(true);
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        cb_trustedConnection = new QCheckBox(groupBox);
        cb_trustedConnection->setObjectName(QString::fromUtf8("cb_trustedConnection"));
        cb_trustedConnection->setChecked(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, cb_trustedConnection);

        TextLabel3 = new QLabel(groupBox);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, TextLabel3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        txtUsername = new QLineEdit(groupBox);
        txtUsername->setObjectName(QString::fromUtf8("txtUsername"));
        txtUsername->setEnabled(false);

        horizontalLayout->addWidget(txtUsername);

        chkStoreUsername = new QCheckBox(groupBox);
        chkStoreUsername->setObjectName(QString::fromUtf8("chkStoreUsername"));
        chkStoreUsername->setEnabled(false);

        horizontalLayout->addWidget(chkStoreUsername);


        formLayout_2->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        TextLabel3_2 = new QLabel(groupBox);
        TextLabel3_2->setObjectName(QString::fromUtf8("TextLabel3_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, TextLabel3_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        txtPassword = new QgsPasswordLineEdit(groupBox);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
        txtPassword->setEnabled(false);
        txtPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(txtPassword);

        chkStorePassword = new QCheckBox(groupBox);
        chkStorePassword->setObjectName(QString::fromUtf8("chkStorePassword"));
        chkStorePassword->setEnabled(false);

        horizontalLayout_2->addWidget(chkStorePassword);


        formLayout_2->setLayout(2, QFormLayout::FieldRole, horizontalLayout_2);

        lblWarning = new QLabel(groupBox);
        lblWarning->setObjectName(QString::fromUtf8("lblWarning"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblWarning->sizePolicy().hasHeightForWidth());
        lblWarning->setSizePolicy(sizePolicy1);
        lblWarning->setWordWrap(true);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lblWarning);


        formLayout->setWidget(3, QFormLayout::SpanningRole, groupBox);


        gridLayout->addWidget(GroupBox1, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(QgsMssqlNewConnectionBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout_3 = new QFormLayout(groupBox_2);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        TextLabel2 = new QLabel(groupBox_2);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, TextLabel2);

        btnListDatabase = new QPushButton(groupBox_2);
        btnListDatabase->setObjectName(QString::fromUtf8("btnListDatabase"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, btnListDatabase);

        listDatabase = new QListWidget(groupBox_2);
        listDatabase->setObjectName(QString::fromUtf8("listDatabase"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, listDatabase);

        groupBoxGeometryColumns = new QGroupBox(groupBox_2);
        groupBoxGeometryColumns->setObjectName(QString::fromUtf8("groupBoxGeometryColumns"));
        groupBoxGeometryColumns->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBoxGeometryColumns->setFlat(false);
        groupBoxGeometryColumns->setCheckable(true);
        groupBoxGeometryColumns->setChecked(true);
        verticalLayout_2 = new QVBoxLayout(groupBoxGeometryColumns);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(8, 0, 0, 0);
        checkBoxExtentFromGeometryColumns = new QCheckBox(groupBoxGeometryColumns);
        checkBoxExtentFromGeometryColumns->setObjectName(QString::fromUtf8("checkBoxExtentFromGeometryColumns"));

        verticalLayout_2->addWidget(checkBoxExtentFromGeometryColumns);


        formLayout_3->setWidget(2, QFormLayout::SpanningRole, groupBoxGeometryColumns);

        checkBoxPKFromGeometryColumns = new QCheckBox(groupBox_2);
        checkBoxPKFromGeometryColumns->setObjectName(QString::fromUtf8("checkBoxPKFromGeometryColumns"));

        formLayout_3->setWidget(3, QFormLayout::SpanningRole, checkBoxPKFromGeometryColumns);

        cb_allowGeometrylessTables = new QCheckBox(groupBox_2);
        cb_allowGeometrylessTables->setObjectName(QString::fromUtf8("cb_allowGeometrylessTables"));

        formLayout_3->setWidget(4, QFormLayout::SpanningRole, cb_allowGeometrylessTables);

        cb_useEstimatedMetadata = new QCheckBox(groupBox_2);
        cb_useEstimatedMetadata->setObjectName(QString::fromUtf8("cb_useEstimatedMetadata"));
        cb_useEstimatedMetadata->setChecked(true);

        formLayout_3->setWidget(5, QFormLayout::SpanningRole, cb_useEstimatedMetadata);

        mCheckNoInvalidGeometryHandling = new QCheckBox(groupBox_2);
        mCheckNoInvalidGeometryHandling->setObjectName(QString::fromUtf8("mCheckNoInvalidGeometryHandling"));
        mCheckNoInvalidGeometryHandling->setChecked(false);

        formLayout_3->setWidget(6, QFormLayout::SpanningRole, mCheckNoInvalidGeometryHandling);

        groupBoxSchemasFilter = new QgsCollapsibleGroupBoxBasic(groupBox_2);
        groupBoxSchemasFilter->setObjectName(QString::fromUtf8("groupBoxSchemasFilter"));
        groupBoxSchemasFilter->setFlat(false);
        groupBoxSchemasFilter->setCheckable(true);
        verticalLayout = new QVBoxLayout(groupBoxSchemasFilter);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        schemaView = new QListView(groupBoxSchemasFilter);
        schemaView->setObjectName(QString::fromUtf8("schemaView"));

        verticalLayout->addWidget(schemaView);


        formLayout_3->setWidget(8, QFormLayout::SpanningRole, groupBoxSchemasFilter);

        btnConnect = new QPushButton(groupBox_2);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

        formLayout_3->setWidget(9, QFormLayout::SpanningRole, btnConnect);


        gridLayout->addWidget(groupBox_2, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsMssqlNewConnectionBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);

        QWidget::setTabOrder(txtName, txtService);
        QWidget::setTabOrder(txtService, txtHost);
        QWidget::setTabOrder(txtHost, cb_trustedConnection);
        QWidget::setTabOrder(cb_trustedConnection, txtUsername);
        QWidget::setTabOrder(txtUsername, chkStoreUsername);
        QWidget::setTabOrder(chkStoreUsername, txtPassword);
        QWidget::setTabOrder(txtPassword, chkStorePassword);
        QWidget::setTabOrder(chkStorePassword, btnListDatabase);
        QWidget::setTabOrder(btnListDatabase, listDatabase);
        QWidget::setTabOrder(listDatabase, groupBoxGeometryColumns);
        QWidget::setTabOrder(groupBoxGeometryColumns, checkBoxExtentFromGeometryColumns);
        QWidget::setTabOrder(checkBoxExtentFromGeometryColumns, checkBoxPKFromGeometryColumns);
        QWidget::setTabOrder(checkBoxPKFromGeometryColumns, cb_allowGeometrylessTables);
        QWidget::setTabOrder(cb_allowGeometrylessTables, cb_useEstimatedMetadata);
        QWidget::setTabOrder(cb_useEstimatedMetadata, mCheckNoInvalidGeometryHandling);
        QWidget::setTabOrder(mCheckNoInvalidGeometryHandling, groupBoxSchemasFilter);
        QWidget::setTabOrder(groupBoxSchemasFilter, schemaView);
        QWidget::setTabOrder(schemaView, btnConnect);

        retranslateUi(QgsMssqlNewConnectionBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsMssqlNewConnectionBase, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsMssqlNewConnectionBase, SLOT(accept()));
        QObject::connect(cb_trustedConnection, SIGNAL(toggled(bool)), chkStoreUsername, SLOT(setDisabled(bool)));
        QObject::connect(cb_trustedConnection, SIGNAL(toggled(bool)), chkStorePassword, SLOT(setDisabled(bool)));
        QObject::connect(cb_trustedConnection, SIGNAL(toggled(bool)), txtUsername, SLOT(setDisabled(bool)));
        QObject::connect(cb_trustedConnection, SIGNAL(toggled(bool)), txtPassword, SLOT(setDisabled(bool)));
        QObject::connect(chkStorePassword, SIGNAL(toggled(bool)), lblWarning, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(QgsMssqlNewConnectionBase);
    } // setupUi

    void retranslateUi(QDialog *QgsMssqlNewConnectionBase)
    {
        QgsMssqlNewConnectionBase->setWindowTitle(QCoreApplication::translate("QgsMssqlNewConnectionBase", "Create a New MS SQL Server Connection", nullptr));
        GroupBox1->setTitle(QCoreApplication::translate("QgsMssqlNewConnectionBase", "Connection Details", nullptr));
        TextLabel1_2->setText(QCoreApplication::translate("QgsMssqlNewConnectionBase", "Connection name", nullptr));
#if QT_CONFIG(tooltip)
        txtName->setToolTip(QCoreApplication::translate("QgsMssqlNewConnectionBase", "Name of the new connection", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("QgsMssqlNewConnectionBase", "Provider/DSN", nullptr));
        TextLabel1->setText(QCoreApplication::translate("QgsMssqlNewConnectionBase", "Host", nullptr));
        label_2->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("QgsMssqlNewConnectionBase", "Login", nullptr));
        cb_trustedConnection->setText(QCoreApplication::translate("QgsMssqlNewConnectionBase", "Trusted connection", nullptr));
        TextLabel3->setText(QCoreApplication::translate("QgsMssqlNewConnectionBase", "Username", nullptr));
        chkStoreUsername->setText(QCoreApplication::translate("QgsMssqlNewConnectionBase", "Save", nullptr));
        TextLabel3_2->setText(QCoreApplication::translate("QgsMssqlNewConnectionBase", "Password", nullptr));
        chkStorePassword->setText(QCoreApplication::translate("QgsMssqlNewConnectionBase", "Save", nullptr));
        lblWarning->setText(QCoreApplication::translate("QgsMssqlNewConnectionBase", "HEADS UP: You have opted to save your password. It will be stored in plain text in your project files and in your home directory on Unix-like systems, or in your user profile on Windows\n"
"\n"
"Untick save if you don't wish to be the case.", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsMssqlNewConnectionBase", "Database Details", nullptr));
        TextLabel2->setText(QCoreApplication::translate("QgsMssqlNewConnectionBase", "Database", nullptr));
        btnListDatabase->setText(QCoreApplication::translate("QgsMssqlNewConnectionBase", "List Databases", nullptr));
        groupBoxGeometryColumns->setTitle(QCoreApplication::translate("QgsMssqlNewConnectionBase", "Only look in the geometry_columns metadata table", nullptr));
        checkBoxExtentFromGeometryColumns->setText(QCoreApplication::translate("QgsMssqlNewConnectionBase", "Use layer extent from geometry_columns table", nullptr));
        checkBoxPKFromGeometryColumns->setText(QCoreApplication::translate("QgsMssqlNewConnectionBase", "Use primary key from geometry_columns table", nullptr));
#if QT_CONFIG(tooltip)
        cb_allowGeometrylessTables->setToolTip(QCoreApplication::translate("QgsMssqlNewConnectionBase", "If checked, tables without a geometry column attached will also be shown in the available table lists.", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_allowGeometrylessTables->setText(QCoreApplication::translate("QgsMssqlNewConnectionBase", "Also list tables with no geometry", nullptr));
#if QT_CONFIG(tooltip)
        cb_useEstimatedMetadata->setToolTip(QCoreApplication::translate("QgsMssqlNewConnectionBase", "If checked, only estimated table metadata will be used. This avoids a slow table scan, but may result in incorrect layer properties such as layer extent.", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_useEstimatedMetadata->setText(QCoreApplication::translate("QgsMssqlNewConnectionBase", "Use estimated table parameters", nullptr));
#if QT_CONFIG(tooltip)
        mCheckNoInvalidGeometryHandling->setToolTip(QCoreApplication::translate("QgsMssqlNewConnectionBase", "If checked, all handling of records with invalid geometry will be disabled. This speeds up the provider, however, if any invalid geometries are present in a table then the result is unpredictable and may include missing records. Only check this option if you are certain that all geometries present in the database are valid, and any newly added geometries or tables will also be valid.", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckNoInvalidGeometryHandling->setText(QCoreApplication::translate("QgsMssqlNewConnectionBase", "Skip invalid geometry handling", nullptr));
        groupBoxSchemasFilter->setTitle(QCoreApplication::translate("QgsMssqlNewConnectionBase", "Use Only a Subset of Schemas", nullptr));
        btnConnect->setText(QCoreApplication::translate("QgsMssqlNewConnectionBase", "Test Connection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsMssqlNewConnectionBase: public Ui_QgsMssqlNewConnectionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMSSQLNEWCONNECTIONBASE_H
