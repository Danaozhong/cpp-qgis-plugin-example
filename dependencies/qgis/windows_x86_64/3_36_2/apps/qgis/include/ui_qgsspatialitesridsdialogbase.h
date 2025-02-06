/********************************************************************************
** Form generated from reading UI file 'qgsspatialitesridsdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSPATIALITESRIDSDIALOGBASE_H
#define UI_QGSSPATIALITESRIDSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsSpatialiteSridsDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QTreeWidget *twSrids;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leSearch;
    QPushButton *pbnFilter;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *radioButtonSrid;
    QRadioButton *radioButtonName;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsSpatialiteSridsDialogBase)
    {
        if (QgsSpatialiteSridsDialogBase->objectName().isEmpty())
            QgsSpatialiteSridsDialogBase->setObjectName(QString::fromUtf8("QgsSpatialiteSridsDialogBase"));
        QgsSpatialiteSridsDialogBase->resize(601, 332);
        gridLayout_2 = new QGridLayout(QgsSpatialiteSridsDialogBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        twSrids = new QTreeWidget(QgsSpatialiteSridsDialogBase);
        twSrids->setObjectName(QString::fromUtf8("twSrids"));
        twSrids->setRootIsDecorated(false);
        twSrids->setSortingEnabled(true);
        twSrids->setColumnCount(3);

        gridLayout_2->addWidget(twSrids, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(QgsSpatialiteSridsDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        leSearch = new QLineEdit(QgsSpatialiteSridsDialogBase);
        leSearch->setObjectName(QString::fromUtf8("leSearch"));

        horizontalLayout->addWidget(leSearch);

        pbnFilter = new QPushButton(QgsSpatialiteSridsDialogBase);
        pbnFilter->setObjectName(QString::fromUtf8("pbnFilter"));

        horizontalLayout->addWidget(pbnFilter);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        groupBox = new QGroupBox(QgsSpatialiteSridsDialogBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(160, 26));
        groupBox->setFlat(true);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        radioButtonSrid = new QRadioButton(groupBox);
        radioButtonSrid->setObjectName(QString::fromUtf8("radioButtonSrid"));
        radioButtonSrid->setChecked(false);

        gridLayout->addWidget(radioButtonSrid, 0, 0, 1, 1);

        radioButtonName = new QRadioButton(groupBox);
        radioButtonName->setObjectName(QString::fromUtf8("radioButtonName"));
        radioButtonName->setChecked(true);

        gridLayout->addWidget(radioButtonName, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsSpatialiteSridsDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 2);

        QWidget::setTabOrder(twSrids, leSearch);
        QWidget::setTabOrder(leSearch, pbnFilter);
        QWidget::setTabOrder(pbnFilter, radioButtonSrid);
        QWidget::setTabOrder(radioButtonSrid, radioButtonName);
        QWidget::setTabOrder(radioButtonName, buttonBox);

        retranslateUi(QgsSpatialiteSridsDialogBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsSpatialiteSridsDialogBase, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), QgsSpatialiteSridsDialogBase, SLOT(accept()));

        QMetaObject::connectSlotsByName(QgsSpatialiteSridsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsSpatialiteSridsDialogBase)
    {
        QgsSpatialiteSridsDialogBase->setWindowTitle(QCoreApplication::translate("QgsSpatialiteSridsDialogBase", "Select a SpatiaLite Spatial Reference System", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = twSrids->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("QgsSpatialiteSridsDialogBase", "Reference Name", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("QgsSpatialiteSridsDialogBase", "Authority", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("QgsSpatialiteSridsDialogBase", "SRID", nullptr));
        label->setText(QCoreApplication::translate("QgsSpatialiteSridsDialogBase", "Search", nullptr));
        pbnFilter->setText(QCoreApplication::translate("QgsSpatialiteSridsDialogBase", "Filter", nullptr));
        radioButtonSrid->setText(QCoreApplication::translate("QgsSpatialiteSridsDialogBase", "SRID", nullptr));
        radioButtonName->setText(QCoreApplication::translate("QgsSpatialiteSridsDialogBase", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsSpatialiteSridsDialogBase: public Ui_QgsSpatialiteSridsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSPATIALITESRIDSDIALOGBASE_H
