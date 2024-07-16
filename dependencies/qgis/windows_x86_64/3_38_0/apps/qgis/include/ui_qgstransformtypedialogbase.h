/********************************************************************************
** Form generated from reading UI file 'qgstransformtypedialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTRANSFORMTYPEDIALOGBASE_H
#define UI_QGSTRANSFORMTYPEDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsTransformOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *cbxTransformType;
    QCheckBox *cbGenerateWorldFile;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsTransformOptionsDialog)
    {
        if (QgsTransformOptionsDialog->objectName().isEmpty())
            QgsTransformOptionsDialog->setObjectName(QString::fromUtf8("QgsTransformOptionsDialog"));
        QgsTransformOptionsDialog->resize(222, 113);
        QgsTransformOptionsDialog->setWindowTitle(QString::fromUtf8("Dialog"));
        verticalLayout = new QVBoxLayout(QgsTransformOptionsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(QgsTransformOptionsDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        cbxTransformType = new QComboBox(QgsTransformOptionsDialog);
        cbxTransformType->addItem(QString());
        cbxTransformType->addItem(QString());
        cbxTransformType->addItem(QString());
        cbxTransformType->addItem(QString());
        cbxTransformType->addItem(QString());
        cbxTransformType->setObjectName(QString::fromUtf8("cbxTransformType"));

        verticalLayout->addWidget(cbxTransformType);

        cbGenerateWorldFile = new QCheckBox(QgsTransformOptionsDialog);
        cbGenerateWorldFile->setObjectName(QString::fromUtf8("cbGenerateWorldFile"));

        verticalLayout->addWidget(cbGenerateWorldFile);

        buttonBox = new QDialogButtonBox(QgsTransformOptionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsTransformOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsTransformOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsTransformOptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsTransformOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsTransformOptionsDialog)
    {
        label->setText(QCoreApplication::translate("QgsTransformOptionsDialog", "Transformation type", nullptr));
        cbxTransformType->setItemText(0, QCoreApplication::translate("QgsTransformOptionsDialog", "Linear", nullptr));
        cbxTransformType->setItemText(1, QCoreApplication::translate("QgsTransformOptionsDialog", "Polynomial 1", nullptr));
        cbxTransformType->setItemText(2, QCoreApplication::translate("QgsTransformOptionsDialog", "Polynomial 2", nullptr));
        cbxTransformType->setItemText(3, QCoreApplication::translate("QgsTransformOptionsDialog", "Polynomial 3", nullptr));
        cbxTransformType->setItemText(4, QCoreApplication::translate("QgsTransformOptionsDialog", "Thin plate spline (TPS)", nullptr));

        cbGenerateWorldFile->setText(QCoreApplication::translate("QgsTransformOptionsDialog", "Generate ESRI world file (.tfw)", nullptr));
        (void)QgsTransformOptionsDialog;
    } // retranslateUi

};

namespace Ui {
    class QgsTransformOptionsDialog: public Ui_QgsTransformOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTRANSFORMTYPEDIALOGBASE_H
