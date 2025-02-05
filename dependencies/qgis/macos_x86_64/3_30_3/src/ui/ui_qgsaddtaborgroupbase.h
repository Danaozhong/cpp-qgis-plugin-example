/********************************************************************************
** Form generated from reading UI file 'qgsaddtaborgroupbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSADDTABORGROUPBASE_H
#define UI_QGSADDTABORGROUPBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAddTabOrGroupBase
{
public:
    QGridLayout *gridLayout_0;
    QLabel *label;
    QLineEdit *mName;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QRadioButton *mTabButton;
    QRadioButton *mGroupButton;
    QComboBox *mTabList;
    QgsSpinBox *mColumnCountSpinBox;
    QDialogButtonBox *buttonBox;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *QgsAddTabOrGroupBase)
    {
        if (QgsAddTabOrGroupBase->objectName().isEmpty())
            QgsAddTabOrGroupBase->setObjectName(QString::fromUtf8("QgsAddTabOrGroupBase"));
        QgsAddTabOrGroupBase->resize(447, 238);
        QgsAddTabOrGroupBase->setWindowTitle(QString::fromUtf8("Dialog"));
        gridLayout_0 = new QGridLayout(QgsAddTabOrGroupBase);
        gridLayout_0->setObjectName(QString::fromUtf8("gridLayout_0"));
        label = new QLabel(QgsAddTabOrGroupBase);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_0->addWidget(label, 0, 0, 1, 1);

        mName = new QLineEdit(QgsAddTabOrGroupBase);
        mName->setObjectName(QString::fromUtf8("mName"));

        gridLayout_0->addWidget(mName, 0, 1, 1, 1);

        label_3 = new QLabel(QgsAddTabOrGroupBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_0->addWidget(label_3, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_0->addItem(verticalSpacer, 3, 0, 1, 1);

        groupBox = new QGroupBox(QgsAddTabOrGroupBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mTabButton = new QRadioButton(groupBox);
        buttonGroup = new QButtonGroup(QgsAddTabOrGroupBase);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(mTabButton);
        mTabButton->setObjectName(QString::fromUtf8("mTabButton"));
        mTabButton->setChecked(true);

        gridLayout_2->addWidget(mTabButton, 0, 0, 1, 1);

        mGroupButton = new QRadioButton(groupBox);
        buttonGroup->addButton(mGroupButton);
        mGroupButton->setObjectName(QString::fromUtf8("mGroupButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mGroupButton->sizePolicy().hasHeightForWidth());
        mGroupButton->setSizePolicy(sizePolicy1);
        mGroupButton->setChecked(false);

        gridLayout_2->addWidget(mGroupButton, 1, 0, 1, 1);

        mTabList = new QComboBox(groupBox);
        mTabList->setObjectName(QString::fromUtf8("mTabList"));
        mTabList->setEnabled(true);

        gridLayout_2->addWidget(mTabList, 1, 1, 1, 1);


        gridLayout_0->addWidget(groupBox, 1, 0, 1, 2);

        mColumnCountSpinBox = new QgsSpinBox(QgsAddTabOrGroupBase);
        mColumnCountSpinBox->setObjectName(QString::fromUtf8("mColumnCountSpinBox"));
        mColumnCountSpinBox->setMinimum(1);
        mColumnCountSpinBox->setMaximum(5);

        gridLayout_0->addWidget(mColumnCountSpinBox, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsAddTabOrGroupBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_0->addWidget(buttonBox, 4, 0, 1, 2);

        QWidget::setTabOrder(mName, mTabButton);
        QWidget::setTabOrder(mTabButton, mGroupButton);
        QWidget::setTabOrder(mGroupButton, mTabList);
        QWidget::setTabOrder(mTabList, mColumnCountSpinBox);

        retranslateUi(QgsAddTabOrGroupBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsAddTabOrGroupBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsAddTabOrGroupBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsAddTabOrGroupBase);
    } // setupUi

    void retranslateUi(QDialog *QgsAddTabOrGroupBase)
    {
        label->setText(QCoreApplication::translate("QgsAddTabOrGroupBase", "Label", nullptr));
        label_3->setText(QCoreApplication::translate("QgsAddTabOrGroupBase", "Number of columns", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsAddTabOrGroupBase", "Container Type", nullptr));
        mTabButton->setText(QCoreApplication::translate("QgsAddTabOrGroupBase", "Tab", nullptr));
        mGroupButton->setText(QCoreApplication::translate("QgsAddTabOrGroupBase", "Group box in container", nullptr));
        (void)QgsAddTabOrGroupBase;
    } // retranslateUi

};

namespace Ui {
    class QgsAddTabOrGroupBase: public Ui_QgsAddTabOrGroupBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSADDTABORGROUPBASE_H
