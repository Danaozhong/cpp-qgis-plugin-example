/********************************************************************************
** Form generated from reading UI file 'qgsadvancedsettingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSADVANCEDSETTINGSWIDGET_H
#define UI_QGSADVANCEDSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgssettingstreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAdvancedSettingsWidgetBase
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_26;
    QVBoxLayout *verticalLayout_42;
    QWidget *mAdvancedSettingsWarning;
    QVBoxLayout *verticalLayout_44;
    QLabel *label_44;
    QPushButton *mAdvancedSettingsEnableButton;
    QgsSettingsTreeWidget *mAdvancedSettingsEditor;

    void setupUi(QWidget *QgsAdvancedSettingsWidgetBase)
    {
        if (QgsAdvancedSettingsWidgetBase->objectName().isEmpty())
            QgsAdvancedSettingsWidgetBase->setObjectName(QString::fromUtf8("QgsAdvancedSettingsWidgetBase"));
        QgsAdvancedSettingsWidgetBase->resize(714, 610);
        horizontalLayout = new QHBoxLayout(QgsAdvancedSettingsWidgetBase);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_26 = new QGroupBox(QgsAdvancedSettingsWidgetBase);
        groupBox_26->setObjectName(QString::fromUtf8("groupBox_26"));
        verticalLayout_42 = new QVBoxLayout(groupBox_26);
        verticalLayout_42->setObjectName(QString::fromUtf8("verticalLayout_42"));
        mAdvancedSettingsWarning = new QWidget(groupBox_26);
        mAdvancedSettingsWarning->setObjectName(QString::fromUtf8("mAdvancedSettingsWarning"));
        verticalLayout_44 = new QVBoxLayout(mAdvancedSettingsWarning);
        verticalLayout_44->setObjectName(QString::fromUtf8("verticalLayout_44"));
        label_44 = new QLabel(mAdvancedSettingsWarning);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setWordWrap(true);

        verticalLayout_44->addWidget(label_44);

        mAdvancedSettingsEnableButton = new QPushButton(mAdvancedSettingsWarning);
        mAdvancedSettingsEnableButton->setObjectName(QString::fromUtf8("mAdvancedSettingsEnableButton"));

        verticalLayout_44->addWidget(mAdvancedSettingsEnableButton);


        verticalLayout_42->addWidget(mAdvancedSettingsWarning);

        mAdvancedSettingsEditor = new QgsSettingsTreeWidget(groupBox_26);
        mAdvancedSettingsEditor->setObjectName(QString::fromUtf8("mAdvancedSettingsEditor"));
        mAdvancedSettingsEditor->setVisible(false);

        verticalLayout_42->addWidget(mAdvancedSettingsEditor);


        horizontalLayout->addWidget(groupBox_26);


        retranslateUi(QgsAdvancedSettingsWidgetBase);

        QMetaObject::connectSlotsByName(QgsAdvancedSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsAdvancedSettingsWidgetBase)
    {
        groupBox_26->setTitle(QCoreApplication::translate("QgsAdvancedSettingsWidgetBase", "Advanced Settings Editor", nullptr));
        label_44->setText(QCoreApplication::translate("QgsAdvancedSettingsWidgetBase", "<html><head/><body><p>Changes on this page are dangerous and can break your QGIS installation in various ways. Any change you make is applied immediately, without clicking the <span style=\" font-style:italic;\">OK</span> button.</p></body></html>", nullptr));
        mAdvancedSettingsEnableButton->setText(QCoreApplication::translate("QgsAdvancedSettingsWidgetBase", "I will be careful, I promise!", nullptr));
        (void)QgsAdvancedSettingsWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsAdvancedSettingsWidgetBase: public Ui_QgsAdvancedSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSADVANCEDSETTINGSWIDGET_H
