/***************************************************************************
    qgsrelationreferencewidget.h
     --------------------------------------
    Date                 : 20.4.2013
    Copyright            : (C) 2013 Matthias Kuhn
    Email                : matthias at opengis dot ch
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSRELATIONREFERENCEWIDGET_H
#define QGSRELATIONREFERENCEWIDGET_H

#include "qgsattributeeditorcontext.h"
#include "qgis_sip.h"
#include "qgsfeature.h"
#include "qobjectuniqueptr.h"

#include <QComboBox>
#include <QToolButton>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QStandardItemModel>
#include "qgis_gui.h"

class QgsAttributeForm;
class QgsVectorLayerTools;
class QgsMapCanvas;
class QgsMessageBar;
class QgsHighlight;
class QgsMapTool;
class QgsMapToolIdentifyFeature;
class QgsMapToolDigitizeFeature;
class QgsMessageBarItem;
class QgsFeatureListComboBox;
class QgsCollapsibleGroupBox;
class QLabel;

#ifdef SIP_RUN
% ModuleHeaderCode
// fix to allow compilation with sip that for some reason
// doesn't add this include to the file where the code from
// ConvertToSubClassCode goes.
#include <qgsrelationreferencewidget.h>
% End
#endif

/**
 * \ingroup gui
 * \class QgsRelationReferenceWidget
 */
class GUI_EXPORT QgsRelationReferenceWidget : public QWidget
{

#ifdef SIP_RUN
    SIP_CONVERT_TO_SUBCLASS_CODE
    if ( qobject_cast<QgsRelationReferenceWidget *>( sipCpp ) )
      sipType = sipType_QgsRelationReferenceWidget;
    else
      sipType = NULL;
    SIP_END
#endif

    Q_OBJECT
    Q_PROPERTY( bool openFormButtonVisible READ openFormButtonVisible WRITE setOpenFormButtonVisible )

  public:

    enum CanvasExtent
    {
      Fixed,
      Pan,
      Scale
    };

    explicit QgsRelationReferenceWidget( QWidget *parent SIP_TRANSFERTHIS );

    ~QgsRelationReferenceWidget() override;

    void setRelation( const QgsRelation &relation, bool allowNullValue );

    void setRelationEditable( bool editable );

    /**
     * this sets the related feature using from the foreign key
     * \deprecated since QGIS 3.10 use setForeignKeys
     */
    Q_DECL_DEPRECATED void setForeignKey( const QVariant &value ) SIP_DEPRECATED;

    /**
     * Sets the related feature using the foreign keys
     * \since QGIS 3.10
     */
    void setForeignKeys( const QVariantList &values );

    /**
     * returns the related feature foreign key
     * \deprecated since QGIS 3.10
     */
    Q_DECL_DEPRECATED QVariant foreignKey() const SIP_DEPRECATED;

    //! returns the related feature foreign key

    /**
    * Returns the related feature foreign keys
    * \since QGIS 3.10
    */
    QVariantList foreignKeys() const;

    void setEditorContext( const QgsAttributeEditorContext &context, QgsMapCanvas *canvas, QgsMessageBar *messageBar );

    //! determines if the form of the related feature will be shown
    bool embedForm() { return mEmbedForm; }
    void setEmbedForm( bool display );

    //! determines if the foreign key is shown in a combox box or a read-only line edit
    bool readOnlySelector() { return mReadOnlySelector; }
    void setReadOnlySelector( bool readOnly );

    //! determines if the widget offers the possibility to select the related feature on the map (using a dedicated map tool)
    bool allowMapIdentification() { return mAllowMapIdentification; }
    void setAllowMapIdentification( bool allowMapIdentification );

    //! If the widget will order the combobox entries by value
    bool orderByValue() { return mOrderByValue; }
    //! Sets if the widget will order the combobox entries by value
    void setOrderByValue( bool orderByValue );
    //! Sets the fields for which filter comboboxes will be created
    void setFilterFields( const QStringList &filterFields );

    //! determines the open form button is visible in the widget
    bool openFormButtonVisible() { return mOpenFormButtonVisible; }
    void setOpenFormButtonVisible( bool openFormButtonVisible );

    /**
     * Determines if the filters are chained
     *
     * \returns TRUE if filters are chained
     */
    bool chainFilters() const { return mChainFilters; }

    /**
     * Set if filters are chained.
     * Chained filters restrict the option of subsequent filters based on the selection of a previous filter.
     *
     * \param chainFilters If chaining should be enabled
     */
    void setChainFilters( bool chainFilters );

    /**
     * Returns the related feature (from the referenced layer)
     * if no feature is related, it returns an invalid feature
     */
    QgsFeature referencedFeature() const;

    /**
     * Sets the widget to display in an indeterminate "mixed value" state.
     * \since QGIS 2.16
     */
    void showIndeterminateState();

    /**
     * Determines if a button for adding new features should be shown.
     *
     * \since QGIS 2.16
     */
    bool allowAddFeatures() const;

    /**
     * Determines if a button for adding new features should be shown.
     *
     * \since QGIS 2.16
     */
    void setAllowAddFeatures( bool allowAddFeatures );

    /**
     * Returns the current relation, which might be invalid
     * \since QGIS 3.10
     */
    QgsRelation relation() const;

    /**
     * Set the current form feature (from the referencing layer)
     *
     * \since QGIS 3.10
     */
    void setFormFeature( const QgsFeature &formFeature );

  public slots:
    //! open the form of the related feature in a new dialog
    void openForm();

    //! activate the map tool to select a new related feature on the map
    void mapIdentification();

    //! unset the currently related feature
    void deleteForeignKeys();

  protected:
    void showEvent( QShowEvent *e ) override;

    void init();

  signals:

    /**
     * Emitted when the foreign key changed
     * \deprecated since QGIS 3.10
     */
    Q_DECL_DEPRECATED void foreignKeyChanged( const QVariant & ) SIP_DEPRECATED;

    /**
     * Emitted when the foreign keys changed
     * \since QGIS 3.10
     */
    void foreignKeysChanged( const QVariantList & );

  private slots:
    void highlightActionTriggered( QAction *action );
    void deleteHighlight();
    void comboReferenceChanged( int index );
    void featureIdentified( const QgsFeature &feature );
    void setMapTool( QgsMapTool *mapTool );
    void unsetMapTool();
    void mapToolDeactivated();
    void filterChanged();
    void addEntry();
    void updateAddEntryButton();
    void entryAdded( const QgsFeature &f );
    void onKeyPressed( QKeyEvent *e );

    /**
     * Updates the FK index as soon as the underlying model is updated when
     * the chainFilter option is activated.
     */
    void updateIndex();

  private:
    void highlightFeature( QgsFeature f = QgsFeature(), CanvasExtent canvasExtent = Fixed );
    void updateAttributeEditorFrame( const QgsFeature &feature );
    void disableChainedComboBoxes( const QComboBox *cb );
    void emitForeignKeysChanged( const QVariantList &foreignKeys, bool force = false );

    // initialized
    QgsAttributeEditorContext mEditorContext;
    QgsMapCanvas *mCanvas = nullptr;
    QgsMessageBar *mMessageBar = nullptr;
    QVariantList mForeignKeys;
    QgsFeature mFeature;
    QgsFeature mFormFeature;
    // Index of the referenced layer key
    QStringList mReferencedFields;
    bool mAllowNull = true;
    QgsHighlight *mHighlight = nullptr;
    QgsMapTool *mCurrentMapTool = nullptr;
    QObjectUniquePtr<QgsMapToolIdentifyFeature> mMapToolIdentify;
    QObjectUniquePtr<QgsMapToolDigitizeFeature> mMapToolDigitize;
    QgsMessageBarItem *mMessageBarItem = nullptr;
    QgsAttributeForm *mReferencedAttributeForm = nullptr;
    QgsVectorLayer *mReferencedLayer = nullptr;
    QgsVectorLayer *mReferencingLayer = nullptr;
    QgsFeatureListComboBox *mComboBox = nullptr;
    QList<QComboBox *> mFilterComboBoxes;
    QWidget *mWindowWidget = nullptr;
    bool mShown = false;
    QgsRelation mRelation;
    bool mIsEditable = true;
    QStringList mFilterFields;
    QMap<QString, QMap<QString, QSet<QString> > > mFilterCache;
    bool mInitialized = false;

    // Q_PROPERTY
    bool mEmbedForm = false;
    bool mReadOnlySelector = false;
    bool mAllowMapIdentification = false;
    bool mOrderByValue = false;
    bool mOpenFormButtonVisible = true;
    bool mChainFilters = false;
    bool mAllowAddFeatures = false;

    // UI
    QVBoxLayout *mTopLayout = nullptr;
    QToolButton *mMapIdentificationButton = nullptr;
    QToolButton *mRemoveFKButton = nullptr;
    QToolButton *mOpenFormButton = nullptr;
    QToolButton *mHighlightFeatureButton = nullptr;
    QToolButton *mAddEntryButton = nullptr;
    QAction *mHighlightFeatureAction = nullptr;
    QAction *mScaleHighlightFeatureAction = nullptr;
    QAction *mPanHighlightFeatureAction = nullptr;
    QWidget *mChooserContainer = nullptr;
    QWidget *mFilterContainer = nullptr;
    QHBoxLayout *mFilterLayout = nullptr;
    QgsCollapsibleGroupBox *mAttributeEditorFrame = nullptr;
    QVBoxLayout *mAttributeEditorLayout = nullptr;
    QLineEdit *mLineEdit = nullptr;
    QLabel *mInvalidLabel = nullptr;

    friend class TestQgsRelationReferenceWidget;
};

#endif // QGSRELATIONREFERENCEWIDGET_H
