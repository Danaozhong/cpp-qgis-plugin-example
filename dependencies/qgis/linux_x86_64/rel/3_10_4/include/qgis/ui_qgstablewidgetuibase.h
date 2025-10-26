/********************************************************************************
** Form generated from reading UI file 'qgstablewidgetuibase.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTABLEWIDGETUIBASE_H
#define UI_QGSTABLEWIDGETUIBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsTableWidgetUiBase
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QToolButton *addButton;
    QToolButton *removeButton;
    QSpacerItem *verticalSpacer;
    QTableView *tableView;

    void setupUi(QWidget *QgsTableWidgetUiBase)
    {
        if (QgsTableWidgetUiBase->objectName().isEmpty())
            QgsTableWidgetUiBase->setObjectName(QString::fromUtf8("QgsTableWidgetUiBase"));
        QgsTableWidgetUiBase->resize(426, 112);
        QgsTableWidgetUiBase->setMinimumSize(QSize(300, 82));
        horizontalLayout_3 = new QHBoxLayout(QgsTableWidgetUiBase);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addButton = new QToolButton(QgsTableWidgetUiBase);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon);

        verticalLayout->addWidget(addButton);

        removeButton = new QToolButton(QgsTableWidgetUiBase);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        removeButton->setIcon(icon1);

        verticalLayout->addWidget(removeButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout);

        tableView = new QTableView(QgsTableWidgetUiBase);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setFrameShape(QFrame::NoFrame);
        tableView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::CurrentChanged|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(false);
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);

        horizontalLayout_3->addWidget(tableView);


        retranslateUi(QgsTableWidgetUiBase);

        QMetaObject::connectSlotsByName(QgsTableWidgetUiBase);
    } // setupUi

    void retranslateUi(QWidget *QgsTableWidgetUiBase)
    {
        QgsTableWidgetUiBase->setWindowTitle(QApplication::translate("QgsTableWidgetUiBase", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QApplication::translate("QgsTableWidgetUiBase", "Add entry", nullptr));
#endif // QT_NO_TOOLTIP
        addButton->setText(QApplication::translate("QgsTableWidgetUiBase", "\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        removeButton->setToolTip(QApplication::translate("QgsTableWidgetUiBase", "Remove entry", nullptr));
#endif // QT_NO_TOOLTIP
        removeButton->setText(QApplication::translate("QgsTableWidgetUiBase", "\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsTableWidgetUiBase: public Ui_QgsTableWidgetUiBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTABLEWIDGETUIBASE_H
