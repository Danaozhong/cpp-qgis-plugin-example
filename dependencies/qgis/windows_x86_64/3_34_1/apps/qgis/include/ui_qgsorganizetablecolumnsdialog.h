/********************************************************************************
** Form generated from reading UI file 'qgsorganizetablecolumnsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSORGANIZETABLECOLUMNSDIALOG_H
#define UI_QGSORGANIZETABLECOLUMNSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_QgsOrganizeTableColumnsDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QPushButton *mShowAllButton;
    QListWidget *mFieldsList;
    QPushButton *mHideAllButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *QgsOrganizeTableColumnsDialog)
    {
        if (QgsOrganizeTableColumnsDialog->objectName().isEmpty())
            QgsOrganizeTableColumnsDialog->setObjectName(QString::fromUtf8("QgsOrganizeTableColumnsDialog"));
        QgsOrganizeTableColumnsDialog->resize(393, 357);
        gridLayout = new QGridLayout(QgsOrganizeTableColumnsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(QgsOrganizeTableColumnsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 3, 1, 1);

        mShowAllButton = new QPushButton(QgsOrganizeTableColumnsDialog);
        mShowAllButton->setObjectName(QString::fromUtf8("mShowAllButton"));

        gridLayout->addWidget(mShowAllButton, 2, 0, 1, 1);

        mFieldsList = new QListWidget(QgsOrganizeTableColumnsDialog);
        mFieldsList->setObjectName(QString::fromUtf8("mFieldsList"));
        mFieldsList->setDragDropMode(QAbstractItemView::DragDrop);
        mFieldsList->setDefaultDropAction(Qt::MoveAction);

        gridLayout->addWidget(mFieldsList, 0, 0, 1, 4);

        mHideAllButton = new QPushButton(QgsOrganizeTableColumnsDialog);
        mHideAllButton->setObjectName(QString::fromUtf8("mHideAllButton"));

        gridLayout->addWidget(mHideAllButton, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        QWidget::setTabOrder(mFieldsList, mShowAllButton);
        QWidget::setTabOrder(mShowAllButton, mHideAllButton);

        retranslateUi(QgsOrganizeTableColumnsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsOrganizeTableColumnsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsOrganizeTableColumnsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsOrganizeTableColumnsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsOrganizeTableColumnsDialog)
    {
        QgsOrganizeTableColumnsDialog->setWindowTitle(QCoreApplication::translate("QgsOrganizeTableColumnsDialog", "Organize Table columns", nullptr));
        mShowAllButton->setText(QCoreApplication::translate("QgsOrganizeTableColumnsDialog", "Select All", nullptr));
        mHideAllButton->setText(QCoreApplication::translate("QgsOrganizeTableColumnsDialog", "Deselect All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsOrganizeTableColumnsDialog: public Ui_QgsOrganizeTableColumnsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSORGANIZETABLECOLUMNSDIALOG_H
