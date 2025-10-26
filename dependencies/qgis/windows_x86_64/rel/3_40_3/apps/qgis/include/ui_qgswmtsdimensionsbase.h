/********************************************************************************
** Form generated from reading UI file 'qgswmtsdimensionsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSWMTSDIMENSIONSBASE_H
#define UI_QGSWMTSDIMENSIONSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsWmtsDimensionsBase
{
public:
    QGridLayout *gridLayout;
    QTableWidget *mDimensions;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsWmtsDimensionsBase)
    {
        if (QgsWmtsDimensionsBase->objectName().isEmpty())
            QgsWmtsDimensionsBase->setObjectName(QString::fromUtf8("QgsWmtsDimensionsBase"));
        QgsWmtsDimensionsBase->resize(767, 315);
        gridLayout = new QGridLayout(QgsWmtsDimensionsBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mDimensions = new QTableWidget(QgsWmtsDimensionsBase);
        if (mDimensions->columnCount() < 5)
            mDimensions->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mDimensions->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mDimensions->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mDimensions->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        mDimensions->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        mDimensions->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        mDimensions->setObjectName(QString::fromUtf8("mDimensions"));

        gridLayout->addWidget(mDimensions, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsWmtsDimensionsBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(QgsWmtsDimensionsBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsWmtsDimensionsBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsWmtsDimensionsBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsWmtsDimensionsBase);
    } // setupUi

    void retranslateUi(QDialog *QgsWmtsDimensionsBase)
    {
        QgsWmtsDimensionsBase->setWindowTitle(QCoreApplication::translate("QgsWmtsDimensionsBase", "Select Dimensions", nullptr));
        QTableWidgetItem *___qtablewidgetitem = mDimensions->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("QgsWmtsDimensionsBase", "Dimension", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = mDimensions->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("QgsWmtsDimensionsBase", "Value", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = mDimensions->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("QgsWmtsDimensionsBase", "Abstract", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = mDimensions->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("QgsWmtsDimensionsBase", "Default", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = mDimensions->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("QgsWmtsDimensionsBase", "Value", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsWmtsDimensionsBase: public Ui_QgsWmtsDimensionsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSWMTSDIMENSIONSBASE_H
