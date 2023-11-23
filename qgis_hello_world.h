#ifndef QGIS_HELLO_WORLD_H
#define QGIS_HELLO_WORLD_H

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

class HelloWorldPlugin : public QObject, public QgisPlugin
{
   Q_OBJECT

public:
   static const QString s_name, s_description, s_category, s_version, s_icon;
   static const QgisPlugin::PluginType s_type;

   HelloWorldPlugin(QgisInterface* qgis_if) : QgisPlugin(s_name, s_description, s_category, s_version, s_type), m_qgis_if(qgis_if)
   {
   }

   // virtual methods from QgisPlugin
   virtual void initGui();
   virtual void unload()
   {
      std::cout << "HelloWorldPlugin::unload" << std::endl;
   }

public slots:
   void StartOverlay();

private:
   QgisInterface* m_qgis_if;
   QAction* m_action;

};

#endif // #ifndef QGIS_HELLO_WORLD_H
