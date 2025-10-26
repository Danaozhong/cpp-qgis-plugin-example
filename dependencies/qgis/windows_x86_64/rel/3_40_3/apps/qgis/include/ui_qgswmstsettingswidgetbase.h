/********************************************************************************
** Form generated from reading UI file 'qgswmstsettingswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSWMSTSETTINGSWIDGETBASE_H
#define UI_QGSWMSTSETTINGSWIDGETBASE_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdatetimeedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsWmstSettingsWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *mWmstGroup;
    QGridLayout *gridLayout_15;
    QStackedWidget *mStaticWmstStackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QLabel *mWmstOptionsLabel;
    QWidget *page_3;
    QGridLayout *gridLayout_3;
    QFrame *mStaticStackedWidgetFrame;
    QGridLayout *gridLayout_4;
    QFrame *mStaticWmstChoiceFrame;
    QVBoxLayout *verticalLayout_4;
    QComboBox *mStaticWmstRangeCombo;
    QRadioButton *mDefaultRadio;
    QRadioButton *mStaticTemporalRangeRadio;
    QRadioButton *mProjectTemporalRangeRadio;
    QFrame *mStaticWmstRangeFrame;
    QGridLayout *gridLayout_16;
    QLabel *label_13;
    QLabel *label_10;
    QgsDateTimeEdit *mStartStaticDateTimeEdit;
    QgsDateTimeEdit *mEndStaticDateTimeEdit;
    QPushButton *mSetEndAsStartStaticButton;
    QLabel *label_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QLabel *mProjectTemporalRangeLabel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QComboBox *mFetchModeComboBox;
    QCheckBox *mDisableTime;
    QLabel *label_16;
    QGroupBox *mReferenceTimeGroupBox;
    QGridLayout *gridLayout_2;
    QgsDateTimeEdit *mReferenceDateTimeEdit;
    QLabel *mReferenceTimeExtentLabel;
    QComboBox *mReferenceTimeCombo;

    void setupUi(QWidget *QgsWmstSettingsWidgetBase)
    {
        if (QgsWmstSettingsWidgetBase->objectName().isEmpty())
            QgsWmstSettingsWidgetBase->setObjectName(QString::fromUtf8("QgsWmstSettingsWidgetBase"));
        QgsWmstSettingsWidgetBase->resize(343, 570);
        verticalLayout = new QVBoxLayout(QgsWmstSettingsWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mWmstGroup = new QGroupBox(QgsWmstSettingsWidgetBase);
        mWmstGroup->setObjectName(QString::fromUtf8("mWmstGroup"));
        mWmstGroup->setEnabled(true);
        mWmstGroup->setCheckable(false);
        mWmstGroup->setChecked(false);
        gridLayout_15 = new QGridLayout(mWmstGroup);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        mStaticWmstStackedWidget = new QStackedWidget(mWmstGroup);
        mStaticWmstStackedWidget->setObjectName(QString::fromUtf8("mStaticWmstStackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mWmstOptionsLabel = new QLabel(page);
        mWmstOptionsLabel->setObjectName(QString::fromUtf8("mWmstOptionsLabel"));
        mWmstOptionsLabel->setWordWrap(true);

        verticalLayout_2->addWidget(mWmstOptionsLabel);

        mStaticWmstStackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_3 = new QGridLayout(page_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mStaticStackedWidgetFrame = new QFrame(page_3);
        mStaticStackedWidgetFrame->setObjectName(QString::fromUtf8("mStaticStackedWidgetFrame"));
        mStaticStackedWidgetFrame->setFrameShape(QFrame::NoFrame);
        mStaticStackedWidgetFrame->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(mStaticStackedWidgetFrame);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, -1, 0);
        mStaticWmstChoiceFrame = new QFrame(mStaticStackedWidgetFrame);
        mStaticWmstChoiceFrame->setObjectName(QString::fromUtf8("mStaticWmstChoiceFrame"));
        mStaticWmstChoiceFrame->setFrameShape(QFrame::NoFrame);
        mStaticWmstChoiceFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(mStaticWmstChoiceFrame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(20, 0, 0, 0);
        mStaticWmstRangeCombo = new QComboBox(mStaticWmstChoiceFrame);
        mStaticWmstRangeCombo->setObjectName(QString::fromUtf8("mStaticWmstRangeCombo"));

        verticalLayout_4->addWidget(mStaticWmstRangeCombo);


        gridLayout_4->addWidget(mStaticWmstChoiceFrame, 3, 0, 1, 1);

        mDefaultRadio = new QRadioButton(mStaticStackedWidgetFrame);
        mDefaultRadio->setObjectName(QString::fromUtf8("mDefaultRadio"));

        gridLayout_4->addWidget(mDefaultRadio, 0, 0, 1, 1);

        mStaticTemporalRangeRadio = new QRadioButton(mStaticStackedWidgetFrame);
        mStaticTemporalRangeRadio->setObjectName(QString::fromUtf8("mStaticTemporalRangeRadio"));

        gridLayout_4->addWidget(mStaticTemporalRangeRadio, 1, 0, 1, 1);

        mProjectTemporalRangeRadio = new QRadioButton(mStaticStackedWidgetFrame);
        mProjectTemporalRangeRadio->setObjectName(QString::fromUtf8("mProjectTemporalRangeRadio"));

        gridLayout_4->addWidget(mProjectTemporalRangeRadio, 4, 0, 1, 1);

        mStaticWmstRangeFrame = new QFrame(mStaticStackedWidgetFrame);
        mStaticWmstRangeFrame->setObjectName(QString::fromUtf8("mStaticWmstRangeFrame"));
        mStaticWmstRangeFrame->setEnabled(false);
        mStaticWmstRangeFrame->setFrameShape(QFrame::NoFrame);
        mStaticWmstRangeFrame->setFrameShadow(QFrame::Raised);
        gridLayout_16 = new QGridLayout(mStaticWmstRangeFrame);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setContentsMargins(20, 0, 0, 0);
        label_13 = new QLabel(mStaticWmstRangeFrame);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_16->addWidget(label_13, 0, 0, 1, 1);

        label_10 = new QLabel(mStaticWmstRangeFrame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setWordWrap(true);

        gridLayout_16->addWidget(label_10, 3, 0, 1, 3);

        mStartStaticDateTimeEdit = new QgsDateTimeEdit(mStaticWmstRangeFrame);
        mStartStaticDateTimeEdit->setObjectName(QString::fromUtf8("mStartStaticDateTimeEdit"));
        mStartStaticDateTimeEdit->setDateTime(QDateTime(QDate(2020, 4, 26), QTime(11, 3, 57)));
        mStartStaticDateTimeEdit->setCurrentSection(QDateTimeEdit::MonthSection);
        mStartStaticDateTimeEdit->setTimeSpec(Qt::UTC);
        mStartStaticDateTimeEdit->setProperty("allowNull", QVariant(false));

        gridLayout_16->addWidget(mStartStaticDateTimeEdit, 0, 1, 1, 2);

        mEndStaticDateTimeEdit = new QgsDateTimeEdit(mStaticWmstRangeFrame);
        mEndStaticDateTimeEdit->setObjectName(QString::fromUtf8("mEndStaticDateTimeEdit"));
        mEndStaticDateTimeEdit->setTimeSpec(Qt::UTC);
        mEndStaticDateTimeEdit->setProperty("allowNull", QVariant(false));

        gridLayout_16->addWidget(mEndStaticDateTimeEdit, 1, 1, 1, 2);

        mSetEndAsStartStaticButton = new QPushButton(mStaticWmstRangeFrame);
        mSetEndAsStartStaticButton->setObjectName(QString::fromUtf8("mSetEndAsStartStaticButton"));

        gridLayout_16->addWidget(mSetEndAsStartStaticButton, 2, 1, 1, 2);

        label_4 = new QLabel(mStaticWmstRangeFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_16->addWidget(label_4, 1, 0, 1, 1);


        gridLayout_4->addWidget(mStaticWmstRangeFrame, 2, 0, 1, 1);

        frame = new QFrame(mStaticStackedWidgetFrame);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(20, 0, 0, 0);
        mProjectTemporalRangeLabel = new QLabel(frame);
        mProjectTemporalRangeLabel->setObjectName(QString::fromUtf8("mProjectTemporalRangeLabel"));
        mProjectTemporalRangeLabel->setWordWrap(true);

        verticalLayout_3->addWidget(mProjectTemporalRangeLabel);


        gridLayout_4->addWidget(frame, 5, 0, 1, 1);


        gridLayout_3->addWidget(mStaticStackedWidgetFrame, 0, 0, 1, 1);

        mStaticWmstStackedWidget->addWidget(page_3);

        gridLayout_15->addWidget(mStaticWmstStackedWidget, 1, 0, 1, 1);


        verticalLayout->addWidget(mWmstGroup);

        groupBox = new QGroupBox(QgsWmstSettingsWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mFetchModeComboBox = new QComboBox(groupBox);
        mFetchModeComboBox->setObjectName(QString::fromUtf8("mFetchModeComboBox"));

        gridLayout->addWidget(mFetchModeComboBox, 1, 1, 1, 1);

        mDisableTime = new QCheckBox(groupBox);
        mDisableTime->setObjectName(QString::fromUtf8("mDisableTime"));

        gridLayout->addWidget(mDisableTime, 2, 0, 1, 2);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout->addWidget(label_16, 1, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox);

        mReferenceTimeGroupBox = new QGroupBox(QgsWmstSettingsWidgetBase);
        mReferenceTimeGroupBox->setObjectName(QString::fromUtf8("mReferenceTimeGroupBox"));
        mReferenceTimeGroupBox->setCheckable(true);
        gridLayout_2 = new QGridLayout(mReferenceTimeGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mReferenceDateTimeEdit = new QgsDateTimeEdit(mReferenceTimeGroupBox);
        mReferenceDateTimeEdit->setObjectName(QString::fromUtf8("mReferenceDateTimeEdit"));
        mReferenceDateTimeEdit->setDateTime(QDateTime(QDate(2020, 1, 22), QTime(8, 20, 36)));
        mReferenceDateTimeEdit->setDate(QDate(2020, 1, 22));
        mReferenceDateTimeEdit->setCurrentSection(QDateTimeEdit::MonthSection);
        mReferenceDateTimeEdit->setCalendarPopup(false);
        mReferenceDateTimeEdit->setTimeSpec(Qt::UTC);
        mReferenceDateTimeEdit->setProperty("allowNull", QVariant(false));

        gridLayout_2->addWidget(mReferenceDateTimeEdit, 1, 0, 1, 2);

        mReferenceTimeExtentLabel = new QLabel(mReferenceTimeGroupBox);
        mReferenceTimeExtentLabel->setObjectName(QString::fromUtf8("mReferenceTimeExtentLabel"));
        mReferenceTimeExtentLabel->setWordWrap(true);

        gridLayout_2->addWidget(mReferenceTimeExtentLabel, 0, 0, 1, 2);

        mReferenceTimeCombo = new QComboBox(mReferenceTimeGroupBox);
        mReferenceTimeCombo->setObjectName(QString::fromUtf8("mReferenceTimeCombo"));

        gridLayout_2->addWidget(mReferenceTimeCombo, 2, 0, 1, 2);


        verticalLayout->addWidget(mReferenceTimeGroupBox);


        retranslateUi(QgsWmstSettingsWidgetBase);

        mStaticWmstStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsWmstSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsWmstSettingsWidgetBase)
    {
        QgsWmstSettingsWidgetBase->setWindowTitle(QCoreApplication::translate("QgsWmstSettingsWidgetBase", "WMS-T Settings", nullptr));
        mWmstGroup->setTitle(QCoreApplication::translate("QgsWmstSettingsWidgetBase", "Static WMS-T Temporal Range", nullptr));
        mWmstOptionsLabel->setText(QCoreApplication::translate("QgsWmstSettingsWidgetBase", "<html><head/><body><p>The static WMS-T options are disabled because the layer is set to <span style=\" font-weight:600;\">Dynamic Temporal Control</span>. To enable them first disable <span style=\" font-weight:600;\">Dynamic Temporal Control</span>.</p></body></html>", nullptr));
        mDefaultRadio->setText(QCoreApplication::translate("QgsWmstSettingsWidgetBase", "Server default", nullptr));
        mStaticTemporalRangeRadio->setText(QCoreApplication::translate("QgsWmstSettingsWidgetBase", "Predefined range", nullptr));
        mProjectTemporalRangeRadio->setText(QCoreApplication::translate("QgsWmstSettingsWidgetBase", "Follow project's temporal range", nullptr));
        label_13->setText(QCoreApplication::translate("QgsWmstSettingsWidgetBase", "Start date", nullptr));
        label_10->setText(QCoreApplication::translate("QgsWmstSettingsWidgetBase", "<html><head/><body><p><span style=\" font-style:italic;\">If the capabilities of this layer move out of this time range the range will be reset to layer's advertised default layer time range.</span></p></body></html>", nullptr));
        mStartStaticDateTimeEdit->setDisplayFormat(QCoreApplication::translate("QgsWmstSettingsWidgetBase", "M/d/yyyy H:mm:ss AP", nullptr));
        mEndStaticDateTimeEdit->setDisplayFormat(QCoreApplication::translate("QgsWmstSettingsWidgetBase", "M/d/yyyy H:mm:ss AP", nullptr));
        mSetEndAsStartStaticButton->setText(QCoreApplication::translate("QgsWmstSettingsWidgetBase", "Set end same as start", nullptr));
        label_4->setText(QCoreApplication::translate("QgsWmstSettingsWidgetBase", "End date", nullptr));
        mProjectTemporalRangeLabel->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("QgsWmstSettingsWidgetBase", "WMS-T Settings", nullptr));
#if QT_CONFIG(tooltip)
        mDisableTime->setToolTip(QCoreApplication::translate("QgsWmstSettingsWidgetBase", "If checked the time component of temporal queries will be discarded and only the date component will be used in server requests", nullptr));
#endif // QT_CONFIG(tooltip)
        mDisableTime->setText(QCoreApplication::translate("QgsWmstSettingsWidgetBase", "Ignore time components (use dates only)", nullptr));
        label_16->setText(QCoreApplication::translate("QgsWmstSettingsWidgetBase", "Time slice mode", nullptr));
        mReferenceTimeGroupBox->setTitle(QCoreApplication::translate("QgsWmstSettingsWidgetBase", "Use Specific WMS-T Reference Time", nullptr));
        mReferenceDateTimeEdit->setDisplayFormat(QCoreApplication::translate("QgsWmstSettingsWidgetBase", "M/d/yyyy H:mm:ss AP", nullptr));
        mReferenceTimeExtentLabel->setText(QCoreApplication::translate("QgsWmstSettingsWidgetBase", "No reference time is reported in the layer's capabilities.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsWmstSettingsWidgetBase: public Ui_QgsWmstSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSWMSTSETTINGSWIDGETBASE_H
