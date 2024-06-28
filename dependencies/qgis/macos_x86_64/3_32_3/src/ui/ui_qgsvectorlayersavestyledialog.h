/********************************************************************************
** Form generated from reading UI file 'qgsvectorlayersavestyledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORLAYERSAVESTYLEDIALOG_H
#define UI_QGSVECTORLAYERSAVESTYLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorLayerSaveStyleDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *mModeLabel;
    QComboBox *mStyleTypeComboBox;
    QLabel *mStylesWidgetLabel;
    QListWidget *mStylesWidget;
    QWidget *mSaveToSldWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QCheckBox *mSldExportPng;
    QLabel *mFileLabel;
    QgsFileWidget *mFileWidget;
    QWidget *mSaveToDbWidget;
    QGridLayout *gridLayout_3;
    QgsFileWidget *mDbStyleUIFileWidget;
    QCheckBox *mDbStyleUseAsDefault;
    QLabel *nameLabel;
    QLabel *descriptionLabel;
    QPlainTextEdit *mDbStyleDescriptionEdit;
    QLabel *mUILabel;
    QLineEdit *mDbStyleNameEdit;
    QLabel *label_3;
    QListView *mStyleCategoriesListView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsVectorLayerSaveStyleDialog)
    {
        if (QgsVectorLayerSaveStyleDialog->objectName().isEmpty())
            QgsVectorLayerSaveStyleDialog->setObjectName(QString::fromUtf8("QgsVectorLayerSaveStyleDialog"));
        QgsVectorLayerSaveStyleDialog->resize(492, 728);
        gridLayout = new QGridLayout(QgsVectorLayerSaveStyleDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mModeLabel = new QLabel(QgsVectorLayerSaveStyleDialog);
        mModeLabel->setObjectName(QString::fromUtf8("mModeLabel"));

        gridLayout->addWidget(mModeLabel, 0, 0, 1, 1);

        mStyleTypeComboBox = new QComboBox(QgsVectorLayerSaveStyleDialog);
        mStyleTypeComboBox->setObjectName(QString::fromUtf8("mStyleTypeComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mStyleTypeComboBox->sizePolicy().hasHeightForWidth());
        mStyleTypeComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mStyleTypeComboBox, 0, 1, 1, 1);

        mStylesWidgetLabel = new QLabel(QgsVectorLayerSaveStyleDialog);
        mStylesWidgetLabel->setObjectName(QString::fromUtf8("mStylesWidgetLabel"));

        gridLayout->addWidget(mStylesWidgetLabel, 1, 0, 1, 1);

        mStylesWidget = new QListWidget(QgsVectorLayerSaveStyleDialog);
        mStylesWidget->setObjectName(QString::fromUtf8("mStylesWidget"));

        gridLayout->addWidget(mStylesWidget, 1, 1, 1, 1);

        mSaveToSldWidget = new QWidget(QgsVectorLayerSaveStyleDialog);
        mSaveToSldWidget->setObjectName(QString::fromUtf8("mSaveToSldWidget"));
        formLayout = new QFormLayout(mSaveToSldWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(mSaveToSldWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        mSldExportPng = new QCheckBox(mSaveToSldWidget);
        mSldExportPng->setObjectName(QString::fromUtf8("mSldExportPng"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mSldExportPng);


        gridLayout->addWidget(mSaveToSldWidget, 2, 0, 1, 2);

        mFileLabel = new QLabel(QgsVectorLayerSaveStyleDialog);
        mFileLabel->setObjectName(QString::fromUtf8("mFileLabel"));

        gridLayout->addWidget(mFileLabel, 3, 0, 1, 1);

        mFileWidget = new QgsFileWidget(QgsVectorLayerSaveStyleDialog);
        mFileWidget->setObjectName(QString::fromUtf8("mFileWidget"));

        gridLayout->addWidget(mFileWidget, 3, 1, 1, 1);

        mSaveToDbWidget = new QWidget(QgsVectorLayerSaveStyleDialog);
        mSaveToDbWidget->setObjectName(QString::fromUtf8("mSaveToDbWidget"));
        gridLayout_3 = new QGridLayout(mSaveToDbWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mDbStyleUIFileWidget = new QgsFileWidget(mSaveToDbWidget);
        mDbStyleUIFileWidget->setObjectName(QString::fromUtf8("mDbStyleUIFileWidget"));

        gridLayout_3->addWidget(mDbStyleUIFileWidget, 2, 1, 1, 1);

        mDbStyleUseAsDefault = new QCheckBox(mSaveToDbWidget);
        mDbStyleUseAsDefault->setObjectName(QString::fromUtf8("mDbStyleUseAsDefault"));

        gridLayout_3->addWidget(mDbStyleUseAsDefault, 3, 1, 1, 1);

        nameLabel = new QLabel(mSaveToDbWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout_3->addWidget(nameLabel, 0, 0, 1, 1);

        descriptionLabel = new QLabel(mSaveToDbWidget);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));

        gridLayout_3->addWidget(descriptionLabel, 1, 0, 1, 1);

        mDbStyleDescriptionEdit = new QPlainTextEdit(mSaveToDbWidget);
        mDbStyleDescriptionEdit->setObjectName(QString::fromUtf8("mDbStyleDescriptionEdit"));

        gridLayout_3->addWidget(mDbStyleDescriptionEdit, 1, 1, 1, 1);

        mUILabel = new QLabel(mSaveToDbWidget);
        mUILabel->setObjectName(QString::fromUtf8("mUILabel"));

        gridLayout_3->addWidget(mUILabel, 2, 0, 1, 1);

        mDbStyleNameEdit = new QLineEdit(mSaveToDbWidget);
        mDbStyleNameEdit->setObjectName(QString::fromUtf8("mDbStyleNameEdit"));

        gridLayout_3->addWidget(mDbStyleNameEdit, 0, 1, 1, 1);


        gridLayout->addWidget(mSaveToDbWidget, 4, 0, 1, 2);

        label_3 = new QLabel(QgsVectorLayerSaveStyleDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        mStyleCategoriesListView = new QListView(QgsVectorLayerSaveStyleDialog);
        mStyleCategoriesListView->setObjectName(QString::fromUtf8("mStyleCategoriesListView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mStyleCategoriesListView->sizePolicy().hasHeightForWidth());
        mStyleCategoriesListView->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mStyleCategoriesListView, 5, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsVectorLayerSaveStyleDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 2);

#if QT_CONFIG(shortcut)
        nameLabel->setBuddy(mDbStyleNameEdit);
        mUILabel->setBuddy(mDbStyleNameEdit);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mStyleTypeComboBox, mStylesWidget);
        QWidget::setTabOrder(mStylesWidget, mDbStyleNameEdit);
        QWidget::setTabOrder(mDbStyleNameEdit, mDbStyleDescriptionEdit);
        QWidget::setTabOrder(mDbStyleDescriptionEdit, mDbStyleUseAsDefault);

        retranslateUi(QgsVectorLayerSaveStyleDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsVectorLayerSaveStyleDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsVectorLayerSaveStyleDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsVectorLayerSaveStyleDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsVectorLayerSaveStyleDialog)
    {
        QgsVectorLayerSaveStyleDialog->setWindowTitle(QCoreApplication::translate("QgsVectorLayerSaveStyleDialog", "Save Layer Style", nullptr));
        mModeLabel->setText(QCoreApplication::translate("QgsVectorLayerSaveStyleDialog", "Save style", nullptr));
        mStylesWidgetLabel->setText(QCoreApplication::translate("QgsVectorLayerSaveStyleDialog", "Styles", nullptr));
        label->setText(QCoreApplication::translate("QgsVectorLayerSaveStyleDialog", "SLD Options", nullptr));
#if QT_CONFIG(tooltip)
        mSldExportPng->setToolTip(QCoreApplication::translate("QgsVectorLayerSaveStyleDialog", "<html><head/><body><p>Complex and rotated polygon fills are generally not supported by SLD. </p><p>By checking this option supported symbols will be exported as PNG tiles in the same directory of the SLD document and the SLD document will refer to the PNG images as external graphic symbols.</p><p>Note that not all symbols can be exported to PNG, if the symbol cannot be exported the default SLD export implementation will be used.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mSldExportPng->setText(QCoreApplication::translate("QgsVectorLayerSaveStyleDialog", "Export polygon fills as PNG tiles", nullptr));
        mFileLabel->setText(QCoreApplication::translate("QgsVectorLayerSaveStyleDialog", "File", nullptr));
#if QT_CONFIG(tooltip)
        mDbStyleUIFileWidget->setToolTip(QCoreApplication::translate("QgsVectorLayerSaveStyleDialog", "Optionally pick an input form for attribute editing (QT Designer UI format), it will be stored in the database", nullptr));
#endif // QT_CONFIG(tooltip)
        mDbStyleUseAsDefault->setText(QCoreApplication::translate("QgsVectorLayerSaveStyleDialog", "Use as default style for this layer", nullptr));
        nameLabel->setText(QCoreApplication::translate("QgsVectorLayerSaveStyleDialog", "Style name", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("QgsVectorLayerSaveStyleDialog", "Description", nullptr));
        mUILabel->setText(QCoreApplication::translate("QgsVectorLayerSaveStyleDialog", "UI", nullptr));
        label_3->setText(QCoreApplication::translate("QgsVectorLayerSaveStyleDialog", "Categories", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsVectorLayerSaveStyleDialog: public Ui_QgsVectorLayerSaveStyleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORLAYERSAVESTYLEDIALOG_H
