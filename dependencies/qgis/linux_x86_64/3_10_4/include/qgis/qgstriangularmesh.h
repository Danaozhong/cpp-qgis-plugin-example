/***************************************************************************
                         qgstriangularmesh.h
                         -------------------
    begin                : April 2018
    copyright            : (C) 2018 by Peter Petrik
    email                : zilolv at gmail dot com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSTRIANGULARMESH_H
#define QGSTRIANGULARMESH_H


#define SIP_NO_FILE

#include <QVector>
#include <memory>
#include "qgis_core.h"
#include "qgsmeshdataprovider.h"
#include "qgsgeometry.h"
#include "qgsmeshspatialindex.h"

class QgsRenderContext;
class QgsCoordinateTransform;
class QgsRectangle;

/**
 * \ingroup core
 *
 * Triangular/Derived Mesh is mesh with vertices in map coordinates. It creates
 * spatial index for identification of a triangle that contains a particular point
 * on the map.
 *
 * \note The API is considered EXPERIMENTAL and can be changed without a notice
 *
 * \since QGIS 3.2
 */
class CORE_EXPORT QgsTriangularMesh
{
  public:
    //! Ctor
    QgsTriangularMesh();
    //! Dtor
    ~QgsTriangularMesh();

    /**
     * Constructs triangular mesh from layer's native mesh and context. Populates spatial index.
     * \param nativeMesh QgsMesh to access native vertices and faces
     * \param context Rendering context to estimate number of triagles to create for an face
    */
    void update( QgsMesh *nativeMesh, QgsRenderContext *context );

    /**
     * Returns vertices in map coordinate system
     *
     * The list of consist of vertices from native mesh (0-N) and
     * extra vertices needed to create triangles (N+1 - len)
     */
    const QVector<QgsMeshVertex> &vertices() const ;
    //! Returns triangles
    const QVector<QgsMeshFace> &triangles() const ;

    //! Returns centroids of the native faces in map CRS
    const QVector<QgsMeshVertex> &centroids() const ;

    //! Returns mapping between triangles and original faces
    const QVector<int> &trianglesToNativeFaces() const ;

    /**
     * Finds index of triangle at given point
     * It uses spatial indexing
     *
     * \param point point in map coordinate system
     * \returns triangle index that contains the given point, -1 if no such triangle exists
     *
     * \since QGIS 3.4
     */
    int faceIndexForPoint( const QgsPointXY &point ) const ;

    /**
     * Finds indexes of triangles intersecting given bounding box
     * It uses spatial indexing
     *
     * \param rectangle bounding box in map coordinate system
     * \returns triangle indexes that intersect the rectangle
     *
     * \since QGIS 3.4
     */
    QList<int> faceIndexesForRectangle( const QgsRectangle &rectangle ) const ;

  private:

    /**
     * Triangulates native face to triangles
     *
     * Triangulation does not create any new vertices and uses
     * "Ear clipping method". Number of vertices in face is usually
     * less than 10 and the faces are usually convex and without holes
     *
     * Skips the input face if it is not possible to triangulate
     * with the given algorithm (e.g. only 2 vertices, polygon with holes)
     */
    void triangulate( const QgsMeshFace &face, int nativeIndex );

    // vertices: map CRS; 0-N ... native vertices, N+1 - len ... extra vertices
    // faces are derived triangles
    QgsMesh mTriangularMesh;
    QVector<int> mTrianglesToNativeFaces; //len(mTrianglesToNativeFaces) == len(mTriangles). Mapping derived -> native

    // centroids of the native faces in map CRS
    QVector<QgsMeshVertex> mNativeMeshFaceCentroids;

    QgsMeshSpatialIndex mSpatialIndex;
    QgsCoordinateTransform mCoordinateTransform; //coordinate transform used to convert native mesh vertices to map vertices

    friend class TestQgsTriangularMesh;
};

namespace QgsMeshUtils
{
  //! Returns face as polygon geometry
  CORE_EXPORT QgsGeometry toGeometry( const QgsMeshFace &face, const QVector<QgsMeshVertex> &vertices );

  //! Returns face as polygon geometry, caller is responsible for delete
  CORE_EXPORT std::unique_ptr< QgsPolygon > toPolygon( const QgsMeshFace &face, const QVector<QgsMeshVertex> &vertices );

  /**
   * Returns unique native faces indexes from list of triangle indexes
   * \since QGIS 3.4
   */
  CORE_EXPORT QList<int> nativeFacesFromTriangles( const QList<int> &triangleIndexes, const QVector<int> &trianglesToNativeFaces );
};

#endif // QGSTRIANGULARMESH_H
