/********************************************************************************
** Form generated from reading UI file 'qgsadvanceddigitizingfloaterbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSADVANCEDDIGITIZINGFLOATERBASE_H
#define UI_QGSADVANCEDDIGITIZINGFLOATERBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAdvancedDigitizingFloaterBase
{
public:
    QGridLayout *gridLayout;
    QLabel *mDistanceLabel;
    QLabel *mAngleLabel;
    QLabel *mXLabel;
    QLineEdit *mAngleLineEdit;
    QLineEdit *mDistanceLineEdit;
    QLineEdit *mXLineEdit;
    QLabel *mYLabel;
    QLineEdit *mYLineEdit;

    void setupUi(QWidget *QgsAdvancedDigitizingFloaterBase)
    {
        if (QgsAdvancedDigitizingFloaterBase->objectName().isEmpty())
            QgsAdvancedDigitizingFloaterBase->setObjectName(QString::fromUtf8("QgsAdvancedDigitizingFloaterBase"));
        QgsAdvancedDigitizingFloaterBase->resize(279, 142);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 127));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        QgsAdvancedDigitizingFloaterBase->setPalette(palette);
        QgsAdvancedDigitizingFloaterBase->setAutoFillBackground(true);
        QgsAdvancedDigitizingFloaterBase->setStyleSheet(QString::fromUtf8("QLineEdit{background-color: rgba(255,255,255,127)}"));
        gridLayout = new QGridLayout(QgsAdvancedDigitizingFloaterBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(2);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(2, 0, 0, 0);
        mDistanceLabel = new QLabel(QgsAdvancedDigitizingFloaterBase);
        mDistanceLabel->setObjectName(QString::fromUtf8("mDistanceLabel"));
        mDistanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mDistanceLabel, 2, 1, 1, 1);

        mAngleLabel = new QLabel(QgsAdvancedDigitizingFloaterBase);
        mAngleLabel->setObjectName(QString::fromUtf8("mAngleLabel"));
        mAngleLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mAngleLabel, 3, 1, 1, 1);

        mXLabel = new QLabel(QgsAdvancedDigitizingFloaterBase);
        mXLabel->setObjectName(QString::fromUtf8("mXLabel"));
        mXLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mXLabel, 4, 1, 1, 1);

        mAngleLineEdit = new QLineEdit(QgsAdvancedDigitizingFloaterBase);
        mAngleLineEdit->setObjectName(QString::fromUtf8("mAngleLineEdit"));
        mAngleLineEdit->setMinimumSize(QSize(40, 0));
        mAngleLineEdit->setFrame(false);

        gridLayout->addWidget(mAngleLineEdit, 3, 3, 1, 1);

        mDistanceLineEdit = new QLineEdit(QgsAdvancedDigitizingFloaterBase);
        mDistanceLineEdit->setObjectName(QString::fromUtf8("mDistanceLineEdit"));
        mDistanceLineEdit->setFrame(false);
        mDistanceLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mDistanceLineEdit, 2, 3, 1, 1);

        mXLineEdit = new QLineEdit(QgsAdvancedDigitizingFloaterBase);
        mXLineEdit->setObjectName(QString::fromUtf8("mXLineEdit"));
        mXLineEdit->setMinimumSize(QSize(40, 0));
        mXLineEdit->setFrame(false);

        gridLayout->addWidget(mXLineEdit, 4, 3, 1, 1);

        mYLabel = new QLabel(QgsAdvancedDigitizingFloaterBase);
        mYLabel->setObjectName(QString::fromUtf8("mYLabel"));
        mYLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mYLabel, 5, 1, 1, 1);

        mYLineEdit = new QLineEdit(QgsAdvancedDigitizingFloaterBase);
        mYLineEdit->setObjectName(QString::fromUtf8("mYLineEdit"));
        mYLineEdit->setMinimumSize(QSize(40, 0));
        mYLineEdit->setFrame(false);

        gridLayout->addWidget(mYLineEdit, 5, 3, 1, 1);

        QWidget::setTabOrder(mDistanceLineEdit, mAngleLineEdit);
        QWidget::setTabOrder(mAngleLineEdit, mXLineEdit);
        QWidget::setTabOrder(mXLineEdit, mYLineEdit);

        retranslateUi(QgsAdvancedDigitizingFloaterBase);

        QMetaObject::connectSlotsByName(QgsAdvancedDigitizingFloaterBase);
    } // setupUi

    void retranslateUi(QWidget *QgsAdvancedDigitizingFloaterBase)
    {
        mDistanceLabel->setText(QCoreApplication::translate("QgsAdvancedDigitizingFloaterBase", "d", nullptr));
        mAngleLabel->setText(QCoreApplication::translate("QgsAdvancedDigitizingFloaterBase", "a", nullptr));
        mXLabel->setText(QCoreApplication::translate("QgsAdvancedDigitizingFloaterBase", "x", nullptr));
#if QT_CONFIG(tooltip)
        mAngleLineEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mAngleLineEdit->setText(QCoreApplication::translate("QgsAdvancedDigitizingFloaterBase", "-", nullptr));
#if QT_CONFIG(tooltip)
        mDistanceLineEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mDistanceLineEdit->setText(QCoreApplication::translate("QgsAdvancedDigitizingFloaterBase", "-", nullptr));
#if QT_CONFIG(tooltip)
        mXLineEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mXLineEdit->setText(QCoreApplication::translate("QgsAdvancedDigitizingFloaterBase", "-", nullptr));
        mYLabel->setText(QCoreApplication::translate("QgsAdvancedDigitizingFloaterBase", "y", nullptr));
#if QT_CONFIG(tooltip)
        mYLineEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mYLineEdit->setText(QCoreApplication::translate("QgsAdvancedDigitizingFloaterBase", "-", nullptr));
        (void)QgsAdvancedDigitizingFloaterBase;
    } // retranslateUi

};

namespace Ui {
    class QgsAdvancedDigitizingFloaterBase: public Ui_QgsAdvancedDigitizingFloaterBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSADVANCEDDIGITIZINGFLOATERBASE_H
