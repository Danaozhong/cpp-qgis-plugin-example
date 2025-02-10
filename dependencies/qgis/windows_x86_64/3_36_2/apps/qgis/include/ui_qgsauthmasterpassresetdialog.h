/********************************************************************************
** Form generated from reading UI file 'qgsauthmasterpassresetdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHMASTERPASSRESETDIALOG_H
#define UI_QGSAUTHMASTERPASSRESETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgspasswordlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMasterPasswordResetDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QgsPasswordLineEdit *leMasterPassCurrent;
    QLabel *label_7;
    QgsPasswordLineEdit *leMasterPassNew;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QCheckBox *chkKeepBackup;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsMasterPasswordResetDialog)
    {
        if (QgsMasterPasswordResetDialog->objectName().isEmpty())
            QgsMasterPasswordResetDialog->setObjectName(QString::fromUtf8("QgsMasterPasswordResetDialog"));
        QgsMasterPasswordResetDialog->resize(362, 280);
        verticalLayout = new QVBoxLayout(QgsMasterPasswordResetDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_6 = new QLabel(QgsMasterPasswordResetDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        leMasterPassCurrent = new QgsPasswordLineEdit(QgsMasterPasswordResetDialog);
        leMasterPassCurrent->setObjectName(QString::fromUtf8("leMasterPassCurrent"));
        leMasterPassCurrent->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(leMasterPassCurrent);

        label_7 = new QLabel(QgsMasterPasswordResetDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);

        leMasterPassNew = new QgsPasswordLineEdit(QgsMasterPasswordResetDialog);
        leMasterPassNew->setObjectName(QString::fromUtf8("leMasterPassNew"));
        leMasterPassNew->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(leMasterPassNew);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        chkKeepBackup = new QCheckBox(QgsMasterPasswordResetDialog);
        chkKeepBackup->setObjectName(QString::fromUtf8("chkKeepBackup"));

        horizontalLayout_3->addWidget(chkKeepBackup);


        verticalLayout->addLayout(horizontalLayout_3);

        label_4 = new QLabel(QgsMasterPasswordResetDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font1;
        font1.setItalic(true);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("QLabel { color: rgb(128, 128, 128); }"));
        label_4->setWordWrap(true);

        verticalLayout->addWidget(label_4);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(QgsMasterPasswordResetDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(leMasterPassCurrent, leMasterPassNew);
        QWidget::setTabOrder(leMasterPassNew, chkKeepBackup);

        retranslateUi(QgsMasterPasswordResetDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsMasterPasswordResetDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsMasterPasswordResetDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsMasterPasswordResetDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsMasterPasswordResetDialog)
    {
        QgsMasterPasswordResetDialog->setWindowTitle(QCoreApplication::translate("QgsMasterPasswordResetDialog", "Reset Master Password", nullptr));
        label_6->setText(QCoreApplication::translate("QgsMasterPasswordResetDialog", "Enter CURRENT master authentication password", nullptr));
        leMasterPassCurrent->setPlaceholderText(QCoreApplication::translate("QgsMasterPasswordResetDialog", "Required", nullptr));
        label_7->setText(QCoreApplication::translate("QgsMasterPasswordResetDialog", "Enter NEW master authentication password", nullptr));
        leMasterPassNew->setPlaceholderText(QCoreApplication::translate("QgsMasterPasswordResetDialog", "Required", nullptr));
        chkKeepBackup->setText(QCoreApplication::translate("QgsMasterPasswordResetDialog", "Keep backup of current database", nullptr));
        label_4->setText(QCoreApplication::translate("QgsMasterPasswordResetDialog", "Your authentication database will be duplicated\n"
"and re-encrypted using new password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsMasterPasswordResetDialog: public Ui_QgsMasterPasswordResetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHMASTERPASSRESETDIALOG_H
