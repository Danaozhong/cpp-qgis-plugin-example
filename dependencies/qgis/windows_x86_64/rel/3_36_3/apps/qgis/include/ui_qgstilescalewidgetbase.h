/********************************************************************************
** Form generated from reading UI file 'qgstilescalewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTILESCALEWIDGETBASE_H
#define UI_QGSTILESCALEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsTileScaleWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *mLabelScale;
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
        verticalLayout = new QVBoxLayout(QgsTileScaleWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(12, -1, -1, -1);
        mLabelScale = new QLabel(QgsTileScaleWidget);
        mLabelScale->setObjectName(QString::fromUtf8("mLabelScale"));
        mLabelScale->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(mLabelScale);

        mSlider = new QSlider(QgsTileScaleWidget);
        mSlider->setObjectName(QString::fromUtf8("mSlider"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mSlider->sizePolicy().hasHeightForWidth());
        mSlider->setSizePolicy(sizePolicy1);
        mSlider->setOrientation(Qt::Vertical);
        mSlider->setInvertedAppearance(false);
        mSlider->setInvertedControls(false);
        mSlider->setTickPosition(QSlider::TicksBelow);
        mSlider->setTickInterval(0);

        verticalLayout->addWidget(mSlider, 0, Qt::AlignHCenter);


        retranslateUi(QgsTileScaleWidget);

        QMetaObject::connectSlotsByName(QgsTileScaleWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsTileScaleWidget)
    {
        mLabelScale->setText(QCoreApplication::translate("QgsTileScaleWidget", "Zoom", nullptr));
        (void)QgsTileScaleWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsTileScaleWidget: public Ui_QgsTileScaleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTILESCALEWIDGETBASE_H
