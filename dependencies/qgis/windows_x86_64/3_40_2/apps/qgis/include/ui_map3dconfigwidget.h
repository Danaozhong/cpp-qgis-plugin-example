/********************************************************************************
** Form generated from reading UI file 'map3dconfigwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP3DCONFIGWIDGET_H
#define UI_MAP3DCONFIGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsambientocclusionsettingswidget.h"
#include "qgsdoublespinbox.h"
#include "qgsextentgroupbox.h"
#include "qgslightswidget.h"
#include "qgsmaplayercombobox.h"
#include "qgsmessagebar.h"
#include "qgsphongmaterialwidget.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_Map3DConfigWidget
{
public:
    QVBoxLayout *verticalLayout_4;
    QgsMessageBar *mMessageBar;
    QSplitter *m3DOptionsSplitter;
    QFrame *m3DOptionsListFrame;
    QVBoxLayout *verticalLayout_23;
    QListWidget *m3DOptionsListWidget;
    QFrame *m3DOptionGroupsFrame;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *m3DOptionsStackedWidget;
    QWidget *mPageGeneral;
    QVBoxLayout *verticalLayout_5;
    QgsScrollArea *scrollAreaGeneral;
    QWidget *scrollAreaGeneralWidgetContents;
    QVBoxLayout *verticalLayout_7;
    QgsExtentGroupBox *groupExtent;
    QSpacerItem *verticalSpacer;
    QWidget *mPageTerrain;
    QVBoxLayout *verticalLayout_61;
    QgsScrollArea *scrollAreaTerrain;
    QWidget *scrollAreaTerrainWidgetContents;
    QVBoxLayout *verticalLayoutTerrain;
    QGroupBox *groupTerrain;
    QGridLayout *gridLayout1;
    QLabel *labelTerrainResolution;
    QgsDoubleSpinBox *spinTerrainSkirtHeight;
    QComboBox *cboTerrainType;
    QLabel *labelTerrainSkirtHeight;
    QgsMapLayerComboBox *cboTerrainLayer;
    QgsSpinBox *spinTerrainResolution;
    QLabel *labelTerrainLayer;
    QgsDoubleSpinBox *spinTerrainScale;
    QLabel *labelTerrainType;
    QLabel *labelTerrainScale;
    QgsDoubleSpinBox *terrainElevationOffsetSpinBox;
    QLabel *labelterrainElevationOffset;
    QFrame *groupMeshTerrainShading;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupTerrainShading;
    QVBoxLayout *verticalLayout_2;
    QgsPhongMaterialWidget *widgetTerrainMaterial;
    QSpacerItem *verticalSpacerTerrain;
    QWidget *mPageLight;
    QVBoxLayout *verticalLayout_64;
    QgsScrollArea *scrollAreaLight;
    QWidget *scrollAreaLightWidgetContents;
    QVBoxLayout *verticalLayoutLight;
    QGroupBox *groupLights;
    QVBoxLayout *verticalLayout_31;
    QgsLightsWidget *widgetLights;
    QSpacerItem *verticalSpacerLights;
    QWidget *mPageEffects;
    QVBoxLayout *verticalLayout_6;
    QgsScrollArea *scrollAreaShadow;
    QWidget *scrollAreaShadowWidgetContents;
    QVBoxLayout *verticalLayoutShadow;
    QGroupBox *groupShadowRendering;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QGroupBox *edlGroupBox;
    QGridLayout *gridLayout_2;
    QgsDoubleSpinBox *edlStrengthSpinBox;
    QLabel *label;
    QLabel *label_2;
    QgsSpinBox *edlDistanceSpinBox;
    QgsAmbientOcclusionSettingsWidget *mAmbientOcclusionSettingsWidget;
    QSpacerItem *verticalSpacerShadow;
    QWidget *mPageCameraSkybox;
    QVBoxLayout *verticalLayout_62;
    QgsScrollArea *scrollAreaCameraSkybox;
    QWidget *scrollAreaCameraSkyboxWidgetContents;
    QVBoxLayout *verticalLayoutCameraSkybox;
    QGroupBox *cameraTerrain;
    QGridLayout *gridLayout;
    QLabel *labelCameraProjectionType;
    QgsSpinBox *spinCameraFieldOfView;
    QLabel *labelFieldofView;
    QComboBox *cboCameraProjectionType;
    QLabel *labelCameraNavigationMode;
    QComboBox *mCameraNavigationModeCombo;
    QgsDoubleSpinBox *mCameraMovementSpeed;
    QLabel *labelMovementSpeed;
    QGroupBox *mGroupBox3dAxis;
    QFormLayout *formLayout_2;
    QLabel *mLabel3dAxisType_2;
    QComboBox *mCbo3dAxisType;
    QLabel *mLabel3dAxisHorizPos_2;
    QComboBox *mCbo3dAxisHorizPos;
    QLabel *mLabel3dAxisVertPos_2;
    QComboBox *mCbo3dAxisVertPos;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_8;
    QCheckBox *mSync2DTo3DCheckbox;
    QCheckBox *mSync3DTo2DCheckbox;
    QCheckBox *mVisualizeExtentCheckBox;
    QGroupBox *groupSkyboxSettings;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacerCameraSkybox;
    QWidget *mPageAdvanced;
    QVBoxLayout *verticalLayout_63;
    QgsScrollArea *scrollAreaAdvanced;
    QWidget *scrollAreaAdvancedWidgetContents;
    QVBoxLayout *verticalLayoutAdvanced;
    QGroupBox *groupAdvanced;
    QGridLayout *gridLayout_11;
    QGroupBox *mDebugDepthMapGroupBox;
    QGridLayout *gridLayout_9;
    QComboBox *mDebugDepthMapCornerComboBox;
    QLabel *label_11;
    QLabel *label_9;
    QgsDoubleSpinBox *mDebugDepthMapSizeSpinBox;
    QGridLayout *gridLayoutAdvanced;
    QgsDoubleSpinBox *spinScreenError;
    QCheckBox *chkShowLightSourceOrigins;
    QCheckBox *chkShowBoundingBoxes;
    QCheckBox *chkShowTileInfo;
    QgsDoubleSpinBox *spinGroundError;
    QLabel *label_5;
    QCheckBox *chkShowLabels;
    QgsSpinBox *spinMapResolution;
    QCheckBox *chkShowCameraViewCenter;
    QLabel *label_4;
    QCheckBox *mFpsCounterCheckBox;
    QCheckBox *mDebugOverlayCheckBox;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *labelZoomLevels;
    QCheckBox *chkShowCameraRotationCenter;
    QGroupBox *mDebugShadowMapGroupBox;
    QGridLayout *gridLayout_10;
    QComboBox *mDebugShadowMapCornerComboBox;
    QLabel *label_8;
    QLabel *label_10;
    QgsDoubleSpinBox *mDebugShadowMapSizeSpinBox;
    QSpacerItem *verticalSpacerAdvanced;

    void setupUi(QWidget *Map3DConfigWidget)
    {
        if (Map3DConfigWidget->objectName().isEmpty())
            Map3DConfigWidget->setObjectName(QString::fromUtf8("Map3DConfigWidget"));
        Map3DConfigWidget->resize(881, 665);
        verticalLayout_4 = new QVBoxLayout(Map3DConfigWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        mMessageBar = new QgsMessageBar(Map3DConfigWidget);
        mMessageBar->setObjectName(QString::fromUtf8("mMessageBar"));

        verticalLayout_4->addWidget(mMessageBar);

        m3DOptionsSplitter = new QSplitter(Map3DConfigWidget);
        m3DOptionsSplitter->setObjectName(QString::fromUtf8("m3DOptionsSplitter"));
        m3DOptionsSplitter->setOrientation(Qt::Horizontal);
        m3DOptionsSplitter->setChildrenCollapsible(false);
        m3DOptionsListFrame = new QFrame(m3DOptionsSplitter);
        m3DOptionsListFrame->setObjectName(QString::fromUtf8("m3DOptionsListFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m3DOptionsListFrame->sizePolicy().hasHeightForWidth());
        m3DOptionsListFrame->setSizePolicy(sizePolicy);
        m3DOptionsListFrame->setMinimumSize(QSize(32, 0));
        m3DOptionsListFrame->setFrameShape(QFrame::NoFrame);
        m3DOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_23 = new QVBoxLayout(m3DOptionsListFrame);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(3, 0, 0, 0);
        m3DOptionsListWidget = new QListWidget(m3DOptionsListFrame);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/general.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(m3DOptionsListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mLayoutItem3DMap.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(m3DOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionHighlightFeature.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(m3DOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mIconShadow.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(m3DOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mIconCamera.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(m3DOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/system.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(m3DOptionsListWidget);
        __qlistwidgetitem5->setIcon(icon5);
        m3DOptionsListWidget->setObjectName(QString::fromUtf8("m3DOptionsListWidget"));
        m3DOptionsListWidget->setMinimumSize(QSize(32, 0));
        m3DOptionsListWidget->setProperty("showDropIndicator", QVariant(false));
        m3DOptionsListWidget->setIconSize(QSize(20, 20));

        verticalLayout_23->addWidget(m3DOptionsListWidget);

        m3DOptionsSplitter->addWidget(m3DOptionsListFrame);
        m3DOptionGroupsFrame = new QFrame(m3DOptionsSplitter);
        m3DOptionGroupsFrame->setObjectName(QString::fromUtf8("m3DOptionGroupsFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m3DOptionGroupsFrame->sizePolicy().hasHeightForWidth());
        m3DOptionGroupsFrame->setSizePolicy(sizePolicy1);
        m3DOptionGroupsFrame->setFrameShape(QFrame::NoFrame);
        m3DOptionGroupsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(m3DOptionGroupsFrame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        m3DOptionsStackedWidget = new QStackedWidget(m3DOptionGroupsFrame);
        m3DOptionsStackedWidget->setObjectName(QString::fromUtf8("m3DOptionsStackedWidget"));
        mPageGeneral = new QWidget();
        mPageGeneral->setObjectName(QString::fromUtf8("mPageGeneral"));
        verticalLayout_5 = new QVBoxLayout(mPageGeneral);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 0, 0, 0);
        scrollAreaGeneral = new QgsScrollArea(mPageGeneral);
        scrollAreaGeneral->setObjectName(QString::fromUtf8("scrollAreaGeneral"));
        scrollAreaGeneral->setFrameShape(QFrame::NoFrame);
        scrollAreaGeneral->setWidgetResizable(true);
        scrollAreaGeneralWidgetContents = new QWidget();
        scrollAreaGeneralWidgetContents->setObjectName(QString::fromUtf8("scrollAreaGeneralWidgetContents"));
        scrollAreaGeneralWidgetContents->setGeometry(QRect(0, 0, 813, 649));
        verticalLayout_7 = new QVBoxLayout(scrollAreaGeneralWidgetContents);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        groupExtent = new QgsExtentGroupBox(scrollAreaGeneralWidgetContents);
        groupExtent->setObjectName(QString::fromUtf8("groupExtent"));

        verticalLayout_7->addWidget(groupExtent);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        scrollAreaGeneral->setWidget(scrollAreaGeneralWidgetContents);

        verticalLayout_5->addWidget(scrollAreaGeneral);

        m3DOptionsStackedWidget->addWidget(mPageGeneral);
        mPageTerrain = new QWidget();
        mPageTerrain->setObjectName(QString::fromUtf8("mPageTerrain"));
        verticalLayout_61 = new QVBoxLayout(mPageTerrain);
        verticalLayout_61->setObjectName(QString::fromUtf8("verticalLayout_61"));
        verticalLayout_61->setContentsMargins(-1, 0, 0, 0);
        scrollAreaTerrain = new QgsScrollArea(mPageTerrain);
        scrollAreaTerrain->setObjectName(QString::fromUtf8("scrollAreaTerrain"));
        scrollAreaTerrain->setFrameShape(QFrame::NoFrame);
        scrollAreaTerrain->setWidgetResizable(true);
        scrollAreaTerrainWidgetContents = new QWidget();
        scrollAreaTerrainWidgetContents->setObjectName(QString::fromUtf8("scrollAreaTerrainWidgetContents"));
        scrollAreaTerrainWidgetContents->setGeometry(QRect(0, 0, 280, 283));
        verticalLayoutTerrain = new QVBoxLayout(scrollAreaTerrainWidgetContents);
        verticalLayoutTerrain->setObjectName(QString::fromUtf8("verticalLayoutTerrain"));
        verticalLayoutTerrain->setContentsMargins(0, 0, 0, 0);
        groupTerrain = new QGroupBox(scrollAreaTerrainWidgetContents);
        groupTerrain->setObjectName(QString::fromUtf8("groupTerrain"));
        groupTerrain->setCheckable(true);
        groupTerrain->setChecked(false);
        gridLayout1 = new QGridLayout(groupTerrain);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        labelTerrainResolution = new QLabel(groupTerrain);
        labelTerrainResolution->setObjectName(QString::fromUtf8("labelTerrainResolution"));

        gridLayout1->addWidget(labelTerrainResolution, 3, 0, 1, 1);

        spinTerrainSkirtHeight = new QgsDoubleSpinBox(groupTerrain);
        spinTerrainSkirtHeight->setObjectName(QString::fromUtf8("spinTerrainSkirtHeight"));
        spinTerrainSkirtHeight->setDecimals(1);
        spinTerrainSkirtHeight->setMaximum(10000.000000000000000);
        spinTerrainSkirtHeight->setSingleStep(10.000000000000000);

        gridLayout1->addWidget(spinTerrainSkirtHeight, 4, 1, 1, 2);

        cboTerrainType = new QComboBox(groupTerrain);
        cboTerrainType->setObjectName(QString::fromUtf8("cboTerrainType"));

        gridLayout1->addWidget(cboTerrainType, 0, 1, 1, 2);

        labelTerrainSkirtHeight = new QLabel(groupTerrain);
        labelTerrainSkirtHeight->setObjectName(QString::fromUtf8("labelTerrainSkirtHeight"));

        gridLayout1->addWidget(labelTerrainSkirtHeight, 4, 0, 1, 1);

        cboTerrainLayer = new QgsMapLayerComboBox(groupTerrain);
        cboTerrainLayer->setObjectName(QString::fromUtf8("cboTerrainLayer"));

        gridLayout1->addWidget(cboTerrainLayer, 1, 1, 1, 2);

        spinTerrainResolution = new QgsSpinBox(groupTerrain);
        spinTerrainResolution->setObjectName(QString::fromUtf8("spinTerrainResolution"));
        spinTerrainResolution->setMaximum(4096);

        gridLayout1->addWidget(spinTerrainResolution, 3, 1, 1, 2);

        labelTerrainLayer = new QLabel(groupTerrain);
        labelTerrainLayer->setObjectName(QString::fromUtf8("labelTerrainLayer"));

        gridLayout1->addWidget(labelTerrainLayer, 1, 0, 1, 1);

        spinTerrainScale = new QgsDoubleSpinBox(groupTerrain);
        spinTerrainScale->setObjectName(QString::fromUtf8("spinTerrainScale"));
        spinTerrainScale->setValue(1.000000000000000);

        gridLayout1->addWidget(spinTerrainScale, 2, 1, 1, 2);

        labelTerrainType = new QLabel(groupTerrain);
        labelTerrainType->setObjectName(QString::fromUtf8("labelTerrainType"));

        gridLayout1->addWidget(labelTerrainType, 0, 0, 1, 1);

        labelTerrainScale = new QLabel(groupTerrain);
        labelTerrainScale->setObjectName(QString::fromUtf8("labelTerrainScale"));

        gridLayout1->addWidget(labelTerrainScale, 2, 0, 1, 1);

        terrainElevationOffsetSpinBox = new QgsDoubleSpinBox(groupTerrain);
        terrainElevationOffsetSpinBox->setObjectName(QString::fromUtf8("terrainElevationOffsetSpinBox"));
        terrainElevationOffsetSpinBox->setMinimum(-1000000.000000000000000);
        terrainElevationOffsetSpinBox->setMaximum(1000000.000000000000000);

        gridLayout1->addWidget(terrainElevationOffsetSpinBox, 5, 1, 1, 2);

        labelterrainElevationOffset = new QLabel(groupTerrain);
        labelterrainElevationOffset->setObjectName(QString::fromUtf8("labelterrainElevationOffset"));

        gridLayout1->addWidget(labelterrainElevationOffset, 5, 0, 1, 1);


        verticalLayoutTerrain->addWidget(groupTerrain);

        groupMeshTerrainShading = new QFrame(scrollAreaTerrainWidgetContents);
        groupMeshTerrainShading->setObjectName(QString::fromUtf8("groupMeshTerrainShading"));
        verticalLayout = new QVBoxLayout(groupMeshTerrainShading);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        verticalLayoutTerrain->addWidget(groupMeshTerrainShading);

        groupTerrainShading = new QGroupBox(scrollAreaTerrainWidgetContents);
        groupTerrainShading->setObjectName(QString::fromUtf8("groupTerrainShading"));
        groupTerrainShading->setCheckable(true);
        verticalLayout_2 = new QVBoxLayout(groupTerrainShading);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widgetTerrainMaterial = new QgsPhongMaterialWidget(groupTerrainShading);
        widgetTerrainMaterial->setObjectName(QString::fromUtf8("widgetTerrainMaterial"));
        widgetTerrainMaterial->setHasOpacity(false);

        verticalLayout_2->addWidget(widgetTerrainMaterial);


        verticalLayoutTerrain->addWidget(groupTerrainShading);

        verticalSpacerTerrain = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutTerrain->addItem(verticalSpacerTerrain);

        scrollAreaTerrain->setWidget(scrollAreaTerrainWidgetContents);

        verticalLayout_61->addWidget(scrollAreaTerrain);

        m3DOptionsStackedWidget->addWidget(mPageTerrain);
        mPageLight = new QWidget();
        mPageLight->setObjectName(QString::fromUtf8("mPageLight"));
        verticalLayout_64 = new QVBoxLayout(mPageLight);
        verticalLayout_64->setObjectName(QString::fromUtf8("verticalLayout_64"));
        verticalLayout_64->setContentsMargins(-1, 0, 0, 0);
        scrollAreaLight = new QgsScrollArea(mPageLight);
        scrollAreaLight->setObjectName(QString::fromUtf8("scrollAreaLight"));
        scrollAreaLight->setFrameShape(QFrame::NoFrame);
        scrollAreaLight->setWidgetResizable(true);
        scrollAreaLightWidgetContents = new QWidget();
        scrollAreaLightWidgetContents->setObjectName(QString::fromUtf8("scrollAreaLightWidgetContents"));
        scrollAreaLightWidgetContents->setGeometry(QRect(0, 0, 77, 43));
        verticalLayoutLight = new QVBoxLayout(scrollAreaLightWidgetContents);
        verticalLayoutLight->setObjectName(QString::fromUtf8("verticalLayoutLight"));
        verticalLayoutLight->setContentsMargins(0, 0, 0, 0);
        groupLights = new QGroupBox(scrollAreaLightWidgetContents);
        groupLights->setObjectName(QString::fromUtf8("groupLights"));
        verticalLayout_31 = new QVBoxLayout(groupLights);
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        verticalLayout_31->setContentsMargins(0, 0, 0, 0);
        widgetLights = new QgsLightsWidget(groupLights);
        widgetLights->setObjectName(QString::fromUtf8("widgetLights"));

        verticalLayout_31->addWidget(widgetLights);


        verticalLayoutLight->addWidget(groupLights);

        verticalSpacerLights = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutLight->addItem(verticalSpacerLights);

        scrollAreaLight->setWidget(scrollAreaLightWidgetContents);

        verticalLayout_64->addWidget(scrollAreaLight);

        m3DOptionsStackedWidget->addWidget(mPageLight);
        mPageEffects = new QWidget();
        mPageEffects->setObjectName(QString::fromUtf8("mPageEffects"));
        verticalLayout_6 = new QVBoxLayout(mPageEffects);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(-1, 0, 0, 0);
        scrollAreaShadow = new QgsScrollArea(mPageEffects);
        scrollAreaShadow->setObjectName(QString::fromUtf8("scrollAreaShadow"));
        scrollAreaShadow->setFrameShape(QFrame::NoFrame);
        scrollAreaShadow->setWidgetResizable(true);
        scrollAreaShadowWidgetContents = new QWidget();
        scrollAreaShadowWidgetContents->setObjectName(QString::fromUtf8("scrollAreaShadowWidgetContents"));
        scrollAreaShadowWidgetContents->setGeometry(QRect(0, 0, 149, 43));
        verticalLayoutShadow = new QVBoxLayout(scrollAreaShadowWidgetContents);
        verticalLayoutShadow->setObjectName(QString::fromUtf8("verticalLayoutShadow"));
        verticalLayoutShadow->setContentsMargins(0, 0, 0, 0);
        groupShadowRendering = new QGroupBox(scrollAreaShadowWidgetContents);
        groupShadowRendering->setObjectName(QString::fromUtf8("groupShadowRendering"));
        groupShadowRendering->setCheckable(true);
        groupShadowRendering->setChecked(false);
        gridLayout_6 = new QGridLayout(groupShadowRendering);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));

        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);


        verticalLayoutShadow->addWidget(groupShadowRendering);

        edlGroupBox = new QGroupBox(scrollAreaShadowWidgetContents);
        edlGroupBox->setObjectName(QString::fromUtf8("edlGroupBox"));
        edlGroupBox->setCheckable(true);
        edlGroupBox->setChecked(false);
        gridLayout_2 = new QGridLayout(edlGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        edlStrengthSpinBox = new QgsDoubleSpinBox(edlGroupBox);
        edlStrengthSpinBox->setObjectName(QString::fromUtf8("edlStrengthSpinBox"));
        edlStrengthSpinBox->setMaximum(10000.000000000000000);
        edlStrengthSpinBox->setSingleStep(100.000000000000000);
        edlStrengthSpinBox->setValue(1000.000000000000000);

        gridLayout_2->addWidget(edlStrengthSpinBox, 0, 1, 1, 1);

        label = new QLabel(edlGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(edlGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        edlDistanceSpinBox = new QgsSpinBox(edlGroupBox);
        edlDistanceSpinBox->setObjectName(QString::fromUtf8("edlDistanceSpinBox"));
        edlDistanceSpinBox->setMinimum(1);
        edlDistanceSpinBox->setMaximum(20);

        gridLayout_2->addWidget(edlDistanceSpinBox, 1, 1, 1, 1);


        verticalLayoutShadow->addWidget(edlGroupBox);

        mAmbientOcclusionSettingsWidget = new QgsAmbientOcclusionSettingsWidget(scrollAreaShadowWidgetContents);
        mAmbientOcclusionSettingsWidget->setObjectName(QString::fromUtf8("mAmbientOcclusionSettingsWidget"));

        verticalLayoutShadow->addWidget(mAmbientOcclusionSettingsWidget);

        verticalSpacerShadow = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutShadow->addItem(verticalSpacerShadow);

        scrollAreaShadow->setWidget(scrollAreaShadowWidgetContents);

        verticalLayout_6->addWidget(scrollAreaShadow);

        m3DOptionsStackedWidget->addWidget(mPageEffects);
        mPageCameraSkybox = new QWidget();
        mPageCameraSkybox->setObjectName(QString::fromUtf8("mPageCameraSkybox"));
        verticalLayout_62 = new QVBoxLayout(mPageCameraSkybox);
        verticalLayout_62->setObjectName(QString::fromUtf8("verticalLayout_62"));
        verticalLayout_62->setContentsMargins(-1, 0, 0, 0);
        scrollAreaCameraSkybox = new QgsScrollArea(mPageCameraSkybox);
        scrollAreaCameraSkybox->setObjectName(QString::fromUtf8("scrollAreaCameraSkybox"));
        scrollAreaCameraSkybox->setFrameShape(QFrame::NoFrame);
        scrollAreaCameraSkybox->setWidgetResizable(true);
        scrollAreaCameraSkyboxWidgetContents = new QWidget();
        scrollAreaCameraSkyboxWidgetContents->setObjectName(QString::fromUtf8("scrollAreaCameraSkyboxWidgetContents"));
        scrollAreaCameraSkyboxWidgetContents->setGeometry(QRect(0, 0, 335, 488));
        verticalLayoutCameraSkybox = new QVBoxLayout(scrollAreaCameraSkyboxWidgetContents);
        verticalLayoutCameraSkybox->setObjectName(QString::fromUtf8("verticalLayoutCameraSkybox"));
        verticalLayoutCameraSkybox->setContentsMargins(0, 0, 0, 0);
        cameraTerrain = new QGroupBox(scrollAreaCameraSkyboxWidgetContents);
        cameraTerrain->setObjectName(QString::fromUtf8("cameraTerrain"));
        gridLayout = new QGridLayout(cameraTerrain);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelCameraProjectionType = new QLabel(cameraTerrain);
        labelCameraProjectionType->setObjectName(QString::fromUtf8("labelCameraProjectionType"));

        gridLayout->addWidget(labelCameraProjectionType, 1, 0, 1, 1);

        spinCameraFieldOfView = new QgsSpinBox(cameraTerrain);
        spinCameraFieldOfView->setObjectName(QString::fromUtf8("spinCameraFieldOfView"));
        spinCameraFieldOfView->setMaximum(180);

        gridLayout->addWidget(spinCameraFieldOfView, 2, 1, 1, 2);

        labelFieldofView = new QLabel(cameraTerrain);
        labelFieldofView->setObjectName(QString::fromUtf8("labelFieldofView"));

        gridLayout->addWidget(labelFieldofView, 2, 0, 1, 1);

        cboCameraProjectionType = new QComboBox(cameraTerrain);
        cboCameraProjectionType->setObjectName(QString::fromUtf8("cboCameraProjectionType"));

        gridLayout->addWidget(cboCameraProjectionType, 1, 1, 1, 2);

        labelCameraNavigationMode = new QLabel(cameraTerrain);
        labelCameraNavigationMode->setObjectName(QString::fromUtf8("labelCameraNavigationMode"));

        gridLayout->addWidget(labelCameraNavigationMode, 3, 0, 1, 1);

        mCameraNavigationModeCombo = new QComboBox(cameraTerrain);
        mCameraNavigationModeCombo->setObjectName(QString::fromUtf8("mCameraNavigationModeCombo"));

        gridLayout->addWidget(mCameraNavigationModeCombo, 3, 1, 1, 2);

        mCameraMovementSpeed = new QgsDoubleSpinBox(cameraTerrain);
        mCameraMovementSpeed->setObjectName(QString::fromUtf8("mCameraMovementSpeed"));
        mCameraMovementSpeed->setMinimum(0.010000000000000);
        mCameraMovementSpeed->setSingleStep(1.000000000000000);
        mCameraMovementSpeed->setValue(5.000000000000000);

        gridLayout->addWidget(mCameraMovementSpeed, 4, 1, 1, 2);

        labelMovementSpeed = new QLabel(cameraTerrain);
        labelMovementSpeed->setObjectName(QString::fromUtf8("labelMovementSpeed"));

        gridLayout->addWidget(labelMovementSpeed, 4, 0, 1, 1);


        verticalLayoutCameraSkybox->addWidget(cameraTerrain);

        mGroupBox3dAxis = new QGroupBox(scrollAreaCameraSkyboxWidgetContents);
        mGroupBox3dAxis->setObjectName(QString::fromUtf8("mGroupBox3dAxis"));
        mGroupBox3dAxis->setCheckable(true);
        formLayout_2 = new QFormLayout(mGroupBox3dAxis);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        mLabel3dAxisType_2 = new QLabel(mGroupBox3dAxis);
        mLabel3dAxisType_2->setObjectName(QString::fromUtf8("mLabel3dAxisType_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, mLabel3dAxisType_2);

        mCbo3dAxisType = new QComboBox(mGroupBox3dAxis);
        mCbo3dAxisType->setObjectName(QString::fromUtf8("mCbo3dAxisType"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, mCbo3dAxisType);

        mLabel3dAxisHorizPos_2 = new QLabel(mGroupBox3dAxis);
        mLabel3dAxisHorizPos_2->setObjectName(QString::fromUtf8("mLabel3dAxisHorizPos_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, mLabel3dAxisHorizPos_2);

        mCbo3dAxisHorizPos = new QComboBox(mGroupBox3dAxis);
        mCbo3dAxisHorizPos->setObjectName(QString::fromUtf8("mCbo3dAxisHorizPos"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, mCbo3dAxisHorizPos);

        mLabel3dAxisVertPos_2 = new QLabel(mGroupBox3dAxis);
        mLabel3dAxisVertPos_2->setObjectName(QString::fromUtf8("mLabel3dAxisVertPos_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, mLabel3dAxisVertPos_2);

        mCbo3dAxisVertPos = new QComboBox(mGroupBox3dAxis);
        mCbo3dAxisVertPos->setObjectName(QString::fromUtf8("mCbo3dAxisVertPos"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, mCbo3dAxisVertPos);


        verticalLayoutCameraSkybox->addWidget(mGroupBox3dAxis);

        groupBox = new QGroupBox(scrollAreaCameraSkyboxWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_8 = new QGridLayout(groupBox);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        mSync2DTo3DCheckbox = new QCheckBox(groupBox);
        mSync2DTo3DCheckbox->setObjectName(QString::fromUtf8("mSync2DTo3DCheckbox"));

        gridLayout_8->addWidget(mSync2DTo3DCheckbox, 0, 0, 1, 1);

        mSync3DTo2DCheckbox = new QCheckBox(groupBox);
        mSync3DTo2DCheckbox->setObjectName(QString::fromUtf8("mSync3DTo2DCheckbox"));

        gridLayout_8->addWidget(mSync3DTo2DCheckbox, 1, 0, 1, 1);

        mVisualizeExtentCheckBox = new QCheckBox(groupBox);
        mVisualizeExtentCheckBox->setObjectName(QString::fromUtf8("mVisualizeExtentCheckBox"));

        gridLayout_8->addWidget(mVisualizeExtentCheckBox, 2, 0, 1, 1);


        verticalLayoutCameraSkybox->addWidget(groupBox);

        groupSkyboxSettings = new QGroupBox(scrollAreaCameraSkyboxWidgetContents);
        groupSkyboxSettings->setObjectName(QString::fromUtf8("groupSkyboxSettings"));
        groupSkyboxSettings->setCheckable(true);
        groupSkyboxSettings->setChecked(false);
        gridLayout_3 = new QGridLayout(groupSkyboxSettings);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));

        verticalLayoutCameraSkybox->addWidget(groupSkyboxSettings);

        verticalSpacerCameraSkybox = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutCameraSkybox->addItem(verticalSpacerCameraSkybox);

        scrollAreaCameraSkybox->setWidget(scrollAreaCameraSkyboxWidgetContents);

        verticalLayout_62->addWidget(scrollAreaCameraSkybox);

        m3DOptionsStackedWidget->addWidget(mPageCameraSkybox);
        mPageAdvanced = new QWidget();
        mPageAdvanced->setObjectName(QString::fromUtf8("mPageAdvanced"));
        verticalLayout_63 = new QVBoxLayout(mPageAdvanced);
        verticalLayout_63->setObjectName(QString::fromUtf8("verticalLayout_63"));
        verticalLayout_63->setContentsMargins(-1, 0, 0, 0);
        scrollAreaAdvanced = new QgsScrollArea(mPageAdvanced);
        scrollAreaAdvanced->setObjectName(QString::fromUtf8("scrollAreaAdvanced"));
        scrollAreaAdvanced->setFrameShape(QFrame::NoFrame);
        scrollAreaAdvanced->setWidgetResizable(true);
        scrollAreaAdvancedWidgetContents = new QWidget();
        scrollAreaAdvancedWidgetContents->setObjectName(QString::fromUtf8("scrollAreaAdvancedWidgetContents"));
        scrollAreaAdvancedWidgetContents->setGeometry(QRect(0, 0, 803, 706));
        verticalLayoutAdvanced = new QVBoxLayout(scrollAreaAdvancedWidgetContents);
        verticalLayoutAdvanced->setObjectName(QString::fromUtf8("verticalLayoutAdvanced"));
        verticalLayoutAdvanced->setContentsMargins(0, 0, 0, 0);
        groupAdvanced = new QGroupBox(scrollAreaAdvancedWidgetContents);
        groupAdvanced->setObjectName(QString::fromUtf8("groupAdvanced"));
        gridLayout_11 = new QGridLayout(groupAdvanced);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        mDebugDepthMapGroupBox = new QGroupBox(groupAdvanced);
        mDebugDepthMapGroupBox->setObjectName(QString::fromUtf8("mDebugDepthMapGroupBox"));
        mDebugDepthMapGroupBox->setCheckable(true);
        mDebugDepthMapGroupBox->setChecked(false);
        gridLayout_9 = new QGridLayout(mDebugDepthMapGroupBox);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        mDebugDepthMapCornerComboBox = new QComboBox(mDebugDepthMapGroupBox);
        mDebugDepthMapCornerComboBox->setObjectName(QString::fromUtf8("mDebugDepthMapCornerComboBox"));

        gridLayout_9->addWidget(mDebugDepthMapCornerComboBox, 0, 1, 1, 1);

        label_11 = new QLabel(mDebugDepthMapGroupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_9->addWidget(label_11, 1, 0, 1, 1);

        label_9 = new QLabel(mDebugDepthMapGroupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_9->addWidget(label_9, 0, 0, 1, 1);

        mDebugDepthMapSizeSpinBox = new QgsDoubleSpinBox(mDebugDepthMapGroupBox);
        mDebugDepthMapSizeSpinBox->setObjectName(QString::fromUtf8("mDebugDepthMapSizeSpinBox"));
        mDebugDepthMapSizeSpinBox->setMaximum(1.000000000000000);
        mDebugDepthMapSizeSpinBox->setSingleStep(0.100000000000000);
        mDebugDepthMapSizeSpinBox->setValue(0.100000000000000);

        gridLayout_9->addWidget(mDebugDepthMapSizeSpinBox, 1, 1, 1, 1);


        gridLayout_11->addWidget(mDebugDepthMapGroupBox, 2, 0, 1, 1);

        gridLayoutAdvanced = new QGridLayout();
        gridLayoutAdvanced->setObjectName(QString::fromUtf8("gridLayoutAdvanced"));
        spinScreenError = new QgsDoubleSpinBox(groupAdvanced);
        spinScreenError->setObjectName(QString::fromUtf8("spinScreenError"));
        spinScreenError->setDecimals(1);

        gridLayoutAdvanced->addWidget(spinScreenError, 1, 1, 1, 1);

        chkShowLightSourceOrigins = new QCheckBox(groupAdvanced);
        chkShowLightSourceOrigins->setObjectName(QString::fromUtf8("chkShowLightSourceOrigins"));

        gridLayoutAdvanced->addWidget(chkShowLightSourceOrigins, 10, 0, 1, 2);

        chkShowBoundingBoxes = new QCheckBox(groupAdvanced);
        chkShowBoundingBoxes->setObjectName(QString::fromUtf8("chkShowBoundingBoxes"));

        gridLayoutAdvanced->addWidget(chkShowBoundingBoxes, 7, 0, 1, 2);

        chkShowTileInfo = new QCheckBox(groupAdvanced);
        chkShowTileInfo->setObjectName(QString::fromUtf8("chkShowTileInfo"));

        gridLayoutAdvanced->addWidget(chkShowTileInfo, 6, 0, 1, 2);

        spinGroundError = new QgsDoubleSpinBox(groupAdvanced);
        spinGroundError->setObjectName(QString::fromUtf8("spinGroundError"));
        spinGroundError->setDecimals(1);
        spinGroundError->setMinimum(0.100000000000000);
        spinGroundError->setMaximum(1000.000000000000000);
        spinGroundError->setValue(1.000000000000000);

        gridLayoutAdvanced->addWidget(spinGroundError, 2, 1, 1, 1);

        label_5 = new QLabel(groupAdvanced);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayoutAdvanced->addWidget(label_5, 1, 0, 1, 1);

        chkShowLabels = new QCheckBox(groupAdvanced);
        chkShowLabels->setObjectName(QString::fromUtf8("chkShowLabels"));

        gridLayoutAdvanced->addWidget(chkShowLabels, 5, 0, 1, 2);

        spinMapResolution = new QgsSpinBox(groupAdvanced);
        spinMapResolution->setObjectName(QString::fromUtf8("spinMapResolution"));
        spinMapResolution->setMaximum(4096);

        gridLayoutAdvanced->addWidget(spinMapResolution, 0, 1, 1, 1);

        chkShowCameraViewCenter = new QCheckBox(groupAdvanced);
        chkShowCameraViewCenter->setObjectName(QString::fromUtf8("chkShowCameraViewCenter"));

        gridLayoutAdvanced->addWidget(chkShowCameraViewCenter, 8, 0, 1, 2);

        label_4 = new QLabel(groupAdvanced);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayoutAdvanced->addWidget(label_4, 0, 0, 1, 1);

        mFpsCounterCheckBox = new QCheckBox(groupAdvanced);
        mFpsCounterCheckBox->setObjectName(QString::fromUtf8("mFpsCounterCheckBox"));

        gridLayoutAdvanced->addWidget(mFpsCounterCheckBox, 11, 0, 1, 2);

        mDebugOverlayCheckBox = new QCheckBox(groupAdvanced);
        mDebugOverlayCheckBox->setObjectName(QString::fromUtf8("mDebugOverlayCheckBox"));
        mDebugOverlayCheckBox->setVisible(false);

        gridLayoutAdvanced->addWidget(mDebugOverlayCheckBox, 12, 0, 1, 2);

        label_7 = new QLabel(groupAdvanced);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayoutAdvanced->addWidget(label_7, 3, 0, 1, 1);

        label_6 = new QLabel(groupAdvanced);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayoutAdvanced->addWidget(label_6, 2, 0, 1, 1);

        labelZoomLevels = new QLabel(groupAdvanced);
        labelZoomLevels->setObjectName(QString::fromUtf8("labelZoomLevels"));

        gridLayoutAdvanced->addWidget(labelZoomLevels, 3, 1, 1, 1);

        chkShowCameraRotationCenter = new QCheckBox(groupAdvanced);
        chkShowCameraRotationCenter->setObjectName(QString::fromUtf8("chkShowCameraRotationCenter"));

        gridLayoutAdvanced->addWidget(chkShowCameraRotationCenter, 9, 0, 1, 1);


        gridLayout_11->addLayout(gridLayoutAdvanced, 0, 0, 1, 1);

        mDebugShadowMapGroupBox = new QGroupBox(groupAdvanced);
        mDebugShadowMapGroupBox->setObjectName(QString::fromUtf8("mDebugShadowMapGroupBox"));
        mDebugShadowMapGroupBox->setCheckable(true);
        mDebugShadowMapGroupBox->setChecked(false);
        gridLayout_10 = new QGridLayout(mDebugShadowMapGroupBox);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        mDebugShadowMapCornerComboBox = new QComboBox(mDebugShadowMapGroupBox);
        mDebugShadowMapCornerComboBox->setObjectName(QString::fromUtf8("mDebugShadowMapCornerComboBox"));

        gridLayout_10->addWidget(mDebugShadowMapCornerComboBox, 0, 1, 1, 1);

        label_8 = new QLabel(mDebugShadowMapGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_10->addWidget(label_8, 0, 0, 1, 1);

        label_10 = new QLabel(mDebugShadowMapGroupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_10->addWidget(label_10, 1, 0, 1, 1);

        mDebugShadowMapSizeSpinBox = new QgsDoubleSpinBox(mDebugShadowMapGroupBox);
        mDebugShadowMapSizeSpinBox->setObjectName(QString::fromUtf8("mDebugShadowMapSizeSpinBox"));
        mDebugShadowMapSizeSpinBox->setMaximum(1.000000000000000);
        mDebugShadowMapSizeSpinBox->setSingleStep(0.100000000000000);
        mDebugShadowMapSizeSpinBox->setValue(0.100000000000000);

        gridLayout_10->addWidget(mDebugShadowMapSizeSpinBox, 1, 1, 1, 1);


        gridLayout_11->addWidget(mDebugShadowMapGroupBox, 1, 0, 1, 1);

        verticalSpacerAdvanced = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacerAdvanced, 3, 0, 1, 1);


        verticalLayoutAdvanced->addWidget(groupAdvanced);

        scrollAreaAdvanced->setWidget(scrollAreaAdvancedWidgetContents);

        verticalLayout_63->addWidget(scrollAreaAdvanced);

        m3DOptionsStackedWidget->addWidget(mPageAdvanced);

        verticalLayout_3->addWidget(m3DOptionsStackedWidget);

        m3DOptionsSplitter->addWidget(m3DOptionGroupsFrame);

        verticalLayout_4->addWidget(m3DOptionsSplitter);

        verticalLayout_4->setStretch(1, 1);
        QWidget::setTabOrder(m3DOptionsListWidget, scrollAreaTerrain);
        QWidget::setTabOrder(scrollAreaTerrain, cboTerrainType);
        QWidget::setTabOrder(cboTerrainType, cboTerrainLayer);
        QWidget::setTabOrder(cboTerrainLayer, spinTerrainScale);
        QWidget::setTabOrder(spinTerrainScale, spinTerrainResolution);
        QWidget::setTabOrder(spinTerrainResolution, spinTerrainSkirtHeight);
        QWidget::setTabOrder(spinTerrainSkirtHeight, terrainElevationOffsetSpinBox);
        QWidget::setTabOrder(terrainElevationOffsetSpinBox, groupTerrainShading);
        QWidget::setTabOrder(groupTerrainShading, scrollAreaLight);
        QWidget::setTabOrder(scrollAreaLight, scrollAreaShadow);
        QWidget::setTabOrder(scrollAreaShadow, groupShadowRendering);
        QWidget::setTabOrder(groupShadowRendering, scrollAreaCameraSkybox);
        QWidget::setTabOrder(scrollAreaCameraSkybox, cboCameraProjectionType);
        QWidget::setTabOrder(cboCameraProjectionType, spinCameraFieldOfView);
        QWidget::setTabOrder(spinCameraFieldOfView, mCameraNavigationModeCombo);
        QWidget::setTabOrder(mCameraNavigationModeCombo, mCameraMovementSpeed);
        QWidget::setTabOrder(mCameraMovementSpeed, groupSkyboxSettings);
        QWidget::setTabOrder(groupSkyboxSettings, scrollAreaAdvanced);
        QWidget::setTabOrder(scrollAreaAdvanced, spinMapResolution);
        QWidget::setTabOrder(spinMapResolution, spinScreenError);
        QWidget::setTabOrder(spinScreenError, spinGroundError);
        QWidget::setTabOrder(spinGroundError, chkShowLabels);
        QWidget::setTabOrder(chkShowLabels, chkShowTileInfo);
        QWidget::setTabOrder(chkShowTileInfo, chkShowBoundingBoxes);
        QWidget::setTabOrder(chkShowBoundingBoxes, chkShowCameraViewCenter);
        QWidget::setTabOrder(chkShowCameraViewCenter, chkShowLightSourceOrigins);
        QWidget::setTabOrder(chkShowLightSourceOrigins, mFpsCounterCheckBox);
        QWidget::setTabOrder(mFpsCounterCheckBox, edlGroupBox);
        QWidget::setTabOrder(edlGroupBox, edlStrengthSpinBox);
        QWidget::setTabOrder(edlStrengthSpinBox, edlDistanceSpinBox);
        QWidget::setTabOrder(edlDistanceSpinBox, mDebugShadowMapGroupBox);
        QWidget::setTabOrder(mDebugShadowMapGroupBox, mDebugShadowMapCornerComboBox);
        QWidget::setTabOrder(mDebugShadowMapCornerComboBox, mDebugShadowMapSizeSpinBox);
        QWidget::setTabOrder(mDebugShadowMapSizeSpinBox, mDebugDepthMapGroupBox);
        QWidget::setTabOrder(mDebugDepthMapGroupBox, mDebugDepthMapCornerComboBox);
        QWidget::setTabOrder(mDebugDepthMapCornerComboBox, mDebugDepthMapSizeSpinBox);

        retranslateUi(Map3DConfigWidget);

        m3DOptionsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Map3DConfigWidget);
    } // setupUi

    void retranslateUi(QWidget *Map3DConfigWidget)
    {
        Map3DConfigWidget->setWindowTitle(QCoreApplication::translate("Map3DConfigWidget", "Configure 3D Map Rendering", nullptr));

        const bool __sortingEnabled = m3DOptionsListWidget->isSortingEnabled();
        m3DOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = m3DOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("Map3DConfigWidget", "General", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem->setToolTip(QCoreApplication::translate("Map3DConfigWidget", "General settings", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem1 = m3DOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("Map3DConfigWidget", "Terrain", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem1->setToolTip(QCoreApplication::translate("Map3DConfigWidget", "Terrain settings", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem2 = m3DOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("Map3DConfigWidget", "Lights", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem2->setToolTip(QCoreApplication::translate("Map3DConfigWidget", "Lights settings", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem3 = m3DOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("Map3DConfigWidget", "Effects", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem3->setToolTip(QCoreApplication::translate("Map3DConfigWidget", "Effects settings", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem4 = m3DOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("Map3DConfigWidget", "Camera & Skybox", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem4->setToolTip(QCoreApplication::translate("Map3DConfigWidget", "Camera and skybox settings", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem5 = m3DOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("Map3DConfigWidget", "Advanced", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem5->setToolTip(QCoreApplication::translate("Map3DConfigWidget", "Advanced settings", nullptr));
#endif // QT_CONFIG(tooltip)
        m3DOptionsListWidget->setSortingEnabled(__sortingEnabled);

        groupExtent->setTitle(QCoreApplication::translate("Map3DConfigWidget", "Extent", nullptr));
        groupTerrain->setTitle(QCoreApplication::translate("Map3DConfigWidget", "Terrain", nullptr));
        labelTerrainResolution->setText(QCoreApplication::translate("Map3DConfigWidget", "Tile resolution", nullptr));
        spinTerrainSkirtHeight->setSuffix(QCoreApplication::translate("Map3DConfigWidget", " map units", nullptr));
        labelTerrainSkirtHeight->setText(QCoreApplication::translate("Map3DConfigWidget", "Skirt height", nullptr));
        spinTerrainResolution->setSuffix(QCoreApplication::translate("Map3DConfigWidget", " px", nullptr));
        labelTerrainLayer->setText(QCoreApplication::translate("Map3DConfigWidget", "Elevation", nullptr));
        labelTerrainType->setText(QCoreApplication::translate("Map3DConfigWidget", "Type", nullptr));
        labelTerrainScale->setText(QCoreApplication::translate("Map3DConfigWidget", "Vertical scale", nullptr));
        labelterrainElevationOffset->setText(QCoreApplication::translate("Map3DConfigWidget", "Offset", nullptr));
        groupTerrainShading->setTitle(QCoreApplication::translate("Map3DConfigWidget", "Terrain Shading", nullptr));
        groupLights->setTitle(QCoreApplication::translate("Map3DConfigWidget", "Lights", nullptr));
        groupShadowRendering->setTitle(QCoreApplication::translate("Map3DConfigWidget", "Show Shadows", nullptr));
        edlGroupBox->setTitle(QCoreApplication::translate("Map3DConfigWidget", "Show Eye Dome Lighting", nullptr));
        label->setText(QCoreApplication::translate("Map3DConfigWidget", "Lighting strength", nullptr));
        label_2->setText(QCoreApplication::translate("Map3DConfigWidget", "Lighting distance", nullptr));
        cameraTerrain->setTitle(QCoreApplication::translate("Map3DConfigWidget", "Camera", nullptr));
        labelCameraProjectionType->setText(QCoreApplication::translate("Map3DConfigWidget", "Projection type", nullptr));
        spinCameraFieldOfView->setSuffix(QCoreApplication::translate("Map3DConfigWidget", "\302\260", nullptr));
        labelFieldofView->setText(QCoreApplication::translate("Map3DConfigWidget", "Field of View", nullptr));
        labelCameraNavigationMode->setText(QCoreApplication::translate("Map3DConfigWidget", "Navigation mode", nullptr));
        labelMovementSpeed->setText(QCoreApplication::translate("Map3DConfigWidget", "Movement speed", nullptr));
        mGroupBox3dAxis->setTitle(QCoreApplication::translate("Map3DConfigWidget", "Show 3D Axis", nullptr));
        mLabel3dAxisType_2->setText(QCoreApplication::translate("Map3DConfigWidget", "Axis type", nullptr));
        mLabel3dAxisHorizPos_2->setText(QCoreApplication::translate("Map3DConfigWidget", "Horizontal position", nullptr));
        mLabel3dAxisVertPos_2->setText(QCoreApplication::translate("Map3DConfigWidget", "Vertical position", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Map3DConfigWidget", "Navigation Synchronization", nullptr));
        mSync2DTo3DCheckbox->setText(QCoreApplication::translate("Map3DConfigWidget", "2D map view follows 3D camera", nullptr));
        mSync3DTo2DCheckbox->setText(QCoreApplication::translate("Map3DConfigWidget", "3D camera follows 2D map view", nullptr));
        mVisualizeExtentCheckBox->setText(QCoreApplication::translate("Map3DConfigWidget", "Show visible camera area in 2D map view", nullptr));
        groupSkyboxSettings->setTitle(QCoreApplication::translate("Map3DConfigWidget", "Show Skybox", nullptr));
        groupAdvanced->setTitle(QCoreApplication::translate("Map3DConfigWidget", "Advanced Settings", nullptr));
        mDebugDepthMapGroupBox->setTitle(QCoreApplication::translate("Map3DConfigWidget", "Debug Depth Map", nullptr));
        label_11->setText(QCoreApplication::translate("Map3DConfigWidget", "Size", nullptr));
        label_9->setText(QCoreApplication::translate("Map3DConfigWidget", "Corner", nullptr));
        spinScreenError->setSuffix(QCoreApplication::translate("Map3DConfigWidget", " px", nullptr));
        chkShowLightSourceOrigins->setText(QCoreApplication::translate("Map3DConfigWidget", "Show light sources", nullptr));
        chkShowBoundingBoxes->setText(QCoreApplication::translate("Map3DConfigWidget", "Show bounding boxes", nullptr));
        chkShowTileInfo->setText(QCoreApplication::translate("Map3DConfigWidget", "Show map tile info", nullptr));
        spinGroundError->setSuffix(QCoreApplication::translate("Map3DConfigWidget", " map units", nullptr));
        label_5->setText(QCoreApplication::translate("Map3DConfigWidget", "Max. screen error", nullptr));
        chkShowLabels->setText(QCoreApplication::translate("Map3DConfigWidget", "Show labels", nullptr));
        spinMapResolution->setSuffix(QCoreApplication::translate("Map3DConfigWidget", " px", nullptr));
        chkShowCameraViewCenter->setText(QCoreApplication::translate("Map3DConfigWidget", "Show camera's view center", nullptr));
        label_4->setText(QCoreApplication::translate("Map3DConfigWidget", "Map tile resolution", nullptr));
        mFpsCounterCheckBox->setText(QCoreApplication::translate("Map3DConfigWidget", "Show frames per second (FPS)", nullptr));
        mDebugOverlayCheckBox->setText(QCoreApplication::translate("Map3DConfigWidget", "Show debug overlay", nullptr));
        label_7->setText(QCoreApplication::translate("Map3DConfigWidget", "Zoom levels", nullptr));
        label_6->setText(QCoreApplication::translate("Map3DConfigWidget", "Max. ground error", nullptr));
        labelZoomLevels->setText(QCoreApplication::translate("Map3DConfigWidget", "0", nullptr));
        chkShowCameraRotationCenter->setText(QCoreApplication::translate("Map3DConfigWidget", "Show camera's rotation center", nullptr));
        mDebugShadowMapGroupBox->setTitle(QCoreApplication::translate("Map3DConfigWidget", "Debug Shadow Map", nullptr));
        label_8->setText(QCoreApplication::translate("Map3DConfigWidget", "Corner", nullptr));
        label_10->setText(QCoreApplication::translate("Map3DConfigWidget", "Size", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Map3DConfigWidget: public Ui_Map3DConfigWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP3DCONFIGWIDGET_H
