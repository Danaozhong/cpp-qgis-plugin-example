/********************************************************************************
** Form generated from reading UI file 'qgsjsoneditwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSJSONEDITWIDGET_H
#define UI_QGSJSONEDITWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "qgscodeeditorjson.h"

QT_BEGIN_NAMESPACE

class Ui_QgsJsonEditWidget
{
public:
    QGridLayout *gridLayout;
    QWidget *mControlsWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *mTextToolButton;
    QToolButton *mTreeToolButton;
    QStackedWidget *mStackedWidget;
    QWidget *mStackedWidgetPageText;
    QGridLayout *gridLayout_2;
    QgsCodeEditorJson *mCodeEditorJson;
    QWidget *mStackedWidgetPageTree;
    QGridLayout *gridLayout_3;
    QTreeWidget *mTreeWidget;

    void setupUi(QWidget *QgsJsonEditWidget)
    {
        if (QgsJsonEditWidget->objectName().isEmpty())
            QgsJsonEditWidget->setObjectName(QString::fromUtf8("QgsJsonEditWidget"));
        QgsJsonEditWidget->resize(693, 289);
        QgsJsonEditWidget->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsJsonEditWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mControlsWidget = new QWidget(QgsJsonEditWidget);
        mControlsWidget->setObjectName(QString::fromUtf8("mControlsWidget"));
        horizontalLayout = new QHBoxLayout(mControlsWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mTextToolButton = new QToolButton(mControlsWidget);
        mTextToolButton->setObjectName(QString::fromUtf8("mTextToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mIconFieldText.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTextToolButton->setIcon(icon);
        mTextToolButton->setCheckable(true);

        horizontalLayout->addWidget(mTextToolButton);

        mTreeToolButton = new QToolButton(mControlsWidget);
        mTreeToolButton->setObjectName(QString::fromUtf8("mTreeToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mIconTreeView.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTreeToolButton->setIcon(icon1);
        mTreeToolButton->setCheckable(true);

        horizontalLayout->addWidget(mTreeToolButton);


        gridLayout->addWidget(mControlsWidget, 0, 0, 1, 1);

        mStackedWidget = new QStackedWidget(QgsJsonEditWidget);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));
        mStackedWidgetPageText = new QWidget();
        mStackedWidgetPageText->setObjectName(QString::fromUtf8("mStackedWidgetPageText"));
        gridLayout_2 = new QGridLayout(mStackedWidgetPageText);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mCodeEditorJson = new QgsCodeEditorJson(mStackedWidgetPageText);
        mCodeEditorJson->setObjectName(QString::fromUtf8("mCodeEditorJson"));

        gridLayout_2->addWidget(mCodeEditorJson, 0, 0, 1, 1);

        mStackedWidget->addWidget(mStackedWidgetPageText);
        mStackedWidgetPageTree = new QWidget();
        mStackedWidgetPageTree->setObjectName(QString::fromUtf8("mStackedWidgetPageTree"));
        gridLayout_3 = new QGridLayout(mStackedWidgetPageTree);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mTreeWidget = new QTreeWidget(mStackedWidgetPageTree);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("Key"));
        mTreeWidget->setHeaderItem(__qtreewidgetitem);
        mTreeWidget->setObjectName(QString::fromUtf8("mTreeWidget"));
        mTreeWidget->header()->setVisible(false);

        gridLayout_3->addWidget(mTreeWidget, 0, 0, 1, 1);

        mStackedWidget->addWidget(mStackedWidgetPageTree);

        gridLayout->addWidget(mStackedWidget, 1, 0, 1, 1);


        retranslateUi(QgsJsonEditWidget);

        mStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsJsonEditWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsJsonEditWidget)
    {
#if QT_CONFIG(tooltip)
        mTextToolButton->setToolTip(QCoreApplication::translate("QgsJsonEditWidget", "Show text", nullptr));
#endif // QT_CONFIG(tooltip)
        mTextToolButton->setText(QCoreApplication::translate("QgsJsonEditWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        mTreeToolButton->setToolTip(QCoreApplication::translate("QgsJsonEditWidget", "Show tree", nullptr));
#endif // QT_CONFIG(tooltip)
        mTreeToolButton->setText(QCoreApplication::translate("QgsJsonEditWidget", "...", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = mTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("QgsJsonEditWidget", "Value", nullptr));
        (void)QgsJsonEditWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsJsonEditWidget: public Ui_QgsJsonEditWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSJSONEDITWIDGET_H
