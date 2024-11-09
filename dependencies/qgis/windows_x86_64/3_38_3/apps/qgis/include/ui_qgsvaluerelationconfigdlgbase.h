/********************************************************************************
** Form generated from reading UI file 'qgsvaluerelationconfigdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVALUERELATIONCONFIGDLGBASE_H
#define UI_QGSVALUERELATIONCONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgsfieldcombobox.h"
#include "qgsfieldexpressionwidget.h"
#include "qgsmaplayercombobox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsValueRelationConfigDlgBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_19;
    QToolButton *mEditExpression;
    QSpacerItem *horizontalSpacer;
    QLabel *label_nofColumns;
    QTextEdit *mFilterExpression;
    QLabel *label_8;
    QLabel *label_5;
    QgsFieldComboBox *mValueColumn;
    QCheckBox *mOrderByValue;
    QgsMapLayerComboBox *mLayerName;
    QCheckBox *mAllowMulti;
    QCheckBox *mAllowNull;
    QCheckBox *mUseCompleter;
    QCheckBox *mCompleterMatchFromStart;
    QLabel *label_6;
    QgsSpinBox *mNofColumns;
    QgsFieldComboBox *mKeyColumn;
    QLabel *label_7;
    QLabel *label_9;
    QgsFieldComboBox *mGroupColumn;
    QCheckBox *mDisplayGroupName;
    QLabel *label;
    QgsFieldExpressionWidget *mDescriptionExpression;

    void setupUi(QWidget *QgsValueRelationConfigDlgBase)
    {
        if (QgsValueRelationConfigDlgBase->objectName().isEmpty())
            QgsValueRelationConfigDlgBase->setObjectName(QString::fromUtf8("QgsValueRelationConfigDlgBase"));
        QgsValueRelationConfigDlgBase->resize(318, 490);
        QgsValueRelationConfigDlgBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsValueRelationConfigDlgBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_19 = new QLabel(QgsValueRelationConfigDlgBase);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout->addWidget(label_19);

        mEditExpression = new QToolButton(QgsValueRelationConfigDlgBase);
        mEditExpression->setObjectName(QString::fromUtf8("mEditExpression"));
        mEditExpression->setLayoutDirection(Qt::RightToLeft);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mEditExpression->setIcon(icon);

        horizontalLayout->addWidget(mEditExpression);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 14, 0, 1, 2);

        label_nofColumns = new QLabel(QgsValueRelationConfigDlgBase);
        label_nofColumns->setObjectName(QString::fromUtf8("label_nofColumns"));

        gridLayout->addWidget(label_nofColumns, 13, 0, 1, 1);

        mFilterExpression = new QTextEdit(QgsValueRelationConfigDlgBase);
        mFilterExpression->setObjectName(QString::fromUtf8("mFilterExpression"));

        gridLayout->addWidget(mFilterExpression, 17, 0, 1, 2);

        label_8 = new QLabel(QgsValueRelationConfigDlgBase);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 0, 0, 1, 2);

        label_5 = new QLabel(QgsValueRelationConfigDlgBase);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        mValueColumn = new QgsFieldComboBox(QgsValueRelationConfigDlgBase);
        mValueColumn->setObjectName(QString::fromUtf8("mValueColumn"));

        gridLayout->addWidget(mValueColumn, 3, 1, 1, 1);

        mOrderByValue = new QCheckBox(QgsValueRelationConfigDlgBase);
        mOrderByValue->setObjectName(QString::fromUtf8("mOrderByValue"));

        gridLayout->addWidget(mOrderByValue, 4, 0, 1, 2);

        mLayerName = new QgsMapLayerComboBox(QgsValueRelationConfigDlgBase);
        mLayerName->setObjectName(QString::fromUtf8("mLayerName"));

        gridLayout->addWidget(mLayerName, 1, 1, 1, 1);

        mAllowMulti = new QCheckBox(QgsValueRelationConfigDlgBase);
        mAllowMulti->setObjectName(QString::fromUtf8("mAllowMulti"));

        gridLayout->addWidget(mAllowMulti, 12, 0, 1, 2);

        mAllowNull = new QCheckBox(QgsValueRelationConfigDlgBase);
        mAllowNull->setObjectName(QString::fromUtf8("mAllowNull"));

        gridLayout->addWidget(mAllowNull, 8, 0, 1, 2);

        mUseCompleter = new QCheckBox(QgsValueRelationConfigDlgBase);
        mUseCompleter->setObjectName(QString::fromUtf8("mUseCompleter"));

        gridLayout->addWidget(mUseCompleter, 11, 0, 1, 1);

        mCompleterMatchFromStart = new QCheckBox(QgsValueRelationConfigDlgBase);
        mCompleterMatchFromStart->setObjectName(QString::fromUtf8("mCompleterMatchFromStart"));

        gridLayout->addWidget(mCompleterMatchFromStart, 11, 1, 1, 1);

        label_6 = new QLabel(QgsValueRelationConfigDlgBase);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        mNofColumns = new QgsSpinBox(QgsValueRelationConfigDlgBase);
        mNofColumns->setObjectName(QString::fromUtf8("mNofColumns"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mNofColumns->sizePolicy().hasHeightForWidth());
        mNofColumns->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mNofColumns, 13, 1, 1, 1);

        mKeyColumn = new QgsFieldComboBox(QgsValueRelationConfigDlgBase);
        mKeyColumn->setObjectName(QString::fromUtf8("mKeyColumn"));

        gridLayout->addWidget(mKeyColumn, 2, 1, 1, 1);

        label_7 = new QLabel(QgsValueRelationConfigDlgBase);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        label_9 = new QLabel(QgsValueRelationConfigDlgBase);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 5, 0, 1, 1);

        mGroupColumn = new QgsFieldComboBox(QgsValueRelationConfigDlgBase);
        mGroupColumn->setObjectName(QString::fromUtf8("mGroupColumn"));

        gridLayout->addWidget(mGroupColumn, 5, 1, 1, 1);

        mDisplayGroupName = new QCheckBox(QgsValueRelationConfigDlgBase);
        mDisplayGroupName->setObjectName(QString::fromUtf8("mDisplayGroupName"));

        gridLayout->addWidget(mDisplayGroupName, 6, 0, 1, 2);

        label = new QLabel(QgsValueRelationConfigDlgBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 7, 0, 1, 1);

        mDescriptionExpression = new QgsFieldExpressionWidget(QgsValueRelationConfigDlgBase);
        mDescriptionExpression->setObjectName(QString::fromUtf8("mDescriptionExpression"));

        gridLayout->addWidget(mDescriptionExpression, 7, 1, 1, 1);

#if QT_CONFIG(shortcut)
        label_19->setBuddy(mValueColumn);
        label_5->setBuddy(mLayerName);
        label_6->setBuddy(mKeyColumn);
        label_7->setBuddy(mValueColumn);
        label_9->setBuddy(mGroupColumn);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mLayerName, mKeyColumn);
        QWidget::setTabOrder(mKeyColumn, mValueColumn);
        QWidget::setTabOrder(mValueColumn, mGroupColumn);
        QWidget::setTabOrder(mGroupColumn, mDescriptionExpression);
        QWidget::setTabOrder(mDescriptionExpression, mOrderByValue);
        QWidget::setTabOrder(mOrderByValue, mAllowNull);
        QWidget::setTabOrder(mAllowNull, mAllowMulti);
        QWidget::setTabOrder(mAllowMulti, mUseCompleter);
        QWidget::setTabOrder(mUseCompleter, mCompleterMatchFromStart);
        QWidget::setTabOrder(mCompleterMatchFromStart, mNofColumns);
        QWidget::setTabOrder(mNofColumns, mEditExpression);
        QWidget::setTabOrder(mEditExpression, mFilterExpression);

        retranslateUi(QgsValueRelationConfigDlgBase);

        QMetaObject::connectSlotsByName(QgsValueRelationConfigDlgBase);
    } // setupUi

    void retranslateUi(QWidget *QgsValueRelationConfigDlgBase)
    {
        label_19->setText(QCoreApplication::translate("QgsValueRelationConfigDlgBase", "Filter expression", nullptr));
        label_nofColumns->setText(QCoreApplication::translate("QgsValueRelationConfigDlgBase", "Number of columns", nullptr));
        label_8->setText(QCoreApplication::translate("QgsValueRelationConfigDlgBase", "Select layer, key column and value column", nullptr));
        label_5->setText(QCoreApplication::translate("QgsValueRelationConfigDlgBase", "Layer", nullptr));
        mOrderByValue->setText(QCoreApplication::translate("QgsValueRelationConfigDlgBase", "Order by value", nullptr));
        mAllowMulti->setText(QCoreApplication::translate("QgsValueRelationConfigDlgBase", "Allow multiple selections", nullptr));
        mAllowNull->setText(QCoreApplication::translate("QgsValueRelationConfigDlgBase", "Allow NULL value", nullptr));
        mUseCompleter->setText(QCoreApplication::translate("QgsValueRelationConfigDlgBase", "Use completer", nullptr));
        mCompleterMatchFromStart->setText(QCoreApplication::translate("QgsValueRelationConfigDlgBase", "Only match from the beginning of the string", nullptr));
        label_6->setText(QCoreApplication::translate("QgsValueRelationConfigDlgBase", "Key column", nullptr));
        label_7->setText(QCoreApplication::translate("QgsValueRelationConfigDlgBase", "Value column", nullptr));
        label_9->setText(QCoreApplication::translate("QgsValueRelationConfigDlgBase", "Group column", nullptr));
        mDisplayGroupName->setText(QCoreApplication::translate("QgsValueRelationConfigDlgBase", "Display group name", nullptr));
        label->setText(QCoreApplication::translate("QgsValueRelationConfigDlgBase", "Description", nullptr));
        (void)QgsValueRelationConfigDlgBase;
    } // retranslateUi

};

namespace Ui {
    class QgsValueRelationConfigDlgBase: public Ui_QgsValueRelationConfigDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVALUERELATIONCONFIGDLGBASE_H
