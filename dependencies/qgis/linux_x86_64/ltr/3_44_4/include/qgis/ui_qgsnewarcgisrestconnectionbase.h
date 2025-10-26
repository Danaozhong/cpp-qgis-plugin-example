/********************************************************************************
** Form generated from reading UI file 'qgsnewarcgisrestconnectionbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNEWARCGISRESTCONNECTIONBASE_H
#define UI_QGSNEWARCGISRESTCONNECTIONBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsauthsettingswidget.h"
#include "qgshttpheaderwidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsNewArcGisRestConnectionBase
{
public:
    QGridLayout *gridLayout_4;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *mGroupBox;
    QGridLayout *gridLayout;
    QLabel *TextLabel1;
    QLineEdit *txtUrl;
    QLineEdit *txtName;
    QLabel *TextLabel1_2;
    QLabel *TextLabel1_5;
    QLineEdit *mUrlPrefix;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLineEdit *mCommunityEndPointLineEdit;
    QLabel *TextLabel1_3;
    QLabel *TextLabel1_4;
    QLineEdit *mContentEndPointLineEdit;
    QGroupBox *mAuthGroupBox;
    QVBoxLayout *verticalLayout;
    QgsAuthSettingsWidget *mAuthSettings;
    QgsHttpHeaderWidget *mHttpHeaders;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsNewArcGisRestConnectionBase)
    {
        if (QgsNewArcGisRestConnectionBase->objectName().isEmpty())
            QgsNewArcGisRestConnectionBase->setObjectName(QString::fromUtf8("QgsNewArcGisRestConnectionBase"));
        QgsNewArcGisRestConnectionBase->resize(646, 792);
        QgsNewArcGisRestConnectionBase->setSizeGripEnabled(true);
        QgsNewArcGisRestConnectionBase->setModal(true);
        gridLayout_4 = new QGridLayout(QgsNewArcGisRestConnectionBase);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        scrollArea = new QgsScrollArea(QgsNewArcGisRestConnectionBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 628, 741));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mGroupBox = new QGroupBox(scrollAreaWidgetContents);
        mGroupBox->setObjectName(QString::fromUtf8("mGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mGroupBox->sizePolicy().hasHeightForWidth());
        mGroupBox->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(mGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TextLabel1 = new QLabel(mGroupBox);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        TextLabel1->setMargin(5);

        gridLayout->addWidget(TextLabel1, 3, 0, 1, 1);

        txtUrl = new QLineEdit(mGroupBox);
        txtUrl->setObjectName(QString::fromUtf8("txtUrl"));

        gridLayout->addWidget(txtUrl, 3, 1, 1, 1);

        txtName = new QLineEdit(mGroupBox);
        txtName->setObjectName(QString::fromUtf8("txtName"));
        txtName->setMinimumSize(QSize(0, 0));
        txtName->setFrame(true);

        gridLayout->addWidget(txtName, 2, 1, 1, 1);

        TextLabel1_2 = new QLabel(mGroupBox);
        TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
        TextLabel1_2->setWordWrap(true);
        TextLabel1_2->setMargin(5);

        gridLayout->addWidget(TextLabel1_2, 2, 0, 1, 1);

        TextLabel1_5 = new QLabel(mGroupBox);
        TextLabel1_5->setObjectName(QString::fromUtf8("TextLabel1_5"));
        TextLabel1_5->setMargin(5);

        gridLayout->addWidget(TextLabel1_5, 4, 0, 1, 1);

        mUrlPrefix = new QLineEdit(mGroupBox);
        mUrlPrefix->setObjectName(QString::fromUtf8("mUrlPrefix"));

        gridLayout->addWidget(mUrlPrefix, 4, 1, 1, 1);


        verticalLayout_2->addWidget(mGroupBox);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        mCommunityEndPointLineEdit = new QLineEdit(groupBox);
        mCommunityEndPointLineEdit->setObjectName(QString::fromUtf8("mCommunityEndPointLineEdit"));

        gridLayout1->addWidget(mCommunityEndPointLineEdit, 0, 1, 1, 1);

        TextLabel1_3 = new QLabel(groupBox);
        TextLabel1_3->setObjectName(QString::fromUtf8("TextLabel1_3"));
        TextLabel1_3->setMargin(5);

        gridLayout1->addWidget(TextLabel1_3, 0, 0, 1, 1);

        TextLabel1_4 = new QLabel(groupBox);
        TextLabel1_4->setObjectName(QString::fromUtf8("TextLabel1_4"));
        TextLabel1_4->setMargin(5);

        gridLayout1->addWidget(TextLabel1_4, 1, 0, 1, 1);

        mContentEndPointLineEdit = new QLineEdit(groupBox);
        mContentEndPointLineEdit->setObjectName(QString::fromUtf8("mContentEndPointLineEdit"));

        gridLayout1->addWidget(mContentEndPointLineEdit, 1, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        mAuthGroupBox = new QGroupBox(scrollAreaWidgetContents);
        mAuthGroupBox->setObjectName(QString::fromUtf8("mAuthGroupBox"));
        verticalLayout = new QVBoxLayout(mAuthGroupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        mAuthSettings = new QgsAuthSettingsWidget(mAuthGroupBox);
        mAuthSettings->setObjectName(QString::fromUtf8("mAuthSettings"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mAuthSettings->sizePolicy().hasHeightForWidth());
        mAuthSettings->setSizePolicy(sizePolicy1);
        mAuthSettings->setFocusPolicy(Qt::StrongFocus);

        verticalLayout->addWidget(mAuthSettings);


        verticalLayout_2->addWidget(mAuthGroupBox);

        mHttpHeaders = new QgsHttpHeaderWidget(scrollAreaWidgetContents);
        mHttpHeaders->setObjectName(QString::fromUtf8("mHttpHeaders"));
        sizePolicy.setHeightForWidth(mHttpHeaders->sizePolicy().hasHeightForWidth());
        mHttpHeaders->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(mHttpHeaders);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_4->addWidget(scrollArea, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsNewArcGisRestConnectionBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 6, 0, 1, 1);

        QWidget::setTabOrder(txtName, txtUrl);
        QWidget::setTabOrder(txtUrl, mUrlPrefix);
        QWidget::setTabOrder(mUrlPrefix, mCommunityEndPointLineEdit);
        QWidget::setTabOrder(mCommunityEndPointLineEdit, mContentEndPointLineEdit);
        QWidget::setTabOrder(mContentEndPointLineEdit, mAuthSettings);

        retranslateUi(QgsNewArcGisRestConnectionBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsNewArcGisRestConnectionBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsNewArcGisRestConnectionBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsNewArcGisRestConnectionBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewArcGisRestConnectionBase)
    {
        QgsNewArcGisRestConnectionBase->setWindowTitle(QCoreApplication::translate("QgsNewArcGisRestConnectionBase", "Create a New Connection", nullptr));
        mGroupBox->setTitle(QCoreApplication::translate("QgsNewArcGisRestConnectionBase", "Connection Details", nullptr));
        TextLabel1->setText(QCoreApplication::translate("QgsNewArcGisRestConnectionBase", "URL", nullptr));
#if QT_CONFIG(tooltip)
        txtUrl->setToolTip(QCoreApplication::translate("QgsNewArcGisRestConnectionBase", "HTTP address of the Web Map Server", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        txtName->setToolTip(QCoreApplication::translate("QgsNewArcGisRestConnectionBase", "Name of the new connection", nullptr));
#endif // QT_CONFIG(tooltip)
        TextLabel1_2->setText(QCoreApplication::translate("QgsNewArcGisRestConnectionBase", "Name", nullptr));
        TextLabel1_5->setText(QCoreApplication::translate("QgsNewArcGisRestConnectionBase", "Prefix", nullptr));
#if QT_CONFIG(tooltip)
        mUrlPrefix->setToolTip(QCoreApplication::translate("QgsNewArcGisRestConnectionBase", "HTTP address Proxy Prefix of the Web Map Server", nullptr));
#endif // QT_CONFIG(tooltip)
        mUrlPrefix->setPlaceholderText(QCoreApplication::translate("QgsNewArcGisRestConnectionBase", "https://mysite.com/proxy.jsp?", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsNewArcGisRestConnectionBase", "ArcGIS Portal Details", nullptr));
#if QT_CONFIG(tooltip)
        mCommunityEndPointLineEdit->setToolTip(QCoreApplication::translate("QgsNewArcGisRestConnectionBase", "HTTP address of the Web Map Server", nullptr));
#endif // QT_CONFIG(tooltip)
        mCommunityEndPointLineEdit->setPlaceholderText(QCoreApplication::translate("QgsNewArcGisRestConnectionBase", "https://mysite.com/portal/sharing/rest/community/", nullptr));
        TextLabel1_3->setText(QCoreApplication::translate("QgsNewArcGisRestConnectionBase", "Community endpoint URL", nullptr));
        TextLabel1_4->setText(QCoreApplication::translate("QgsNewArcGisRestConnectionBase", "Content endpoint URL", nullptr));
#if QT_CONFIG(tooltip)
        mContentEndPointLineEdit->setToolTip(QCoreApplication::translate("QgsNewArcGisRestConnectionBase", "HTTP address of the Web Map Server", nullptr));
#endif // QT_CONFIG(tooltip)
        mContentEndPointLineEdit->setPlaceholderText(QCoreApplication::translate("QgsNewArcGisRestConnectionBase", "https://mysite.com/portal/sharing/rest/content/", nullptr));
        mAuthGroupBox->setTitle(QCoreApplication::translate("QgsNewArcGisRestConnectionBase", "Authentication", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsNewArcGisRestConnectionBase: public Ui_QgsNewArcGisRestConnectionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWARCGISRESTCONNECTIONBASE_H
