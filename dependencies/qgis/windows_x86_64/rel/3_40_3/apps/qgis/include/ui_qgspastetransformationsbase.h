/********************************************************************************
** Form generated from reading UI file 'qgspastetransformationsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPASTETRANSFORMATIONSBASE_H
#define UI_QGSPASTETRANSFORMATIONSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsPasteTransformationsBase
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *textLabel1_2;
    QGridLayout *gridLayout;
    QLabel *textLabel3;
    QComboBox *destinationLayerComboBox;
    QLabel *textLabel4;
    QComboBox *sourceLayerComboBox;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsPasteTransformationsBase)
    {
        if (QgsPasteTransformationsBase->objectName().isEmpty())
            QgsPasteTransformationsBase->setObjectName(QString::fromUtf8("QgsPasteTransformationsBase"));
        QgsPasteTransformationsBase->resize(564, 426);
        QgsPasteTransformationsBase->setMouseTracking(true);
        QgsPasteTransformationsBase->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(QgsPasteTransformationsBase);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(10, 10, 10, 10);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        textLabel1_2 = new QLabel(QgsPasteTransformationsBase);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel1_2->sizePolicy().hasHeightForWidth());
        textLabel1_2->setSizePolicy(sizePolicy);

        vboxLayout->addWidget(textLabel1_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel3 = new QLabel(QgsPasteTransformationsBase);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel3->sizePolicy().hasHeightForWidth());
        textLabel3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(textLabel3, 0, 0, 1, 1);

        destinationLayerComboBox = new QComboBox(QgsPasteTransformationsBase);
        destinationLayerComboBox->setObjectName(QString::fromUtf8("destinationLayerComboBox"));

        gridLayout->addWidget(destinationLayerComboBox, 1, 1, 1, 1);

        textLabel4 = new QLabel(QgsPasteTransformationsBase);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
        sizePolicy1.setHeightForWidth(textLabel4->sizePolicy().hasHeightForWidth());
        textLabel4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(textLabel4, 0, 1, 1, 1);

        sourceLayerComboBox = new QComboBox(QgsPasteTransformationsBase);
        sourceLayerComboBox->setObjectName(QString::fromUtf8("sourceLayerComboBox"));

        gridLayout->addWidget(sourceLayerComboBox, 1, 0, 1, 1);


        vboxLayout->addLayout(gridLayout);

        spacerItem = new QSpacerItem(20, 251, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(QgsPasteTransformationsBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        textLabel3->setBuddy(sourceLayerComboBox);
        textLabel4->setBuddy(destinationLayerComboBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(sourceLayerComboBox, destinationLayerComboBox);

        retranslateUi(QgsPasteTransformationsBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsPasteTransformationsBase, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsPasteTransformationsBase, SLOT(accept()));

        QMetaObject::connectSlotsByName(QgsPasteTransformationsBase);
    } // setupUi

    void retranslateUi(QDialog *QgsPasteTransformationsBase)
    {
        QgsPasteTransformationsBase->setWindowTitle(QCoreApplication::translate("QgsPasteTransformationsBase", "Paste Transformations", nullptr));
        textLabel1_2->setText(QCoreApplication::translate("QgsPasteTransformationsBase", "<b>Note: This function is not useful yet!</b>", nullptr));
        textLabel3->setText(QCoreApplication::translate("QgsPasteTransformationsBase", "Source", nullptr));
        textLabel4->setText(QCoreApplication::translate("QgsPasteTransformationsBase", "Destination", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsPasteTransformationsBase: public Ui_QgsPasteTransformationsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPASTETRANSFORMATIONSBASE_H
