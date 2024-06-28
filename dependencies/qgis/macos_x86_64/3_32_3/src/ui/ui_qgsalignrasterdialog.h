/********************************************************************************
** Form generated from reading UI file 'qgsalignrasterdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSALIGNRASTERDIALOG_H
#define UI_QGSALIGNRASTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsextentgroupbox.h"
#include "qgsprojectionselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAlignRasterDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QToolButton *mBtnAdd;
    QToolButton *mBtnEdit;
    QToolButton *mBtnRemove;
    QTreeView *mViewLayers;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_3;
    QComboBox *mCboReferenceLayer;
    QgsProjectionSelectionWidget *mCrsSelector;
    QHBoxLayout *horizontalLayout_3;
    QgsDoubleSpinBox *mSpinCellSizeX;
    QgsDoubleSpinBox *mSpinCellSizeY;
    QHBoxLayout *horizontalLayout_4;
    QgsDoubleSpinBox *mSpinGridOffsetX;
    QgsDoubleSpinBox *mSpinGridOffsetY;
    QCheckBox *mChkAddToCanvas;
    QgsExtentGroupBox *mClipExtentGroupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *mEditOutputSize;
    QCheckBox *mChkCustomCRS;
    QCheckBox *mChkCustomCellSize;
    QCheckBox *mChkCustomGridOffset;
    QHBoxLayout *horizontalLayout_2;
    QProgressBar *mProgress;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAlignRasterDialog)
    {
        if (QgsAlignRasterDialog->objectName().isEmpty())
            QgsAlignRasterDialog->setObjectName(QString::fromUtf8("QgsAlignRasterDialog"));
        QgsAlignRasterDialog->resize(511, 415);
        verticalLayout_2 = new QVBoxLayout(QgsAlignRasterDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(QgsAlignRasterDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mBtnAdd = new QToolButton(QgsAlignRasterDialog);
        mBtnAdd->setObjectName(QString::fromUtf8("mBtnAdd"));
        mBtnAdd->setAutoRaise(true);

        horizontalLayout->addWidget(mBtnAdd);

        mBtnEdit = new QToolButton(QgsAlignRasterDialog);
        mBtnEdit->setObjectName(QString::fromUtf8("mBtnEdit"));
        mBtnEdit->setAutoRaise(true);

        horizontalLayout->addWidget(mBtnEdit);

        mBtnRemove = new QToolButton(QgsAlignRasterDialog);
        mBtnRemove->setObjectName(QString::fromUtf8("mBtnRemove"));
        mBtnRemove->setAutoRaise(true);

        horizontalLayout->addWidget(mBtnRemove);


        verticalLayout_2->addLayout(horizontalLayout);

        mViewLayers = new QTreeView(QgsAlignRasterDialog);
        mViewLayers->setObjectName(QString::fromUtf8("mViewLayers"));
        mViewLayers->setRootIsDecorated(false);
        mViewLayers->setHeaderHidden(true);

        verticalLayout_2->addWidget(mViewLayers);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(QgsAlignRasterDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 1, 1, 1);

        label_3 = new QLabel(QgsAlignRasterDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        mCboReferenceLayer = new QComboBox(QgsAlignRasterDialog);
        mCboReferenceLayer->setObjectName(QString::fromUtf8("mCboReferenceLayer"));

        gridLayout->addWidget(mCboReferenceLayer, 0, 2, 1, 1);

        mCrsSelector = new QgsProjectionSelectionWidget(QgsAlignRasterDialog);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));

        gridLayout->addWidget(mCrsSelector, 1, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mSpinCellSizeX = new QgsDoubleSpinBox(QgsAlignRasterDialog);
        mSpinCellSizeX->setObjectName(QString::fromUtf8("mSpinCellSizeX"));
        mSpinCellSizeX->setDecimals(6);
        mSpinCellSizeX->setMaximum(999999.000000000000000);

        horizontalLayout_3->addWidget(mSpinCellSizeX);

        mSpinCellSizeY = new QgsDoubleSpinBox(QgsAlignRasterDialog);
        mSpinCellSizeY->setObjectName(QString::fromUtf8("mSpinCellSizeY"));
        mSpinCellSizeY->setDecimals(6);
        mSpinCellSizeY->setMaximum(999999.000000000000000);

        horizontalLayout_3->addWidget(mSpinCellSizeY);


        gridLayout->addLayout(horizontalLayout_3, 2, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mSpinGridOffsetX = new QgsDoubleSpinBox(QgsAlignRasterDialog);
        mSpinGridOffsetX->setObjectName(QString::fromUtf8("mSpinGridOffsetX"));
        mSpinGridOffsetX->setDecimals(6);
        mSpinGridOffsetX->setMaximum(999999.000000000000000);

        horizontalLayout_4->addWidget(mSpinGridOffsetX);

        mSpinGridOffsetY = new QgsDoubleSpinBox(QgsAlignRasterDialog);
        mSpinGridOffsetY->setObjectName(QString::fromUtf8("mSpinGridOffsetY"));
        mSpinGridOffsetY->setDecimals(6);
        mSpinGridOffsetY->setMaximum(999999.000000000000000);

        horizontalLayout_4->addWidget(mSpinGridOffsetY);


        gridLayout->addLayout(horizontalLayout_4, 3, 2, 1, 1);

        mChkAddToCanvas = new QCheckBox(QgsAlignRasterDialog);
        mChkAddToCanvas->setObjectName(QString::fromUtf8("mChkAddToCanvas"));
        mChkAddToCanvas->setChecked(true);

        gridLayout->addWidget(mChkAddToCanvas, 7, 1, 1, 2);

        mClipExtentGroupBox = new QgsExtentGroupBox(QgsAlignRasterDialog);
        mClipExtentGroupBox->setObjectName(QString::fromUtf8("mClipExtentGroupBox"));
        mClipExtentGroupBox->setCheckable(true);
        gridLayout_2 = new QGridLayout(mClipExtentGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));

        gridLayout->addWidget(mClipExtentGroupBox, 4, 1, 1, 2);

        mEditOutputSize = new QLineEdit(QgsAlignRasterDialog);
        mEditOutputSize->setObjectName(QString::fromUtf8("mEditOutputSize"));
        mEditOutputSize->setReadOnly(true);

        gridLayout->addWidget(mEditOutputSize, 5, 2, 1, 1);

        mChkCustomCRS = new QCheckBox(QgsAlignRasterDialog);
        mChkCustomCRS->setObjectName(QString::fromUtf8("mChkCustomCRS"));

        gridLayout->addWidget(mChkCustomCRS, 1, 1, 1, 1);

        mChkCustomCellSize = new QCheckBox(QgsAlignRasterDialog);
        mChkCustomCellSize->setObjectName(QString::fromUtf8("mChkCustomCellSize"));

        gridLayout->addWidget(mChkCustomCellSize, 2, 1, 1, 1);

        mChkCustomGridOffset = new QCheckBox(QgsAlignRasterDialog);
        mChkCustomGridOffset->setObjectName(QString::fromUtf8("mChkCustomGridOffset"));

        gridLayout->addWidget(mChkCustomGridOffset, 3, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mProgress = new QProgressBar(QgsAlignRasterDialog);
        mProgress->setObjectName(QString::fromUtf8("mProgress"));
        mProgress->setValue(0);

        horizontalLayout_2->addWidget(mProgress);

        buttonBox = new QDialogButtonBox(QgsAlignRasterDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(mBtnAdd, mBtnEdit);
        QWidget::setTabOrder(mBtnEdit, mBtnRemove);
        QWidget::setTabOrder(mBtnRemove, mViewLayers);
        QWidget::setTabOrder(mViewLayers, mCboReferenceLayer);
        QWidget::setTabOrder(mCboReferenceLayer, mChkCustomCRS);
        QWidget::setTabOrder(mChkCustomCRS, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mChkCustomCellSize);
        QWidget::setTabOrder(mChkCustomCellSize, mSpinCellSizeX);
        QWidget::setTabOrder(mSpinCellSizeX, mSpinCellSizeY);
        QWidget::setTabOrder(mSpinCellSizeY, mChkCustomGridOffset);
        QWidget::setTabOrder(mChkCustomGridOffset, mSpinGridOffsetX);
        QWidget::setTabOrder(mSpinGridOffsetX, mSpinGridOffsetY);
        QWidget::setTabOrder(mSpinGridOffsetY, mClipExtentGroupBox);
        QWidget::setTabOrder(mClipExtentGroupBox, mEditOutputSize);
        QWidget::setTabOrder(mEditOutputSize, mChkAddToCanvas);
        QWidget::setTabOrder(mChkAddToCanvas, buttonBox);

        retranslateUi(QgsAlignRasterDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsAlignRasterDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(QgsAlignRasterDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsAlignRasterDialog)
    {
        QgsAlignRasterDialog->setWindowTitle(QCoreApplication::translate("QgsAlignRasterDialog", "Align Rasters", nullptr));
        label->setText(QCoreApplication::translate("QgsAlignRasterDialog", "Raster layers to align", nullptr));
        mBtnAdd->setText(QCoreApplication::translate("QgsAlignRasterDialog", "+", nullptr));
        mBtnEdit->setText(QCoreApplication::translate("QgsAlignRasterDialog", "/", nullptr));
        mBtnRemove->setText(QCoreApplication::translate("QgsAlignRasterDialog", "-", nullptr));
        label_6->setText(QCoreApplication::translate("QgsAlignRasterDialog", "Output size", nullptr));
        label_3->setText(QCoreApplication::translate("QgsAlignRasterDialog", "Reference layer", nullptr));
        mChkAddToCanvas->setText(QCoreApplication::translate("QgsAlignRasterDialog", "Add aligned rasters to map canvas", nullptr));
        mChkCustomCRS->setText(QCoreApplication::translate("QgsAlignRasterDialog", "CRS", nullptr));
        mChkCustomCellSize->setText(QCoreApplication::translate("QgsAlignRasterDialog", "Cell size", nullptr));
        mChkCustomGridOffset->setText(QCoreApplication::translate("QgsAlignRasterDialog", "Grid offset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAlignRasterDialog: public Ui_QgsAlignRasterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSALIGNRASTERDIALOG_H
