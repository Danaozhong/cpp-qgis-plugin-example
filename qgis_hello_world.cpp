
#include "qgis_hello_world.h"

const QString HelloWorldPlugin::s_name = QObject::tr("Hello World Plugin");
const QString HelloWorldPlugin::s_description = QObject::tr("Sample Plugin");
const QString HelloWorldPlugin::s_category = QObject::tr("Plugins");
const QString HelloWorldPlugin::s_version = QObject::tr("Version 5.2.0");
const QString HelloWorldPlugin::s_icon = "";
const QgisPlugin::PluginType HelloWorldPlugin::s_type = QgisPlugin::UI;

QGISEXTERN QgisPlugin* classFactory(QgisInterface* qgis_if)
{
   std::cout << "::classFactory" << std::endl;
   return new HelloWorldPlugin(qgis_if);
}

QGISEXTERN QString name()
{
   std::cout << "::name" << std::endl;
   return HelloWorldPlugin::s_name;
}

QGISEXTERN QString description()
{
   std::cout << "::description" << std::endl;
   return HelloWorldPlugin::s_description;
}

QGISEXTERN QString category()
{
   std::cout << "::category" << std::endl;
   return HelloWorldPlugin::s_category;
}

QGISEXTERN int type()
{
   std::cout << "::type" << std::endl;
   return HelloWorldPlugin::s_type;
}

QGISEXTERN QString version()
{
   std::cout << "::version" << std::endl;
   return HelloWorldPlugin::s_version;
}

QGISEXTERN QString icon()
{
   std::cout << "::icon" << std::endl;
   return HelloWorldPlugin::s_icon;
}

QGISEXTERN void unload(QgisPlugin* plugin)
{
   std::cout << "::unload" << std::endl;
   delete plugin;
}

void HelloWorldPlugin::initGui()
{
   std::cout << "HelloWorldPlugin::initGui" << std::endl;

   // add an action to the menu
   m_action = new QAction(QIcon("" ), tr("Hello World"), this);
   m_action->setWhatsThis(tr("Draw on the map canvas."));
   connect(m_action, SIGNAL(triggered()), this, SLOT(StartOverlay()));
   m_qgis_if->addRasterToolBarIcon(m_action);
   m_qgis_if->addPluginToMenu(tr("&Hello World"), m_action);
}

void HelloWorldPlugin::StartOverlay()
{
    std::cout << "HelloWorldPlugin::StartOverlay" << std::endl;

    // get the map canvas
    QgsMapCanvas* canvas = m_qgis_if->mapCanvas();

    // Layer QStrings
    QString mLayerPath         = "/home/junkmob/QGIS-DEV/QGIS/tests/testdata/points.shp";
    QString mLayerBaseName     = "points";
    QString mProviderName      = "ogr";

    // Get Vector Layer
    QgsVectorLayer * mLayer = new QgsVectorLayer(mLayerPath, mLayerBaseName, mProviderName);
    if (mLayer->isValid())
    {
        QString mFeedback = "layer is valid";
        QString mTag = "HelloWorld";
        QgsMessageLog::logMessage( mFeedback, mTag, Qgis::MessageLevel::Info );
    }
    else
    {
        QString mFeedback = "layer NOT valid";
        QString mTag = "HelloWorld";
        QgsMessageLog::logMessage( mFeedback, mTag, Qgis::MessageLevel::Info );
    }

    // Add the Vector Layer to the Layer Registry
    QgsProject::instance()->addMapLayer(mLayer, true);

	// Create the Map Canvas
	canvas->setExtent(mLayer->extent());
	canvas->enableAntiAliasing(true);
	canvas->setCanvasColor(QColor(255, 255, 255));
	canvas->freeze(false);

	// add it to the canvas
	canvas->setVisible(true);
	canvas->refresh();
}

