/********************************************************************************
** Form generated from reading UI file 'qgsvectortilebasiclabelingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORTILEBASICLABELINGWIDGET_H
#define UI_QGSVECTORTILEBASICLABELINGWIDGET_H

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

class Ui_QgsVectorTileBasicLabelingWidget
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

    void setupUi(QWidget *QgsVectorTileBasicLabelingWidget)
    {
        if (QgsVectorTileBasicLabelingWidget->objectName().isEmpty())
            QgsVectorTileBasicLabelingWidget->setObjectName(QString::fromUtf8("QgsVectorTileBasicLabelingWidget"));
        QgsVectorTileBasicLabelingWidget->resize(557, 424);
        verticalLayout = new QVBoxLayout(QgsVectorTileBasicLabelingWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        mFilterLineEdit = new QgsFilterLineEdit(QgsVectorTileBasicLabelingWidget);
        mFilterLineEdit->setObjectName(QString::fromUtf8("mFilterLineEdit"));

        horizontalLayout_2->addWidget(mFilterLineEdit);

        mCheckVisibleOnly = new QCheckBox(QgsVectorTileBasicLabelingWidget);
        mCheckVisibleOnly->setObjectName(QString::fromUtf8("mCheckVisibleOnly"));

        horizontalLayout_2->addWidget(mCheckVisibleOnly);


        verticalLayout->addLayout(horizontalLayout_2);

        viewStyles = new QTreeView(QgsVectorTileBasicLabelingWidget);
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
        btnAddRule = new QToolButton(QgsVectorTileBasicLabelingWidget);
        btnAddRule->setObjectName(QString::fromUtf8("btnAddRule"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddRule->setIcon(icon);
        btnAddRule->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(btnAddRule);

        btnRemoveRule = new QPushButton(QgsVectorTileBasicLabelingWidget);
        btnRemoveRule->setObjectName(QString::fromUtf8("btnRemoveRule"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveRule->setIcon(icon1);

        horizontalLayout->addWidget(btnRemoveRule);

        btnEditRule = new QPushButton(QgsVectorTileBasicLabelingWidget);
        btnEditRule->setObjectName(QString::fromUtf8("btnEditRule"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditRule->setIcon(icon2);

        horizontalLayout->addWidget(btnEditRule);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mLabelCurrentZoom = new QLabel(QgsVectorTileBasicLabelingWidget);
        mLabelCurrentZoom->setObjectName(QString::fromUtf8("mLabelCurrentZoom"));

        horizontalLayout->addWidget(mLabelCurrentZoom);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(mFilterLineEdit, mCheckVisibleOnly);
        QWidget::setTabOrder(mCheckVisibleOnly, viewStyles);
        QWidget::setTabOrder(viewStyles, btnAddRule);
        QWidget::setTabOrder(btnAddRule, btnRemoveRule);
        QWidget::setTabOrder(btnRemoveRule, btnEditRule);

        retranslateUi(QgsVectorTileBasicLabelingWidget);

        QMetaObject::connectSlotsByName(QgsVectorTileBasicLabelingWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsVectorTileBasicLabelingWidget)
    {
#if QT_CONFIG(tooltip)
        mCheckVisibleOnly->setToolTip(QCoreApplication::translate("QgsVectorTileBasicLabelingWidget", "Hides any rules which are invisible because they fall outside the current map canvas zoom level", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckVisibleOnly->setText(QCoreApplication::translate("QgsVectorTileBasicLabelingWidget", "Visible rules only", nullptr));
#if QT_CONFIG(tooltip)
        btnAddRule->setToolTip(QCoreApplication::translate("QgsVectorTileBasicLabelingWidget", "Add rule", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddRule->setText(QString());
#if QT_CONFIG(tooltip)
        btnRemoveRule->setToolTip(QCoreApplication::translate("QgsVectorTileBasicLabelingWidget", "Remove selected rules", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRemoveRule->setText(QString());
#if QT_CONFIG(tooltip)
        btnEditRule->setToolTip(QCoreApplication::translate("QgsVectorTileBasicLabelingWidget", "Edit current rule", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEditRule->setText(QString());
        mLabelCurrentZoom->setText(QString());
        (void)QgsVectorTileBasicLabelingWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsVectorTileBasicLabelingWidget: public Ui_QgsVectorTileBasicLabelingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORTILEBASICLABELINGWIDGET_H
