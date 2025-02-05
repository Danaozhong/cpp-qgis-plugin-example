/********************************************************************************
** Form generated from reading UI file 'qgsrelationreferenceconfigdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRELATIONREFERENCECONFIGDLGBASE_H
#define UI_QGSRELATIONREFERENCECONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsfieldexpressionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRelReferenceConfigDlgBase
{
public:
    QGridLayout *gridLayout_2;
    QCheckBox *mCbxShowForm;
    QCheckBox *mCbxShowOpenFormButton;
    QComboBox *mComboRelation;
    QCheckBox *mCbxAllowNull;
    QCheckBox *mCbxReadOnly;
    QgsFieldExpressionWidget *mExpressionWidget;
    QLabel *label_2;
    QCheckBox *mCbxOrderByValue;
    QCheckBox *mCbxMapIdentification;
    QLabel *label;
    QgsCollapsibleGroupBox *mFilterGroupBox;
    QGridLayout *gridLayout;
    QToolButton *mAddFilterButton;
    QListWidget *mAvailableFieldsList;
    QListWidget *mFilterFieldsList;
    QCheckBox *mCbxChainFilters;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QToolButton *mEditExpression;
    QSpacerItem *horizontalSpacer;
    QToolButton *mRemoveFilterButton;
    QTextEdit *mFilterExpression;
    QCheckBox *mCbxAllowAddFeatures;

    void setupUi(QWidget *QgsRelReferenceConfigDlgBase)
    {
        if (QgsRelReferenceConfigDlgBase->objectName().isEmpty())
            QgsRelReferenceConfigDlgBase->setObjectName(QString::fromUtf8("QgsRelReferenceConfigDlgBase"));
        QgsRelReferenceConfigDlgBase->resize(470, 540);
        QgsRelReferenceConfigDlgBase->setWindowTitle(QString::fromUtf8("Dialog"));
        gridLayout_2 = new QGridLayout(QgsRelReferenceConfigDlgBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mCbxShowForm = new QCheckBox(QgsRelReferenceConfigDlgBase);
        mCbxShowForm->setObjectName(QString::fromUtf8("mCbxShowForm"));

        gridLayout_2->addWidget(mCbxShowForm, 4, 0, 1, 2);

        mCbxShowOpenFormButton = new QCheckBox(QgsRelReferenceConfigDlgBase);
        mCbxShowOpenFormButton->setObjectName(QString::fromUtf8("mCbxShowOpenFormButton"));

        gridLayout_2->addWidget(mCbxShowOpenFormButton, 5, 0, 1, 2);

        mComboRelation = new QComboBox(QgsRelReferenceConfigDlgBase);
        mComboRelation->setObjectName(QString::fromUtf8("mComboRelation"));
        mComboRelation->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        gridLayout_2->addWidget(mComboRelation, 1, 1, 1, 1);

        mCbxAllowNull = new QCheckBox(QgsRelReferenceConfigDlgBase);
        mCbxAllowNull->setObjectName(QString::fromUtf8("mCbxAllowNull"));

        gridLayout_2->addWidget(mCbxAllowNull, 2, 0, 1, 2);

        mCbxReadOnly = new QCheckBox(QgsRelReferenceConfigDlgBase);
        mCbxReadOnly->setObjectName(QString::fromUtf8("mCbxReadOnly"));

        gridLayout_2->addWidget(mCbxReadOnly, 7, 0, 1, 2);

        mExpressionWidget = new QgsFieldExpressionWidget(QgsRelReferenceConfigDlgBase);
        mExpressionWidget->setObjectName(QString::fromUtf8("mExpressionWidget"));
        mExpressionWidget->setFocusPolicy(Qt::TabFocus);

        gridLayout_2->addWidget(mExpressionWidget, 0, 1, 1, 1);

        label_2 = new QLabel(QgsRelReferenceConfigDlgBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        mCbxOrderByValue = new QCheckBox(QgsRelReferenceConfigDlgBase);
        mCbxOrderByValue->setObjectName(QString::fromUtf8("mCbxOrderByValue"));

        gridLayout_2->addWidget(mCbxOrderByValue, 3, 0, 1, 1);

        mCbxMapIdentification = new QCheckBox(QgsRelReferenceConfigDlgBase);
        mCbxMapIdentification->setObjectName(QString::fromUtf8("mCbxMapIdentification"));

        gridLayout_2->addWidget(mCbxMapIdentification, 6, 0, 1, 2);

        label = new QLabel(QgsRelReferenceConfigDlgBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        mFilterGroupBox = new QgsCollapsibleGroupBox(QgsRelReferenceConfigDlgBase);
        mFilterGroupBox->setObjectName(QString::fromUtf8("mFilterGroupBox"));
        mFilterGroupBox->setCheckable(true);
        mFilterGroupBox->setChecked(false);
        gridLayout = new QGridLayout(mFilterGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mAddFilterButton = new QToolButton(mFilterGroupBox);
        mAddFilterButton->setObjectName(QString::fromUtf8("mAddFilterButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddFilterButton->setIcon(icon);

        gridLayout->addWidget(mAddFilterButton, 2, 1, 1, 1);

        mAvailableFieldsList = new QListWidget(mFilterGroupBox);
        mAvailableFieldsList->setObjectName(QString::fromUtf8("mAvailableFieldsList"));

        gridLayout->addWidget(mAvailableFieldsList, 1, 0, 4, 1);

        mFilterFieldsList = new QListWidget(mFilterGroupBox);
        mFilterFieldsList->setObjectName(QString::fromUtf8("mFilterFieldsList"));

        gridLayout->addWidget(mFilterFieldsList, 1, 2, 4, 1);

        mCbxChainFilters = new QCheckBox(mFilterGroupBox);
        mCbxChainFilters->setObjectName(QString::fromUtf8("mCbxChainFilters"));

        gridLayout->addWidget(mCbxChainFilters, 5, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 10, -1, -1);
        label_3 = new QLabel(mFilterGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        mEditExpression = new QToolButton(mFilterGroupBox);
        mEditExpression->setObjectName(QString::fromUtf8("mEditExpression"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mEditExpression->setIcon(icon1);

        horizontalLayout->addWidget(mEditExpression);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 3);

        mRemoveFilterButton = new QToolButton(mFilterGroupBox);
        mRemoveFilterButton->setObjectName(QString::fromUtf8("mRemoveFilterButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveFilterButton->setIcon(icon2);

        gridLayout->addWidget(mRemoveFilterButton, 3, 1, 1, 1);

        mFilterExpression = new QTextEdit(mFilterGroupBox);
        mFilterExpression->setObjectName(QString::fromUtf8("mFilterExpression"));

        gridLayout->addWidget(mFilterExpression, 7, 0, 1, 3);


        gridLayout_2->addWidget(mFilterGroupBox, 9, 0, 1, 2);

        mCbxAllowAddFeatures = new QCheckBox(QgsRelReferenceConfigDlgBase);
        mCbxAllowAddFeatures->setObjectName(QString::fromUtf8("mCbxAllowAddFeatures"));

        gridLayout_2->addWidget(mCbxAllowAddFeatures, 8, 0, 1, 2);

        QWidget::setTabOrder(mExpressionWidget, mComboRelation);
        QWidget::setTabOrder(mComboRelation, mCbxAllowNull);
        QWidget::setTabOrder(mCbxAllowNull, mCbxOrderByValue);
        QWidget::setTabOrder(mCbxOrderByValue, mCbxShowForm);
        QWidget::setTabOrder(mCbxShowForm, mCbxShowOpenFormButton);
        QWidget::setTabOrder(mCbxShowOpenFormButton, mCbxMapIdentification);
        QWidget::setTabOrder(mCbxMapIdentification, mCbxReadOnly);
        QWidget::setTabOrder(mCbxReadOnly, mCbxAllowAddFeatures);
        QWidget::setTabOrder(mCbxAllowAddFeatures, mFilterGroupBox);
        QWidget::setTabOrder(mFilterGroupBox, mAvailableFieldsList);
        QWidget::setTabOrder(mAvailableFieldsList, mAddFilterButton);
        QWidget::setTabOrder(mAddFilterButton, mRemoveFilterButton);
        QWidget::setTabOrder(mRemoveFilterButton, mFilterFieldsList);
        QWidget::setTabOrder(mFilterFieldsList, mCbxChainFilters);
        QWidget::setTabOrder(mCbxChainFilters, mEditExpression);
        QWidget::setTabOrder(mEditExpression, mFilterExpression);

        retranslateUi(QgsRelReferenceConfigDlgBase);

        QMetaObject::connectSlotsByName(QgsRelReferenceConfigDlgBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRelReferenceConfigDlgBase)
    {
        mCbxShowForm->setText(QCoreApplication::translate("QgsRelReferenceConfigDlgBase", "Show embedded form", nullptr));
        mCbxShowOpenFormButton->setText(QCoreApplication::translate("QgsRelReferenceConfigDlgBase", "Show open form button", nullptr));
#if QT_CONFIG(tooltip)
        mComboRelation->setToolTip(QCoreApplication::translate("QgsRelReferenceConfigDlgBase", "The generated relations for a polymorphic relation cannot be used.", nullptr));
#endif // QT_CONFIG(tooltip)
        mCbxAllowNull->setText(QCoreApplication::translate("QgsRelReferenceConfigDlgBase", "Allow NULL value", nullptr));
        mCbxReadOnly->setText(QCoreApplication::translate("QgsRelReferenceConfigDlgBase", "Use a read-only line edit instead of a combobox", nullptr));
        label_2->setText(QCoreApplication::translate("QgsRelReferenceConfigDlgBase", "Relation", nullptr));
        mCbxOrderByValue->setText(QCoreApplication::translate("QgsRelReferenceConfigDlgBase", "Order by value", nullptr));
        mCbxMapIdentification->setText(QCoreApplication::translate("QgsRelReferenceConfigDlgBase", "On map identification (for geometric layers only)", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("QgsRelReferenceConfigDlgBase", "This setting is not saved in the style. It is changing the display name on the referenced layer.", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("QgsRelReferenceConfigDlgBase", "Display expression \342\222\276", nullptr));
        mFilterGroupBox->setTitle(QCoreApplication::translate("QgsRelReferenceConfigDlgBase", "Filters", nullptr));
        mAddFilterButton->setText(QCoreApplication::translate("QgsRelReferenceConfigDlgBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mCbxChainFilters->setToolTip(QCoreApplication::translate("QgsRelReferenceConfigDlgBase", "When activated, filters restrict the option of subsequent filters based on the selection of a previous filter.", nullptr));
#endif // QT_CONFIG(tooltip)
        mCbxChainFilters->setText(QCoreApplication::translate("QgsRelReferenceConfigDlgBase", "Chain filters", nullptr));
        label_3->setText(QCoreApplication::translate("QgsRelReferenceConfigDlgBase", "Filter expression", nullptr));
        mRemoveFilterButton->setText(QCoreApplication::translate("QgsRelReferenceConfigDlgBase", "\342\200\246", nullptr));
        mCbxAllowAddFeatures->setText(QCoreApplication::translate("QgsRelReferenceConfigDlgBase", "Allow adding new features", nullptr));
        (void)QgsRelReferenceConfigDlgBase;
    } // retranslateUi

};

namespace Ui {
    class QgsRelReferenceConfigDlgBase: public Ui_QgsRelReferenceConfigDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRELATIONREFERENCECONFIGDLGBASE_H
