/********************************************************************************
** Form generated from reading UI file 'qgsaddattrdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSADDATTRDIALOGBASE_H
#define UI_QGSADDATTRDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAddAttrDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QLineEdit *mNameEdit;
    QLabel *textLabel1_2;
    QLineEdit *mCommentEdit;
    QLabel *textLabel2;
    QComboBox *mTypeBox;
    QLabel *label;
    QLabel *mTypeName;
    QLabel *mLengthLabel;
    QgsSpinBox *mLength;
    QLabel *mPrecLabel;
    QgsSpinBox *mPrec;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAddAttrDialogBase)
    {
        if (QgsAddAttrDialogBase->objectName().isEmpty())
            QgsAddAttrDialogBase->setObjectName(QString::fromUtf8("QgsAddAttrDialogBase"));
        QgsAddAttrDialogBase->resize(245, 201);
        QgsAddAttrDialogBase->setModal(true);
        gridLayout = new QGridLayout(QgsAddAttrDialogBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel1 = new QLabel(QgsAddAttrDialogBase);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        mNameEdit = new QLineEdit(QgsAddAttrDialogBase);
        mNameEdit->setObjectName(QString::fromUtf8("mNameEdit"));

        gridLayout->addWidget(mNameEdit, 0, 1, 1, 1);

        textLabel1_2 = new QLabel(QgsAddAttrDialogBase);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

        gridLayout->addWidget(textLabel1_2, 1, 0, 1, 1);

        mCommentEdit = new QLineEdit(QgsAddAttrDialogBase);
        mCommentEdit->setObjectName(QString::fromUtf8("mCommentEdit"));

        gridLayout->addWidget(mCommentEdit, 1, 1, 1, 1);

        textLabel2 = new QLabel(QgsAddAttrDialogBase);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout->addWidget(textLabel2, 2, 0, 1, 1);

        mTypeBox = new QComboBox(QgsAddAttrDialogBase);
        mTypeBox->setObjectName(QString::fromUtf8("mTypeBox"));

        gridLayout->addWidget(mTypeBox, 2, 1, 1, 1);

        label = new QLabel(QgsAddAttrDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        mTypeName = new QLabel(QgsAddAttrDialogBase);
        mTypeName->setObjectName(QString::fromUtf8("mTypeName"));

        gridLayout->addWidget(mTypeName, 3, 1, 1, 1);

        mLengthLabel = new QLabel(QgsAddAttrDialogBase);
        mLengthLabel->setObjectName(QString::fromUtf8("mLengthLabel"));

        gridLayout->addWidget(mLengthLabel, 4, 0, 1, 1);

        mLength = new QgsSpinBox(QgsAddAttrDialogBase);
        mLength->setObjectName(QString::fromUtf8("mLength"));

        gridLayout->addWidget(mLength, 4, 1, 1, 1);

        mPrecLabel = new QLabel(QgsAddAttrDialogBase);
        mPrecLabel->setObjectName(QString::fromUtf8("mPrecLabel"));

        gridLayout->addWidget(mPrecLabel, 5, 0, 1, 1);

        mPrec = new QgsSpinBox(QgsAddAttrDialogBase);
        mPrec->setObjectName(QString::fromUtf8("mPrec"));

        gridLayout->addWidget(mPrec, 5, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsAddAttrDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 7, 1, 1, 1);

#if QT_CONFIG(shortcut)
        textLabel1->setBuddy(mNameEdit);
        textLabel1_2->setBuddy(mCommentEdit);
        textLabel2->setBuddy(mTypeBox);
        mTypeName->setBuddy(mTypeBox);
        mLengthLabel->setBuddy(mLength);
        mPrecLabel->setBuddy(mPrec);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mNameEdit, mCommentEdit);
        QWidget::setTabOrder(mCommentEdit, mTypeBox);
        QWidget::setTabOrder(mTypeBox, mLength);
        QWidget::setTabOrder(mLength, mPrec);

        retranslateUi(QgsAddAttrDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsAddAttrDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsAddAttrDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsAddAttrDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsAddAttrDialogBase)
    {
        QgsAddAttrDialogBase->setWindowTitle(QCoreApplication::translate("QgsAddAttrDialogBase", "Add Field", nullptr));
        textLabel1->setText(QCoreApplication::translate("QgsAddAttrDialogBase", "N&ame", nullptr));
        textLabel1_2->setText(QCoreApplication::translate("QgsAddAttrDialogBase", "Comment", nullptr));
        textLabel2->setText(QCoreApplication::translate("QgsAddAttrDialogBase", "Type", nullptr));
        label->setText(QCoreApplication::translate("QgsAddAttrDialogBase", "Provider type", nullptr));
        mTypeName->setText(QCoreApplication::translate("QgsAddAttrDialogBase", "Type", nullptr));
#if QT_CONFIG(tooltip)
        mLengthLabel->setToolTip(QCoreApplication::translate("QgsAddAttrDialogBase", "Total length of field (including the number of digits after the decimal place for decimal fields).<br>For example 123.45 requires a decimal field length of 5, and 123456 requires an integer field length of 6.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLengthLabel->setText(QCoreApplication::translate("QgsAddAttrDialogBase", "Length", nullptr));
#if QT_CONFIG(tooltip)
        mLength->setToolTip(QCoreApplication::translate("QgsAddAttrDialogBase", "Total length of field (including the number of digits after the decimal place for decimal fields).<br>For example 123.45 requires a decimal field length of 5, and 123456 requires an integer field length of 6.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mPrecLabel->setToolTip(QCoreApplication::translate("QgsAddAttrDialogBase", "Maximum number of digits after the decimal place. For example 123.45 requires a field precision of 2.", nullptr));
#endif // QT_CONFIG(tooltip)
        mPrecLabel->setText(QCoreApplication::translate("QgsAddAttrDialogBase", "Precision", nullptr));
#if QT_CONFIG(tooltip)
        mPrec->setToolTip(QCoreApplication::translate("QgsAddAttrDialogBase", "Maximum number of digits after the decimal place. For example 123.45 requires a field precision of 2.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class QgsAddAttrDialogBase: public Ui_QgsAddAttrDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSADDATTRDIALOGBASE_H
