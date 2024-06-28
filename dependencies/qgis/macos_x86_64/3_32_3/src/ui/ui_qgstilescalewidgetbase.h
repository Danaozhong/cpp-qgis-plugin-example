/********************************************************************************
** Form generated from reading UI file 'qgstilescalewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTILESCALEWIDGETBASE_H
#define UI_QGSTILESCALEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsTileScaleWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QSlider *mSlider;

    void setupUi(QWidget *QgsTileScaleWidget)
    {
        if (QgsTileScaleWidget->objectName().isEmpty())
            QgsTileScaleWidget->setObjectName(QString::fromUtf8("QgsTileScaleWidget"));
        QgsTileScaleWidget->resize(114, 525);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsTileScaleWidget->sizePolicy().hasHeightForWidth());
        QgsTileScaleWidget->setSizePolicy(sizePolicy);
        QgsTileScaleWidget->setWindowTitle(QString::fromUtf8("Form"));
        horizontalLayout = new QHBoxLayout(QgsTileScaleWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mSlider = new QSlider(QgsTileScaleWidget);
        mSlider->setObjectName(QString::fromUtf8("mSlider"));
        mSlider->setOrientation(Qt::Vertical);
        mSlider->setInvertedAppearance(false);
        mSlider->setInvertedControls(false);
        mSlider->setTickPosition(QSlider::TicksBelow);
        mSlider->setTickInterval(0);

        horizontalLayout->addWidget(mSlider);


        retranslateUi(QgsTileScaleWidget);

        QMetaObject::connectSlotsByName(QgsTileScaleWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsTileScaleWidget)
    {
        (void)QgsTileScaleWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsTileScaleWidget: public Ui_QgsTileScaleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTILESCALEWIDGETBASE_H
