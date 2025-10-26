/********************************************************************************
** Form generated from reading UI file 'qgsmessagelogviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESSAGELOGVIEWER_H
#define UI_QGSMESSAGELOGVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTabWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsMessageLogViewer
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;

    void setupUi(QDialog *QgsMessageLogViewer)
    {
        if (QgsMessageLogViewer->objectName().isEmpty())
            QgsMessageLogViewer->setObjectName(QString::fromUtf8("QgsMessageLogViewer"));
        QgsMessageLogViewer->resize(623, 255);
        QgsMessageLogViewer->setModal(true);
        gridLayout = new QGridLayout(QgsMessageLogViewer);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(QgsMessageLogViewer);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabsClosable(true);

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(QgsMessageLogViewer);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(QgsMessageLogViewer);
    } // setupUi

    void retranslateUi(QDialog *QgsMessageLogViewer)
    {
        QgsMessageLogViewer->setWindowTitle(QApplication::translate("QgsMessageLogViewer", "QGIS Log", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsMessageLogViewer: public Ui_QgsMessageLogViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESSAGELOGVIEWER_H
