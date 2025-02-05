/***************************************************************************
    qgstextlabelfeature.h
    ---------------------
    begin                : December 2015
    copyright            : (C) 2015 by Martin Dobias
    email                : wonder dot sk at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#ifndef QGSTEXTLABELFEATURE_H
#define QGSTEXTLABELFEATURE_H

#define SIP_NO_FILE

#include "qgslabelfeature.h"

/**
 * \ingroup core
 * Class that adds extra information to QgsLabelFeature for text labels
 *
 * \note not part of public API
 */
class QgsTextLabelFeature : public QgsLabelFeature
{
  public:
    //! Construct text label feature
    QgsTextLabelFeature( QgsFeatureId id, geos::unique_ptr geometry, QSizeF size );

    //! Clean up
    ~QgsTextLabelFeature() override;

    /**
     * Returns the text component corresponding to a specified label part
     * \param partId Set to -1 for labels which are not broken into parts (e.g., non-curved labels), or the required
     * part index for labels which are broken into parts (curved labels)
     * \since QGIS 2.10
     */
    QString text( int partId ) const;

    //! calculate data for info(). setDefinedFont() must have been called already.
    void calculateInfo( bool curvedLabeling, QFontMetricsF *fm, const QgsMapToPixel *xform, double maxinangle, double maxoutangle );

    //! Gets data-defined values
    const QMap< QgsPalLayerSettings::Property, QVariant > &dataDefinedValues() const { return mDataDefinedValues; }
    //! Sets data-defined values
    void setDataDefinedValues( const QMap< QgsPalLayerSettings::Property, QVariant > &values ) { mDataDefinedValues = values; }

    //! Sets font to be used for rendering
    void setDefinedFont( const QFont &f ) { mDefinedFont = f; }
    //! Font to be used for rendering
    QFont definedFont() { return mDefinedFont; }

    //! Metrics of the font for rendering
    QFontMetricsF *labelFontMetrics() { return mFontMetrics; }

  protected:
    //! List of graphemes (used for curved labels)
    QStringList mClusters;
    //! Font for rendering
    QFont mDefinedFont;
    //! Metrics of the font for rendering
    QFontMetricsF *mFontMetrics = nullptr;
    //! Stores attribute values for data defined properties
    QMap< QgsPalLayerSettings::Property, QVariant > mDataDefinedValues;

};

#endif //QGSTEXTLABELFEATURE_H
