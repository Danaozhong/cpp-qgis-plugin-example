#include "qgis_hello_world.h"

QGISEXTERN QgisPlugin* classFactory(QgisInterface* qgis_if)
{
   std::cout << "::classFactory" << std::endl;
   return new HelloWorldPlugin(qgis_if);
}


QGISEXTERN const QString* name() {
   return &s_name;
}

QGISEXTERN const QString* description() {
   return &s_description;
}

QGISEXTERN const QString* category() {
   return &s_category;
}

QGISEXTERN int type() {
   return s_type;
}

QGISEXTERN const QString* version() {
   return &s_version;
}

QGISEXTERN const QString* icon() {
   return &s_icon;
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
   m_qgis_if->addPluginToMenu(QString("&Hello World"), m_menu_action);
}

void HelloWorldPlugin::menu_button_action() {
   QgsMessageLog::logMessage(QString("Menu clicked!"), QString("Hello World Plugin"), Qgis::MessageLevel::Info);
}

