/********************************************************************************
** Form generated from reading UI file 'qgstilesourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTILESOURCESELECTBASE_H
#define UI_QGSTILESOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsTileSourceSelectBase
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QGroupBox *mConnectionsGroupBox;
    QGridLayout *gridLayout_2;
    QSpacerItem *spacerItem;
    QComboBox *cmbConnections;
    QToolButton *btnEdit;
    QToolButton *btnDelete;
    QToolButton *btnLoad;
    QToolButton *btnSave;
    QToolButton *btnNew;
    QGroupBox *mConnectionDetailsGroupBox;
    QVBoxLayout *verticalLayout;
    QWidget *mSourceContainerWidget;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *QgsTileSourceSelectBase)
    {
        if (QgsTileSourceSelectBase->objectName().isEmpty())
            QgsTileSourceSelectBase->setObjectName(QString::fromUtf8("QgsTileSourceSelectBase"));
        QgsTileSourceSelectBase->resize(558, 259);
        gridLayout = new QGridLayout(QgsTileSourceSelectBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(QgsTileSourceSelectBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Help);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);

        mConnectionsGroupBox = new QGroupBox(QgsTileSourceSelectBase);
        mConnectionsGroupBox->setObjectName(QString::fromUtf8("mConnectionsGroupBox"));
        gridLayout_2 = new QGridLayout(mConnectionsGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        spacerItem = new QSpacerItem(171, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(spacerItem, 1, 4, 1, 1);

        cmbConnections = new QComboBox(mConnectionsGroupBox);
        cmbConnections->setObjectName(QString::fromUtf8("cmbConnections"));

        gridLayout_2->addWidget(cmbConnections, 0, 0, 1, 7);

        btnEdit = new QToolButton(mConnectionsGroupBox);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));
        btnEdit->setEnabled(false);

        gridLayout_2->addWidget(btnEdit, 1, 2, 1, 1);

        btnDelete = new QToolButton(mConnectionsGroupBox);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        btnDelete->setEnabled(false);

        gridLayout_2->addWidget(btnDelete, 1, 3, 1, 1);

        btnLoad = new QToolButton(mConnectionsGroupBox);
        btnLoad->setObjectName(QString::fromUtf8("btnLoad"));

        gridLayout_2->addWidget(btnLoad, 1, 5, 1, 1);

        btnSave = new QToolButton(mConnectionsGroupBox);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        gridLayout_2->addWidget(btnSave, 1, 6, 1, 1);

        btnNew = new QToolButton(mConnectionsGroupBox);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));

        gridLayout_2->addWidget(btnNew, 1, 0, 1, 2);


        gridLayout->addWidget(mConnectionsGroupBox, 0, 0, 1, 1);

        mConnectionDetailsGroupBox = new QGroupBox(QgsTileSourceSelectBase);
        mConnectionDetailsGroupBox->setObjectName(QString::fromUtf8("mConnectionDetailsGroupBox"));
        verticalLayout = new QVBoxLayout(mConnectionDetailsGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mSourceContainerWidget = new QWidget(mConnectionDetailsGroupBox);
        mSourceContainerWidget->setObjectName(QString::fromUtf8("mSourceContainerWidget"));

        verticalLayout->addWidget(mSourceContainerWidget);


        gridLayout->addWidget(mConnectionDetailsGroupBox, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        QWidget::setTabOrder(cmbConnections, btnNew);
        QWidget::setTabOrder(btnNew, btnEdit);
        QWidget::setTabOrder(btnEdit, btnDelete);
        QWidget::setTabOrder(btnDelete, btnLoad);
        QWidget::setTabOrder(btnLoad, btnSave);

        retranslateUi(QgsTileSourceSelectBase);

        QMetaObject::connectSlotsByName(QgsTileSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsTileSourceSelectBase)
    {
        mConnectionsGroupBox->setTitle(QCoreApplication::translate("QgsTileSourceSelectBase", "Connections", nullptr));
#if QT_CONFIG(tooltip)
        btnEdit->setToolTip(QCoreApplication::translate("QgsTileSourceSelectBase", "Edit selected service connection", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEdit->setText(QCoreApplication::translate("QgsTileSourceSelectBase", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        btnDelete->setToolTip(QCoreApplication::translate("QgsTileSourceSelectBase", "Remove connection to selected service", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDelete->setText(QCoreApplication::translate("QgsTileSourceSelectBase", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        btnLoad->setToolTip(QCoreApplication::translate("QgsTileSourceSelectBase", "Load connections from file", nullptr));
#endif // QT_CONFIG(tooltip)
        btnLoad->setText(QCoreApplication::translate("QgsTileSourceSelectBase", "Load", nullptr));
#if QT_CONFIG(tooltip)
        btnSave->setToolTip(QCoreApplication::translate("QgsTileSourceSelectBase", "Save connections to file", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSave->setText(QCoreApplication::translate("QgsTileSourceSelectBase", "Save", nullptr));
#if QT_CONFIG(tooltip)
        btnNew->setToolTip(QCoreApplication::translate("QgsTileSourceSelectBase", "Create a new service connection", nullptr));
#endif // QT_CONFIG(tooltip)
        btnNew->setText(QCoreApplication::translate("QgsTileSourceSelectBase", "&New", nullptr));
        mConnectionDetailsGroupBox->setTitle(QCoreApplication::translate("QgsTileSourceSelectBase", "Connection Details", nullptr));
        (void)QgsTileSourceSelectBase;
    } // retranslateUi

};

namespace Ui {
    class QgsTileSourceSelectBase: public Ui_QgsTileSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTILESOURCESELECTBASE_H
