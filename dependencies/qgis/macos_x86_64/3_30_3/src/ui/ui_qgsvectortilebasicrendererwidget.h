/********************************************************************************
** Form generated from reading UI file 'qgsvectortilebasicrendererwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORTILEBASICRENDERERWIDGET_H
#define UI_QGSVECTORTILEBASICRENDERERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorTileBasicRendererWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QgsFilterLineEdit *mFilterLineEdit;
    QCheckBox *mCheckVisibleOnly;
    QTreeView *viewStyles;
    QHBoxLayout *horizontalLayout;
    QToolButton *btnAddRule;
    QPushButton *btnRemoveRule;
    QPushButton *btnEditRule;
    QSpacerItem *horizontalSpacer;
    QLabel *mLabelCurrentZoom;

    void setupUi(QWidget *QgsVectorTileBasicRendererWidget)
    {
        if (QgsVectorTileBasicRendererWidget->objectName().isEmpty())
            QgsVectorTileBasicRendererWidget->setObjectName(QString::fromUtf8("QgsVectorTileBasicRendererWidget"));
        QgsVectorTileBasicRendererWidget->resize(557, 424);
        verticalLayout = new QVBoxLayout(QgsVectorTileBasicRendererWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        mFilterLineEdit = new QgsFilterLineEdit(QgsVectorTileBasicRendererWidget);
        mFilterLineEdit->setObjectName(QString::fromUtf8("mFilterLineEdit"));

        horizontalLayout_2->addWidget(mFilterLineEdit);

        mCheckVisibleOnly = new QCheckBox(QgsVectorTileBasicRendererWidget);
        mCheckVisibleOnly->setObjectName(QString::fromUtf8("mCheckVisibleOnly"));

        horizontalLayout_2->addWidget(mCheckVisibleOnly);


        verticalLayout->addLayout(horizontalLayout_2);

        viewStyles = new QTreeView(QgsVectorTileBasicRendererWidget);
        viewStyles->setObjectName(QString::fromUtf8("viewStyles"));
        viewStyles->setAcceptDrops(true);
        viewStyles->setEditTriggers(QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        viewStyles->setDragEnabled(true);
        viewStyles->setDragDropMode(QAbstractItemView::InternalMove);
        viewStyles->setSelectionMode(QAbstractItemView::ExtendedSelection);
        viewStyles->setRootIsDecorated(false);

        verticalLayout->addWidget(viewStyles);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnAddRule = new QToolButton(QgsVectorTileBasicRendererWidget);
        btnAddRule->setObjectName(QString::fromUtf8("btnAddRule"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddRule->setIcon(icon);
        btnAddRule->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(btnAddRule);

        btnRemoveRule = new QPushButton(QgsVectorTileBasicRendererWidget);
        btnRemoveRule->setObjectName(QString::fromUtf8("btnRemoveRule"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveRule->setIcon(icon1);

        horizontalLayout->addWidget(btnRemoveRule);

        btnEditRule = new QPushButton(QgsVectorTileBasicRendererWidget);
        btnEditRule->setObjectName(QString::fromUtf8("btnEditRule"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditRule->setIcon(icon2);

        horizontalLayout->addWidget(btnEditRule);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mLabelCurrentZoom = new QLabel(QgsVectorTileBasicRendererWidget);
        mLabelCurrentZoom->setObjectName(QString::fromUtf8("mLabelCurrentZoom"));

        horizontalLayout->addWidget(mLabelCurrentZoom);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(mFilterLineEdit, mCheckVisibleOnly);
        QWidget::setTabOrder(mCheckVisibleOnly, viewStyles);
        QWidget::setTabOrder(viewStyles, btnAddRule);
        QWidget::setTabOrder(btnAddRule, btnRemoveRule);
        QWidget::setTabOrder(btnRemoveRule, btnEditRule);

        retranslateUi(QgsVectorTileBasicRendererWidget);

        QMetaObject::connectSlotsByName(QgsVectorTileBasicRendererWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsVectorTileBasicRendererWidget)
    {
#if QT_CONFIG(tooltip)
        mCheckVisibleOnly->setToolTip(QCoreApplication::translate("QgsVectorTileBasicRendererWidget", "Hides any rules which are invisible because they fall outside the current map canvas zoom level", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckVisibleOnly->setText(QCoreApplication::translate("QgsVectorTileBasicRendererWidget", "Visible rules only", nullptr));
#if QT_CONFIG(tooltip)
        btnAddRule->setToolTip(QCoreApplication::translate("QgsVectorTileBasicRendererWidget", "Add rule", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddRule->setText(QString());
#if QT_CONFIG(tooltip)
        btnRemoveRule->setToolTip(QCoreApplication::translate("QgsVectorTileBasicRendererWidget", "Remove selected rules", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRemoveRule->setText(QString());
#if QT_CONFIG(tooltip)
        btnEditRule->setToolTip(QCoreApplication::translate("QgsVectorTileBasicRendererWidget", "Edit current rule", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEditRule->setText(QString());
        mLabelCurrentZoom->setText(QString());
        (void)QgsVectorTileBasicRendererWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsVectorTileBasicRendererWidget: public Ui_QgsVectorTileBasicRendererWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORTILEBASICRENDERERWIDGET_H
