/********************************************************************************
** Form generated from reading UI file 'qgsoracleprojectstoragedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSORACLEPROJECTSTORAGEDIALOG_H
#define UI_QGSORACLEPROJECTSTORAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsOracleProjectStorageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *mCboConnection;
    QLabel *label_2;
    QComboBox *mCboOwner;
    QLabel *label_3;
    QComboBox *mCboProject;
    QLabel *mLblProjectsNotAllowed;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsOracleProjectStorageDialog)
    {
        if (QgsOracleProjectStorageDialog->objectName().isEmpty())
            QgsOracleProjectStorageDialog->setObjectName(QString::fromUtf8("QgsOracleProjectStorageDialog"));
        QgsOracleProjectStorageDialog->resize(552, 442);
        verticalLayout = new QVBoxLayout(QgsOracleProjectStorageDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(QgsOracleProjectStorageDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mCboConnection = new QComboBox(QgsOracleProjectStorageDialog);
        mCboConnection->setObjectName(QString::fromUtf8("mCboConnection"));

        gridLayout->addWidget(mCboConnection, 0, 1, 1, 1);

        label_2 = new QLabel(QgsOracleProjectStorageDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        mCboOwner = new QComboBox(QgsOracleProjectStorageDialog);
        mCboOwner->setObjectName(QString::fromUtf8("mCboOwner"));

        gridLayout->addWidget(mCboOwner, 1, 1, 1, 1);

        label_3 = new QLabel(QgsOracleProjectStorageDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        mCboProject = new QComboBox(QgsOracleProjectStorageDialog);
        mCboProject->setObjectName(QString::fromUtf8("mCboProject"));

        gridLayout->addWidget(mCboProject, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        mLblProjectsNotAllowed = new QLabel(QgsOracleProjectStorageDialog);
        mLblProjectsNotAllowed->setObjectName(QString::fromUtf8("mLblProjectsNotAllowed"));
        mLblProjectsNotAllowed->setAlignment(Qt::AlignCenter);
        mLblProjectsNotAllowed->setWordWrap(true);

        verticalLayout->addWidget(mLblProjectsNotAllowed);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(QgsOracleProjectStorageDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsOracleProjectStorageDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsOracleProjectStorageDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsOracleProjectStorageDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsOracleProjectStorageDialog)
    {
        label->setText(QCoreApplication::translate("QgsOracleProjectStorageDialog", "Connection", nullptr));
        label_2->setText(QCoreApplication::translate("QgsOracleProjectStorageDialog", "Owner", nullptr));
        label_3->setText(QCoreApplication::translate("QgsOracleProjectStorageDialog", "Project", nullptr));
        mLblProjectsNotAllowed->setText(QCoreApplication::translate("QgsOracleProjectStorageDialog", "Storage of QGIS projects is not enabled for this database connection.", nullptr));
        (void)QgsOracleProjectStorageDialog;
    } // retranslateUi

};

namespace Ui {
    class QgsOracleProjectStorageDialog: public Ui_QgsOracleProjectStorageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSORACLEPROJECTSTORAGEDIALOG_H
