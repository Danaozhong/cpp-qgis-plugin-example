/********************************************************************************
** Form generated from reading UI file 'qgsattributewidgeteditgroupbox.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTEWIDGETEDITGROUPBOX_H
#define UI_QGSATTRIBUTEWIDGETEDITGROUPBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QVBoxLayout>
#include "qgscollapsiblegroupbox.h"
#include "qgsformlabelformatwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeWidgetEditGroupBox
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *mShowLabelCheckBox;
    QgsFormLabelFormatWidget *mFormLabelFormatWidget;
    QgsCollapsibleGroupBox *mWidgetSpecificConfigGroupBox;

    void setupUi(QgsCollapsibleGroupBox *QgsAttributeWidgetEditGroupBox)
    {
        if (QgsAttributeWidgetEditGroupBox->objectName().isEmpty())
            QgsAttributeWidgetEditGroupBox->setObjectName(QString::fromUtf8("QgsAttributeWidgetEditGroupBox"));
        QgsAttributeWidgetEditGroupBox->resize(283, 242);
        verticalLayout = new QVBoxLayout(QgsAttributeWidgetEditGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mShowLabelCheckBox = new QCheckBox(QgsAttributeWidgetEditGroupBox);
        mShowLabelCheckBox->setObjectName(QString::fromUtf8("mShowLabelCheckBox"));

        verticalLayout->addWidget(mShowLabelCheckBox);

        mFormLabelFormatWidget = new QgsFormLabelFormatWidget(QgsAttributeWidgetEditGroupBox);
        mFormLabelFormatWidget->setObjectName(QString::fromUtf8("mFormLabelFormatWidget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFormLabelFormatWidget->sizePolicy().hasHeightForWidth());
        mFormLabelFormatWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(mFormLabelFormatWidget);

        mWidgetSpecificConfigGroupBox = new QgsCollapsibleGroupBox(QgsAttributeWidgetEditGroupBox);
        mWidgetSpecificConfigGroupBox->setObjectName(QString::fromUtf8("mWidgetSpecificConfigGroupBox"));

        verticalLayout->addWidget(mWidgetSpecificConfigGroupBox);


        retranslateUi(QgsAttributeWidgetEditGroupBox);

        QMetaObject::connectSlotsByName(QgsAttributeWidgetEditGroupBox);
    } // setupUi

    void retranslateUi(QgsCollapsibleGroupBox *QgsAttributeWidgetEditGroupBox)
    {
        QgsAttributeWidgetEditGroupBox->setWindowTitle(QCoreApplication::translate("QgsAttributeWidgetEditGroupBox", "QgsCollapsibleGroupBox", nullptr));
        QgsAttributeWidgetEditGroupBox->setTitle(QCoreApplication::translate("QgsAttributeWidgetEditGroupBox", "Widget Display", nullptr));
        mShowLabelCheckBox->setText(QCoreApplication::translate("QgsAttributeWidgetEditGroupBox", "Show label", nullptr));
        mWidgetSpecificConfigGroupBox->setTitle(QCoreApplication::translate("QgsAttributeWidgetEditGroupBox", "GroupBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeWidgetEditGroupBox: public Ui_QgsAttributeWidgetEditGroupBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTEWIDGETEDITGROUPBOX_H
