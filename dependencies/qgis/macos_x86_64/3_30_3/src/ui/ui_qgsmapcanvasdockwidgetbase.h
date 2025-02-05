/********************************************************************************
** Form generated from reading UI file 'qgsmapcanvasdockwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMAPCANVASDOCKWIDGETBASE_H
#define UI_QGSMAPCANVASDOCKWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdockwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMapCanvasDockWidgetBase
{
public:
    QAction *mActionSetCrs;
    QAction *mActionRename;
    QAction *mActionZoomToSelected;
    QAction *mActionZoomToLayer;
    QAction *mActionZoomToLayers;
    QAction *mActionZoomFullExtent;
    QAction *mActionShowAnnotations;
    QAction *mActionShowCursor;
    QAction *mActionShowExtent;
    QAction *mActionShowLabels;
    QWidget *mContents;
    QVBoxLayout *verticalLayout;
    QToolBar *mToolbar;
    QWidget *mMainWidget;

    void setupUi(QgsDockWidget *QgsMapCanvasDockWidgetBase)
    {
        if (QgsMapCanvasDockWidgetBase->objectName().isEmpty())
            QgsMapCanvasDockWidgetBase->setObjectName(QString::fromUtf8("QgsMapCanvasDockWidgetBase"));
        QgsMapCanvasDockWidgetBase->resize(216, 138);
        mActionSetCrs = new QAction(QgsMapCanvasDockWidgetBase);
        mActionSetCrs->setObjectName(QString::fromUtf8("mActionSetCrs"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/CRS.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSetCrs->setIcon(icon);
        mActionRename = new QAction(QgsMapCanvasDockWidgetBase);
        mActionRename->setObjectName(QString::fromUtf8("mActionRename"));
        mActionZoomToSelected = new QAction(QgsMapCanvasDockWidgetBase);
        mActionZoomToSelected->setObjectName(QString::fromUtf8("mActionZoomToSelected"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomToSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomToSelected->setIcon(icon1);
        mActionZoomToLayer = new QAction(QgsMapCanvasDockWidgetBase);
        mActionZoomToLayer->setObjectName(QString::fromUtf8("mActionZoomToLayer"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomToLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomToLayer->setIcon(icon2);
        mActionZoomToLayers = new QAction(QgsMapCanvasDockWidgetBase);
        mActionZoomToLayers->setObjectName(QString::fromUtf8("mActionZoomToLayers"));
        mActionZoomToLayers->setIcon(icon2);
        mActionZoomFullExtent = new QAction(QgsMapCanvasDockWidgetBase);
        mActionZoomFullExtent->setObjectName(QString::fromUtf8("mActionZoomFullExtent"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomFullExtent.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomFullExtent->setIcon(icon3);
        mActionShowAnnotations = new QAction(QgsMapCanvasDockWidgetBase);
        mActionShowAnnotations->setObjectName(QString::fromUtf8("mActionShowAnnotations"));
        mActionShowAnnotations->setCheckable(true);
        mActionShowCursor = new QAction(QgsMapCanvasDockWidgetBase);
        mActionShowCursor->setObjectName(QString::fromUtf8("mActionShowCursor"));
        mActionShowCursor->setCheckable(true);
        mActionShowExtent = new QAction(QgsMapCanvasDockWidgetBase);
        mActionShowExtent->setObjectName(QString::fromUtf8("mActionShowExtent"));
        mActionShowExtent->setCheckable(true);
        mActionShowLabels = new QAction(QgsMapCanvasDockWidgetBase);
        mActionShowLabels->setObjectName(QString::fromUtf8("mActionShowLabels"));
        mActionShowLabels->setCheckable(true);
        mContents = new QWidget();
        mContents->setObjectName(QString::fromUtf8("mContents"));
        verticalLayout = new QVBoxLayout(mContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mToolbar = new QToolBar(mContents);
        mToolbar->setObjectName(QString::fromUtf8("mToolbar"));
        mToolbar->setIconSize(QSize(16, 16));
        mToolbar->setFloatable(false);

        verticalLayout->addWidget(mToolbar);

        mMainWidget = new QWidget(mContents);
        mMainWidget->setObjectName(QString::fromUtf8("mMainWidget"));

        verticalLayout->addWidget(mMainWidget);

        QgsMapCanvasDockWidgetBase->setWidget(mContents);

        mToolbar->addAction(mActionZoomFullExtent);
        mToolbar->addAction(mActionZoomToSelected);
        mToolbar->addAction(mActionZoomToLayers);

        retranslateUi(QgsMapCanvasDockWidgetBase);

        QMetaObject::connectSlotsByName(QgsMapCanvasDockWidgetBase);
    } // setupUi

    void retranslateUi(QgsDockWidget *QgsMapCanvasDockWidgetBase)
    {
        QgsMapCanvasDockWidgetBase->setWindowTitle(QCoreApplication::translate("QgsMapCanvasDockWidgetBase", "Map Canvas", nullptr));
        mActionSetCrs->setText(QCoreApplication::translate("QgsMapCanvasDockWidgetBase", "Set Map CRS\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mActionSetCrs->setToolTip(QCoreApplication::translate("QgsMapCanvasDockWidgetBase", "Set Map CRS", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionRename->setText(QCoreApplication::translate("QgsMapCanvasDockWidgetBase", "Rename View\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mActionRename->setToolTip(QCoreApplication::translate("QgsMapCanvasDockWidgetBase", "Rename View", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionZoomToSelected->setText(QCoreApplication::translate("QgsMapCanvasDockWidgetBase", "Zoom to &Selection", nullptr));
        mActionZoomToLayer->setText(QCoreApplication::translate("QgsMapCanvasDockWidgetBase", "Zoom to &Layer", nullptr));
        mActionZoomToLayers->setText(QCoreApplication::translate("QgsMapCanvasDockWidgetBase", "Zoom to &Layers", nullptr));
        mActionZoomFullExtent->setText(QCoreApplication::translate("QgsMapCanvasDockWidgetBase", "Zoom &Full", nullptr));
        mActionShowAnnotations->setText(QCoreApplication::translate("QgsMapCanvasDockWidgetBase", "Show Annotations", nullptr));
#if QT_CONFIG(tooltip)
        mActionShowAnnotations->setToolTip(QCoreApplication::translate("QgsMapCanvasDockWidgetBase", "Show Annotations", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionShowCursor->setText(QCoreApplication::translate("QgsMapCanvasDockWidgetBase", "Show Cursor Position", nullptr));
        mActionShowExtent->setText(QCoreApplication::translate("QgsMapCanvasDockWidgetBase", "Show Main Canvas Extent", nullptr));
        mActionShowLabels->setText(QCoreApplication::translate("QgsMapCanvasDockWidgetBase", "Show Labels", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsMapCanvasDockWidgetBase: public Ui_QgsMapCanvasDockWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMAPCANVASDOCKWIDGETBASE_H
