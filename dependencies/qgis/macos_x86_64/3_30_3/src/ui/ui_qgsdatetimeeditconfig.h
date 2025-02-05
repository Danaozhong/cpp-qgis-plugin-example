/********************************************************************************
** Form generated from reading UI file 'qgsdatetimeeditconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDATETIMEEDITCONFIG_H
#define UI_QGSDATETIMEEDITCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDateTimeEditConfig
{
public:
    QGridLayout *gridLayout;
    QgsScrollArea *mHelpScrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_5;
    QLabel *mHelpLabel;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QComboBox *mFieldFormatComboBox;
    QLineEdit *mFieldFormatEdit;
    QSpacerItem *horizontalSpacer;
    QToolButton *mFieldHelpToolButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *mDisplayFormatEdit;
    QComboBox *mDisplayFormatComboBox;
    QToolButton *mDisplayHelpToolButton;
    QCheckBox *mCalendarPopupCheckBox;
    QCheckBox *mAllowNullCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QDateTimeEdit *mDemoDateTimeEdit;

    void setupUi(QWidget *QgsDateTimeEditConfig)
    {
        if (QgsDateTimeEditConfig->objectName().isEmpty())
            QgsDateTimeEditConfig->setObjectName(QString::fromUtf8("QgsDateTimeEditConfig"));
        QgsDateTimeEditConfig->resize(504, 390);
        QgsDateTimeEditConfig->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsDateTimeEditConfig);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mHelpScrollArea = new QgsScrollArea(QgsDateTimeEditConfig);
        mHelpScrollArea->setObjectName(QString::fromUtf8("mHelpScrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mHelpScrollArea->sizePolicy().hasHeightForWidth());
        mHelpScrollArea->setSizePolicy(sizePolicy);
        mHelpScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 478, 971));
        gridLayout_5 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mHelpLabel = new QLabel(scrollAreaWidgetContents);
        mHelpLabel->setObjectName(QString::fromUtf8("mHelpLabel"));
        mHelpLabel->setScaledContents(true);
        mHelpLabel->setWordWrap(true);

        gridLayout_5->addWidget(mHelpLabel, 0, 0, 1, 1);

        mHelpScrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(mHelpScrollArea, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 0, 1, 1);

        line = new QFrame(QgsDateTimeEditConfig);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 8, 0, 1, 1);

        groupBox_2 = new QGroupBox(QgsDateTimeEditConfig);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mFieldFormatComboBox = new QComboBox(groupBox_2);
        mFieldFormatComboBox->setObjectName(QString::fromUtf8("mFieldFormatComboBox"));
        mFieldFormatComboBox->setMinimumSize(QSize(120, 0));

        gridLayout_3->addWidget(mFieldFormatComboBox, 0, 0, 1, 1);

        mFieldFormatEdit = new QLineEdit(groupBox_2);
        mFieldFormatEdit->setObjectName(QString::fromUtf8("mFieldFormatEdit"));
        mFieldFormatEdit->setEnabled(true);

        gridLayout_3->addWidget(mFieldFormatEdit, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 3, 1, 1);

        mFieldHelpToolButton = new QToolButton(groupBox_2);
        mFieldHelpToolButton->setObjectName(QString::fromUtf8("mFieldHelpToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionHelpContents.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mFieldHelpToolButton->setIcon(icon);
        mFieldHelpToolButton->setCheckable(true);
        mFieldHelpToolButton->setChecked(false);

        gridLayout_3->addWidget(mFieldHelpToolButton, 0, 2, 1, 1);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(QgsDateTimeEditConfig);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        mDisplayFormatEdit = new QLineEdit(groupBox);
        mDisplayFormatEdit->setObjectName(QString::fromUtf8("mDisplayFormatEdit"));
        mDisplayFormatEdit->setEnabled(false);

        gridLayout_2->addWidget(mDisplayFormatEdit, 0, 1, 1, 1);

        mDisplayFormatComboBox = new QComboBox(groupBox);
        mDisplayFormatComboBox->addItem(QString());
        mDisplayFormatComboBox->addItem(QString());
        mDisplayFormatComboBox->setObjectName(QString::fromUtf8("mDisplayFormatComboBox"));
        mDisplayFormatComboBox->setMinimumSize(QSize(120, 0));
        mDisplayFormatComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_2->addWidget(mDisplayFormatComboBox, 0, 0, 1, 1);

        mDisplayHelpToolButton = new QToolButton(groupBox);
        mDisplayHelpToolButton->setObjectName(QString::fromUtf8("mDisplayHelpToolButton"));
        mDisplayHelpToolButton->setIcon(icon);
        mDisplayHelpToolButton->setCheckable(true);
        mDisplayHelpToolButton->setChecked(false);

        gridLayout_2->addWidget(mDisplayHelpToolButton, 0, 2, 1, 1);

        mCalendarPopupCheckBox = new QCheckBox(groupBox);
        mCalendarPopupCheckBox->setObjectName(QString::fromUtf8("mCalendarPopupCheckBox"));
        mCalendarPopupCheckBox->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(mCalendarPopupCheckBox, 1, 0, 1, 2);

        mAllowNullCheckBox = new QCheckBox(groupBox);
        mAllowNullCheckBox->setObjectName(QString::fromUtf8("mAllowNullCheckBox"));

        gridLayout_2->addWidget(mAllowNullCheckBox, 2, 0, 1, 2);


        gridLayout->addWidget(groupBox, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(QgsDateTimeEditConfig);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        mDemoDateTimeEdit = new QDateTimeEdit(QgsDateTimeEditConfig);
        mDemoDateTimeEdit->setObjectName(QString::fromUtf8("mDemoDateTimeEdit"));
        mDemoDateTimeEdit->setEnabled(false);
        mDemoDateTimeEdit->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_3->addWidget(mDemoDateTimeEdit);


        gridLayout->addLayout(horizontalLayout_3, 9, 0, 1, 1);

        QWidget::setTabOrder(mFieldFormatComboBox, mFieldFormatEdit);
        QWidget::setTabOrder(mFieldFormatEdit, mFieldHelpToolButton);
        QWidget::setTabOrder(mFieldHelpToolButton, mDisplayFormatComboBox);
        QWidget::setTabOrder(mDisplayFormatComboBox, mDisplayFormatEdit);
        QWidget::setTabOrder(mDisplayFormatEdit, mDisplayHelpToolButton);
        QWidget::setTabOrder(mDisplayHelpToolButton, mCalendarPopupCheckBox);
        QWidget::setTabOrder(mCalendarPopupCheckBox, mAllowNullCheckBox);
        QWidget::setTabOrder(mAllowNullCheckBox, mHelpScrollArea);

        retranslateUi(QgsDateTimeEditConfig);

        QMetaObject::connectSlotsByName(QgsDateTimeEditConfig);
    } // setupUi

    void retranslateUi(QWidget *QgsDateTimeEditConfig)
    {
        mHelpLabel->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("QgsDateTimeEditConfig", "Field Format", nullptr));
        mFieldHelpToolButton->setText(QCoreApplication::translate("QgsDateTimeEditConfig", "\342\200\246", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsDateTimeEditConfig", "Widget Display", nullptr));
        mDisplayFormatComboBox->setItemText(0, QCoreApplication::translate("QgsDateTimeEditConfig", "Default", nullptr));
        mDisplayFormatComboBox->setItemText(1, QCoreApplication::translate("QgsDateTimeEditConfig", "Custom", nullptr));

        mDisplayHelpToolButton->setText(QCoreApplication::translate("QgsDateTimeEditConfig", "\342\200\246", nullptr));
        mCalendarPopupCheckBox->setText(QCoreApplication::translate("QgsDateTimeEditConfig", "Calendar popup", nullptr));
        mAllowNullCheckBox->setText(QCoreApplication::translate("QgsDateTimeEditConfig", "Allow NULL values", nullptr));
        label->setText(QCoreApplication::translate("QgsDateTimeEditConfig", "Preview", nullptr));
        (void)QgsDateTimeEditConfig;
    } // retranslateUi

};

namespace Ui {
    class QgsDateTimeEditConfig: public Ui_QgsDateTimeEditConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDATETIMEEDITCONFIG_H
