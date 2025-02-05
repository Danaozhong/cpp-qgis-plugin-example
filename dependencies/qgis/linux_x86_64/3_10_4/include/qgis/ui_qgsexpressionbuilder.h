/********************************************************************************
** Form generated from reading UI file 'qgsexpressionbuilder.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEXPRESSIONBUILDER_H
#define UI_QGSEXPRESSIONBUILDER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscodeeditorexpression.h"
#include "qgscodeeditorpython.h"
#include "qgscollapsiblegroupbox.h"
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsExpressionBuilderWidgetBase
{
public:
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QSplitter *splitter;
    QWidget *layoutWidget_1;
    QVBoxLayout *verticalLayout;
    QFrame *frame1;
    QVBoxLayout *verticalLayout_6;
    QFrame *mOperatorsGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnEqualPushButton;
    QPushButton *btnPlusPushButton;
    QPushButton *btnMinusPushButton;
    QPushButton *btnDividePushButton;
    QPushButton *btnMultiplyPushButton;
    QPushButton *btnExpButton;
    QPushButton *btnConcatButton;
    QPushButton *btnOpenBracketPushButton;
    QPushButton *btnCloseBracketPushButton;
    QPushButton *btnNewLinePushButton;
    QgsCodeEditorExpression *txtExpressionString;
    QGridLayout *gridLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLabel *lblPreview;
    QFrame *mExpectedOutputFrame;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QLabel *lblExpected;
    QFrame *mOperationListGroup;
    QGridLayout *gridLayout_6;
    QSplitter *functionsplit;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_9;
    QgsFilterLineEdit *txtSearchEdit;
    QPushButton *mShowHelpButton;
    QTreeView *expressionTree;
    QWidget *mHelpAndValuesWidget;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *txtHelpText;
    QFrame *mValueGroupBox;
    QGridLayout *gridLayout_5;
    QLabel *label_4;
    QgsFilterLineEdit *txtSearchEditValues;
    QListView *mValuesListView;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *btnLoadAll;
    QPushButton *btnLoadSample;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_3;
    QSplitter *editorSplit;
    QWidget *widget3;
    QGridLayout *gridLayout_7;
    QListWidget *cmbFileNames;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btnNewFile;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QgsCodeEditorPython *txtPython;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lblAutoSave;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnRun;
    QgsCollapsibleGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QgsCodeEditorPython *mFunctionBuilderHelp;

    void setupUi(QWidget *QgsExpressionBuilderWidgetBase)
    {
        if (QgsExpressionBuilderWidgetBase->objectName().isEmpty())
            QgsExpressionBuilderWidgetBase->setObjectName(QString::fromUtf8("QgsExpressionBuilderWidgetBase"));
        QgsExpressionBuilderWidgetBase->resize(989, 519);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsExpressionBuilderWidgetBase->sizePolicy().hasHeightForWidth());
        QgsExpressionBuilderWidgetBase->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(QgsExpressionBuilderWidgetBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(QgsExpressionBuilderWidgetBase);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setDocumentMode(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(tab);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(false);
        splitter->setHandleWidth(4);
        splitter->setChildrenCollapsible(false);
        layoutWidget_1 = new QWidget(splitter);
        layoutWidget_1->setObjectName(QString::fromUtf8("layoutWidget_1"));
        verticalLayout = new QVBoxLayout(layoutWidget_1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame1 = new QFrame(layoutWidget_1);
        frame1->setObjectName(QString::fromUtf8("frame1"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame1->sizePolicy().hasHeightForWidth());
        frame1->setSizePolicy(sizePolicy1);
        frame1->setMinimumSize(QSize(0, 0));
        frame1->setMaximumSize(QSize(16777215, 16777215));
        frame1->setBaseSize(QSize(0, 0));
        verticalLayout_6 = new QVBoxLayout(frame1);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        mOperatorsGroupBox = new QFrame(frame1);
        mOperatorsGroupBox->setObjectName(QString::fromUtf8("mOperatorsGroupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mOperatorsGroupBox->sizePolicy().hasHeightForWidth());
        mOperatorsGroupBox->setSizePolicy(sizePolicy2);
        mOperatorsGroupBox->setMinimumSize(QSize(27, 0));
        mOperatorsGroupBox->setMaximumSize(QSize(300, 16777215));
        mOperatorsGroupBox->setSizeIncrement(QSize(20, 0));
        mOperatorsGroupBox->setBaseSize(QSize(7, 0));
        mOperatorsGroupBox->setLayoutDirection(Qt::LeftToRight);
        mOperatorsGroupBox->setAutoFillBackground(false);
        horizontalLayout_2 = new QHBoxLayout(mOperatorsGroupBox);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, 0, 0);
        btnEqualPushButton = new QPushButton(mOperatorsGroupBox);
        btnEqualPushButton->setObjectName(QString::fromUtf8("btnEqualPushButton"));

        horizontalLayout_2->addWidget(btnEqualPushButton);

        btnPlusPushButton = new QPushButton(mOperatorsGroupBox);
        btnPlusPushButton->setObjectName(QString::fromUtf8("btnPlusPushButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnPlusPushButton->sizePolicy().hasHeightForWidth());
        btnPlusPushButton->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(btnPlusPushButton);

        btnMinusPushButton = new QPushButton(mOperatorsGroupBox);
        btnMinusPushButton->setObjectName(QString::fromUtf8("btnMinusPushButton"));

        horizontalLayout_2->addWidget(btnMinusPushButton);

        btnDividePushButton = new QPushButton(mOperatorsGroupBox);
        btnDividePushButton->setObjectName(QString::fromUtf8("btnDividePushButton"));

        horizontalLayout_2->addWidget(btnDividePushButton);

        btnMultiplyPushButton = new QPushButton(mOperatorsGroupBox);
        btnMultiplyPushButton->setObjectName(QString::fromUtf8("btnMultiplyPushButton"));

        horizontalLayout_2->addWidget(btnMultiplyPushButton);

        btnExpButton = new QPushButton(mOperatorsGroupBox);
        btnExpButton->setObjectName(QString::fromUtf8("btnExpButton"));

        horizontalLayout_2->addWidget(btnExpButton);

        btnConcatButton = new QPushButton(mOperatorsGroupBox);
        btnConcatButton->setObjectName(QString::fromUtf8("btnConcatButton"));

        horizontalLayout_2->addWidget(btnConcatButton);

        btnOpenBracketPushButton = new QPushButton(mOperatorsGroupBox);
        btnOpenBracketPushButton->setObjectName(QString::fromUtf8("btnOpenBracketPushButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnOpenBracketPushButton->sizePolicy().hasHeightForWidth());
        btnOpenBracketPushButton->setSizePolicy(sizePolicy4);
        btnOpenBracketPushButton->setMinimumSize(QSize(0, 10));

        horizontalLayout_2->addWidget(btnOpenBracketPushButton);

        btnCloseBracketPushButton = new QPushButton(mOperatorsGroupBox);
        btnCloseBracketPushButton->setObjectName(QString::fromUtf8("btnCloseBracketPushButton"));

        horizontalLayout_2->addWidget(btnCloseBracketPushButton);

        btnNewLinePushButton = new QPushButton(mOperatorsGroupBox);
        btnNewLinePushButton->setObjectName(QString::fromUtf8("btnNewLinePushButton"));

        horizontalLayout_2->addWidget(btnNewLinePushButton);


        verticalLayout_6->addWidget(mOperatorsGroupBox);

        txtExpressionString = new QgsCodeEditorExpression(frame1);
        txtExpressionString->setObjectName(QString::fromUtf8("txtExpressionString"));

        verticalLayout_6->addWidget(txtExpressionString);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        frame = new QFrame(frame1);
        frame->setObjectName(QString::fromUtf8("frame"));
        horizontalLayout_4 = new QHBoxLayout(frame);
        horizontalLayout_4->setSpacing(3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetMinAndMaxSize);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy5);

        horizontalLayout_4->addWidget(label_2);

        lblPreview = new QLabel(frame);
        lblPreview->setObjectName(QString::fromUtf8("lblPreview"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(lblPreview->sizePolicy().hasHeightForWidth());
        lblPreview->setSizePolicy(sizePolicy6);
        lblPreview->setFrameShape(QFrame::NoFrame);
        lblPreview->setFrameShadow(QFrame::Sunken);
        lblPreview->setLineWidth(0);
        lblPreview->setMidLineWidth(0);
        lblPreview->setScaledContents(false);
        lblPreview->setWordWrap(false);
        lblPreview->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_4->addWidget(lblPreview);


        gridLayout->addWidget(frame, 1, 0, 1, 1);

        mExpectedOutputFrame = new QFrame(frame1);
        mExpectedOutputFrame->setObjectName(QString::fromUtf8("mExpectedOutputFrame"));
        horizontalLayout_7 = new QHBoxLayout(mExpectedOutputFrame);
        horizontalLayout_7->setSpacing(3);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setSizeConstraint(QLayout::SetMinAndMaxSize);
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(mExpectedOutputFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy5.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy5);

        horizontalLayout_7->addWidget(label_3);

        lblExpected = new QLabel(mExpectedOutputFrame);
        lblExpected->setObjectName(QString::fromUtf8("lblExpected"));
        sizePolicy6.setHeightForWidth(lblExpected->sizePolicy().hasHeightForWidth());
        lblExpected->setSizePolicy(sizePolicy6);
        lblExpected->setFrameShape(QFrame::NoFrame);
        lblExpected->setFrameShadow(QFrame::Sunken);
        lblExpected->setLineWidth(0);
        lblExpected->setMidLineWidth(0);
        lblExpected->setTextFormat(Qt::RichText);
        lblExpected->setScaledContents(false);
        lblExpected->setWordWrap(true);
        lblExpected->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_7->addWidget(lblExpected);


        gridLayout->addWidget(mExpectedOutputFrame, 0, 0, 1, 1);


        verticalLayout_6->addLayout(gridLayout);


        verticalLayout->addWidget(frame1);

        splitter->addWidget(layoutWidget_1);
        mOperationListGroup = new QFrame(splitter);
        mOperationListGroup->setObjectName(QString::fromUtf8("mOperationListGroup"));
        gridLayout_6 = new QGridLayout(mOperationListGroup);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        functionsplit = new QSplitter(mOperationListGroup);
        functionsplit->setObjectName(QString::fromUtf8("functionsplit"));
        functionsplit->setOrientation(Qt::Horizontal);
        layoutWidget1 = new QWidget(functionsplit);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        gridLayout_9 = new QGridLayout(layoutWidget1);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        txtSearchEdit = new QgsFilterLineEdit(layoutWidget1);
        txtSearchEdit->setObjectName(QString::fromUtf8("txtSearchEdit"));
        txtSearchEdit->setEnabled(true);

        gridLayout_9->addWidget(txtSearchEdit, 0, 0, 1, 1);

        mShowHelpButton = new QPushButton(layoutWidget1);
        mShowHelpButton->setObjectName(QString::fromUtf8("mShowHelpButton"));

        gridLayout_9->addWidget(mShowHelpButton, 0, 1, 1, 1);

        expressionTree = new QTreeView(layoutWidget1);
        expressionTree->setObjectName(QString::fromUtf8("expressionTree"));
        expressionTree->setFrameShape(QFrame::StyledPanel);
        expressionTree->setFrameShadow(QFrame::Sunken);
        expressionTree->setEditTriggers(QAbstractItemView::NoEditTriggers);
        expressionTree->setUniformRowHeights(false);
        expressionTree->setSortingEnabled(false);
        expressionTree->setAnimated(true);
        expressionTree->header()->setVisible(false);

        gridLayout_9->addWidget(expressionTree, 1, 0, 1, 2);

        functionsplit->addWidget(layoutWidget1);
        mHelpAndValuesWidget = new QWidget(functionsplit);
        mHelpAndValuesWidget->setObjectName(QString::fromUtf8("mHelpAndValuesWidget"));
        mHelpAndValuesWidget->setMinimumSize(QSize(250, 0));
        verticalLayout_2 = new QVBoxLayout(mHelpAndValuesWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        txtHelpText = new QTextBrowser(mHelpAndValuesWidget);
        txtHelpText->setObjectName(QString::fromUtf8("txtHelpText"));
        txtHelpText->setReadOnly(true);

        verticalLayout_2->addWidget(txtHelpText);

        mValueGroupBox = new QFrame(mHelpAndValuesWidget);
        mValueGroupBox->setObjectName(QString::fromUtf8("mValueGroupBox"));
        gridLayout_5 = new QGridLayout(mValueGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 10, 0, 0);
        label_4 = new QLabel(mValueGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy7(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy7);

        gridLayout_5->addWidget(label_4, 0, 0, 1, 1);

        txtSearchEditValues = new QgsFilterLineEdit(mValueGroupBox);
        txtSearchEditValues->setObjectName(QString::fromUtf8("txtSearchEditValues"));
        txtSearchEditValues->setEnabled(true);

        gridLayout_5->addWidget(txtSearchEditValues, 0, 1, 1, 1);

        mValuesListView = new QListView(mValueGroupBox);
        mValuesListView->setObjectName(QString::fromUtf8("mValuesListView"));
        mValuesListView->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout_5->addWidget(mValuesListView, 2, 0, 1, 2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 0, -1, -1);
        btnLoadAll = new QPushButton(mValueGroupBox);
        btnLoadAll->setObjectName(QString::fromUtf8("btnLoadAll"));

        horizontalLayout_8->addWidget(btnLoadAll);

        btnLoadSample = new QPushButton(mValueGroupBox);
        btnLoadSample->setObjectName(QString::fromUtf8("btnLoadSample"));

        horizontalLayout_8->addWidget(btnLoadSample);


        gridLayout_5->addLayout(horizontalLayout_8, 1, 1, 1, 1);


        verticalLayout_2->addWidget(mValueGroupBox);

        functionsplit->addWidget(mHelpAndValuesWidget);

        gridLayout_6->addWidget(functionsplit, 0, 0, 1, 1);

        splitter->addWidget(mOperationListGroup);

        gridLayout_3->addWidget(splitter, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalLayout_3 = new QHBoxLayout(tab_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        editorSplit = new QSplitter(tab_2);
        editorSplit->setObjectName(QString::fromUtf8("editorSplit"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(editorSplit->sizePolicy().hasHeightForWidth());
        editorSplit->setSizePolicy(sizePolicy8);
        editorSplit->setLineWidth(0);
        editorSplit->setMidLineWidth(0);
        editorSplit->setOrientation(Qt::Horizontal);
        editorSplit->setOpaqueResize(true);
        editorSplit->setHandleWidth(4);
        editorSplit->setChildrenCollapsible(false);
        widget3 = new QWidget(editorSplit);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        sizePolicy7.setHeightForWidth(widget3->sizePolicy().hasHeightForWidth());
        widget3->setSizePolicy(sizePolicy7);
        gridLayout_7 = new QGridLayout(widget3);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        cmbFileNames = new QListWidget(widget3);
        cmbFileNames->setObjectName(QString::fromUtf8("cmbFileNames"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(cmbFileNames->sizePolicy().hasHeightForWidth());
        cmbFileNames->setSizePolicy(sizePolicy9);
        cmbFileNames->setMinimumSize(QSize(0, 0));
        cmbFileNames->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout_7->addWidget(cmbFileNames, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        btnNewFile = new QPushButton(widget3);
        btnNewFile->setObjectName(QString::fromUtf8("btnNewFile"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/console/iconNewTabEditorConsole.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnNewFile->setIcon(icon);
        btnNewFile->setIconSize(QSize(24, 24));

        horizontalLayout_6->addWidget(btnNewFile);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        gridLayout_7->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        editorSplit->addWidget(widget3);
        widget = new QWidget(editorSplit);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy10(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy10.setHorizontalStretch(1);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy10);
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, -1, 1);
        txtPython = new QgsCodeEditorPython(widget);
        txtPython->setObjectName(QString::fromUtf8("txtPython"));

        verticalLayout_3->addWidget(txtPython);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        lblAutoSave = new QLabel(widget);
        lblAutoSave->setObjectName(QString::fromUtf8("lblAutoSave"));

        horizontalLayout_5->addWidget(lblAutoSave);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        btnRun = new QPushButton(widget);
        btnRun->setObjectName(QString::fromUtf8("btnRun"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionStart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRun->setIcon(icon1);

        horizontalLayout_5->addWidget(btnRun);


        verticalLayout_3->addLayout(horizontalLayout_5);

        groupBox = new QgsCollapsibleGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        mFunctionBuilderHelp = new QgsCodeEditorPython(groupBox);
        mFunctionBuilderHelp->setObjectName(QString::fromUtf8("mFunctionBuilderHelp"));

        gridLayout_4->addWidget(mFunctionBuilderHelp, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox);

        editorSplit->addWidget(widget);

        horizontalLayout_3->addWidget(editorSplit);

        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(QgsExpressionBuilderWidgetBase);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsExpressionBuilderWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsExpressionBuilderWidgetBase)
    {
        QgsExpressionBuilderWidgetBase->setWindowTitle(QApplication::translate("QgsExpressionBuilderWidgetBase", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        btnEqualPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Equal operator", nullptr));
#endif // QT_NO_TOOLTIP
        btnEqualPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "=", nullptr));
#ifndef QT_NO_TOOLTIP
        btnPlusPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Addition operator", nullptr));
#endif // QT_NO_TOOLTIP
        btnPlusPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "+", nullptr));
#ifndef QT_NO_TOOLTIP
        btnMinusPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Subtraction operator", nullptr));
#endif // QT_NO_TOOLTIP
        btnMinusPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "-", nullptr));
#ifndef QT_NO_TOOLTIP
        btnDividePushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Division operator", nullptr));
#endif // QT_NO_TOOLTIP
        btnDividePushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "/", nullptr));
#ifndef QT_NO_TOOLTIP
        btnMultiplyPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Multiplication operator", nullptr));
#endif // QT_NO_TOOLTIP
        btnMultiplyPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "*", nullptr));
#ifndef QT_NO_TOOLTIP
        btnExpButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Power operator", nullptr));
#endif // QT_NO_TOOLTIP
        btnExpButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "^", nullptr));
#ifndef QT_NO_TOOLTIP
        btnConcatButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "String Concatenation", nullptr));
#endif // QT_NO_TOOLTIP
        btnConcatButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "||", nullptr));
#ifndef QT_NO_TOOLTIP
        btnOpenBracketPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Open Bracket ", nullptr));
#endif // QT_NO_TOOLTIP
        btnOpenBracketPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "(", nullptr));
#ifndef QT_NO_TOOLTIP
        btnCloseBracketPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Close Bracket ", nullptr));
#endif // QT_NO_TOOLTIP
        btnCloseBracketPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", ")", nullptr));
#ifndef QT_NO_TOOLTIP
        btnNewLinePushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "New Line", nullptr));
#endif // QT_NO_TOOLTIP
        btnNewLinePushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "'\\n'", nullptr));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Output preview is generated <br> using the first feature from the layer.", nullptr));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Output preview: ", nullptr));
#ifndef QT_NO_TOOLTIP
        lblPreview->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Output preview is generated <br> using the first feature from the layer.", nullptr));
#endif // QT_NO_TOOLTIP
        lblPreview->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Output preview is generated <br> using the first feature from the layer.", nullptr));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Expected Format:", nullptr));
#ifndef QT_NO_TOOLTIP
        lblExpected->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Output preview is generated <br> using the first feature from the layer.", nullptr));
#endif // QT_NO_TOOLTIP
        lblExpected->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "string [r,g,b,a] as int 0-255 or #RRGGBBAA as hex or color as color's name", nullptr));
        mShowHelpButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Show Help", nullptr));
        label_4->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Values", nullptr));
        btnLoadAll->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "All Unique", nullptr));
        btnLoadSample->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "10 Samples", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QgsExpressionBuilderWidgetBase", "Expression", nullptr));
#ifndef QT_NO_TOOLTIP
        btnNewFile->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Create a new function file based on the template file.\n"
"\n"
"Change the name of the script and save to allow QGIS to auto load on startup.", nullptr));
#endif // QT_NO_TOOLTIP
        btnNewFile->setText(QString());
        lblAutoSave->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnRun->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Run the current editor text in QGIS (also saves current script).\n"
"\n"
"Use this when testing your functions.\n"
"\n"
"Saved scripts are auto loaded on QGIS startup.", nullptr));
#endif // QT_NO_TOOLTIP
        btnRun->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Save and Load Functions", nullptr));
        groupBox->setTitle(QApplication::translate("QgsExpressionBuilderWidgetBase", "Help", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("QgsExpressionBuilderWidgetBase", "Function Editor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsExpressionBuilderWidgetBase: public Ui_QgsExpressionBuilderWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEXPRESSIONBUILDER_H
