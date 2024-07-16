/********************************************************************************
** Form generated from reading UI file 'qgsqueryresultwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSQUERYRESULTWIDGETBASE_H
#define UI_QGSQUERYRESULTWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscheckablecombobox.h"
#include "qgscodeeditorsql.h"
#include "qgscollapsiblegroupbox.h"
#include "qgsmessagebar.h"

QT_BEGIN_NAMESPACE

class Ui_QgsQueryResultWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsMessageBar *mMessageBar;
    QgsCodeEditorSQL *mSqlEditor;
    QHBoxLayout *horizontalLayout;
    QPushButton *mClearButton;
    QLabel *mStatusLabel;
    QSpacerItem *horizontalSpacer;
    QProgressBar *mProgressBar;
    QPushButton *mExecuteButton;
    QPushButton *mStopButton;
    QTableView *mQueryResultsTableView;
    QgsCodeEditorSQL *mSqlErrorText;
    QgsCollapsibleGroupBox *mLoadAsNewLayerGroupBox;
    QFormLayout *formLayout;
    QCheckBox *mPkColumnsCheckBox;
    QgsCheckableComboBox *mPkColumnsComboBox;
    QCheckBox *mGeometryColumnCheckBox;
    QComboBox *mGeometryColumnComboBox;
    QLabel *mFilterLabel;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *mFilterLineEdit;
    QToolButton *mFilterToolButton;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *mLayerNameLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mLoadLayerPushButton;
    QCheckBox *mAvoidSelectingAsFeatureIdCheckBox;
    QLabel *mLayerNameLabel;

    void setupUi(QWidget *QgsQueryResultWidgetBase)
    {
        if (QgsQueryResultWidgetBase->objectName().isEmpty())
            QgsQueryResultWidgetBase->setObjectName(QString::fromUtf8("QgsQueryResultWidgetBase"));
        QgsQueryResultWidgetBase->resize(662, 471);
        QgsQueryResultWidgetBase->setWindowTitle(QString::fromUtf8("Dialog"));
        verticalLayout = new QVBoxLayout(QgsQueryResultWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mMessageBar = new QgsMessageBar(QgsQueryResultWidgetBase);
        mMessageBar->setObjectName(QString::fromUtf8("mMessageBar"));

        verticalLayout->addWidget(mMessageBar);

        mSqlEditor = new QgsCodeEditorSQL(QgsQueryResultWidgetBase);
        mSqlEditor->setObjectName(QString::fromUtf8("mSqlEditor"));

        verticalLayout->addWidget(mSqlEditor);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mClearButton = new QPushButton(QgsQueryResultWidgetBase);
        mClearButton->setObjectName(QString::fromUtf8("mClearButton"));

        horizontalLayout->addWidget(mClearButton);

        mStatusLabel = new QLabel(QgsQueryResultWidgetBase);
        mStatusLabel->setObjectName(QString::fromUtf8("mStatusLabel"));

        horizontalLayout->addWidget(mStatusLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mProgressBar = new QProgressBar(QgsQueryResultWidgetBase);
        mProgressBar->setObjectName(QString::fromUtf8("mProgressBar"));
        mProgressBar->setValue(24);

        horizontalLayout->addWidget(mProgressBar);

        mExecuteButton = new QPushButton(QgsQueryResultWidgetBase);
        mExecuteButton->setObjectName(QString::fromUtf8("mExecuteButton"));
        mExecuteButton->setEnabled(false);

        horizontalLayout->addWidget(mExecuteButton);

        mStopButton = new QPushButton(QgsQueryResultWidgetBase);
        mStopButton->setObjectName(QString::fromUtf8("mStopButton"));
        mStopButton->setEnabled(false);

        horizontalLayout->addWidget(mStopButton);

        horizontalLayout->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout);

        mQueryResultsTableView = new QTableView(QgsQueryResultWidgetBase);
        mQueryResultsTableView->setObjectName(QString::fromUtf8("mQueryResultsTableView"));

        verticalLayout->addWidget(mQueryResultsTableView);

        mSqlErrorText = new QgsCodeEditorSQL(QgsQueryResultWidgetBase);
        mSqlErrorText->setObjectName(QString::fromUtf8("mSqlErrorText"));

        verticalLayout->addWidget(mSqlErrorText);

        mLoadAsNewLayerGroupBox = new QgsCollapsibleGroupBox(QgsQueryResultWidgetBase);
        mLoadAsNewLayerGroupBox->setObjectName(QString::fromUtf8("mLoadAsNewLayerGroupBox"));
        formLayout = new QFormLayout(mLoadAsNewLayerGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        mPkColumnsCheckBox = new QCheckBox(mLoadAsNewLayerGroupBox);
        mPkColumnsCheckBox->setObjectName(QString::fromUtf8("mPkColumnsCheckBox"));

        formLayout->setWidget(0, QFormLayout::LabelRole, mPkColumnsCheckBox);

        mPkColumnsComboBox = new QgsCheckableComboBox(mLoadAsNewLayerGroupBox);
        mPkColumnsComboBox->setObjectName(QString::fromUtf8("mPkColumnsComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mPkColumnsComboBox);

        mGeometryColumnCheckBox = new QCheckBox(mLoadAsNewLayerGroupBox);
        mGeometryColumnCheckBox->setObjectName(QString::fromUtf8("mGeometryColumnCheckBox"));

        formLayout->setWidget(1, QFormLayout::LabelRole, mGeometryColumnCheckBox);

        mGeometryColumnComboBox = new QComboBox(mLoadAsNewLayerGroupBox);
        mGeometryColumnComboBox->setObjectName(QString::fromUtf8("mGeometryColumnComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, mGeometryColumnComboBox);

        mFilterLabel = new QLabel(mLoadAsNewLayerGroupBox);
        mFilterLabel->setObjectName(QString::fromUtf8("mFilterLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, mFilterLabel);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mFilterLineEdit = new QLineEdit(mLoadAsNewLayerGroupBox);
        mFilterLineEdit->setObjectName(QString::fromUtf8("mFilterLineEdit"));

        horizontalLayout_5->addWidget(mFilterLineEdit);

        mFilterToolButton = new QToolButton(mLoadAsNewLayerGroupBox);
        mFilterToolButton->setObjectName(QString::fromUtf8("mFilterToolButton"));

        horizontalLayout_5->addWidget(mFilterToolButton);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mLayerNameLineEdit = new QLineEdit(mLoadAsNewLayerGroupBox);
        mLayerNameLineEdit->setObjectName(QString::fromUtf8("mLayerNameLineEdit"));

        horizontalLayout_2->addWidget(mLayerNameLineEdit);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        mLoadLayerPushButton = new QPushButton(mLoadAsNewLayerGroupBox);
        mLoadLayerPushButton->setObjectName(QString::fromUtf8("mLoadLayerPushButton"));

        horizontalLayout_3->addWidget(mLoadLayerPushButton);


        formLayout->setLayout(6, QFormLayout::FieldRole, horizontalLayout_3);

        mAvoidSelectingAsFeatureIdCheckBox = new QCheckBox(mLoadAsNewLayerGroupBox);
        mAvoidSelectingAsFeatureIdCheckBox->setObjectName(QString::fromUtf8("mAvoidSelectingAsFeatureIdCheckBox"));

        formLayout->setWidget(3, QFormLayout::LabelRole, mAvoidSelectingAsFeatureIdCheckBox);

        mLayerNameLabel = new QLabel(mLoadAsNewLayerGroupBox);
        mLayerNameLabel->setObjectName(QString::fromUtf8("mLayerNameLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, mLayerNameLabel);


        verticalLayout->addWidget(mLoadAsNewLayerGroupBox);

        QWidget::setTabOrder(mClearButton, mExecuteButton);
        QWidget::setTabOrder(mExecuteButton, mStopButton);
        QWidget::setTabOrder(mStopButton, mQueryResultsTableView);
        QWidget::setTabOrder(mQueryResultsTableView, mPkColumnsCheckBox);
        QWidget::setTabOrder(mPkColumnsCheckBox, mPkColumnsComboBox);
        QWidget::setTabOrder(mPkColumnsComboBox, mGeometryColumnCheckBox);
        QWidget::setTabOrder(mGeometryColumnCheckBox, mGeometryColumnComboBox);
        QWidget::setTabOrder(mGeometryColumnComboBox, mFilterLineEdit);
        QWidget::setTabOrder(mFilterLineEdit, mFilterToolButton);
        QWidget::setTabOrder(mFilterToolButton, mAvoidSelectingAsFeatureIdCheckBox);
        QWidget::setTabOrder(mAvoidSelectingAsFeatureIdCheckBox, mLayerNameLineEdit);
        QWidget::setTabOrder(mLayerNameLineEdit, mLoadLayerPushButton);

        retranslateUi(QgsQueryResultWidgetBase);

        QMetaObject::connectSlotsByName(QgsQueryResultWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsQueryResultWidgetBase)
    {
        mClearButton->setText(QCoreApplication::translate("QgsQueryResultWidgetBase", "Clear", nullptr));
        mStatusLabel->setText(QCoreApplication::translate("QgsQueryResultWidgetBase", "Status and errors goes here.", nullptr));
        mExecuteButton->setText(QCoreApplication::translate("QgsQueryResultWidgetBase", "Execute", nullptr));
        mStopButton->setText(QCoreApplication::translate("QgsQueryResultWidgetBase", "Stop", nullptr));
        mLoadAsNewLayerGroupBox->setTitle(QCoreApplication::translate("QgsQueryResultWidgetBase", "Load as new layer", nullptr));
#if QT_CONFIG(tooltip)
        mPkColumnsCheckBox->setToolTip(QCoreApplication::translate("QgsQueryResultWidgetBase", "Column(s) that can be used as an index to uniquely identify features, they are usually part of a primary key.", nullptr));
#endif // QT_CONFIG(tooltip)
        mPkColumnsCheckBox->setText(QCoreApplication::translate("QgsQueryResultWidgetBase", "Column(s) with unique values", nullptr));
#if QT_CONFIG(tooltip)
        mGeometryColumnCheckBox->setToolTip(QCoreApplication::translate("QgsQueryResultWidgetBase", "Column that contains the geometry.", nullptr));
#endif // QT_CONFIG(tooltip)
        mGeometryColumnCheckBox->setText(QCoreApplication::translate("QgsQueryResultWidgetBase", "Geometry column", nullptr));
#if QT_CONFIG(tooltip)
        mFilterLabel->setToolTip(QCoreApplication::translate("QgsQueryResultWidgetBase", "SQL filter to restrict the features available in the layer", nullptr));
#endif // QT_CONFIG(tooltip)
        mFilterLabel->setText(QCoreApplication::translate("QgsQueryResultWidgetBase", "Subset filter", nullptr));
        mFilterLineEdit->setText(QString());
        mFilterLineEdit->setPlaceholderText(QCoreApplication::translate("QgsQueryResultWidgetBase", "Enter the optional SQL filter or click on the button to open the query builder tool", nullptr));
        mFilterToolButton->setText(QCoreApplication::translate("QgsQueryResultWidgetBase", "...", nullptr));
        mLayerNameLineEdit->setText(QCoreApplication::translate("QgsQueryResultWidgetBase", "QueryLayer", nullptr));
        mLoadLayerPushButton->setText(QCoreApplication::translate("QgsQueryResultWidgetBase", "Load Layer", nullptr));
#if QT_CONFIG(tooltip)
        mAvoidSelectingAsFeatureIdCheckBox->setToolTip(QCoreApplication::translate("QgsQueryResultWidgetBase", "Disable 'Fast Access to Features at ID' capability to force keeping the attribute table in memory (e.g. in case of expensive views)", nullptr));
#endif // QT_CONFIG(tooltip)
        mAvoidSelectingAsFeatureIdCheckBox->setText(QCoreApplication::translate("QgsQueryResultWidgetBase", "Avoid selecting by feature ID", nullptr));
        mLayerNameLabel->setText(QCoreApplication::translate("QgsQueryResultWidgetBase", "Layer name", nullptr));
        (void)QgsQueryResultWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsQueryResultWidgetBase: public Ui_QgsQueryResultWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSQUERYRESULTWIDGETBASE_H
