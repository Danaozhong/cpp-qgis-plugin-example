/***************************************************************************
  qgsvectortilelayerproperties.h
  --------------------------------------
  Date                 : May 2020
  Copyright            : (C) 2020 by Martin Dobias
  Email                : wonder dot sk at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSVECTORTILELAYERPROPERTIES_H
#define QGSVECTORTILELAYERPROPERTIES_H

#include "qgsoptionsdialogbase.h"
#include "ui_qgsvectortilelayerpropertiesbase.h"
#include "qgsmaplayerstyle.h"

class QgsMapLayer;
class QgsMapCanvas;
class QgsMessageBar;
class QgsVectorTileBasicLabelingWidget;
class QgsVectorTileBasicRendererWidget;
class QgsVectorTileLayer;
class QgsMetadataWidget;
class QgsProviderSourceWidget;


/**
 * \ingroup gui
 * \class QgsVectorTileLayerProperties
 * \brief Vectortile layer properties dialog
 * \since QGIS 3.28
 */
class GUI_EXPORT QgsVectorTileLayerProperties : public QgsOptionsDialogBase, private Ui::QgsVectorTileLayerPropertiesBase
{
    Q_OBJECT
  public:
    //! Constructor
    QgsVectorTileLayerProperties( QgsVectorTileLayer *lyr, QgsMapCanvas *canvas, QgsMessageBar *messageBar, QWidget *parent = nullptr, Qt::WindowFlags = QgsGuiUtils::ModalDialogFlags );

    /**
     * Loads the default style when appropriate button is pressed
     *
     * \since QGIS 3.30
     */
    void loadDefaultStyle();

    /**
     * Saves the default style when appropriate button is pressed
     *
     * \since QGIS 3.30
     */
    void saveDefaultStyle();

    /**
     * Loads a saved style when appropriate button is pressed
     *
     * \since QGIS 3.30
     */
    void loadStyle();

    /**
     * Saves a style when appriate button is pressed
     *
     * \since QGIS 3.30
     */
    void saveStyleAs();

  private slots:
    void apply();
    void onCancel();

    void aboutToShowStyleMenu();
    void loadMetadata();
    void saveMetadataAs();
    void showHelp();
    void urlClicked( const QUrl &url );
    void crsChanged( const QgsCoordinateReferenceSystem &crs );

  protected slots:
    void optionsStackedWidget_CurrentChanged( int index ) override SIP_SKIP ;

  private:
    void syncToLayer();

  private:
    QgsVectorTileLayer *mLayer = nullptr;

    QgsVectorTileBasicRendererWidget *mRendererWidget = nullptr;
    QgsVectorTileBasicLabelingWidget *mLabelingWidget = nullptr;

    QPushButton *mBtnStyle = nullptr;
    QPushButton *mBtnMetadata = nullptr;
    QAction *mActionLoadMetadata = nullptr;
    QAction *mActionSaveMetadataAs = nullptr;

    QgsMapCanvas *mMapCanvas = nullptr;
    QgsMetadataWidget *mMetadataWidget = nullptr;

    QgsProviderSourceWidget *mSourceWidget = nullptr;

    /**
     * Previous layer style. Used to reset style to previous state if new style
     * was loaded but dialog is canceled.
    */
    QgsMapLayerStyle mOldStyle;
};

#endif // QGSVECTORTILELAYERPROPERTIES_H
