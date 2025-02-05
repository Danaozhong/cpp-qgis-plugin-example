/***************************************************************************
                          qgsmessagebar.h  -  description
                             -------------------
    begin                : June 2012
    copyright            : (C) 2012 by Giuseppe Sucameli
    email                : sucameli at faunalia dot it
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#ifndef QGSMESSAGEBAR_H
#define QGSMESSAGEBAR_H

#include "qgsguiutils.h"
#include "qgis.h"

#include <QString>
#include <QFrame>
#include <QIcon>
#include <QColor>
#include <QList>
#include "qgis_gui.h"

class QWidget;
class QGridLayout;
class QMenu;
class QProgressBar;
class QToolButton;
class QLabel;
class QAction;
class QTimer;

class QgsMessageBarItem;

/**
 * \ingroup gui
 * A bar for displaying non-blocking messages to the user.
 */
class GUI_EXPORT QgsMessageBar: public QFrame
{
    Q_OBJECT

  public:

    //! Constructor for QgsMessageBar
    QgsMessageBar( QWidget *parent SIP_TRANSFERTHIS = nullptr );

    /**
     * Display a message item on the bar after hiding the currently visible one
     * and putting it in a stack.
     * The message bar will take ownership of the item.
     *
     * \param item Item to display
     */
    void pushItem( QgsMessageBarItem *item SIP_TRANSFER );

    /**
     * Display a widget as a message on the bar after hiding the currently visible one
     *  and putting it in a stack.
     * \param widget message widget to display
     * \param level is Qgis::Info, Warning, Critical or Success
     * \param duration timeout duration of message in seconds, 0 value indicates no timeout
     */
    QgsMessageBarItem *pushWidget( QWidget *widget SIP_TRANSFER, Qgis::MessageLevel level = Qgis::Info, int duration = 0 );

    /**
     * Remove the passed widget from the bar (if previously added),
     *  then display the next one in the stack if any or hide the bar
     *  \param item item to remove
     *  \returns TRUE if the widget was removed, FALSE otherwise
     */
    bool popWidget( QgsMessageBarItem *item );

    //! make out a widget containing a message to be displayed on the bar
    static QgsMessageBarItem *createMessage( const QString &text, QWidget *parent = nullptr ) SIP_FACTORY;
    //! make out a widget containing title and message to be displayed on the bar
    static QgsMessageBarItem *createMessage( const QString &title, const QString &text, QWidget *parent = nullptr ) SIP_FACTORY;
    //! make out a widget containing title and message to be displayed on the bar
    static QgsMessageBarItem *createMessage( QWidget *widget, QWidget *parent = nullptr ) SIP_FACTORY;

    //! convenience method for pushing a message to the bar
    void pushMessage( const QString &text, Qgis::MessageLevel level = Qgis::Info, int duration = 5 ) { pushMessage( QString(), text, level, duration ); }
    //! convenience method for pushing a message with title to the bar
    void pushMessage( const QString &title, const QString &text, Qgis::MessageLevel level = Qgis::Info, int duration = 5 );

    //! convenience method for pushing a message to the bar with a detail text which be shown when pressing a "more" button
    void pushMessage( const QString &title, const QString &text, const QString &showMore, Qgis::MessageLevel level = Qgis::Info, int duration = 5 );

    QgsMessageBarItem *currentItem() { return mCurrentItem; }

  signals:
    //! emitted when a message widget is added to the bar
    void widgetAdded( QgsMessageBarItem *item );

    //! emitted when a message widget was removed from the bar
    void widgetRemoved( QgsMessageBarItem *item );

  public slots:

    /**
     * Remove the currently displayed widget from the bar and
     *  display the next in the stack if any or hide the bar.
     *  \returns TRUE if the widget was removed, FALSE otherwise
     */
    bool popWidget();

    /**
     * Remove all items from the bar's widget list
     *  \returns TRUE if all items were removed, FALSE otherwise
     */
    bool clearWidgets();

    /**
     * Pushes a success message with default timeout to the message bar
     * \param title title string for message
     * \param message The message to be displayed
     * \since QGIS 2.8
     */
    void pushSuccess( const QString &title, const QString &message );

    /**
     * Pushes a information message with default timeout to the message bar
     * \param title title string for message
     * \param message The message to be displayed
     * \since QGIS 2.8
     */
    void pushInfo( const QString &title, const QString &message );

    /**
     * Pushes a warning with default timeout to the message bar
     * \param title title string for message
     * \param message The message to be displayed
     * \since QGIS 2.8
     */
    void pushWarning( const QString &title, const QString &message );

    /**
     * Pushes a critical warning with default timeout to the message bar
     * \param title title string for message
     * \param message The message to be displayed
     * \since QGIS 2.8
     */
    void pushCritical( const QString &title, const QString &message );

  protected:
    void mousePressEvent( QMouseEvent *e ) override;

  private:
    void popItem( QgsMessageBarItem *item );
    void showItem( QgsMessageBarItem *item );
    QgsMessageBarItem *mCurrentItem = nullptr;
    QList<QgsMessageBarItem *> mItems;
    QMenu *mCloseMenu = nullptr;
    QToolButton *mCloseBtn = nullptr;
    QGridLayout *mLayout = nullptr;
    QLabel *mItemCount = nullptr;
    QAction *mActionCloseAll = nullptr;
    QTimer *mCountdownTimer = nullptr;
    QProgressBar *mCountProgress = nullptr;
    QString mCountStyleSheet;

  private slots:
    //! updates count of items in widget list
    void updateItemCount();

    //! updates the countdown for widgets that have a timeout duration
    void updateCountdown();
    void resetCountdown();
};

#endif
