/********************************************************************************
** Form generated from reading UI file 'qgsattributesformproperties.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTESFORMPROPERTIES_H
#define UI_QGSATTRIBUTESFORMPROPERTIES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAttributesFormProperties
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *mEditorLayoutComboBox;
    QToolButton *mTbInitCode;
    QComboBox *mFormSuppressCmbBx;
    QWidget *mUiFileFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *mEditFormLineEdit;
    QToolButton *pbnSelectEditForm;
    QSplitter *splitter;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QWidget *mFormLayoutWidget;
    QSpacerItem *verticalSpacer;
    QWidget *mAvailableWidgetsWidget;
    QToolButton *mRemoveTabOrGroupButton;
    QToolButton *mAddTabOrGroupButton;
    QToolButton *mInvertSelectionButton;
    QgsScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_5;
    QGridLayout *gridLayout_4;
    QWidget *mAttributeTypeFrame;
    QGridLayout *gridLayout_2;

    void setupUi(QWidget *QgsAttributesFormProperties)
    {
        if (QgsAttributesFormProperties->objectName().isEmpty())
            QgsAttributesFormProperties->setObjectName(QString::fromUtf8("QgsAttributesFormProperties"));
        QgsAttributesFormProperties->resize(1117, 556);
        QgsAttributesFormProperties->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsAttributesFormProperties);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(QgsAttributesFormProperties);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mEditorLayoutComboBox = new QComboBox(widget_2);
        mEditorLayoutComboBox->setObjectName(QString::fromUtf8("mEditorLayoutComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mEditorLayoutComboBox->sizePolicy().hasHeightForWidth());
        mEditorLayoutComboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mEditorLayoutComboBox);

        mTbInitCode = new QToolButton(widget_2);
        mTbInitCode->setObjectName(QString::fromUtf8("mTbInitCode"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/processingScript.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTbInitCode->setIcon(icon);

        horizontalLayout->addWidget(mTbInitCode);

        mFormSuppressCmbBx = new QComboBox(widget_2);
        mFormSuppressCmbBx->setObjectName(QString::fromUtf8("mFormSuppressCmbBx"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mFormSuppressCmbBx->sizePolicy().hasHeightForWidth());
        mFormSuppressCmbBx->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(mFormSuppressCmbBx);


        gridLayout->addWidget(widget_2, 0, 0, 1, 1);

        mUiFileFrame = new QWidget(QgsAttributesFormProperties);
        mUiFileFrame->setObjectName(QString::fromUtf8("mUiFileFrame"));
        horizontalLayout_2 = new QHBoxLayout(mUiFileFrame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(mUiFileFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        mEditFormLineEdit = new QLineEdit(mUiFileFrame);
        mEditFormLineEdit->setObjectName(QString::fromUtf8("mEditFormLineEdit"));

        horizontalLayout_2->addWidget(mEditFormLineEdit);

        pbnSelectEditForm = new QToolButton(mUiFileFrame);
        pbnSelectEditForm->setObjectName(QString::fromUtf8("pbnSelectEditForm"));

        horizontalLayout_2->addWidget(pbnSelectEditForm);


        gridLayout->addWidget(mUiFileFrame, 1, 0, 1, 1);

        splitter = new QSplitter(QgsAttributesFormProperties);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mFormLayoutWidget = new QWidget(widget);
        mFormLayoutWidget->setObjectName(QString::fromUtf8("mFormLayoutWidget"));
        mFormLayoutWidget->setMinimumSize(QSize(200, 0));

        gridLayout_3->addWidget(mFormLayoutWidget, 0, 1, 7, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 4, 2, 1, 1);

        mAvailableWidgetsWidget = new QWidget(widget);
        mAvailableWidgetsWidget->setObjectName(QString::fromUtf8("mAvailableWidgetsWidget"));
        mAvailableWidgetsWidget->setMinimumSize(QSize(200, 0));

        gridLayout_3->addWidget(mAvailableWidgetsWidget, 0, 0, 7, 1);

        mRemoveTabOrGroupButton = new QToolButton(widget);
        mRemoveTabOrGroupButton->setObjectName(QString::fromUtf8("mRemoveTabOrGroupButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveTabOrGroupButton->setIcon(icon1);

        gridLayout_3->addWidget(mRemoveTabOrGroupButton, 2, 2, 1, 1);

        mAddTabOrGroupButton = new QToolButton(widget);
        mAddTabOrGroupButton->setObjectName(QString::fromUtf8("mAddTabOrGroupButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddTabOrGroupButton->setIcon(icon2);

        gridLayout_3->addWidget(mAddTabOrGroupButton, 0, 2, 1, 1);

        mInvertSelectionButton = new QToolButton(widget);
        mInvertSelectionButton->setObjectName(QString::fromUtf8("mInvertSelectionButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionInvertSelection.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mInvertSelectionButton->setIcon(icon3);

        gridLayout_3->addWidget(mInvertSelectionButton, 3, 2, 1, 1);

        splitter->addWidget(widget);
        scrollArea_2 = new QgsScrollArea(splitter);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setMinimumSize(QSize(600, 0));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 598, 492));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents_5);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mAttributeTypeFrame = new QWidget(scrollAreaWidgetContents_5);
        mAttributeTypeFrame->setObjectName(QString::fromUtf8("mAttributeTypeFrame"));
        gridLayout_2 = new QGridLayout(mAttributeTypeFrame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));

        gridLayout_4->addWidget(mAttributeTypeFrame, 0, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_5);
        splitter->addWidget(scrollArea_2);

        gridLayout->addWidget(splitter, 2, 0, 1, 1);

        gridLayout->setRowStretch(2, 1);
        QWidget::setTabOrder(mEditorLayoutComboBox, mTbInitCode);
        QWidget::setTabOrder(mTbInitCode, mFormSuppressCmbBx);
        QWidget::setTabOrder(mFormSuppressCmbBx, mEditFormLineEdit);
        QWidget::setTabOrder(mEditFormLineEdit, pbnSelectEditForm);
        QWidget::setTabOrder(pbnSelectEditForm, mAddTabOrGroupButton);
        QWidget::setTabOrder(mAddTabOrGroupButton, mRemoveTabOrGroupButton);
        QWidget::setTabOrder(mRemoveTabOrGroupButton, mInvertSelectionButton);
        QWidget::setTabOrder(mInvertSelectionButton, scrollArea_2);

        retranslateUi(QgsAttributesFormProperties);

        QMetaObject::connectSlotsByName(QgsAttributesFormProperties);
    } // setupUi

    void retranslateUi(QWidget *QgsAttributesFormProperties)
    {
#if QT_CONFIG(tooltip)
        mEditorLayoutComboBox->setToolTip(QCoreApplication::translate("QgsAttributesFormProperties", "Select attribute layout editor", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mTbInitCode->setToolTip(QCoreApplication::translate("QgsAttributesFormProperties", "QGIS forms can have a Python function that is called when the form is opened.\n"
"Use this function to add extra logic to your forms.", nullptr));
#endif // QT_CONFIG(tooltip)
        mTbInitCode->setText(QCoreApplication::translate("QgsAttributesFormProperties", "\342\200\246", nullptr));
        label_2->setText(QCoreApplication::translate("QgsAttributesFormProperties", "Edit UI", nullptr));
        pbnSelectEditForm->setText(QCoreApplication::translate("QgsAttributesFormProperties", "\342\200\246", nullptr));
        mRemoveTabOrGroupButton->setText(QCoreApplication::translate("QgsAttributesFormProperties", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mRemoveTabOrGroupButton->setToolTip(QCoreApplication::translate("QgsAttributesFormProperties", "Remove selected item(s) from the form layout", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddTabOrGroupButton->setText(QCoreApplication::translate("QgsAttributesFormProperties", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mAddTabOrGroupButton->setToolTip(QCoreApplication::translate("QgsAttributesFormProperties", "Add a new tab or group to the form layout", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mInvertSelectionButton->setToolTip(QCoreApplication::translate("QgsAttributesFormProperties", "Invert selection", nullptr));
#endif // QT_CONFIG(tooltip)
        mInvertSelectionButton->setText(QCoreApplication::translate("QgsAttributesFormProperties", "Invert selection", nullptr));
        (void)QgsAttributesFormProperties;
    } // retranslateUi

};

namespace Ui {
    class QgsAttributesFormProperties: public Ui_QgsAttributesFormProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTESFORMPROPERTIES_H
