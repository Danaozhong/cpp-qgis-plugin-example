/********************************************************************************
** Form generated from reading UI file 'qgsvaluemapconfigdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVALUEMAPCONFIGDLGBASE_H
#define UI_QGSVALUEMAPCONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsValueMapWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *valueMapLabel;
    QPushButton *loadFromLayerButton;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *addNullButton;
    QPushButton *removeSelectedButton;
    QPushButton *loadFromCSVButton;

    void setupUi(QWidget *QgsValueMapWidget)
    {
        if (QgsValueMapWidget->objectName().isEmpty())
            QgsValueMapWidget->setObjectName(QString::fromUtf8("QgsValueMapWidget"));
        QgsValueMapWidget->resize(701, 493);
        QgsValueMapWidget->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsValueMapWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        valueMapLabel = new QLabel(QgsValueMapWidget);
        valueMapLabel->setObjectName(QString::fromUtf8("valueMapLabel"));
        valueMapLabel->setWordWrap(true);

        gridLayout->addWidget(valueMapLabel, 0, 0, 1, 5);

        loadFromLayerButton = new QPushButton(QgsValueMapWidget);
        loadFromLayerButton->setObjectName(QString::fromUtf8("loadFromLayerButton"));

        gridLayout->addWidget(loadFromLayerButton, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(339, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 4, 1, 1);

        tableWidget = new QTableWidget(QgsValueMapWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 2, 0, 1, 5);

        horizontalSpacer_2 = new QSpacerItem(518, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 3, 1, 2);

        addNullButton = new QPushButton(QgsValueMapWidget);
        addNullButton->setObjectName(QString::fromUtf8("addNullButton"));

        gridLayout->addWidget(addNullButton, 3, 0, 1, 1);

        removeSelectedButton = new QPushButton(QgsValueMapWidget);
        removeSelectedButton->setObjectName(QString::fromUtf8("removeSelectedButton"));

        gridLayout->addWidget(removeSelectedButton, 3, 1, 1, 1);

        loadFromCSVButton = new QPushButton(QgsValueMapWidget);
        loadFromCSVButton->setObjectName(QString::fromUtf8("loadFromCSVButton"));

        gridLayout->addWidget(loadFromCSVButton, 1, 1, 1, 1);

        QWidget::setTabOrder(loadFromLayerButton, loadFromCSVButton);
        QWidget::setTabOrder(loadFromCSVButton, tableWidget);
        QWidget::setTabOrder(tableWidget, addNullButton);
        QWidget::setTabOrder(addNullButton, removeSelectedButton);

        retranslateUi(QgsValueMapWidget);

        QMetaObject::connectSlotsByName(QgsValueMapWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsValueMapWidget)
    {
        valueMapLabel->setText(QCoreApplication::translate("QgsValueMapWidget", "Combo box with predefined items. Value is stored in the attribute, description is shown in the combo box.", nullptr));
        loadFromLayerButton->setText(QCoreApplication::translate("QgsValueMapWidget", "Load Data from Layer", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("QgsValueMapWidget", "Value", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("QgsValueMapWidget", "Description", nullptr));
        addNullButton->setText(QCoreApplication::translate("QgsValueMapWidget", "Add \"NULL\" value", nullptr));
        removeSelectedButton->setText(QCoreApplication::translate("QgsValueMapWidget", "Remove Selected", nullptr));
        loadFromCSVButton->setText(QCoreApplication::translate("QgsValueMapWidget", "Load Data from CSV File", nullptr));
        (void)QgsValueMapWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsValueMapWidget: public Ui_QgsValueMapWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVALUEMAPCONFIGDLGBASE_H
