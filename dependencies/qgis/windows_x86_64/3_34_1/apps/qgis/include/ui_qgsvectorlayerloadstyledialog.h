/********************************************************************************
** Form generated from reading UI file 'qgsvectorlayerloadstyledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORLAYERLOADSTYLEDIALOG_H
#define UI_QGSVECTORLAYERLOADSTYLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorLayerLoadStyleDialog
{
public:
    QGridLayout *gridLayout;
    QComboBox *mStyleTypeComboBox;
    QLabel *mFileLabel;
    QgsFileWidget *mFileWidget;
    QLabel *mModeLabel;
    QLabel *label_4;
    QListView *mStyleCategoriesListView;
    QWidget *mFromDbWidget;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QTableWidget *mRelatedTable;
    QLabel *label_2;
    QTableWidget *mOthersTable;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsVectorLayerLoadStyleDialog)
    {
        if (QgsVectorLayerLoadStyleDialog->objectName().isEmpty())
            QgsVectorLayerLoadStyleDialog->setObjectName(QString::fromUtf8("QgsVectorLayerLoadStyleDialog"));
        QgsVectorLayerLoadStyleDialog->resize(475, 546);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsVectorLayerLoadStyleDialog->sizePolicy().hasHeightForWidth());
        QgsVectorLayerLoadStyleDialog->setSizePolicy(sizePolicy);
        QgsVectorLayerLoadStyleDialog->setModal(true);
        gridLayout = new QGridLayout(QgsVectorLayerLoadStyleDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mStyleTypeComboBox = new QComboBox(QgsVectorLayerLoadStyleDialog);
        mStyleTypeComboBox->setObjectName(QString::fromUtf8("mStyleTypeComboBox"));

        gridLayout->addWidget(mStyleTypeComboBox, 0, 1, 1, 1);

        mFileLabel = new QLabel(QgsVectorLayerLoadStyleDialog);
        mFileLabel->setObjectName(QString::fromUtf8("mFileLabel"));

        gridLayout->addWidget(mFileLabel, 2, 0, 1, 1);

        mFileWidget = new QgsFileWidget(QgsVectorLayerLoadStyleDialog);
        mFileWidget->setObjectName(QString::fromUtf8("mFileWidget"));

        gridLayout->addWidget(mFileWidget, 2, 1, 1, 1);

        mModeLabel = new QLabel(QgsVectorLayerLoadStyleDialog);
        mModeLabel->setObjectName(QString::fromUtf8("mModeLabel"));

        gridLayout->addWidget(mModeLabel, 0, 0, 1, 1);

        label_4 = new QLabel(QgsVectorLayerLoadStyleDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        mStyleCategoriesListView = new QListView(QgsVectorLayerLoadStyleDialog);
        mStyleCategoriesListView->setObjectName(QString::fromUtf8("mStyleCategoriesListView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mStyleCategoriesListView->sizePolicy().hasHeightForWidth());
        mStyleCategoriesListView->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mStyleCategoriesListView, 3, 1, 1, 1);

        mFromDbWidget = new QWidget(QgsVectorLayerLoadStyleDialog);
        mFromDbWidget->setObjectName(QString::fromUtf8("mFromDbWidget"));
        gridLayout_2 = new QGridLayout(mFromDbWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(mFromDbWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        mRelatedTable = new QTableWidget(mFromDbWidget);
        mRelatedTable->setObjectName(QString::fromUtf8("mRelatedTable"));
        mRelatedTable->setSortingEnabled(true);

        gridLayout_2->addWidget(mRelatedTable, 1, 0, 1, 1);

        label_2 = new QLabel(mFromDbWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        mOthersTable = new QTableWidget(mFromDbWidget);
        mOthersTable->setObjectName(QString::fromUtf8("mOthersTable"));
        mOthersTable->setSortingEnabled(true);

        gridLayout_2->addWidget(mOthersTable, 3, 0, 1, 1);


        gridLayout->addWidget(mFromDbWidget, 1, 0, 1, 2);

        mButtonBox = new QDialogButtonBox(QgsVectorLayerLoadStyleDialog);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Open);

        gridLayout->addWidget(mButtonBox, 4, 0, 1, 2);

        QWidget::setTabOrder(mStyleTypeComboBox, mRelatedTable);
        QWidget::setTabOrder(mRelatedTable, mOthersTable);
        QWidget::setTabOrder(mOthersTable, mStyleCategoriesListView);

        retranslateUi(QgsVectorLayerLoadStyleDialog);

        QMetaObject::connectSlotsByName(QgsVectorLayerLoadStyleDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsVectorLayerLoadStyleDialog)
    {
        QgsVectorLayerLoadStyleDialog->setWindowTitle(QCoreApplication::translate("QgsVectorLayerLoadStyleDialog", "Load Layer Style", nullptr));
        mFileLabel->setText(QCoreApplication::translate("QgsVectorLayerLoadStyleDialog", "File", nullptr));
        mModeLabel->setText(QCoreApplication::translate("QgsVectorLayerLoadStyleDialog", "Load style", nullptr));
        label_4->setText(QCoreApplication::translate("QgsVectorLayerLoadStyleDialog", "Categories", nullptr));
        label->setText(QCoreApplication::translate("QgsVectorLayerLoadStyleDialog", "Styles related to the layer", nullptr));
        label_2->setText(QCoreApplication::translate("QgsVectorLayerLoadStyleDialog", "Other styles on the database", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsVectorLayerLoadStyleDialog: public Ui_QgsVectorLayerLoadStyleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORLAYERLOADSTYLEDIALOG_H
