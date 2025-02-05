/***************************************************************************
  qgsexternalresourcewidget.h

 ---------------------
 begin                : 16.12.2015
 copyright            : (C) 2015 by Denis Rouzaud
 email                : denis.rouzaud@gmail.com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSEXTERNALRESOURCEWIDGET_H
#define QGSEXTERNALRESOURCEWIDGET_H

class QWebView;
class QgsPixmapLabel;

#include <QWidget>
#include <QVariant>

#include "qgsfilewidget.h"
#include "qgis_gui.h"
#include "qgis_sip.h"


#ifdef SIP_RUN
% ModuleHeaderCode
// fix to allow compilation with sip that for some reason
// doesn't add this include to the file where the code from
// ConvertToSubClassCode goes.
#include <qgsexternalresourcewidget.h>
% End
#endif


/**
 * \ingroup gui
 * Widget to display file path with a push button for an "open file" dialog
 * It can also be used to display a picture or a web page.
 **/
class GUI_EXPORT QgsExternalResourceWidget : public QWidget
{

#ifdef SIP_RUN
    SIP_CONVERT_TO_SUBCLASS_CODE
    if ( qobject_cast<QgsExternalResourceWidget *>( sipCpp ) )
      sipType = sipType_QgsExternalResourceWidget;
    else
      sipType = NULL;
    SIP_END
#endif

    Q_OBJECT
    Q_PROPERTY( bool fileWidgetVisible READ fileWidgetVisible WRITE setFileWidgetVisible )
    Q_PROPERTY( DocumentViewerContent documentViewerContent READ documentViewerContent WRITE setDocumentViewerContent )
    Q_PROPERTY( int documentViewerHeight READ documentViewerHeight WRITE setDocumentViewerHeight )
    Q_PROPERTY( int documentViewerWidth READ documentViewerWidth WRITE setDocumentViewerWidth )
    Q_PROPERTY( QgsFileWidget::RelativeStorage relativeStorage READ relativeStorage WRITE setRelativeStorage )
    Q_PROPERTY( QString defaultRoot READ defaultRoot WRITE setDefaultRoot )

  public:
    enum DocumentViewerContent
    {
      NoContent,
      Image,
      Web
    };

    /**
     * \brief QgsExternalResourceWidget creates a widget with a file widget and a document viewer
     * Both part of the widget are optional.
     * \see QgsFileWidget
     */
    explicit QgsExternalResourceWidget( QWidget *parent SIP_TRANSFERTHIS = nullptr );

    /**
     * \brief documentPath returns the path of the current document in the widget
     * \param type determines the type of the returned null variant if the document is not defined yet
     */
    QVariant documentPath( QVariant::Type type = QVariant::String ) const;
    void setDocumentPath( const QVariant &documentPath );

    //! access the file widget to allow its configuration
    QgsFileWidget *fileWidget();

    //! returns if the file widget is visible in the widget
    bool fileWidgetVisible() const;
    //! Sets the visibility of the file widget in the layout
    void setFileWidgetVisible( bool visible );

    //! returns the type of content used in the document viewer
    QgsExternalResourceWidget::DocumentViewerContent documentViewerContent() const;
    //! setDocumentViewerContent defines the type of content to be shown. Widget will be adapted accordingly
    void setDocumentViewerContent( QgsExternalResourceWidget::DocumentViewerContent content );

    //! returns the height of the document viewer
    int documentViewerHeight() const;

    /**
     * \brief setDocumentViewerWidth set the height of the document viewer.
     * \param height the height. Use 0 for automatic best display.
     */
    void setDocumentViewerHeight( int height );
    //! returns the width of the document viewer
    int documentViewerWidth() const;

    /**
     * \brief setDocumentViewerWidth set the width of the document viewer.
     * \param width the width. Use 0 for automatic best display.
     */
    void setDocumentViewerWidth( int width );

    //! defines if the widget is readonly
    void setReadOnly( bool readOnly );

    /**
     * Configures if paths are handled absolute or relative and if relative,
     * which should be the base path.
     */
    QgsFileWidget::RelativeStorage relativeStorage() const;

    /**
     * Configures if paths are handled absolute or relative and if relative,
     * which should be the base path.
     */
    void setRelativeStorage( QgsFileWidget::RelativeStorage relativeStorage );


    /**
     * Configures the base path which should be used if the relativeStorage property
     * is set to QgsFileWidget::RelativeDefaultPath.
     */
    QString defaultRoot() const;

    /**
     * Configures the base path which should be used if the relativeStorage property
     * is set to QgsFileWidget::RelativeDefaultPath.
     */
    void setDefaultRoot( const QString &defaultRoot );

  signals:
    //! emitteed as soon as the current document changes
    void valueChanged( const QString & );

  protected:
    // Needed to block events when showing a dialog
    bool eventFilter( QObject *watched, QEvent *event ) override;

  private slots:
    void loadDocument( const QString &path );

  private:
    void updateDocumentViewer();

    QString resolvePath( const QString &path );

    //! properties
    bool mFileWidgetVisible = true;
    DocumentViewerContent mDocumentViewerContent = NoContent;
    int mDocumentViewerHeight = 0;
    int mDocumentViewerWidth = 0;
    QgsFileWidget::RelativeStorage mRelativeStorage = QgsFileWidget::Absolute;
    QString mDefaultRoot; // configured default root path for QgsFileWidget::RelativeStorage::RelativeDefaultPath

    //! UI objects
    QgsFileWidget *mFileWidget = nullptr;
    QgsPixmapLabel *mPixmapLabel = nullptr;
#ifdef WITH_QTWEBKIT
    //! This webview is used as a container to display the picture
    QWebView *mWebView = nullptr;
#endif

};

#endif // QGSEXTERNALRESOURCEWIDGET_H
