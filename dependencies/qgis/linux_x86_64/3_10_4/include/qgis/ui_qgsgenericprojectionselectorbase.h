/********************************************************************************
** Form generated from reading UI file 'qgsgenericprojectionselectorbase.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGENERICPROJECTIONSELECTORBASE_H
#define UI_QGSGENERICPROJECTIONSELECTORBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTextEdit>
#include "qgsprojectionselectiontreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsGenericProjectionSelectorBase
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QgsProjectionSelectionTreeWidget *projectionSelector;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsGenericProjectionSelectorBase)
    {
        if (QgsGenericProjectionSelectorBase->objectName().isEmpty())
            QgsGenericProjectionSelectorBase->setObjectName(QString::fromUtf8("QgsGenericProjectionSelectorBase"));
        QgsGenericProjectionSelectorBase->resize(605, 563);
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsGenericProjectionSelectorBase->setWindowIcon(icon);
        QgsGenericProjectionSelectorBase->setModal(true);
        gridLayout = new QGridLayout(QgsGenericProjectionSelectorBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(QgsGenericProjectionSelectorBase);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setMaximumSize(QSize(16777215, 160));
        textEdit->setFocusPolicy(Qt::NoFocus);
        textEdit->setAcceptDrops(false);
        textEdit->setLineWidth(2);
        textEdit->setReadOnly(true);

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        projectionSelector = new QgsProjectionSelectionTreeWidget(QgsGenericProjectionSelectorBase);
        projectionSelector->setObjectName(QString::fromUtf8("projectionSelector"));

        gridLayout->addWidget(projectionSelector, 1, 0, 1, 1);

        mButtonBox = new QDialogButtonBox(QgsGenericProjectionSelectorBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);
        mButtonBox->setCenterButtons(false);

        gridLayout->addWidget(mButtonBox, 2, 0, 1, 1);


        retranslateUi(QgsGenericProjectionSelectorBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsGenericProjectionSelectorBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsGenericProjectionSelectorBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsGenericProjectionSelectorBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGenericProjectionSelectorBase)
    {
        QgsGenericProjectionSelectorBase->setWindowTitle(QApplication::translate("QgsGenericProjectionSelectorBase", "Coordinate Reference System Selector", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsGenericProjectionSelectorBase: public Ui_QgsGenericProjectionSelectorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGENERICPROJECTIONSELECTORBASE_H
