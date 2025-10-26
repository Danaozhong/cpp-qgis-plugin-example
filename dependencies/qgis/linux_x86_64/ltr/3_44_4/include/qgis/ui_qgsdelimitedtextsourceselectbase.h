/********************************************************************************
** Form generated from reading UI file 'qgsdelimitedtextsourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDELIMITEDTEXTSOURCESELECTBASE_H
#define UI_QGSDELIMITEDTEXTSOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsfilewidget.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDelimitedTextSourceSelectBase
{
public:
    QVBoxLayout *verticalLayout_17;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *textLabelFileName;
    QgsFileWidget *mFileWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lblEncoding;
    QComboBox *cmbEncoding;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QgsCollapsibleGroupBox *fileFormatGroupBox;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_3;
    QRadioButton *delimiterChars;
    QRadioButton *delimiterCSV;
    QRadioButton *delimiterRegexp;
    QStackedWidget *swFileFormat;
    QWidget *swpCSVOptions;
    QVBoxLayout *verticalLayout_7;
    QWidget *swpDelimOptions;
    QVBoxLayout *verticalLayout_11;
    QFrame *frameDelimiterCharacters;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *layoutDelimChars;
    QLabel *labelEscape;
    QLabel *labelQuote;
    QCheckBox *cbxDelimSemicolon;
    QCheckBox *cbxDelimTab;
    QCheckBox *cbxDelimComma;
    QLineEdit *txtQuoteChars;
    QCheckBox *cbxDelimColon;
    QLineEdit *txtEscapeChars;
    QLineEdit *txtDelimiterOther;
    QLabel *labelDelimOther;
    QCheckBox *cbxDelimSpace;
    QWidget *swpRegexpOptions;
    QVBoxLayout *verticalLayout_12;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QLineEdit *txtDelimiterRegexp;
    QLabel *lblRegexpError;
    QgsCollapsibleGroupBox *recordOptionsGroupBox;
    QGridLayout *gridLayout_4;
    QCheckBox *cbxTrimFields;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QgsSpinBox *rowCounter;
    QCheckBox *cbxSkipEmptyFields;
    QCheckBox *cbxDetectTypes;
    QCheckBox *cbxPointIsComma;
    QCheckBox *cbxUseHeader;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *mBoolTrueLabel;
    QLineEdit *mBooleanTrue;
    QLabel *mBooleanFalseLabel;
    QLineEdit *mBooleanFalse;
    QgsCollapsibleGroupBox *geometryDefinitionGroupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_16;
    QRadioButton *geomTypeXY;
    QRadioButton *geomTypeWKT;
    QRadioButton *geomTypeNone;
    QVBoxLayout *mGeometryDetailsLayout;
    QStackedWidget *swGeomType;
    QWidget *swpGeomXY;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout_5;
    QLabel *textLabelY;
    QLabel *textLabelZ;
    QLabel *textLabelX;
    QComboBox *cmbYField;
    QCheckBox *cbxXyDms;
    QComboBox *cmbZField;
    QLabel *textLabelM;
    QComboBox *cmbMField;
    QComboBox *cmbXField;
    QWidget *swpGeomWKT;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *cmbGeometryType;
    QLabel *label_5;
    QComboBox *cmbWktField;
    QWidget *swpGeomNone;
    QHBoxLayout *horizontalLayout_2;
    QLabel *textLabelCrs;
    QgsProjectionSelectionWidget *crsGeometry;
    QSpacerItem *verticalSpacer_2;
    QgsCollapsibleGroupBox *layerSettingsGroupBox;
    QVBoxLayout *verticalLayout_14;
    QGridLayout *gridLayout_6;
    QCheckBox *cbxSpatialIndex;
    QCheckBox *cbxSubsetIndex;
    QCheckBox *cbxWatchFile;
    QGroupBox *sampleDataGroupBox;
    QVBoxLayout *verticalLayout_9;
    QWidget *mScanWidget;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *mProgressLayout;
    QLabel *mProgressLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *mCancelButton;
    QTableWidget *tblSample;
    QSpacerItem *verticalSpacer;
    QLabel *lblStatus;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDelimitedTextSourceSelectBase)
    {
        if (QgsDelimitedTextSourceSelectBase->objectName().isEmpty())
            QgsDelimitedTextSourceSelectBase->setObjectName(QString::fromUtf8("QgsDelimitedTextSourceSelectBase"));
        QgsDelimitedTextSourceSelectBase->resize(730, 643);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsDelimitedTextSourceSelectBase->sizePolicy().hasHeightForWidth());
        QgsDelimitedTextSourceSelectBase->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsDelimitedTextSourceSelectBase->setWindowIcon(icon);
        verticalLayout_17 = new QVBoxLayout(QgsDelimitedTextSourceSelectBase);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        widget_3 = new QWidget(QgsDelimitedTextSourceSelectBase);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        widget_3->setAcceptDrops(true);
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        textLabelFileName = new QLabel(widget_3);
        textLabelFileName->setObjectName(QString::fromUtf8("textLabelFileName"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textLabelFileName->sizePolicy().hasHeightForWidth());
        textLabelFileName->setSizePolicy(sizePolicy2);
        textLabelFileName->setIndent(0);

        horizontalLayout_5->addWidget(textLabelFileName);

        mFileWidget = new QgsFileWidget(widget_3);
        mFileWidget->setObjectName(QString::fromUtf8("mFileWidget"));

        horizontalLayout_5->addWidget(mFileWidget);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        lblEncoding = new QLabel(widget_3);
        lblEncoding->setObjectName(QString::fromUtf8("lblEncoding"));

        horizontalLayout_6->addWidget(lblEncoding);

        cmbEncoding = new QComboBox(widget_3);
        cmbEncoding->setObjectName(QString::fromUtf8("cmbEncoding"));
        cmbEncoding->setInsertPolicy(QComboBox::InsertPolicy::InsertAtTop);

        horizontalLayout_6->addWidget(cmbEncoding);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_17->addWidget(widget_3);

        scrollArea = new QgsScrollArea(QgsDelimitedTextSourceSelectBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy3);
        scrollArea->setMaximumSize(QSize(16777215, 16777215));
        scrollArea->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 698, 655));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy4);
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        fileFormatGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        fileFormatGroupBox->setObjectName(QString::fromUtf8("fileFormatGroupBox"));
        sizePolicy1.setHeightForWidth(fileFormatGroupBox->sizePolicy().hasHeightForWidth());
        fileFormatGroupBox->setSizePolicy(sizePolicy1);
        fileFormatGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout_8 = new QGridLayout(fileFormatGroupBox);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        delimiterChars = new QRadioButton(fileFormatGroupBox);
        delimiterChars->setObjectName(QString::fromUtf8("delimiterChars"));
        sizePolicy2.setHeightForWidth(delimiterChars->sizePolicy().hasHeightForWidth());
        delimiterChars->setSizePolicy(sizePolicy2);
        delimiterChars->setChecked(false);

        gridLayout_3->addWidget(delimiterChars, 2, 0, 1, 1);

        delimiterCSV = new QRadioButton(fileFormatGroupBox);
        delimiterCSV->setObjectName(QString::fromUtf8("delimiterCSV"));
        sizePolicy2.setHeightForWidth(delimiterCSV->sizePolicy().hasHeightForWidth());
        delimiterCSV->setSizePolicy(sizePolicy2);
        delimiterCSV->setChecked(true);

        gridLayout_3->addWidget(delimiterCSV, 0, 0, 1, 1);

        delimiterRegexp = new QRadioButton(fileFormatGroupBox);
        delimiterRegexp->setObjectName(QString::fromUtf8("delimiterRegexp"));
        sizePolicy2.setHeightForWidth(delimiterRegexp->sizePolicy().hasHeightForWidth());
        delimiterRegexp->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(delimiterRegexp, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_3, 0, 0, 1, 1);

        swFileFormat = new QStackedWidget(fileFormatGroupBox);
        swFileFormat->setObjectName(QString::fromUtf8("swFileFormat"));
        swpCSVOptions = new QWidget();
        swpCSVOptions->setObjectName(QString::fromUtf8("swpCSVOptions"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(swpCSVOptions->sizePolicy().hasHeightForWidth());
        swpCSVOptions->setSizePolicy(sizePolicy5);
        verticalLayout_7 = new QVBoxLayout(swpCSVOptions);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        swFileFormat->addWidget(swpCSVOptions);
        swpDelimOptions = new QWidget();
        swpDelimOptions->setObjectName(QString::fromUtf8("swpDelimOptions"));
        verticalLayout_11 = new QVBoxLayout(swpDelimOptions);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        frameDelimiterCharacters = new QFrame(swpDelimOptions);
        frameDelimiterCharacters->setObjectName(QString::fromUtf8("frameDelimiterCharacters"));
        sizePolicy4.setHeightForWidth(frameDelimiterCharacters->sizePolicy().hasHeightForWidth());
        frameDelimiterCharacters->setSizePolicy(sizePolicy4);
        frameDelimiterCharacters->setFrameShape(QFrame::Shape::StyledPanel);
        frameDelimiterCharacters->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(frameDelimiterCharacters);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        layoutDelimChars = new QGridLayout();
        layoutDelimChars->setSpacing(6);
        layoutDelimChars->setObjectName(QString::fromUtf8("layoutDelimChars"));
        labelEscape = new QLabel(frameDelimiterCharacters);
        labelEscape->setObjectName(QString::fromUtf8("labelEscape"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(labelEscape->sizePolicy().hasHeightForWidth());
        labelEscape->setSizePolicy(sizePolicy6);
        labelEscape->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        layoutDelimChars->addWidget(labelEscape, 2, 3, 1, 1);

        labelQuote = new QLabel(frameDelimiterCharacters);
        labelQuote->setObjectName(QString::fromUtf8("labelQuote"));
        sizePolicy6.setHeightForWidth(labelQuote->sizePolicy().hasHeightForWidth());
        labelQuote->setSizePolicy(sizePolicy6);
        labelQuote->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignVCenter);

        layoutDelimChars->addWidget(labelQuote, 2, 0, 1, 1);

        cbxDelimSemicolon = new QCheckBox(frameDelimiterCharacters);
        cbxDelimSemicolon->setObjectName(QString::fromUtf8("cbxDelimSemicolon"));

        layoutDelimChars->addWidget(cbxDelimSemicolon, 1, 0, 1, 2);

        cbxDelimTab = new QCheckBox(frameDelimiterCharacters);
        cbxDelimTab->setObjectName(QString::fromUtf8("cbxDelimTab"));
        cbxDelimTab->setChecked(true);

        layoutDelimChars->addWidget(cbxDelimTab, 0, 0, 1, 2);

        cbxDelimComma = new QCheckBox(frameDelimiterCharacters);
        cbxDelimComma->setObjectName(QString::fromUtf8("cbxDelimComma"));

        layoutDelimChars->addWidget(cbxDelimComma, 1, 2, 1, 1);

        txtQuoteChars = new QLineEdit(frameDelimiterCharacters);
        txtQuoteChars->setObjectName(QString::fromUtf8("txtQuoteChars"));
        sizePolicy1.setHeightForWidth(txtQuoteChars->sizePolicy().hasHeightForWidth());
        txtQuoteChars->setSizePolicy(sizePolicy1);
        txtQuoteChars->setMaxLength(10);

        layoutDelimChars->addWidget(txtQuoteChars, 2, 1, 1, 1);

        cbxDelimColon = new QCheckBox(frameDelimiterCharacters);
        cbxDelimColon->setObjectName(QString::fromUtf8("cbxDelimColon"));

        layoutDelimChars->addWidget(cbxDelimColon, 0, 2, 1, 1);

        txtEscapeChars = new QLineEdit(frameDelimiterCharacters);
        txtEscapeChars->setObjectName(QString::fromUtf8("txtEscapeChars"));
        sizePolicy1.setHeightForWidth(txtEscapeChars->sizePolicy().hasHeightForWidth());
        txtEscapeChars->setSizePolicy(sizePolicy1);
        txtEscapeChars->setMaxLength(10);

        layoutDelimChars->addWidget(txtEscapeChars, 2, 4, 1, 1);

        txtDelimiterOther = new QLineEdit(frameDelimiterCharacters);
        txtDelimiterOther->setObjectName(QString::fromUtf8("txtDelimiterOther"));
        txtDelimiterOther->setEnabled(true);
        QSizePolicy sizePolicy7(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(txtDelimiterOther->sizePolicy().hasHeightForWidth());
        txtDelimiterOther->setSizePolicy(sizePolicy7);
        txtDelimiterOther->setMaximumSize(QSize(32767, 32767));
        txtDelimiterOther->setMaxLength(10);

        layoutDelimChars->addWidget(txtDelimiterOther, 1, 4, 1, 1);

        labelDelimOther = new QLabel(frameDelimiterCharacters);
        labelDelimOther->setObjectName(QString::fromUtf8("labelDelimOther"));
        sizePolicy6.setHeightForWidth(labelDelimOther->sizePolicy().hasHeightForWidth());
        labelDelimOther->setSizePolicy(sizePolicy6);
        labelDelimOther->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        layoutDelimChars->addWidget(labelDelimOther, 1, 3, 1, 1);

        cbxDelimSpace = new QCheckBox(frameDelimiterCharacters);
        cbxDelimSpace->setObjectName(QString::fromUtf8("cbxDelimSpace"));
        cbxDelimSpace->setChecked(false);

        layoutDelimChars->addWidget(cbxDelimSpace, 0, 3, 1, 2);


        verticalLayout_3->addLayout(layoutDelimChars);


        verticalLayout_11->addWidget(frameDelimiterCharacters);

        swFileFormat->addWidget(swpDelimOptions);
        swpRegexpOptions = new QWidget();
        swpRegexpOptions->setObjectName(QString::fromUtf8("swpRegexpOptions"));
        verticalLayout_12 = new QVBoxLayout(swpRegexpOptions);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(swpRegexpOptions);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_2->addWidget(label_9);

        txtDelimiterRegexp = new QLineEdit(frame);
        txtDelimiterRegexp->setObjectName(QString::fromUtf8("txtDelimiterRegexp"));
        txtDelimiterRegexp->setEnabled(true);
        sizePolicy2.setHeightForWidth(txtDelimiterRegexp->sizePolicy().hasHeightForWidth());
        txtDelimiterRegexp->setSizePolicy(sizePolicy2);
        txtDelimiterRegexp->setMaximumSize(QSize(32767, 32767));

        verticalLayout_2->addWidget(txtDelimiterRegexp);

        lblRegexpError = new QLabel(frame);
        lblRegexpError->setObjectName(QString::fromUtf8("lblRegexpError"));
        lblRegexpError->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        verticalLayout_2->addWidget(lblRegexpError);


        verticalLayout_12->addWidget(frame);

        swFileFormat->addWidget(swpRegexpOptions);

        gridLayout_8->addWidget(swFileFormat, 0, 1, 1, 1);


        verticalLayout_4->addWidget(fileFormatGroupBox);

        recordOptionsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        recordOptionsGroupBox->setObjectName(QString::fromUtf8("recordOptionsGroupBox"));
        sizePolicy1.setHeightForWidth(recordOptionsGroupBox->sizePolicy().hasHeightForWidth());
        recordOptionsGroupBox->setSizePolicy(sizePolicy1);
        recordOptionsGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout_4 = new QGridLayout(recordOptionsGroupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        cbxTrimFields = new QCheckBox(recordOptionsGroupBox);
        cbxTrimFields->setObjectName(QString::fromUtf8("cbxTrimFields"));

        gridLayout_4->addWidget(cbxTrimFields, 1, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 9, -1);
        label_4 = new QLabel(recordOptionsGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy8(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy8);

        horizontalLayout_4->addWidget(label_4);

        rowCounter = new QgsSpinBox(recordOptionsGroupBox);
        rowCounter->setObjectName(QString::fromUtf8("rowCounter"));
        rowCounter->setMinimumSize(QSize(0, 0));
        rowCounter->setMaximumSize(QSize(16777215, 16777215));
        rowCounter->setWrapping(false);
        rowCounter->setMaximum(9999);
        rowCounter->setValue(0);

        horizontalLayout_4->addWidget(rowCounter);


        gridLayout_4->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        cbxSkipEmptyFields = new QCheckBox(recordOptionsGroupBox);
        cbxSkipEmptyFields->setObjectName(QString::fromUtf8("cbxSkipEmptyFields"));

        gridLayout_4->addWidget(cbxSkipEmptyFields, 2, 1, 1, 1);

        cbxDetectTypes = new QCheckBox(recordOptionsGroupBox);
        cbxDetectTypes->setObjectName(QString::fromUtf8("cbxDetectTypes"));
        cbxDetectTypes->setChecked(true);

        gridLayout_4->addWidget(cbxDetectTypes, 2, 0, 1, 1);

        cbxPointIsComma = new QCheckBox(recordOptionsGroupBox);
        cbxPointIsComma->setObjectName(QString::fromUtf8("cbxPointIsComma"));
        cbxPointIsComma->setEnabled(true);

        gridLayout_4->addWidget(cbxPointIsComma, 0, 1, 1, 1);

        cbxUseHeader = new QCheckBox(recordOptionsGroupBox);
        cbxUseHeader->setObjectName(QString::fromUtf8("cbxUseHeader"));
        cbxUseHeader->setChecked(true);

        gridLayout_4->addWidget(cbxUseHeader, 1, 0, 1, 1);

        groupBox = new QGroupBox(recordOptionsGroupBox);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_10 = new QHBoxLayout(groupBox);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        mBoolTrueLabel = new QLabel(groupBox);
        mBoolTrueLabel->setObjectName(QString::fromUtf8("mBoolTrueLabel"));

        horizontalLayout_8->addWidget(mBoolTrueLabel);

        mBooleanTrue = new QLineEdit(groupBox);
        mBooleanTrue->setObjectName(QString::fromUtf8("mBooleanTrue"));

        horizontalLayout_8->addWidget(mBooleanTrue);


        horizontalLayout_9->addLayout(horizontalLayout_8);

        mBooleanFalseLabel = new QLabel(groupBox);
        mBooleanFalseLabel->setObjectName(QString::fromUtf8("mBooleanFalseLabel"));

        horizontalLayout_9->addWidget(mBooleanFalseLabel);

        mBooleanFalse = new QLineEdit(groupBox);
        mBooleanFalse->setObjectName(QString::fromUtf8("mBooleanFalse"));

        horizontalLayout_9->addWidget(mBooleanFalse);


        horizontalLayout_10->addLayout(horizontalLayout_9);


        gridLayout_4->addWidget(groupBox, 3, 0, 1, 2);


        verticalLayout_4->addWidget(recordOptionsGroupBox);

        geometryDefinitionGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        geometryDefinitionGroupBox->setObjectName(QString::fromUtf8("geometryDefinitionGroupBox"));
        sizePolicy1.setHeightForWidth(geometryDefinitionGroupBox->sizePolicy().hasHeightForWidth());
        geometryDefinitionGroupBox->setSizePolicy(sizePolicy1);
        geometryDefinitionGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout = new QGridLayout(geometryDefinitionGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(-1, 0, -1, -1);
        geomTypeXY = new QRadioButton(geometryDefinitionGroupBox);
        geomTypeXY->setObjectName(QString::fromUtf8("geomTypeXY"));
        geomTypeXY->setEnabled(true);
        geomTypeXY->setChecked(true);

        verticalLayout_16->addWidget(geomTypeXY);

        geomTypeWKT = new QRadioButton(geometryDefinitionGroupBox);
        geomTypeWKT->setObjectName(QString::fromUtf8("geomTypeWKT"));
        geomTypeWKT->setEnabled(true);

        verticalLayout_16->addWidget(geomTypeWKT);

        geomTypeNone = new QRadioButton(geometryDefinitionGroupBox);
        geomTypeNone->setObjectName(QString::fromUtf8("geomTypeNone"));

        verticalLayout_16->addWidget(geomTypeNone);


        gridLayout->addLayout(verticalLayout_16, 0, 0, 1, 1);

        mGeometryDetailsLayout = new QVBoxLayout();
        mGeometryDetailsLayout->setSpacing(0);
        mGeometryDetailsLayout->setObjectName(QString::fromUtf8("mGeometryDetailsLayout"));
        swGeomType = new QStackedWidget(geometryDefinitionGroupBox);
        swGeomType->setObjectName(QString::fromUtf8("swGeomType"));
        swpGeomXY = new QWidget();
        swpGeomXY->setObjectName(QString::fromUtf8("swpGeomXY"));
        sizePolicy4.setHeightForWidth(swpGeomXY->sizePolicy().hasHeightForWidth());
        swpGeomXY->setSizePolicy(sizePolicy4);
        verticalLayout_8 = new QVBoxLayout(swpGeomXY);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        textLabelY = new QLabel(swpGeomXY);
        textLabelY->setObjectName(QString::fromUtf8("textLabelY"));
        textLabelY->setEnabled(true);
        sizePolicy4.setHeightForWidth(textLabelY->sizePolicy().hasHeightForWidth());
        textLabelY->setSizePolicy(sizePolicy4);

        gridLayout_5->addWidget(textLabelY, 1, 0, 1, 1);

        textLabelZ = new QLabel(swpGeomXY);
        textLabelZ->setObjectName(QString::fromUtf8("textLabelZ"));
        textLabelZ->setEnabled(true);
        sizePolicy4.setHeightForWidth(textLabelZ->sizePolicy().hasHeightForWidth());
        textLabelZ->setSizePolicy(sizePolicy4);

        gridLayout_5->addWidget(textLabelZ, 0, 2, 1, 1);

        textLabelX = new QLabel(swpGeomXY);
        textLabelX->setObjectName(QString::fromUtf8("textLabelX"));
        textLabelX->setEnabled(true);
        textLabelX->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_5->addWidget(textLabelX, 0, 0, 1, 1);

        cmbYField = new QComboBox(swpGeomXY);
        cmbYField->setObjectName(QString::fromUtf8("cmbYField"));
        cmbYField->setEnabled(true);
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(cmbYField->sizePolicy().hasHeightForWidth());
        cmbYField->setSizePolicy(sizePolicy9);
        cmbYField->setMinimumSize(QSize(120, 0));
        cmbYField->setEditable(false);

        gridLayout_5->addWidget(cmbYField, 1, 1, 1, 1);

        cbxXyDms = new QCheckBox(swpGeomXY);
        cbxXyDms->setObjectName(QString::fromUtf8("cbxXyDms"));

        gridLayout_5->addWidget(cbxXyDms, 2, 1, 1, 3);

        cmbZField = new QComboBox(swpGeomXY);
        cmbZField->setObjectName(QString::fromUtf8("cmbZField"));
        cmbZField->setEnabled(true);
        sizePolicy9.setHeightForWidth(cmbZField->sizePolicy().hasHeightForWidth());
        cmbZField->setSizePolicy(sizePolicy9);
        cmbZField->setMinimumSize(QSize(120, 0));
        cmbZField->setEditable(false);

        gridLayout_5->addWidget(cmbZField, 0, 3, 1, 1);

        textLabelM = new QLabel(swpGeomXY);
        textLabelM->setObjectName(QString::fromUtf8("textLabelM"));
        textLabelM->setEnabled(true);
        sizePolicy4.setHeightForWidth(textLabelM->sizePolicy().hasHeightForWidth());
        textLabelM->setSizePolicy(sizePolicy4);

        gridLayout_5->addWidget(textLabelM, 1, 2, 1, 1);

        cmbMField = new QComboBox(swpGeomXY);
        cmbMField->setObjectName(QString::fromUtf8("cmbMField"));
        cmbMField->setEnabled(true);
        sizePolicy9.setHeightForWidth(cmbMField->sizePolicy().hasHeightForWidth());
        cmbMField->setSizePolicy(sizePolicy9);
        cmbMField->setMinimumSize(QSize(120, 0));
        cmbMField->setEditable(false);

        gridLayout_5->addWidget(cmbMField, 1, 3, 1, 1);

        cmbXField = new QComboBox(swpGeomXY);
        cmbXField->setObjectName(QString::fromUtf8("cmbXField"));
        cmbXField->setEnabled(true);
        sizePolicy9.setHeightForWidth(cmbXField->sizePolicy().hasHeightForWidth());
        cmbXField->setSizePolicy(sizePolicy9);
        cmbXField->setMinimumSize(QSize(120, 0));
        cmbXField->setEditable(false);

        gridLayout_5->addWidget(cmbXField, 0, 1, 1, 1);


        verticalLayout_8->addLayout(gridLayout_5);

        swGeomType->addWidget(swpGeomXY);
        swpGeomWKT = new QWidget();
        swpGeomWKT->setObjectName(QString::fromUtf8("swpGeomWKT"));
        sizePolicy4.setHeightForWidth(swpGeomWKT->sizePolicy().hasHeightForWidth());
        swpGeomWKT->setSizePolicy(sizePolicy4);
        verticalLayout_6 = new QVBoxLayout(swpGeomWKT);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(swpGeomWKT);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        cmbGeometryType = new QComboBox(swpGeomWKT);
        cmbGeometryType->addItem(QString());
        cmbGeometryType->addItem(QString());
        cmbGeometryType->addItem(QString());
        cmbGeometryType->addItem(QString());
        cmbGeometryType->setObjectName(QString::fromUtf8("cmbGeometryType"));
        cmbGeometryType->setEnabled(true);

        gridLayout_2->addWidget(cmbGeometryType, 1, 1, 1, 1);

        label_5 = new QLabel(swpGeomWKT);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        cmbWktField = new QComboBox(swpGeomWKT);
        cmbWktField->setObjectName(QString::fromUtf8("cmbWktField"));
        cmbWktField->setEnabled(true);
        sizePolicy9.setHeightForWidth(cmbWktField->sizePolicy().hasHeightForWidth());
        cmbWktField->setSizePolicy(sizePolicy9);
        cmbWktField->setMinimumSize(QSize(120, 0));
        cmbWktField->setEditable(false);

        gridLayout_2->addWidget(cmbWktField, 0, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout_2);

        swGeomType->addWidget(swpGeomWKT);
        swpGeomNone = new QWidget();
        swpGeomNone->setObjectName(QString::fromUtf8("swpGeomNone"));
        QSizePolicy sizePolicy10(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(swpGeomNone->sizePolicy().hasHeightForWidth());
        swpGeomNone->setSizePolicy(sizePolicy10);
        swGeomType->addWidget(swpGeomNone);

        mGeometryDetailsLayout->addWidget(swGeomType);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        textLabelCrs = new QLabel(geometryDefinitionGroupBox);
        textLabelCrs->setObjectName(QString::fromUtf8("textLabelCrs"));
        QSizePolicy sizePolicy11(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(textLabelCrs->sizePolicy().hasHeightForWidth());
        textLabelCrs->setSizePolicy(sizePolicy11);

        horizontalLayout_2->addWidget(textLabelCrs);

        crsGeometry = new QgsProjectionSelectionWidget(geometryDefinitionGroupBox);
        crsGeometry->setObjectName(QString::fromUtf8("crsGeometry"));

        horizontalLayout_2->addWidget(crsGeometry);


        mGeometryDetailsLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mGeometryDetailsLayout->addItem(verticalSpacer_2);


        gridLayout->addLayout(mGeometryDetailsLayout, 0, 1, 1, 1);


        verticalLayout_4->addWidget(geometryDefinitionGroupBox);

        layerSettingsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        layerSettingsGroupBox->setObjectName(QString::fromUtf8("layerSettingsGroupBox"));
        sizePolicy1.setHeightForWidth(layerSettingsGroupBox->sizePolicy().hasHeightForWidth());
        layerSettingsGroupBox->setSizePolicy(sizePolicy1);
        layerSettingsGroupBox->setProperty("collapsed", QVariant(true));
        verticalLayout_14 = new QVBoxLayout(layerSettingsGroupBox);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(-1, 0, -1, -1);
        cbxSpatialIndex = new QCheckBox(layerSettingsGroupBox);
        cbxSpatialIndex->setObjectName(QString::fromUtf8("cbxSpatialIndex"));

        gridLayout_6->addWidget(cbxSpatialIndex, 0, 0, 1, 1);

        cbxSubsetIndex = new QCheckBox(layerSettingsGroupBox);
        cbxSubsetIndex->setObjectName(QString::fromUtf8("cbxSubsetIndex"));

        gridLayout_6->addWidget(cbxSubsetIndex, 0, 1, 1, 1);

        cbxWatchFile = new QCheckBox(layerSettingsGroupBox);
        cbxWatchFile->setObjectName(QString::fromUtf8("cbxWatchFile"));

        gridLayout_6->addWidget(cbxWatchFile, 0, 2, 1, 1);


        verticalLayout_14->addLayout(gridLayout_6);


        verticalLayout_4->addWidget(layerSettingsGroupBox);

        sampleDataGroupBox = new QGroupBox(scrollAreaWidgetContents);
        sampleDataGroupBox->setObjectName(QString::fromUtf8("sampleDataGroupBox"));
        QSizePolicy sizePolicy12(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(sampleDataGroupBox->sizePolicy().hasHeightForWidth());
        sampleDataGroupBox->setSizePolicy(sizePolicy12);
        sampleDataGroupBox->setProperty("collapsed", QVariant(false));
        verticalLayout_9 = new QVBoxLayout(sampleDataGroupBox);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        mScanWidget = new QWidget(sampleDataGroupBox);
        mScanWidget->setObjectName(QString::fromUtf8("mScanWidget"));
        horizontalLayout_7 = new QHBoxLayout(mScanWidget);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        mProgressLayout = new QHBoxLayout();
        mProgressLayout->setSpacing(6);
        mProgressLayout->setObjectName(QString::fromUtf8("mProgressLayout"));
        mProgressLabel = new QLabel(mScanWidget);
        mProgressLabel->setObjectName(QString::fromUtf8("mProgressLabel"));

        mProgressLayout->addWidget(mProgressLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mProgressLayout->addItem(horizontalSpacer);

        mCancelButton = new QPushButton(mScanWidget);
        mCancelButton->setObjectName(QString::fromUtf8("mCancelButton"));

        mProgressLayout->addWidget(mCancelButton);


        horizontalLayout_7->addLayout(mProgressLayout);


        verticalLayout_9->addWidget(mScanWidget);

        tblSample = new QTableWidget(sampleDataGroupBox);
        tblSample->setObjectName(QString::fromUtf8("tblSample"));
        QSizePolicy sizePolicy13(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy13.setHorizontalStretch(0);
        sizePolicy13.setVerticalStretch(0);
        sizePolicy13.setHeightForWidth(tblSample->sizePolicy().hasHeightForWidth());
        tblSample->setSizePolicy(sizePolicy13);
        tblSample->setLineWidth(1);

        verticalLayout_9->addWidget(tblSample);


        verticalLayout_4->addWidget(sampleDataGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_4->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_17->addWidget(scrollArea);

        lblStatus = new QLabel(QgsDelimitedTextSourceSelectBase);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        sizePolicy1.setHeightForWidth(lblStatus->sizePolicy().hasHeightForWidth());
        lblStatus->setSizePolicy(sizePolicy1);

        verticalLayout_17->addWidget(lblStatus);

        buttonBox = new QDialogButtonBox(QgsDelimitedTextSourceSelectBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Help);

        verticalLayout_17->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        labelEscape->setBuddy(txtEscapeChars);
        labelQuote->setBuddy(txtQuoteChars);
        labelDelimOther->setBuddy(txtDelimiterOther);
        label_4->setBuddy(rowCounter);
        textLabelY->setBuddy(cmbYField);
        textLabelZ->setBuddy(cmbZField);
        textLabelX->setBuddy(cmbXField);
        textLabelM->setBuddy(cmbMField);
        textLabelCrs->setBuddy(crsGeometry);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(cmbEncoding, scrollArea);
        QWidget::setTabOrder(scrollArea, delimiterCSV);
        QWidget::setTabOrder(delimiterCSV, delimiterRegexp);
        QWidget::setTabOrder(delimiterRegexp, delimiterChars);
        QWidget::setTabOrder(delimiterChars, cbxDelimTab);
        QWidget::setTabOrder(cbxDelimTab, cbxDelimColon);
        QWidget::setTabOrder(cbxDelimColon, cbxDelimSpace);
        QWidget::setTabOrder(cbxDelimSpace, cbxDelimSemicolon);
        QWidget::setTabOrder(cbxDelimSemicolon, cbxDelimComma);
        QWidget::setTabOrder(cbxDelimComma, txtDelimiterOther);
        QWidget::setTabOrder(txtDelimiterOther, txtQuoteChars);
        QWidget::setTabOrder(txtQuoteChars, txtEscapeChars);
        QWidget::setTabOrder(txtEscapeChars, txtDelimiterRegexp);
        QWidget::setTabOrder(txtDelimiterRegexp, rowCounter);
        QWidget::setTabOrder(rowCounter, cbxUseHeader);
        QWidget::setTabOrder(cbxUseHeader, cbxDetectTypes);
        QWidget::setTabOrder(cbxDetectTypes, cbxPointIsComma);
        QWidget::setTabOrder(cbxPointIsComma, cbxTrimFields);
        QWidget::setTabOrder(cbxTrimFields, cbxSkipEmptyFields);
        QWidget::setTabOrder(cbxSkipEmptyFields, mBooleanTrue);
        QWidget::setTabOrder(mBooleanTrue, mBooleanFalse);
        QWidget::setTabOrder(mBooleanFalse, geomTypeXY);
        QWidget::setTabOrder(geomTypeXY, geomTypeWKT);
        QWidget::setTabOrder(geomTypeWKT, geomTypeNone);
        QWidget::setTabOrder(geomTypeNone, cmbXField);
        QWidget::setTabOrder(cmbXField, cmbYField);
        QWidget::setTabOrder(cmbYField, cmbZField);
        QWidget::setTabOrder(cmbZField, cmbMField);
        QWidget::setTabOrder(cmbMField, cbxXyDms);
        QWidget::setTabOrder(cbxXyDms, cmbWktField);
        QWidget::setTabOrder(cmbWktField, cmbGeometryType);
        QWidget::setTabOrder(cmbGeometryType, cbxSpatialIndex);
        QWidget::setTabOrder(cbxSpatialIndex, cbxSubsetIndex);
        QWidget::setTabOrder(cbxSubsetIndex, cbxWatchFile);
        QWidget::setTabOrder(cbxWatchFile, tblSample);
        QWidget::setTabOrder(tblSample, mCancelButton);

        retranslateUi(QgsDelimitedTextSourceSelectBase);
        QObject::connect(geomTypeNone, SIGNAL(toggled(bool)), cbxSpatialIndex, SLOT(setDisabled(bool)));

        swFileFormat->setCurrentIndex(1);
        swGeomType->setCurrentIndex(0);
        cmbGeometryType->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsDelimitedTextSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDelimitedTextSourceSelectBase)
    {
        QgsDelimitedTextSourceSelectBase->setWindowTitle(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Create a Layer from a Delimited Text File", nullptr));
        textLabelFileName->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "File name", nullptr));
        lblEncoding->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Encoding", nullptr));
#if QT_CONFIG(tooltip)
        cmbEncoding->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Select the file encoding", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cmbEncoding->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Select the file encoding", nullptr));
#endif // QT_CONFIG(statustip)
        fileFormatGroupBox->setProperty("title", QVariant(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "File Format", nullptr)));
#if QT_CONFIG(tooltip)
        delimiterChars->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Fields are defined by the specified delimiter, quote, and escape characters", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        delimiterChars->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Fields are defined by the specified delimiter, quote, and escape characters", nullptr));
#endif // QT_CONFIG(statustip)
        delimiterChars->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Custom delimiters", nullptr));
#if QT_CONFIG(tooltip)
        delimiterCSV->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "The file is a comma separated value file, fields delimited by commas and quoted by \"", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        delimiterCSV->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "The file is a comma separated value file, fields delimited by commas and quoted by \"", nullptr));
#endif // QT_CONFIG(statustip)
        delimiterCSV->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "CSV (comma separated values)", nullptr));
#if QT_CONFIG(tooltip)
        delimiterRegexp->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Each line in the file is split using a regular expression to define the end of each field", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        delimiterRegexp->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Each line in the file is split using a regular expression to define the end of each field", nullptr));
#endif // QT_CONFIG(statustip)
        delimiterRegexp->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Regular expression delimiter", nullptr));
        labelEscape->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Escape", nullptr));
        labelQuote->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "&Quote", nullptr));
#if QT_CONFIG(tooltip)
        cbxDelimSemicolon->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Semicolon character is one of the delimiters", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cbxDelimSemicolon->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Semicolon character is one of the delimiters", nullptr));
#endif // QT_CONFIG(statustip)
        cbxDelimSemicolon->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Semicolon", nullptr));
#if QT_CONFIG(tooltip)
        cbxDelimTab->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Tab character is one of the delimiters", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cbxDelimTab->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Tab character is one of the delimiters", nullptr));
#endif // QT_CONFIG(statustip)
        cbxDelimTab->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Tab", nullptr));
#if QT_CONFIG(tooltip)
        cbxDelimComma->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Comma character is one of the delimiters", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cbxDelimComma->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Comma character is one of the delimiters", nullptr));
#endif // QT_CONFIG(statustip)
        cbxDelimComma->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Comma", nullptr));
#if QT_CONFIG(tooltip)
        txtQuoteChars->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "The quote character(s) enclose fields which may include delimiters and new lines", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        txtQuoteChars->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "The quote character(s) enclose fields which may include delimiters and new lines", nullptr));
#endif // QT_CONFIG(statustip)
        txtQuoteChars->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "\"", nullptr));
#if QT_CONFIG(tooltip)
        cbxDelimColon->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Colon character is one of the delimiters", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cbxDelimColon->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Colon character is one of the delimiters", nullptr));
#endif // QT_CONFIG(statustip)
        cbxDelimColon->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Colon", nullptr));
#if QT_CONFIG(tooltip)
        txtEscapeChars->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "The escape character(s) force the next character to be treated as a normal character (that is not a delimiter, quote, or new line character). If the escape character is the same as a quote character, it only escapes itself and only within quotes.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        txtEscapeChars->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "The escape character(s) force the next character to be treated as a normal character (that is not a delimiter, quote, or new line character). If the escape character is the same as a quote character, it only escapes itself and only within quotes.", nullptr));
#endif // QT_CONFIG(statustip)
        txtEscapeChars->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "\"", nullptr));
#if QT_CONFIG(tooltip)
        txtDelimiterOther->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Delimiters to use when splitting fields in the text file. The delimiter can be more than one character. These characters are used in addition to the comma, tab, space, colon, and semicolon options.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        txtDelimiterOther->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Delimiters to use when splitting fields in the text file. The delimiter can be more than one character. These characters are used in addition to the comma, tab, space, colon, and semicolon options.", nullptr));
#endif // QT_CONFIG(statustip)
        labelDelimOther->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Others", nullptr));
#if QT_CONFIG(tooltip)
        cbxDelimSpace->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Space character is one of the delimiters", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cbxDelimSpace->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Space character is one of the delimiters", nullptr));
#endif // QT_CONFIG(statustip)
        cbxDelimSpace->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Space", nullptr));
        label_9->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Expression", nullptr));
#if QT_CONFIG(tooltip)
        txtDelimiterRegexp->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Regular expression used to split each line into fields", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        txtDelimiterRegexp->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Regular expression used to split each line into fields", nullptr));
#endif // QT_CONFIG(statustip)
        lblRegexpError->setText(QString());
        recordOptionsGroupBox->setProperty("title", QVariant(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Record and Fields Options", nullptr)));
#if QT_CONFIG(tooltip)
        cbxTrimFields->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Trim leading and trailing spaces from fields", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cbxTrimFields->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Trim leading and trailing spaces from fields", nullptr));
#endif // QT_CONFIG(statustip)
        cbxTrimFields->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Trim fields", nullptr));
        label_4->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Number of header lines to discard", nullptr));
#if QT_CONFIG(tooltip)
        rowCounter->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "The number of lines to discard from the beginning of the file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        rowCounter->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "The number of lines to discard from the beginning of the file", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        cbxSkipEmptyFields->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Discard empty fields in each record", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cbxSkipEmptyFields->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Discard empty fields in each record", nullptr));
#endif // QT_CONFIG(statustip)
        cbxSkipEmptyFields->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Discard empty fields", nullptr));
        cbxDetectTypes->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Detect field types", nullptr));
#if QT_CONFIG(tooltip)
        cbxPointIsComma->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Number fields use comma for a decimal separator", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cbxPointIsComma->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Number fields use comma for a decimal separator", nullptr));
#endif // QT_CONFIG(statustip)
        cbxPointIsComma->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Decimal separator is comma", nullptr));
#if QT_CONFIG(tooltip)
        cbxUseHeader->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Field names are read from the first record. If not selected then fields are numbered", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cbxUseHeader->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Field names are read from the first record. If not selected then fields are numbered", nullptr));
#endif // QT_CONFIG(statustip)
        cbxUseHeader->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "First record has field names", nullptr));
#if QT_CONFIG(tooltip)
        groupBox->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "<html><head/><body><p>Columns filled with '0/1', 'true/false', 't/f', and 'yes/no' (case insensitive) are automatically detected as boolean fields. Additional values for TRUE and FALSE can be entered here.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Custom boolean literals", nullptr));
        mBoolTrueLabel->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "<html><head/><body><p>True</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        mBooleanTrue->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "<html><head/><body><p>Additional custom value that will be interpreted as TRUE</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mBooleanFalseLabel->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "<html><head/><body><p>False</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        mBooleanFalse->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "<html><head/><body><p>Additional custom value that will be interpreted as FALSE</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        geometryDefinitionGroupBox->setProperty("title", QVariant(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry Definition", nullptr)));
#if QT_CONFIG(tooltip)
        geomTypeXY->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry is a point defined by X and Y coordinate fields", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        geomTypeXY->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry is a point defined by X and Y coordinate fields", nullptr));
#endif // QT_CONFIG(statustip)
        geomTypeXY->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Point coordinates", nullptr));
#if QT_CONFIG(tooltip)
        geomTypeWKT->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry is read as a well known text string from the selected fields", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        geomTypeWKT->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry is read as a well known text string from the selected fields", nullptr));
#endif // QT_CONFIG(statustip)
        geomTypeWKT->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Well known text (WKT)", nullptr));
#if QT_CONFIG(tooltip)
        geomTypeNone->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "The file contains only attribute information - it will not be displayed on the map", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        geomTypeNone->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "The file contains only attribute information - it will not be displayed on the map", nullptr));
#endif // QT_CONFIG(statustip)
        geomTypeNone->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "No geometry (attribute only table)", nullptr));
        textLabelY->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Y field", nullptr));
        textLabelZ->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Z field", nullptr));
        textLabelX->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "X field", nullptr));
#if QT_CONFIG(tooltip)
        cmbYField->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing y values", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cmbYField->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing y values", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        cbxXyDms->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "X and Y coordinates are expressed in degrees/minutes/seconds", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cbxXyDms->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "X and Y coordinates are expressed in degrees/minutes/seconds", nullptr));
#endif // QT_CONFIG(statustip)
        cbxXyDms->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "DMS coordinates", nullptr));
#if QT_CONFIG(tooltip)
        cmbZField->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing z values", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cmbZField->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing z values", nullptr));
#endif // QT_CONFIG(statustip)
        textLabelM->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "M field", nullptr));
#if QT_CONFIG(tooltip)
        cmbMField->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing m values", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cmbMField->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing m values", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        cmbXField->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing x values", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cmbXField->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing x values", nullptr));
#endif // QT_CONFIG(statustip)
        label->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry type", nullptr));
        cmbGeometryType->setItemText(0, QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Detect", nullptr));
        cmbGeometryType->setItemText(1, QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Point", nullptr));
        cmbGeometryType->setItemText(2, QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Line", nullptr));
        cmbGeometryType->setItemText(3, QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Polygon", nullptr));

        label_5->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry field", nullptr));
#if QT_CONFIG(tooltip)
        cmbWktField->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing well known text value", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cmbWktField->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing well known text value", nullptr));
#endif // QT_CONFIG(statustip)
        textLabelCrs->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry CRS", nullptr));
        layerSettingsGroupBox->setProperty("title", QVariant(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Layer Settings", nullptr)));
#if QT_CONFIG(tooltip)
        cbxSpatialIndex->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Use a spatial index to improve performance of displaying and spatially selecting features", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cbxSpatialIndex->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Use a spatial index to improve performance of displaying and spatially selecting features", nullptr));
#endif // QT_CONFIG(statustip)
        cbxSpatialIndex->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Use spatial index", nullptr));
#if QT_CONFIG(tooltip)
        cbxSubsetIndex->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Use an index to improve performance of subset filters (set in layer properties)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cbxSubsetIndex->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Use an index to improve performance of subset filters (set in layer properties)", nullptr));
#endif // QT_CONFIG(statustip)
        cbxSubsetIndex->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Use subset index", nullptr));
#if QT_CONFIG(tooltip)
        cbxWatchFile->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Watch for changes to the file by other applications while QGIS is running", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cbxWatchFile->setStatusTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Watch for changes to the file by other applications while QGIS is running", nullptr));
#endif // QT_CONFIG(statustip)
        cbxWatchFile->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Watch file", nullptr));
#if QT_CONFIG(tooltip)
        sampleDataGroupBox->setToolTip(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "<html><head/><body><p>Column data type is determined automatically scanning the file but it is possible to override the types through the type combo boxes.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        sampleDataGroupBox->setTitle(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Sample Data", nullptr));
        mProgressLabel->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Scanning file to determine data types ...", nullptr));
        mCancelButton->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Cancel", nullptr));
        lblStatus->setText(QCoreApplication::translate("QgsDelimitedTextSourceSelectBase", "Sample data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsDelimitedTextSourceSelectBase: public Ui_QgsDelimitedTextSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDELIMITEDTEXTSOURCESELECTBASE_H
