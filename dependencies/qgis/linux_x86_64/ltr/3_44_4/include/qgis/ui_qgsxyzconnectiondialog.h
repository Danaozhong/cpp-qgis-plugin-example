/********************************************************************************
** Form generated from reading UI file 'qgsxyzconnectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSXYZCONNECTIONDIALOG_H
#define UI_QGSXYZCONNECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_QgsXyzConnectionDialog
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *mEditName;
    QGroupBox *mConnectionGroupBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsXyzConnectionDialog)
    {
        if (QgsXyzConnectionDialog->objectName().isEmpty())
            QgsXyzConnectionDialog->setObjectName(QString::fromUtf8("QgsXyzConnectionDialog"));
        QgsXyzConnectionDialog->resize(636, 353);
        gridLayout_2 = new QGridLayout(QgsXyzConnectionDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(QgsXyzConnectionDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        mEditName = new QLineEdit(QgsXyzConnectionDialog);
        mEditName->setObjectName(QString::fromUtf8("mEditName"));

        gridLayout_2->addWidget(mEditName, 0, 1, 1, 1);

        mConnectionGroupBox = new QGroupBox(QgsXyzConnectionDialog);
        mConnectionGroupBox->setObjectName(QString::fromUtf8("mConnectionGroupBox"));

        gridLayout_2->addWidget(mConnectionGroupBox, 2, 0, 1, 2);

        buttonBox = new QDialogButtonBox(QgsXyzConnectionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 3, 0, 1, 2);


        retranslateUi(QgsXyzConnectionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsXyzConnectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsXyzConnectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsXyzConnectionDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsXyzConnectionDialog)
    {
        QgsXyzConnectionDialog->setWindowTitle(QCoreApplication::translate("QgsXyzConnectionDialog", "XYZ Connection", nullptr));
        label->setText(QCoreApplication::translate("QgsXyzConnectionDialog", "Name", nullptr));
#if QT_CONFIG(tooltip)
        mEditName->setToolTip(QCoreApplication::translate("QgsXyzConnectionDialog", "Name of the new connection", nullptr));
#endif // QT_CONFIG(tooltip)
        mConnectionGroupBox->setTitle(QCoreApplication::translate("QgsXyzConnectionDialog", "Connection Details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsXyzConnectionDialog: public Ui_QgsXyzConnectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSXYZCONNECTIONDIALOG_H
