/***************************************************************************
                         qgsprocessing.h
                         ---------------
    begin                : July 2017
    copyright            : (C) 2017 by Nyall Dawson
    email                : nyall dot dawson at gmail dot com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSPROCESSING_H
#define QGSPROCESSING_H

#include "qgis_core.h"
#include "qgssettingsentryimpl.h"
#include "qgssettingstree.h"
#include <QString>

//
// Output definitions
//

/**
 * \class QgsProcessing
 * \ingroup core
 *
 * \brief Contains enumerations and other constants for use in processing algorithms
 * and parameters.
 *
 * \since QGIS 3.0
 */

class CORE_EXPORT QgsProcessing
{

  public:

    //! Data source types enum
    enum SourceType
    {
      TypeMapLayer = -2, //!< Any map layer type (raster, vector, mesh, point cloud, annotation or plugin layer)
      TypeVectorAnyGeometry = -1, //!< Any vector layer with geometry
      TypeVectorPoint = 0, //!< Vector point layers
      TypeVectorLine = 1, //!< Vector line layers
      TypeVectorPolygon = 2, //!< Vector polygon layers
      TypeRaster = 3, //!< Raster layers
      TypeFile = 4, //!< Files (i.e. non map layer sources, such as text files)
      TypeVector = 5, //!< Tables (i.e. vector layers with or without geometry). When used for a sink this indicates the sink has no geometry.
      TypeMesh = 6, //!< Mesh layers \since QGIS 3.6
      TypePlugin = 7, //!< Plugin layers \since QGIS 3.22
      TypePointCloud = 8, //!< Point cloud layers \since QGIS 3.22
      TypeAnnotation = 9, //!< Annotation layers \since QGIS 3.22
      TypeVectorTile = 10 //!< Vector tile layers \since QGIS 3.32
    };

    //! Available Python output types
    enum PythonOutputType
    {
      PythonQgsProcessingAlgorithmSubclass, //!< Full Python QgsProcessingAlgorithm subclass
    };

    /**
     * Layer options flags
     *
     * \since QGIS 3.32
     */
    enum class LayerOptionsFlag : int
    {
      SkipIndexGeneration = 1 << 0, //!< Do not generate index when creating a layer. Makes sense only for point cloud layers
    };
    Q_DECLARE_FLAGS( LayerOptionsFlags, LayerOptionsFlag )

    /**
     * Converts a source \a type to a string representation.
     *
     * \since QGIS 3.6
     */
    static QString sourceTypeToString( SourceType type )
    {
      switch ( type )
      {
        case QgsProcessing::TypeMapLayer:
          return QStringLiteral( "TypeMapLayer" );
        case QgsProcessing::TypeVectorAnyGeometry:
          return QStringLiteral( "TypeVectorAnyGeometry" );
        case QgsProcessing::TypeVectorPoint:
          return QStringLiteral( "TypeVectorPoint" );
        case QgsProcessing::TypeVectorLine:
          return QStringLiteral( "TypeVectorLine" );
        case QgsProcessing::TypeVectorPolygon:
          return QStringLiteral( "TypeVectorPolygon" );
        case QgsProcessing::TypeRaster:
          return QStringLiteral( "TypeRaster" );
        case QgsProcessing::TypeFile:
          return QStringLiteral( "TypeFile" );
        case QgsProcessing::TypeVector:
          return QStringLiteral( "TypeVector" );
        case QgsProcessing::TypeMesh:
          return QStringLiteral( "TypeMesh" );
        case QgsProcessing::TypePlugin:
          return QStringLiteral( "TypePlugin" );
        case QgsProcessing::TypePointCloud:
          return QStringLiteral( "TypePointCloud" );
        case QgsProcessing::TypeAnnotation:
          return QStringLiteral( "TypeAnnotation" );
        case QgsProcessing::TypeVectorTile:
          return QStringLiteral( "TypeVectorTile" );
      }
      return QString();
    }

    /**
     * Constant used to indicate that a Processing algorithm output should be a temporary layer/file.
     *
     * \since QGIS 3.6
     */
    static const QString TEMPORARY_OUTPUT;

#ifndef SIP_RUN
    static inline QgsSettingsTreeNode *sTreeConfiguration = QgsSettingsTree::sTreeQgis->createChildNode( QStringLiteral( "configuration" ) );

    //! Settings entry prefer filename as layer name
    static const QgsSettingsEntryBool *settingsPreferFilenameAsLayerName;
    //! Settings entry temp path
    static const QgsSettingsEntryString *settingsTempPath;
    //! Settings entry default output vector layer ext
    static const QgsSettingsEntryInteger *settingsDefaultOutputVectorLayerExt;
    //! Settings entry default output raster layer ext
    static const QgsSettingsEntryInteger *settingsDefaultOutputRasterLayerExt;
#endif
};

#endif // QGSPROCESSING_H
