#include "qgis_hello_world.h"



namespace {
   const QString s_name = QStringLiteral("Hello World Plugin");
   const QString s_description = QStringLiteral("Sample Plugin");
   const QString s_category = QStringLiteral("Plugins");
   const QString s_version = QStringLiteral("Version 1.2.3");
   const QString s_icon =  QStringLiteral( ":/plugin.svg" );
   const QgisPlugin::PluginType s_type = QgisPlugin::UI;
}

QGISEXTERN QgisPlugin* classFactory(QgisInterface* qgis_if)
{
   std::cout << "::classFactory" << std::endl;
   return new HelloWorldPlugin(qgis_if);
}

// See QGIS breaking change introduced qith QGIS 3.22:
// https://github.com/qgis/QGIS/commit/b3c5cf8d5fc1fdc289f1449df548acf9268140c6
#if _QGIS_VERSION_INT >= 32200
// Receny versions of QGIS use pointer to strings to pass the plugin information.
QGISEXTERN const QString* name() {
   return &s_name;
}

QGISEXTERN const QString* description() {
   return &s_description;
}

QGISEXTERN const QString* category() {
   return &s_category;
}

QGISEXTERN const QString* version() {
   return &s_version;
}

QGISEXTERN const QString* icon() {
   return &s_icon;
}
#else
// Older versions of QGIS return the plugin names as copies.
QGISEXTERN const QString name() {
   return s_name;
}

QGISEXTERN const QString description() {
   return s_description;
}

QGISEXTERN const QString category() {
   return s_category;
}

QGISEXTERN const QString version() {
   return s_version;
}

QGISEXTERN const QString icon() {
   return s_icon;
}
#endif

QGISEXTERN int type() {
   return s_type;
}

QGISEXTERN void unload(QgisPlugin* plugin) {
   std::cout << "::unload" << std::endl;
   delete plugin;
}

HelloWorldPlugin::HelloWorldPlugin(QgisInterface* iface) : QgisPlugin(s_name, s_description, s_category, s_version, s_type), m_qgis_if(iface) {
}


void HelloWorldPlugin::unload() {
   // TODO - need to remove the actions from the menu again.
}

void HelloWorldPlugin::initGui() {
   std::cout << "HelloWorldPlugin::initGui" << std::endl;

   // add an action to the menu
   m_menu_action = new QAction(QIcon(""), QString("Hello World"), this);
   connect(m_menu_action, SIGNAL(triggered()), this, SLOT(menu_button_action()));
   if (m_qgis_if == nullptr) {
      std::cout << "failed to get the handle to QGIS" << std::endl;
      return;
   }
   m_qgis_if->addPluginToMenu(QString("&Hello World"), m_menu_action);
}

void HelloWorldPlugin::menu_button_action() {
   QgsMessageLog::logMessage(QString("Menu clicked!"), QString("Hello World Plugin"), Qgis::MessageLevel::Info);
}

