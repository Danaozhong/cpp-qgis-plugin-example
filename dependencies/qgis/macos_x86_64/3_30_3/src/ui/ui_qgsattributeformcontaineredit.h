/********************************************************************************
** Form generated from reading UI file 'qgsattributeformcontaineredit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTEFORMCONTAINEREDIT_H
#define UI_QGSATTRIBUTEFORMCONTAINEREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsfieldexpressionwidget.h"
#include "qgsformlabelformatwidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeFormContainerEdit
{
public:
    QGridLayout *gridLayout;
    QgsCollapsibleGroupBox *mControlVisibilityGroupBox;
    QGridLayout *gridLayout_2;
    QgsFieldExpressionWidget *mVisibilityExpressionWidget;
    QgsCollapsibleGroupBox *mGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QgsColorButton *mBackgroundColorButton;
    QgsFormLabelFormatWidget *mFormLabelFormatWidget;
    QSpacerItem *verticalSpacer;
    QCheckBox *mShowLabelCheckBox;
    QLabel *label_2;
    QgsSpinBox *mColumnCountSpinBox;
    QCheckBox *mShowAsGroupBox;
    QLineEdit *mTitleLineEdit;
    QLabel *label;
    QCheckBox *mCollapsedCheckBox;
    QgsCollapsibleGroupBox *mControlCollapsedGroupBox;
    QGridLayout *gridLayout_4;
    QgsFieldExpressionWidget *mCollapsedExpressionWidget;

    void setupUi(QWidget *QgsAttributeFormContainerEdit)
    {
        if (QgsAttributeFormContainerEdit->objectName().isEmpty())
            QgsAttributeFormContainerEdit->setObjectName(QString::fromUtf8("QgsAttributeFormContainerEdit"));
        QgsAttributeFormContainerEdit->resize(401, 360);
        QgsAttributeFormContainerEdit->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsAttributeFormContainerEdit);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mControlVisibilityGroupBox = new QgsCollapsibleGroupBox(QgsAttributeFormContainerEdit);
        mControlVisibilityGroupBox->setObjectName(QString::fromUtf8("mControlVisibilityGroupBox"));
        mControlVisibilityGroupBox->setCheckable(true);
        gridLayout_2 = new QGridLayout(mControlVisibilityGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mVisibilityExpressionWidget = new QgsFieldExpressionWidget(mControlVisibilityGroupBox);
        mVisibilityExpressionWidget->setObjectName(QString::fromUtf8("mVisibilityExpressionWidget"));

        gridLayout_2->addWidget(mVisibilityExpressionWidget, 0, 0, 1, 1);


        gridLayout->addWidget(mControlVisibilityGroupBox, 4, 0, 1, 2);

        mGroupBox = new QgsCollapsibleGroupBox(QgsAttributeFormContainerEdit);
        mGroupBox->setObjectName(QString::fromUtf8("mGroupBox"));
        gridLayout_3 = new QGridLayout(mGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(mGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        mBackgroundColorButton = new QgsColorButton(mGroupBox);
        mBackgroundColorButton->setObjectName(QString::fromUtf8("mBackgroundColorButton"));

        gridLayout_3->addWidget(mBackgroundColorButton, 1, 1, 1, 1);

        mFormLabelFormatWidget = new QgsFormLabelFormatWidget(mGroupBox);
        mFormLabelFormatWidget->setObjectName(QString::fromUtf8("mFormLabelFormatWidget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFormLabelFormatWidget->sizePolicy().hasHeightForWidth());
        mFormLabelFormatWidget->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mFormLabelFormatWidget, 2, 0, 1, 2);


        gridLayout->addWidget(mGroupBox, 9, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 0, 1, 1);

        mShowLabelCheckBox = new QCheckBox(QgsAttributeFormContainerEdit);
        mShowLabelCheckBox->setObjectName(QString::fromUtf8("mShowLabelCheckBox"));

        gridLayout->addWidget(mShowLabelCheckBox, 0, 0, 1, 2);

        label_2 = new QLabel(QgsAttributeFormContainerEdit);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        mColumnCountSpinBox = new QgsSpinBox(QgsAttributeFormContainerEdit);
        mColumnCountSpinBox->setObjectName(QString::fromUtf8("mColumnCountSpinBox"));
        mColumnCountSpinBox->setMinimum(1);
        mColumnCountSpinBox->setMaximum(10);

        gridLayout->addWidget(mColumnCountSpinBox, 3, 1, 1, 1);

        mShowAsGroupBox = new QCheckBox(QgsAttributeFormContainerEdit);
        mShowAsGroupBox->setObjectName(QString::fromUtf8("mShowAsGroupBox"));

        gridLayout->addWidget(mShowAsGroupBox, 5, 0, 1, 1);

        mTitleLineEdit = new QLineEdit(QgsAttributeFormContainerEdit);
        mTitleLineEdit->setObjectName(QString::fromUtf8("mTitleLineEdit"));

        gridLayout->addWidget(mTitleLineEdit, 2, 1, 1, 1);

        label = new QLabel(QgsAttributeFormContainerEdit);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        mCollapsedCheckBox = new QCheckBox(QgsAttributeFormContainerEdit);
        mCollapsedCheckBox->setObjectName(QString::fromUtf8("mCollapsedCheckBox"));

        gridLayout->addWidget(mCollapsedCheckBox, 6, 0, 1, 1);

        mControlCollapsedGroupBox = new QgsCollapsibleGroupBox(QgsAttributeFormContainerEdit);
        mControlCollapsedGroupBox->setObjectName(QString::fromUtf8("mControlCollapsedGroupBox"));
        mControlCollapsedGroupBox->setCheckable(true);
        gridLayout_4 = new QGridLayout(mControlCollapsedGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mCollapsedExpressionWidget = new QgsFieldExpressionWidget(mControlCollapsedGroupBox);
        mCollapsedExpressionWidget->setObjectName(QString::fromUtf8("mCollapsedExpressionWidget"));

        gridLayout_4->addWidget(mCollapsedExpressionWidget, 0, 0, 1, 1);


        gridLayout->addWidget(mControlCollapsedGroupBox, 7, 0, 1, 2);

        QWidget::setTabOrder(mShowLabelCheckBox, mTitleLineEdit);
        QWidget::setTabOrder(mTitleLineEdit, mColumnCountSpinBox);
        QWidget::setTabOrder(mColumnCountSpinBox, mControlVisibilityGroupBox);
        QWidget::setTabOrder(mControlVisibilityGroupBox, mShowAsGroupBox);
        QWidget::setTabOrder(mShowAsGroupBox, mCollapsedCheckBox);
        QWidget::setTabOrder(mCollapsedCheckBox, mControlCollapsedGroupBox);
        QWidget::setTabOrder(mControlCollapsedGroupBox, mBackgroundColorButton);

        retranslateUi(QgsAttributeFormContainerEdit);

        QMetaObject::connectSlotsByName(QgsAttributeFormContainerEdit);
    } // setupUi

    void retranslateUi(QWidget *QgsAttributeFormContainerEdit)
    {
        mControlVisibilityGroupBox->setTitle(QCoreApplication::translate("QgsAttributeFormContainerEdit", "Control Visibility by Expression", nullptr));
        mGroupBox->setTitle(QCoreApplication::translate("QgsAttributeFormContainerEdit", "Style", nullptr));
        label_3->setText(QCoreApplication::translate("QgsAttributeFormContainerEdit", "Background color", nullptr));
        mShowLabelCheckBox->setText(QCoreApplication::translate("QgsAttributeFormContainerEdit", "Show label", nullptr));
        label_2->setText(QCoreApplication::translate("QgsAttributeFormContainerEdit", "Columns", nullptr));
        mShowAsGroupBox->setText(QCoreApplication::translate("QgsAttributeFormContainerEdit", "Show as Group Box", nullptr));
        label->setText(QCoreApplication::translate("QgsAttributeFormContainerEdit", "Title", nullptr));
        mCollapsedCheckBox->setText(QCoreApplication::translate("QgsAttributeFormContainerEdit", "Collapsed", nullptr));
        mControlCollapsedGroupBox->setTitle(QCoreApplication::translate("QgsAttributeFormContainerEdit", "Control Collapsed by Expression", nullptr));
        (void)QgsAttributeFormContainerEdit;
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeFormContainerEdit: public Ui_QgsAttributeFormContainerEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTEFORMCONTAINEREDIT_H
