/********************************************************************************
** Form generated from reading UI file 'qgsannotationpointtextwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSANNOTATIONPOINTTEXTWIDGETBASE_H
#define UI_QGSANNOTATIONPOINTTEXTWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgsannotationitemcommonpropertieswidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAnnotationPointTextWidgetBase
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *mTextEdit;
    QToolButton *mInsertExpressionButton;
    QgsAnnotationItemCommonPropertiesWidget *mPropertiesWidget;
    QWidget *mTextFormatWidgetContainer;

    void setupUi(QWidget *QgsAnnotationPointTextWidgetBase)
    {
        if (QgsAnnotationPointTextWidgetBase->objectName().isEmpty())
            QgsAnnotationPointTextWidgetBase->setObjectName(QString::fromUtf8("QgsAnnotationPointTextWidgetBase"));
        QgsAnnotationPointTextWidgetBase->resize(321, 325);
        gridLayout = new QGridLayout(QgsAnnotationPointTextWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mTextEdit = new QPlainTextEdit(QgsAnnotationPointTextWidgetBase);
        mTextEdit->setObjectName(QString::fromUtf8("mTextEdit"));
        mTextEdit->setMinimumSize(QSize(0, 150));

        gridLayout->addWidget(mTextEdit, 0, 0, 1, 1);

        mInsertExpressionButton = new QToolButton(QgsAnnotationPointTextWidgetBase);
        mInsertExpressionButton->setObjectName(QString::fromUtf8("mInsertExpressionButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mInsertExpressionButton->sizePolicy().hasHeightForWidth());
        mInsertExpressionButton->setSizePolicy(sizePolicy);
        mInsertExpressionButton->setPopupMode(QToolButton::MenuButtonPopup);
        mInsertExpressionButton->setToolButtonStyle(Qt::ToolButtonTextOnly);
        mInsertExpressionButton->setArrowType(Qt::DownArrow);

        gridLayout->addWidget(mInsertExpressionButton, 1, 0, 1, 1);

        mPropertiesWidget = new QgsAnnotationItemCommonPropertiesWidget(QgsAnnotationPointTextWidgetBase);
        mPropertiesWidget->setObjectName(QString::fromUtf8("mPropertiesWidget"));

        gridLayout->addWidget(mPropertiesWidget, 3, 0, 1, 1);

        mTextFormatWidgetContainer = new QWidget(QgsAnnotationPointTextWidgetBase);
        mTextFormatWidgetContainer->setObjectName(QString::fromUtf8("mTextFormatWidgetContainer"));

        gridLayout->addWidget(mTextFormatWidgetContainer, 2, 0, 1, 1);


        retranslateUi(QgsAnnotationPointTextWidgetBase);

        QMetaObject::connectSlotsByName(QgsAnnotationPointTextWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsAnnotationPointTextWidgetBase)
    {
        QgsAnnotationPointTextWidgetBase->setWindowTitle(QCoreApplication::translate("QgsAnnotationPointTextWidgetBase", "Point Text Annotation", nullptr));
        mInsertExpressionButton->setText(QCoreApplication::translate("QgsAnnotationPointTextWidgetBase", "Insert/Edit Expression\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAnnotationPointTextWidgetBase: public Ui_QgsAnnotationPointTextWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSANNOTATIONPOINTTEXTWIDGETBASE_H
