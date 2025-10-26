/********************************************************************************
** Form generated from reading UI file 'qgsauthsslimporterrors.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHSSLIMPORTERRORS_H
#define UI_QGSAUTHSSLIMPORTERRORS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SslErrors
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QListWidget *sslErrorList;
    QHBoxLayout *hboxLayout;
    QToolButton *certificateChainButton;
    QSpacerItem *spacerItem;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *SslErrors)
    {
        if (SslErrors->objectName().isEmpty())
            SslErrors->setObjectName(QString::fromUtf8("SslErrors"));
        SslErrors->resize(387, 216);
        vboxLayout = new QVBoxLayout(SslErrors);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        label = new QLabel(SslErrors);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        vboxLayout->addWidget(label);

        sslErrorList = new QListWidget(SslErrors);
        sslErrorList->setObjectName(QString::fromUtf8("sslErrorList"));
        sslErrorList->setAlternatingRowColors(true);
        sslErrorList->setWordWrap(true);

        vboxLayout->addWidget(sslErrorList);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        certificateChainButton = new QToolButton(SslErrors);
        certificateChainButton->setObjectName(QString::fromUtf8("certificateChainButton"));

        hboxLayout->addWidget(certificateChainButton);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        pushButton = new QPushButton(SslErrors);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        hboxLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(SslErrors);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        hboxLayout->addWidget(pushButton_2);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(SslErrors);
        QObject::connect(pushButton, SIGNAL(clicked()), SslErrors, SLOT(accept()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), SslErrors, SLOT(reject()));

        QMetaObject::connectSlotsByName(SslErrors);
    } // setupUi

    void retranslateUi(QDialog *SslErrors)
    {
        SslErrors->setWindowTitle(QCoreApplication::translate("SslErrors", "Unable to Validate the Connection", nullptr));
        label->setText(QCoreApplication::translate("SslErrors", "<html><head/><body><p><span style=\" font-family:'Sans Serif'; font-size:11pt; font-weight:600; color:#ff0000;\">Warning</span><span style=\" font-family:'Sans Serif'; font-size:11pt; color:#ff0000;\">:</span><span style=\" font-family:'Sans Serif'; font-size:8pt; color:#000000;\"> One or more SSL errors have occurred validating the host you are connecting to. Review the following list of errors and click Ignore to continue, or Cancel to abort the connection.</span></p></body></html>", nullptr));
        certificateChainButton->setText(QCoreApplication::translate("SslErrors", "View Certificate Chain", nullptr));
        pushButton->setText(QCoreApplication::translate("SslErrors", "Ignore", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SslErrors", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SslErrors: public Ui_SslErrors {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHSSLIMPORTERRORS_H
