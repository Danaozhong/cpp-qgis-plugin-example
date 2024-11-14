/********************************************************************************
** Form generated from reading UI file 'qgsrastercalcdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERCALCDIALOGBASE_H
#define UI_QGSRASTERCALCDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsfilewidget.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterCalcDialogBase
{
public:
    QGridLayout *gridLayout_6;
    QDialogButtonBox *mButtonBox;
    QgsScrollArea *scrollArea;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_7;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QGroupBox *mRasterBandsGroupBox;
    QGridLayout *gridLayout_2;
    QListWidget *mRasterBandsListWidget;
    QGroupBox *mResultGroupBox;
    QGridLayout *gridLayout_4;
    QLabel *mOutputFormatLabel;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QgsDoubleSpinBox *mXMinSpinBox;
    QLabel *mXMaxLabel;
    QLabel *mYMinLabel;
    QLabel *mXMinLabel;
    QSpacerItem *horizontalSpacer_2;
    QgsDoubleSpinBox *mXMaxSpinBox;
    QgsDoubleSpinBox *mYMinSpinBox;
    QLabel *mYMaxLabel;
    QgsDoubleSpinBox *mYMaxSpinBox;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *mCurrentLayerExtentButton;
    QComboBox *mOutputFormatComboBox;
    QSpacerItem *verticalSpacer;
    QgsProjectionSelectionWidget *mCrsSelector;
    QLabel *mOutputLayerLabel;
    QCheckBox *mUseVirtualProviderCheckBox;
    QLabel *mVirtualLayerLabel;
    QLabel *label;
    QCheckBox *mAddResultToProjectCheckBox;
    QgsFileWidget *mOutputLayer;
    QLineEdit *mVirtualLayerName;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QLabel *mColumnsLabel;
    QgsSpinBox *mNColumnsSpinBox;
    QSpacerItem *horizontalSpacer;
    QLabel *mRowsLabel;
    QgsSpinBox *mNRowsSpinBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBox *mOperatorsGroupBox;
    QGridLayout *gridLayout;
    QPushButton *mPlusPushButton;
    QPushButton *mMultiplyPushButton;
    QPushButton *mOpenBracketPushButton;
    QPushButton *mMinButton;
    QPushButton *mConditionalStatButton;
    QPushButton *mCosButton;
    QPushButton *mACosButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *mMinusPushButton;
    QPushButton *mDividePushButton;
    QPushButton *mCloseBracketPushButton;
    QPushButton *mMaxButton;
    QPushButton *mAndButton;
    QPushButton *mSinButton;
    QPushButton *mASinButton;
    QPushButton *mLessButton;
    QPushButton *mGreaterButton;
    QPushButton *mEqualButton;
    QPushButton *mAbsButton;
    QPushButton *mOrButton;
    QPushButton *mTanButton;
    QPushButton *mATanButton;
    QPushButton *mLesserEqualButton;
    QPushButton *mGreaterEqualButton;
    QPushButton *mNotEqualButton;
    QPushButton *mExpButton;
    QPushButton *mSqrtButton;
    QPushButton *mLogButton;
    QPushButton *mLnButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *mExpressionTextEdit;
    QLabel *mExpressionValidLabel;

    void setupUi(QDialog *QgsRasterCalcDialogBase)
    {
        if (QgsRasterCalcDialogBase->objectName().isEmpty())
            QgsRasterCalcDialogBase->setObjectName(QString::fromUtf8("QgsRasterCalcDialogBase"));
        QgsRasterCalcDialogBase->resize(1000, 800);
        QgsRasterCalcDialogBase->setMinimumSize(QSize(640, 530));
        gridLayout_6 = new QGridLayout(QgsRasterCalcDialogBase);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mButtonBox = new QDialogButtonBox(QgsRasterCalcDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_6->addWidget(mButtonBox, 1, 0, 1, 1);

        scrollArea = new QgsScrollArea(QgsRasterCalcDialogBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setProperty("widgetResizable", QVariant(true));
        gridLayout_8 = new QGridLayout(scrollArea);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        splitter_2 = new QSplitter(scrollArea);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        mRasterBandsGroupBox = new QGroupBox(splitter);
        mRasterBandsGroupBox->setObjectName(QString::fromUtf8("mRasterBandsGroupBox"));
        gridLayout_2 = new QGridLayout(mRasterBandsGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mRasterBandsListWidget = new QListWidget(mRasterBandsGroupBox);
        mRasterBandsListWidget->setObjectName(QString::fromUtf8("mRasterBandsListWidget"));

        gridLayout_2->addWidget(mRasterBandsListWidget, 0, 0, 1, 1);

        splitter->addWidget(mRasterBandsGroupBox);
        mResultGroupBox = new QGroupBox(splitter);
        mResultGroupBox->setObjectName(QString::fromUtf8("mResultGroupBox"));
        gridLayout_4 = new QGridLayout(mResultGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mOutputFormatLabel = new QLabel(mResultGroupBox);
        mOutputFormatLabel->setObjectName(QString::fromUtf8("mOutputFormatLabel"));

        gridLayout_4->addWidget(mOutputFormatLabel, 3, 0, 1, 1);

        groupBox_2 = new QGroupBox(mResultGroupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mXMinSpinBox = new QgsDoubleSpinBox(groupBox_2);
        mXMinSpinBox->setObjectName(QString::fromUtf8("mXMinSpinBox"));
        mXMinSpinBox->setDecimals(5);
        mXMinSpinBox->setMinimum(-999999999.000000000000000);
        mXMinSpinBox->setMaximum(999999999.000000000000000);

        gridLayout_5->addWidget(mXMinSpinBox, 2, 1, 1, 1);

        mXMaxLabel = new QLabel(groupBox_2);
        mXMaxLabel->setObjectName(QString::fromUtf8("mXMaxLabel"));

        gridLayout_5->addWidget(mXMaxLabel, 2, 3, 1, 1);

        mYMinLabel = new QLabel(groupBox_2);
        mYMinLabel->setObjectName(QString::fromUtf8("mYMinLabel"));

        gridLayout_5->addWidget(mYMinLabel, 3, 0, 1, 1);

        mXMinLabel = new QLabel(groupBox_2);
        mXMinLabel->setObjectName(QString::fromUtf8("mXMinLabel"));

        gridLayout_5->addWidget(mXMinLabel, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        mXMaxSpinBox = new QgsDoubleSpinBox(groupBox_2);
        mXMaxSpinBox->setObjectName(QString::fromUtf8("mXMaxSpinBox"));
        mXMaxSpinBox->setDecimals(5);
        mXMaxSpinBox->setMinimum(-999999999.000000000000000);
        mXMaxSpinBox->setMaximum(999999999.000000000000000);

        gridLayout_5->addWidget(mXMaxSpinBox, 2, 4, 1, 1);

        mYMinSpinBox = new QgsDoubleSpinBox(groupBox_2);
        mYMinSpinBox->setObjectName(QString::fromUtf8("mYMinSpinBox"));
        mYMinSpinBox->setDecimals(5);
        mYMinSpinBox->setMinimum(-999999999.000000000000000);
        mYMinSpinBox->setMaximum(999999999.000000000000000);

        gridLayout_5->addWidget(mYMinSpinBox, 3, 1, 1, 1);

        mYMaxLabel = new QLabel(groupBox_2);
        mYMaxLabel->setObjectName(QString::fromUtf8("mYMaxLabel"));

        gridLayout_5->addWidget(mYMaxLabel, 3, 3, 1, 1);

        mYMaxSpinBox = new QgsDoubleSpinBox(groupBox_2);
        mYMaxSpinBox->setObjectName(QString::fromUtf8("mYMaxSpinBox"));
        mYMaxSpinBox->setDecimals(5);
        mYMaxSpinBox->setMinimum(-999999999.000000000000000);
        mYMaxSpinBox->setMaximum(999999999.000000000000000);

        gridLayout_5->addWidget(mYMaxSpinBox, 3, 4, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 1, 2, 4);

        mCurrentLayerExtentButton = new QPushButton(groupBox_2);
        mCurrentLayerExtentButton->setObjectName(QString::fromUtf8("mCurrentLayerExtentButton"));

        gridLayout_3->addWidget(mCurrentLayerExtentButton, 0, 0, 2, 1);


        gridLayout_5->addLayout(gridLayout_3, 0, 0, 2, 5);


        gridLayout_4->addWidget(groupBox_2, 4, 0, 1, 4);

        mOutputFormatComboBox = new QComboBox(mResultGroupBox);
        mOutputFormatComboBox->setObjectName(QString::fromUtf8("mOutputFormatComboBox"));

        gridLayout_4->addWidget(mOutputFormatComboBox, 3, 1, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 9, 0, 1, 1);

        mCrsSelector = new QgsProjectionSelectionWidget(mResultGroupBox);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        gridLayout_4->addWidget(mCrsSelector, 7, 1, 1, 3);

        mOutputLayerLabel = new QLabel(mResultGroupBox);
        mOutputLayerLabel->setObjectName(QString::fromUtf8("mOutputLayerLabel"));

        gridLayout_4->addWidget(mOutputLayerLabel, 2, 0, 1, 1);

        mUseVirtualProviderCheckBox = new QCheckBox(mResultGroupBox);
        mUseVirtualProviderCheckBox->setObjectName(QString::fromUtf8("mUseVirtualProviderCheckBox"));
        mUseVirtualProviderCheckBox->setLayoutDirection(Qt::LeftToRight);
        mUseVirtualProviderCheckBox->setTristate(false);

        gridLayout_4->addWidget(mUseVirtualProviderCheckBox, 0, 0, 1, 4);

        mVirtualLayerLabel = new QLabel(mResultGroupBox);
        mVirtualLayerLabel->setObjectName(QString::fromUtf8("mVirtualLayerLabel"));

        gridLayout_4->addWidget(mVirtualLayerLabel, 1, 0, 1, 1);

        label = new QLabel(mResultGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 7, 0, 1, 1);

        mAddResultToProjectCheckBox = new QCheckBox(mResultGroupBox);
        mAddResultToProjectCheckBox->setObjectName(QString::fromUtf8("mAddResultToProjectCheckBox"));
        mAddResultToProjectCheckBox->setChecked(true);

        gridLayout_4->addWidget(mAddResultToProjectCheckBox, 8, 0, 1, 4);

        mOutputLayer = new QgsFileWidget(mResultGroupBox);
        mOutputLayer->setObjectName(QString::fromUtf8("mOutputLayer"));

        gridLayout_4->addWidget(mOutputLayer, 2, 1, 1, 3);

        mVirtualLayerName = new QLineEdit(mResultGroupBox);
        mVirtualLayerName->setObjectName(QString::fromUtf8("mVirtualLayerName"));

        gridLayout_4->addWidget(mVirtualLayerName, 1, 1, 1, 3);

        groupBox_3 = new QGroupBox(mResultGroupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mColumnsLabel = new QLabel(groupBox_3);
        mColumnsLabel->setObjectName(QString::fromUtf8("mColumnsLabel"));

        horizontalLayout->addWidget(mColumnsLabel);

        mNColumnsSpinBox = new QgsSpinBox(groupBox_3);
        mNColumnsSpinBox->setObjectName(QString::fromUtf8("mNColumnsSpinBox"));
        mNColumnsSpinBox->setMaximum(999999999);

        horizontalLayout->addWidget(mNColumnsSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mRowsLabel = new QLabel(groupBox_3);
        mRowsLabel->setObjectName(QString::fromUtf8("mRowsLabel"));

        horizontalLayout->addWidget(mRowsLabel);

        mNRowsSpinBox = new QgsSpinBox(groupBox_3);
        mNRowsSpinBox->setObjectName(QString::fromUtf8("mNRowsSpinBox"));
        mNRowsSpinBox->setMaximum(999999999);

        horizontalLayout->addWidget(mNRowsSpinBox);


        gridLayout_4->addWidget(groupBox_3, 6, 0, 1, 4);

        splitter->addWidget(mResultGroupBox);
        splitter_2->addWidget(splitter);
        verticalLayoutWidget = new QWidget(splitter_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mOperatorsGroupBox = new QgsCollapsibleGroupBox(verticalLayoutWidget);
        mOperatorsGroupBox->setObjectName(QString::fromUtf8("mOperatorsGroupBox"));
        gridLayout = new QGridLayout(mOperatorsGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 0, 0);
        mPlusPushButton = new QPushButton(mOperatorsGroupBox);
        mPlusPushButton->setObjectName(QString::fromUtf8("mPlusPushButton"));
        mPlusPushButton->setText(QString::fromUtf8("+"));

        gridLayout->addWidget(mPlusPushButton, 0, 0, 1, 1);

        mMultiplyPushButton = new QPushButton(mOperatorsGroupBox);
        mMultiplyPushButton->setObjectName(QString::fromUtf8("mMultiplyPushButton"));
        mMultiplyPushButton->setText(QString::fromUtf8("*"));

        gridLayout->addWidget(mMultiplyPushButton, 0, 1, 1, 1);

        mOpenBracketPushButton = new QPushButton(mOperatorsGroupBox);
        mOpenBracketPushButton->setObjectName(QString::fromUtf8("mOpenBracketPushButton"));
        mOpenBracketPushButton->setText(QString::fromUtf8("("));

        gridLayout->addWidget(mOpenBracketPushButton, 0, 2, 1, 1);

        mMinButton = new QPushButton(mOperatorsGroupBox);
        mMinButton->setObjectName(QString::fromUtf8("mMinButton"));
        mMinButton->setText(QString::fromUtf8("min"));

        gridLayout->addWidget(mMinButton, 0, 3, 1, 1);

        mConditionalStatButton = new QPushButton(mOperatorsGroupBox);
        mConditionalStatButton->setObjectName(QString::fromUtf8("mConditionalStatButton"));
        mConditionalStatButton->setText(QString::fromUtf8("IF"));

        gridLayout->addWidget(mConditionalStatButton, 0, 4, 1, 1);

        mCosButton = new QPushButton(mOperatorsGroupBox);
        mCosButton->setObjectName(QString::fromUtf8("mCosButton"));
        mCosButton->setText(QString::fromUtf8("cos"));

        gridLayout->addWidget(mCosButton, 0, 5, 1, 1);

        mACosButton = new QPushButton(mOperatorsGroupBox);
        mACosButton->setObjectName(QString::fromUtf8("mACosButton"));
        mACosButton->setText(QString::fromUtf8("acos"));

        gridLayout->addWidget(mACosButton, 0, 6, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 7, 1, 1);

        mMinusPushButton = new QPushButton(mOperatorsGroupBox);
        mMinusPushButton->setObjectName(QString::fromUtf8("mMinusPushButton"));
        mMinusPushButton->setText(QString::fromUtf8("-"));

        gridLayout->addWidget(mMinusPushButton, 1, 0, 1, 1);

        mDividePushButton = new QPushButton(mOperatorsGroupBox);
        mDividePushButton->setObjectName(QString::fromUtf8("mDividePushButton"));
        mDividePushButton->setText(QString::fromUtf8("/"));

        gridLayout->addWidget(mDividePushButton, 1, 1, 1, 1);

        mCloseBracketPushButton = new QPushButton(mOperatorsGroupBox);
        mCloseBracketPushButton->setObjectName(QString::fromUtf8("mCloseBracketPushButton"));
        mCloseBracketPushButton->setText(QString::fromUtf8(")"));

        gridLayout->addWidget(mCloseBracketPushButton, 1, 2, 1, 1);

        mMaxButton = new QPushButton(mOperatorsGroupBox);
        mMaxButton->setObjectName(QString::fromUtf8("mMaxButton"));
        mMaxButton->setText(QString::fromUtf8("max"));

        gridLayout->addWidget(mMaxButton, 1, 3, 1, 1);

        mAndButton = new QPushButton(mOperatorsGroupBox);
        mAndButton->setObjectName(QString::fromUtf8("mAndButton"));
        mAndButton->setText(QString::fromUtf8("AND"));

        gridLayout->addWidget(mAndButton, 1, 4, 1, 1);

        mSinButton = new QPushButton(mOperatorsGroupBox);
        mSinButton->setObjectName(QString::fromUtf8("mSinButton"));
        mSinButton->setText(QString::fromUtf8("sin"));

        gridLayout->addWidget(mSinButton, 1, 5, 1, 1);

        mASinButton = new QPushButton(mOperatorsGroupBox);
        mASinButton->setObjectName(QString::fromUtf8("mASinButton"));
        mASinButton->setText(QString::fromUtf8("asin"));

        gridLayout->addWidget(mASinButton, 1, 6, 1, 1);

        mLessButton = new QPushButton(mOperatorsGroupBox);
        mLessButton->setObjectName(QString::fromUtf8("mLessButton"));
        mLessButton->setText(QString::fromUtf8("<"));

        gridLayout->addWidget(mLessButton, 2, 0, 1, 1);

        mGreaterButton = new QPushButton(mOperatorsGroupBox);
        mGreaterButton->setObjectName(QString::fromUtf8("mGreaterButton"));
        mGreaterButton->setText(QString::fromUtf8(">"));

        gridLayout->addWidget(mGreaterButton, 2, 1, 1, 1);

        mEqualButton = new QPushButton(mOperatorsGroupBox);
        mEqualButton->setObjectName(QString::fromUtf8("mEqualButton"));
        mEqualButton->setText(QString::fromUtf8("="));

        gridLayout->addWidget(mEqualButton, 2, 2, 1, 1);

        mAbsButton = new QPushButton(mOperatorsGroupBox);
        mAbsButton->setObjectName(QString::fromUtf8("mAbsButton"));
        mAbsButton->setText(QString::fromUtf8("abs"));

        gridLayout->addWidget(mAbsButton, 2, 3, 1, 1);

        mOrButton = new QPushButton(mOperatorsGroupBox);
        mOrButton->setObjectName(QString::fromUtf8("mOrButton"));
        mOrButton->setText(QString::fromUtf8("OR"));

        gridLayout->addWidget(mOrButton, 2, 4, 1, 1);

        mTanButton = new QPushButton(mOperatorsGroupBox);
        mTanButton->setObjectName(QString::fromUtf8("mTanButton"));
        mTanButton->setText(QString::fromUtf8("tan"));

        gridLayout->addWidget(mTanButton, 2, 5, 1, 1);

        mATanButton = new QPushButton(mOperatorsGroupBox);
        mATanButton->setObjectName(QString::fromUtf8("mATanButton"));
        mATanButton->setText(QString::fromUtf8("atan"));

        gridLayout->addWidget(mATanButton, 2, 6, 1, 1);

        mLesserEqualButton = new QPushButton(mOperatorsGroupBox);
        mLesserEqualButton->setObjectName(QString::fromUtf8("mLesserEqualButton"));
        mLesserEqualButton->setText(QString::fromUtf8("<="));

        gridLayout->addWidget(mLesserEqualButton, 3, 0, 1, 1);

        mGreaterEqualButton = new QPushButton(mOperatorsGroupBox);
        mGreaterEqualButton->setObjectName(QString::fromUtf8("mGreaterEqualButton"));
        mGreaterEqualButton->setText(QString::fromUtf8(">="));

        gridLayout->addWidget(mGreaterEqualButton, 3, 1, 1, 1);

        mNotEqualButton = new QPushButton(mOperatorsGroupBox);
        mNotEqualButton->setObjectName(QString::fromUtf8("mNotEqualButton"));
        mNotEqualButton->setText(QString::fromUtf8("!="));

        gridLayout->addWidget(mNotEqualButton, 3, 2, 1, 1);

        mExpButton = new QPushButton(mOperatorsGroupBox);
        mExpButton->setObjectName(QString::fromUtf8("mExpButton"));
        mExpButton->setText(QString::fromUtf8("^"));

        gridLayout->addWidget(mExpButton, 3, 3, 1, 1);

        mSqrtButton = new QPushButton(mOperatorsGroupBox);
        mSqrtButton->setObjectName(QString::fromUtf8("mSqrtButton"));
        mSqrtButton->setText(QString::fromUtf8("sqrt"));

        gridLayout->addWidget(mSqrtButton, 3, 4, 1, 1);

        mLogButton = new QPushButton(mOperatorsGroupBox);
        mLogButton->setObjectName(QString::fromUtf8("mLogButton"));
        mLogButton->setText(QString::fromUtf8("log10"));

        gridLayout->addWidget(mLogButton, 3, 5, 1, 1);

        mLnButton = new QPushButton(mOperatorsGroupBox);
        mLnButton->setObjectName(QString::fromUtf8("mLnButton"));
        mLnButton->setText(QString::fromUtf8("ln"));

        gridLayout->addWidget(mLnButton, 3, 6, 1, 1);


        verticalLayout->addWidget(mOperatorsGroupBox);

        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, 0, 0);
        mExpressionTextEdit = new QTextEdit(groupBox);
        mExpressionTextEdit->setObjectName(QString::fromUtf8("mExpressionTextEdit"));

        verticalLayout_2->addWidget(mExpressionTextEdit);


        verticalLayout->addWidget(groupBox);

        splitter_2->addWidget(verticalLayoutWidget);

        gridLayout_7->addWidget(splitter_2, 0, 0, 1, 1);

        mExpressionValidLabel = new QLabel(scrollArea);
        mExpressionValidLabel->setObjectName(QString::fromUtf8("mExpressionValidLabel"));

        gridLayout_7->addWidget(mExpressionValidLabel, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 0, 1, 1);


        gridLayout_6->addWidget(scrollArea, 0, 0, 1, 2);

        QWidget::setTabOrder(mRasterBandsListWidget, mUseVirtualProviderCheckBox);
        QWidget::setTabOrder(mUseVirtualProviderCheckBox, mVirtualLayerName);
        QWidget::setTabOrder(mVirtualLayerName, mOutputFormatComboBox);
        QWidget::setTabOrder(mOutputFormatComboBox, mCurrentLayerExtentButton);
        QWidget::setTabOrder(mCurrentLayerExtentButton, mXMinSpinBox);
        QWidget::setTabOrder(mXMinSpinBox, mXMaxSpinBox);
        QWidget::setTabOrder(mXMaxSpinBox, mYMinSpinBox);
        QWidget::setTabOrder(mYMinSpinBox, mYMaxSpinBox);
        QWidget::setTabOrder(mYMaxSpinBox, mNColumnsSpinBox);
        QWidget::setTabOrder(mNColumnsSpinBox, mNRowsSpinBox);
        QWidget::setTabOrder(mNRowsSpinBox, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mAddResultToProjectCheckBox);
        QWidget::setTabOrder(mAddResultToProjectCheckBox, mPlusPushButton);
        QWidget::setTabOrder(mPlusPushButton, mMultiplyPushButton);
        QWidget::setTabOrder(mMultiplyPushButton, mOpenBracketPushButton);
        QWidget::setTabOrder(mOpenBracketPushButton, mMinButton);
        QWidget::setTabOrder(mMinButton, mConditionalStatButton);
        QWidget::setTabOrder(mConditionalStatButton, mCosButton);
        QWidget::setTabOrder(mCosButton, mACosButton);
        QWidget::setTabOrder(mACosButton, mMinusPushButton);
        QWidget::setTabOrder(mMinusPushButton, mDividePushButton);
        QWidget::setTabOrder(mDividePushButton, mCloseBracketPushButton);
        QWidget::setTabOrder(mCloseBracketPushButton, mMaxButton);
        QWidget::setTabOrder(mMaxButton, mAndButton);
        QWidget::setTabOrder(mAndButton, mSinButton);
        QWidget::setTabOrder(mSinButton, mASinButton);
        QWidget::setTabOrder(mASinButton, mLessButton);
        QWidget::setTabOrder(mLessButton, mGreaterButton);
        QWidget::setTabOrder(mGreaterButton, mEqualButton);
        QWidget::setTabOrder(mEqualButton, mAbsButton);
        QWidget::setTabOrder(mAbsButton, mOrButton);
        QWidget::setTabOrder(mOrButton, mTanButton);
        QWidget::setTabOrder(mTanButton, mATanButton);
        QWidget::setTabOrder(mATanButton, mLesserEqualButton);
        QWidget::setTabOrder(mLesserEqualButton, mGreaterEqualButton);
        QWidget::setTabOrder(mGreaterEqualButton, mNotEqualButton);
        QWidget::setTabOrder(mNotEqualButton, mExpButton);
        QWidget::setTabOrder(mExpButton, mSqrtButton);
        QWidget::setTabOrder(mSqrtButton, mLogButton);
        QWidget::setTabOrder(mLogButton, mLnButton);
        QWidget::setTabOrder(mLnButton, mExpressionTextEdit);
        QWidget::setTabOrder(mExpressionTextEdit, mButtonBox);

        retranslateUi(QgsRasterCalcDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsRasterCalcDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsRasterCalcDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsRasterCalcDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsRasterCalcDialogBase)
    {
        QgsRasterCalcDialogBase->setWindowTitle(QCoreApplication::translate("QgsRasterCalcDialogBase", "Raster Calculator", nullptr));
        mRasterBandsGroupBox->setTitle(QCoreApplication::translate("QgsRasterCalcDialogBase", "Raster Bands", nullptr));
        mResultGroupBox->setTitle(QCoreApplication::translate("QgsRasterCalcDialogBase", "Result Layer", nullptr));
        mOutputFormatLabel->setText(QCoreApplication::translate("QgsRasterCalcDialogBase", "Output format", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsRasterCalcDialogBase", "Spatial Extent", nullptr));
        mXMaxLabel->setText(QCoreApplication::translate("QgsRasterCalcDialogBase", "X max", nullptr));
        mYMinLabel->setText(QCoreApplication::translate("QgsRasterCalcDialogBase", "Y min", nullptr));
        mXMinLabel->setText(QCoreApplication::translate("QgsRasterCalcDialogBase", "X min", nullptr));
        mYMaxLabel->setText(QCoreApplication::translate("QgsRasterCalcDialogBase", "Y max", nullptr));
        mCurrentLayerExtentButton->setText(QCoreApplication::translate("QgsRasterCalcDialogBase", "Use Selected Layer Extent", nullptr));
        mOutputLayerLabel->setText(QCoreApplication::translate("QgsRasterCalcDialogBase", "Output layer", nullptr));
#if QT_CONFIG(tooltip)
        mUseVirtualProviderCheckBox->setToolTip(QCoreApplication::translate("QgsRasterCalcDialogBase", "<html><head/><body><p>Note: the result raster will not be usable with any processing algorithm that expects a materialized raster.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mUseVirtualProviderCheckBox->setText(QCoreApplication::translate("QgsRasterCalcDialogBase", "Create on-the-fly raster instead of writing layer to disk", nullptr));
        mVirtualLayerLabel->setText(QCoreApplication::translate("QgsRasterCalcDialogBase", "Layer name", nullptr));
        label->setText(QCoreApplication::translate("QgsRasterCalcDialogBase", "Output CRS", nullptr));
        mAddResultToProjectCheckBox->setText(QCoreApplication::translate("QgsRasterCalcDialogBase", "Add result to project", nullptr));
        mVirtualLayerName->setText(QString());
        mVirtualLayerName->setPlaceholderText(QCoreApplication::translate("QgsRasterCalcDialogBase", "Autogenerated from expression", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QgsRasterCalcDialogBase", "Resolution", nullptr));
        mColumnsLabel->setText(QCoreApplication::translate("QgsRasterCalcDialogBase", "Columns", nullptr));
        mRowsLabel->setText(QCoreApplication::translate("QgsRasterCalcDialogBase", "Rows", nullptr));
        mOperatorsGroupBox->setTitle(QCoreApplication::translate("QgsRasterCalcDialogBase", "Operators", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsRasterCalcDialogBase", "Raster Calculator Expression", nullptr));
        mExpressionValidLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsRasterCalcDialogBase: public Ui_QgsRasterCalcDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERCALCDIALOGBASE_H
