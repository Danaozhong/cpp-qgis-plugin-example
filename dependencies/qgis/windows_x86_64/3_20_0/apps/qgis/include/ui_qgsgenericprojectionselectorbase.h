/********************************************************************************
** Form generated from reading UI file 'qgsgenericprojectionselectorbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include "qgsprojectionselectiontreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsGenericProjectionSelectorBase
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *mSplitter;
    QTextEdit *textEdit;
    QgsProjectionSelectionTreeWidget *projectionSelector;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsGenericProjectionSelectorBase)
    {
        if (QgsGenericProjectionSelectorBase->objectName().isEmpty())
            QgsGenericProjectionSelectorBase->setObjectName(QString::fromUtf8("QgsGenericProjectionSelectorBase"));
        QgsGenericProjectionSelectorBase->resize(605, 563);
        QIcon icon;
        icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsGenericProjectionSelectorBase->setWindowIcon(icon);
        QgsGenericProjectionSelectorBase->setModal(true);
        verticalLayout = new QVBoxLayout(QgsGenericProjectionSelectorBase);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mSplitter = new QSplitter(QgsGenericProjectionSelectorBase);
        mSplitter->setObjectName(QString::fromUtf8("mSplitter"));
        mSplitter->setOrientation(Qt::Vertical);
        mSplitter->setChildrenCollapsible(false);
        textEdit = new QTextEdit(mSplitter);
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
        mSplitter->addWidget(textEdit);
        projectionSelector = new QgsProjectionSelectionTreeWidget(mSplitter);
        projectionSelector->setObjectName(QString::fromUtf8("projectionSelector"));
        mSplitter->addWidget(projectionSelector);

        verticalLayout->addWidget(mSplitter);

        mButtonBox = new QDialogButtonBox(QgsGenericProjectionSelectorBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);
        mButtonBox->setCenterButtons(false);

        verticalLayout->addWidget(mButtonBox);


        retranslateUi(QgsGenericProjectionSelectorBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsGenericProjectionSelectorBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsGenericProjectionSelectorBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsGenericProjectionSelectorBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGenericProjectionSelectorBase)
    {
        QgsGenericProjectionSelectorBase->setWindowTitle(QCoreApplication::translate("QgsGenericProjectionSelectorBase", "Coordinate Reference System Selector", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsGenericProjectionSelectorBase: public Ui_QgsGenericProjectionSelectorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGENERICPROJECTIONSELECTORBASE_H
