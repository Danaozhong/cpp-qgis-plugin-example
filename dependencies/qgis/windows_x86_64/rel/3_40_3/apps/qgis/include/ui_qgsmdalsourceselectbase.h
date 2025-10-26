/********************************************************************************
** Form generated from reading UI file 'qgsmdalsourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMDALSOURCESELECTBASE_H
#define UI_QGSMDALSOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMdalSourceSelectBase
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *fileGroupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QgsFileWidget *mFileWidget;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsMdalSourceSelectBase)
    {
        if (QgsMdalSourceSelectBase->objectName().isEmpty())
            QgsMdalSourceSelectBase->setObjectName(QString::fromUtf8("QgsMdalSourceSelectBase"));
        QgsMdalSourceSelectBase->resize(351, 115);
        QIcon icon;
        icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsMdalSourceSelectBase->setWindowIcon(icon);
        QgsMdalSourceSelectBase->setSizeGripEnabled(true);
        QgsMdalSourceSelectBase->setModal(true);
        gridLayout_2 = new QGridLayout(QgsMdalSourceSelectBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        fileGroupBox = new QGroupBox(QgsMdalSourceSelectBase);
        fileGroupBox->setObjectName(QString::fromUtf8("fileGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileGroupBox->sizePolicy().hasHeightForWidth());
        fileGroupBox->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(fileGroupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(fileGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        mFileWidget = new QgsFileWidget(fileGroupBox);
        mFileWidget->setObjectName(QString::fromUtf8("mFileWidget"));

        horizontalLayout->addWidget(mFileWidget);


        verticalLayout->addWidget(fileGroupBox);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsMdalSourceSelectBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::NoButton);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(QgsMdalSourceSelectBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsMdalSourceSelectBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsMdalSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsMdalSourceSelectBase)
    {
        QgsMdalSourceSelectBase->setWindowTitle(QCoreApplication::translate("QgsMdalSourceSelectBase", "Add Mesh Layer(s)", nullptr));
        fileGroupBox->setTitle(QCoreApplication::translate("QgsMdalSourceSelectBase", "Source", nullptr));
        label->setText(QCoreApplication::translate("QgsMdalSourceSelectBase", "Mesh dataset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsMdalSourceSelectBase: public Ui_QgsMdalSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMDALSOURCESELECTBASE_H
