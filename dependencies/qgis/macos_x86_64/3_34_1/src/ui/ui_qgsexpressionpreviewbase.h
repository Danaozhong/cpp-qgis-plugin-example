/********************************************************************************
** Form generated from reading UI file 'qgsexpressionpreviewbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEXPRESSIONPREVIEWBASE_H
#define UI_QGSEXPRESSIONPREVIEWBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgsfeaturepickerwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsExpressionPreviewWidgetBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *mPreviewLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QgsFeaturePickerWidget *mFeaturePickerWidget;

    void setupUi(QWidget *QgsExpressionPreviewWidgetBase)
    {
        if (QgsExpressionPreviewWidgetBase->objectName().isEmpty())
            QgsExpressionPreviewWidgetBase->setObjectName(QString::fromUtf8("QgsExpressionPreviewWidgetBase"));
        QgsExpressionPreviewWidgetBase->resize(400, 67);
        gridLayout = new QGridLayout(QgsExpressionPreviewWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(QgsExpressionPreviewWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        mPreviewLabel = new QLabel(QgsExpressionPreviewWidgetBase);
        mPreviewLabel->setObjectName(QString::fromUtf8("mPreviewLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mPreviewLabel->sizePolicy().hasHeightForWidth());
        mPreviewLabel->setSizePolicy(sizePolicy1);
        mPreviewLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mPreviewLabel->setWordWrap(true);
        mPreviewLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(mPreviewLabel, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(QgsExpressionPreviewWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_2);

        mFeaturePickerWidget = new QgsFeaturePickerWidget(QgsExpressionPreviewWidgetBase);
        mFeaturePickerWidget->setObjectName(QString::fromUtf8("mFeaturePickerWidget"));

        horizontalLayout->addWidget(mFeaturePickerWidget);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);


        retranslateUi(QgsExpressionPreviewWidgetBase);

        QMetaObject::connectSlotsByName(QgsExpressionPreviewWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsExpressionPreviewWidgetBase)
    {
        QgsExpressionPreviewWidgetBase->setWindowTitle(QCoreApplication::translate("QgsExpressionPreviewWidgetBase", "Expression Preview", nullptr));
        label->setText(QCoreApplication::translate("QgsExpressionPreviewWidgetBase", "Preview:", nullptr));
        mPreviewLabel->setText(QCoreApplication::translate("QgsExpressionPreviewWidgetBase", "TextLabel", nullptr));
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("QgsExpressionPreviewWidgetBase", "Select the feature to use for the output preview", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("QgsExpressionPreviewWidgetBase", "Feature", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsExpressionPreviewWidgetBase: public Ui_QgsExpressionPreviewWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEXPRESSIONPREVIEWBASE_H
