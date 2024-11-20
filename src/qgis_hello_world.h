#ifndef _QGIS_HELLO_WORLD_H_
#define _QGIS_HELLO_WORLD_H_

/* MSVC workarounds */
#ifndef M_PI
#define M_PI       3.14159265358979323846
#endif
#ifndef M_PI_2
#define M_PI_2      1.57079632679489661923132169163975144   // pi/2
#endif


#include "qgisplugin.h"
#include "qgsmapcanvas.h"
#include "qgisinterface.h"
#include "qgsvectorlayer.h"
#include "qgsmessagelog.h"
#include <iostream>
#include <QAction>
#include <QApplication>


class HelloWorldPlugin : public QObject, public QgisPlugin
{
   Q_OBJECT

public:
   /// @brief Constructor.
   /// @param qgis_if The Qgis interface.
   explicit HelloWorldPlugin(QgisInterface* qgis_if);

   /// @brief Destructor
   virtual ~HelloWorldPlugin() = default;

   /// @brief Called when the plugin is loaded.
   virtual void initGui() override;

   /// @brief Called when the plugin is unloaded.
   virtual void unload() override;

public slots:
   /// An example of an action, triggered when a menu is clicked.
   void menu_button_action();

private:
   QgisInterface* m_qgis_if;

   /// The action in the QGIS menu bar.
   QAction* m_menu_action;
};

#endif
