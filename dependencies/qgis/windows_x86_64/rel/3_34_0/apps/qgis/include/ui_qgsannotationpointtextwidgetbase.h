/********************************************************************************
** Form generated from reading UI file 'qgsannotationpointtextwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSANNOTATIONPOINTTEXTWIDGETBASE_H
#define UI_QGSANNOTATIONPOINTTEXTWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgsalignmentcombobox.h"
#include "qgsannotationitemcommonpropertieswidget.h"
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAnnotationPointTextWidgetBase
{
public:
    QGridLayout *gridLayout;
    QgsAnnotationItemCommonPropertiesWidget *mPropertiesWidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QgsDoubleSpinBox *mSpinTextAngle;
    QComboBox *mRotationModeCombo;
    QWidget *mTextFormatWidgetContainer;
    QPlainTextEdit *mTextEdit;
    QToolButton *mInsertExpressionButton;
    QgsAlignmentComboBox *mAlignmentComboBox;
    QLabel *label_2;

    void setupUi(QWidget *QgsAnnotationPointTextWidgetBase)
    {
        if (QgsAnnotationPointTextWidgetBase->objectName().isEmpty())
            QgsAnnotationPointTextWidgetBase->setObjectName(QString::fromUtf8("QgsAnnotationPointTextWidgetBase"));
        QgsAnnotationPointTextWidgetBase->resize(321, 526);
        gridLayout = new QGridLayout(QgsAnnotationPointTextWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mPropertiesWidget = new QgsAnnotationItemCommonPropertiesWidget(QgsAnnotationPointTextWidgetBase);
        mPropertiesWidget->setObjectName(QString::fromUtf8("mPropertiesWidget"));

        gridLayout->addWidget(mPropertiesWidget, 6, 0, 1, 2);

        groupBox = new QGroupBox(QgsAnnotationPointTextWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        mSpinTextAngle = new QgsDoubleSpinBox(groupBox);
        mSpinTextAngle->setObjectName(QString::fromUtf8("mSpinTextAngle"));
        mSpinTextAngle->setWrapping(true);
        mSpinTextAngle->setDecimals(2);
        mSpinTextAngle->setMinimum(-360.000000000000000);
        mSpinTextAngle->setMaximum(360.000000000000000);
        mSpinTextAngle->setSingleStep(0.500000000000000);

        gridLayout_2->addWidget(mSpinTextAngle, 1, 1, 1, 1);

        mRotationModeCombo = new QComboBox(groupBox);
        mRotationModeCombo->setObjectName(QString::fromUtf8("mRotationModeCombo"));

        gridLayout_2->addWidget(mRotationModeCombo, 0, 0, 1, 2);


        gridLayout->addWidget(groupBox, 5, 0, 1, 2);

        mTextFormatWidgetContainer = new QWidget(QgsAnnotationPointTextWidgetBase);
        mTextFormatWidgetContainer->setObjectName(QString::fromUtf8("mTextFormatWidgetContainer"));

        gridLayout->addWidget(mTextFormatWidgetContainer, 3, 0, 1, 2);

        mTextEdit = new QPlainTextEdit(QgsAnnotationPointTextWidgetBase);
        mTextEdit->setObjectName(QString::fromUtf8("mTextEdit"));
        mTextEdit->setMinimumSize(QSize(0, 150));

        gridLayout->addWidget(mTextEdit, 0, 0, 1, 2);

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

        gridLayout->addWidget(mInsertExpressionButton, 1, 0, 1, 2);

        mAlignmentComboBox = new QgsAlignmentComboBox(QgsAnnotationPointTextWidgetBase);
        mAlignmentComboBox->setObjectName(QString::fromUtf8("mAlignmentComboBox"));

        gridLayout->addWidget(mAlignmentComboBox, 2, 1, 1, 1);

        label_2 = new QLabel(QgsAnnotationPointTextWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        retranslateUi(QgsAnnotationPointTextWidgetBase);

        QMetaObject::connectSlotsByName(QgsAnnotationPointTextWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsAnnotationPointTextWidgetBase)
    {
        QgsAnnotationPointTextWidgetBase->setWindowTitle(QCoreApplication::translate("QgsAnnotationPointTextWidgetBase", "Point Text Annotation", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsAnnotationPointTextWidgetBase", "Rotation", nullptr));
        label->setText(QCoreApplication::translate("QgsAnnotationPointTextWidgetBase", "Angle", nullptr));
        mSpinTextAngle->setSuffix(QCoreApplication::translate("QgsAnnotationPointTextWidgetBase", " \302\260", nullptr));
        mInsertExpressionButton->setText(QCoreApplication::translate("QgsAnnotationPointTextWidgetBase", "Insert/Edit Expression\342\200\246", nullptr));
        label_2->setText(QCoreApplication::translate("QgsAnnotationPointTextWidgetBase", "Alignment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAnnotationPointTextWidgetBase: public Ui_QgsAnnotationPointTextWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSANNOTATIONPOINTTEXTWIDGETBASE_H
