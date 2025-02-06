/********************************************************************************
** Form generated from reading UI file 'qgsgpxsourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGPXSOURCESELECTBASE_H
#define UI_QGSGPXSOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsGpxSourceSelectBase
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QGroupBox *fileGroupBox;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_3;
    QCheckBox *cbGPXWaypoints;
    QCheckBox *cbGPXTracks;
    QCheckBox *cbGPXRoutes;
    QSpacerItem *horizontalSpacer;
    QLabel *lblGPXFeatureTypes;
    QLabel *label;
    QgsFileWidget *mFileWidget;

    void setupUi(QDialog *QgsGpxSourceSelectBase)
    {
        if (QgsGpxSourceSelectBase->objectName().isEmpty())
            QgsGpxSourceSelectBase->setObjectName(QString::fromUtf8("QgsGpxSourceSelectBase"));
        QgsGpxSourceSelectBase->resize(704, 534);
        QgsGpxSourceSelectBase->setSizeGripEnabled(true);
        QgsGpxSourceSelectBase->setModal(true);
        gridLayout_2 = new QGridLayout(QgsGpxSourceSelectBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        buttonBox = new QDialogButtonBox(QgsGpxSourceSelectBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::NoButton);

        gridLayout_2->addWidget(buttonBox, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        fileGroupBox = new QGroupBox(QgsGpxSourceSelectBase);
        fileGroupBox->setObjectName(QString::fromUtf8("fileGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileGroupBox->sizePolicy().hasHeightForWidth());
        fileGroupBox->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(fileGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        cbGPXWaypoints = new QCheckBox(fileGroupBox);
        cbGPXWaypoints->setObjectName(QString::fromUtf8("cbGPXWaypoints"));
        cbGPXWaypoints->setEnabled(false);
        cbGPXWaypoints->setChecked(false);

        gridLayout_3->addWidget(cbGPXWaypoints, 1, 1, 1, 1);

        cbGPXTracks = new QCheckBox(fileGroupBox);
        cbGPXTracks->setObjectName(QString::fromUtf8("cbGPXTracks"));
        cbGPXTracks->setEnabled(false);
        cbGPXTracks->setChecked(false);

        gridLayout_3->addWidget(cbGPXTracks, 3, 1, 1, 1);

        cbGPXRoutes = new QCheckBox(fileGroupBox);
        cbGPXRoutes->setObjectName(QString::fromUtf8("cbGPXRoutes"));
        cbGPXRoutes->setEnabled(false);
        cbGPXRoutes->setChecked(false);

        gridLayout_3->addWidget(cbGPXRoutes, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 2, 1, 1);

        lblGPXFeatureTypes = new QLabel(fileGroupBox);
        lblGPXFeatureTypes->setObjectName(QString::fromUtf8("lblGPXFeatureTypes"));

        gridLayout_3->addWidget(lblGPXFeatureTypes, 1, 0, 1, 1);

        label = new QLabel(fileGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        mFileWidget = new QgsFileWidget(fileGroupBox);
        mFileWidget->setObjectName(QString::fromUtf8("mFileWidget"));

        gridLayout_3->addWidget(mFileWidget, 0, 1, 1, 2);


        gridLayout->addLayout(gridLayout_3, 1, 0, 1, 2);


        verticalLayout->addWidget(fileGroupBox);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        lblGPXFeatureTypes->setBuddy(cbGPXWaypoints);
#endif // QT_CONFIG(shortcut)

        retranslateUi(QgsGpxSourceSelectBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsGpxSourceSelectBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsGpxSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGpxSourceSelectBase)
    {
        QgsGpxSourceSelectBase->setWindowTitle(QCoreApplication::translate("QgsGpxSourceSelectBase", "Add GPX Layer(s)", nullptr));
        fileGroupBox->setTitle(QCoreApplication::translate("QgsGpxSourceSelectBase", "Source", nullptr));
        cbGPXWaypoints->setText(QCoreApplication::translate("QgsGpxSourceSelectBase", "Waypoints", nullptr));
        cbGPXTracks->setText(QCoreApplication::translate("QgsGpxSourceSelectBase", "Tracks", nullptr));
        cbGPXRoutes->setText(QCoreApplication::translate("QgsGpxSourceSelectBase", "Routes", nullptr));
        lblGPXFeatureTypes->setText(QCoreApplication::translate("QgsGpxSourceSelectBase", "Feature types", nullptr));
        label->setText(QCoreApplication::translate("QgsGpxSourceSelectBase", "GPX dataset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsGpxSourceSelectBase: public Ui_QgsGpxSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGPXSOURCESELECTBASE_H
