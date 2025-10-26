/********************************************************************************
** Form generated from reading UI file 'map3dexportwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP3DEXPORTWIDGET_H
#define UI_MAP3DEXPORTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsfilewidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_Map3DExportWidget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QgsSpinBox *terrainTextureResolutionSpinBox;
    QCheckBox *smoothEdgesCheckBox;
    QLabel *folderLAbel;
    QLabel *label_2;
    QLabel *sceneNameLabel;
    QgsFileWidget *selectFolderWidget;
    QSpacerItem *verticalSpacer;
    QCheckBox *exportTexturesCheckBox;
    QgsSpinBox *terrainResolutionSpinBox;
    QCheckBox *exportNormalsCheckBox;
    QLabel *label;
    QLineEdit *sceneNameLineEdit;
    QgsDoubleSpinBox *scaleSpinBox;
    QLabel *label_3;

    void setupUi(QWidget *Map3DExportWidget)
    {
        if (Map3DExportWidget->objectName().isEmpty())
            Map3DExportWidget->setObjectName(QString::fromUtf8("Map3DExportWidget"));
        Map3DExportWidget->resize(400, 251);
        gridLayout_2 = new QGridLayout(Map3DExportWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        terrainTextureResolutionSpinBox = new QgsSpinBox(Map3DExportWidget);
        terrainTextureResolutionSpinBox->setObjectName(QString::fromUtf8("terrainTextureResolutionSpinBox"));
        terrainTextureResolutionSpinBox->setMinimum(16);
        terrainTextureResolutionSpinBox->setMaximum(4096);
        terrainTextureResolutionSpinBox->setValue(512);

        gridLayout->addWidget(terrainTextureResolutionSpinBox, 3, 1, 1, 2);

        smoothEdgesCheckBox = new QCheckBox(Map3DExportWidget);
        smoothEdgesCheckBox->setObjectName(QString::fromUtf8("smoothEdgesCheckBox"));

        gridLayout->addWidget(smoothEdgesCheckBox, 5, 0, 1, 3);

        folderLAbel = new QLabel(Map3DExportWidget);
        folderLAbel->setObjectName(QString::fromUtf8("folderLAbel"));

        gridLayout->addWidget(folderLAbel, 1, 0, 1, 1);

        label_2 = new QLabel(Map3DExportWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        sceneNameLabel = new QLabel(Map3DExportWidget);
        sceneNameLabel->setObjectName(QString::fromUtf8("sceneNameLabel"));

        gridLayout->addWidget(sceneNameLabel, 0, 0, 1, 1);

        selectFolderWidget = new QgsFileWidget(Map3DExportWidget);
        selectFolderWidget->setObjectName(QString::fromUtf8("selectFolderWidget"));

        gridLayout->addWidget(selectFolderWidget, 1, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 1, 1, 1);

        exportTexturesCheckBox = new QCheckBox(Map3DExportWidget);
        exportTexturesCheckBox->setObjectName(QString::fromUtf8("exportTexturesCheckBox"));

        gridLayout->addWidget(exportTexturesCheckBox, 7, 0, 1, 3);

        terrainResolutionSpinBox = new QgsSpinBox(Map3DExportWidget);
        terrainResolutionSpinBox->setObjectName(QString::fromUtf8("terrainResolutionSpinBox"));
        terrainResolutionSpinBox->setMinimum(1);
        terrainResolutionSpinBox->setMaximum(4096);
        terrainResolutionSpinBox->setValue(1);

        gridLayout->addWidget(terrainResolutionSpinBox, 2, 1, 1, 2);

        exportNormalsCheckBox = new QCheckBox(Map3DExportWidget);
        exportNormalsCheckBox->setObjectName(QString::fromUtf8("exportNormalsCheckBox"));
        exportNormalsCheckBox->setChecked(true);
        exportNormalsCheckBox->setAutoRepeat(false);

        gridLayout->addWidget(exportNormalsCheckBox, 6, 0, 1, 3);

        label = new QLabel(Map3DExportWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        sceneNameLineEdit = new QLineEdit(Map3DExportWidget);
        sceneNameLineEdit->setObjectName(QString::fromUtf8("sceneNameLineEdit"));

        gridLayout->addWidget(sceneNameLineEdit, 0, 1, 1, 2);

        scaleSpinBox = new QgsDoubleSpinBox(Map3DExportWidget);
        scaleSpinBox->setObjectName(QString::fromUtf8("scaleSpinBox"));
        scaleSpinBox->setMinimum(0.100000000000000);
        scaleSpinBox->setSingleStep(0.100000000000000);
        scaleSpinBox->setValue(1.000000000000000);

        gridLayout->addWidget(scaleSpinBox, 4, 1, 1, 2);

        label_3 = new QLabel(Map3DExportWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        QWidget::setTabOrder(sceneNameLineEdit, terrainResolutionSpinBox);
        QWidget::setTabOrder(terrainResolutionSpinBox, terrainTextureResolutionSpinBox);
        QWidget::setTabOrder(terrainTextureResolutionSpinBox, scaleSpinBox);
        QWidget::setTabOrder(scaleSpinBox, smoothEdgesCheckBox);
        QWidget::setTabOrder(smoothEdgesCheckBox, exportNormalsCheckBox);
        QWidget::setTabOrder(exportNormalsCheckBox, exportTexturesCheckBox);

        retranslateUi(Map3DExportWidget);

        QMetaObject::connectSlotsByName(Map3DExportWidget);
    } // setupUi

    void retranslateUi(QWidget *Map3DExportWidget)
    {
        smoothEdgesCheckBox->setText(QCoreApplication::translate("Map3DExportWidget", "Smooth edges", nullptr));
        folderLAbel->setText(QCoreApplication::translate("Map3DExportWidget", "Folder", nullptr));
        label_2->setText(QCoreApplication::translate("Map3DExportWidget", "Terrain texture resolution", nullptr));
        sceneNameLabel->setText(QCoreApplication::translate("Map3DExportWidget", "Scene name", nullptr));
        exportTexturesCheckBox->setText(QCoreApplication::translate("Map3DExportWidget", "Export textures", nullptr));
        exportNormalsCheckBox->setText(QCoreApplication::translate("Map3DExportWidget", "Export normals", nullptr));
        label->setText(QCoreApplication::translate("Map3DExportWidget", "Terrain resolution", nullptr));
        label_3->setText(QCoreApplication::translate("Map3DExportWidget", "Model scale", nullptr));
        (void)Map3DExportWidget;
    } // retranslateUi

};

namespace Ui {
    class Map3DExportWidget: public Ui_Map3DExportWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP3DEXPORTWIDGET_H
