/********************************************************************************
** Form generated from reading UI file 'qgsuserprofileselectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSUSERPROFILESELECTIONDIALOG_H
#define UI_QGSUSERPROFILESELECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsUserProfileSelectionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QListWidget *mProfileListWidget;
    QHBoxLayout *horizontalLayout;
    QToolButton *mAddProfileButton;
    QSpacerItem *horizontalSpacer;
    QToolButton *mOkButton;

    void setupUi(QDialog *QgsUserProfileSelectionDialog)
    {
        if (QgsUserProfileSelectionDialog->objectName().isEmpty())
            QgsUserProfileSelectionDialog->setObjectName(QString::fromUtf8("QgsUserProfileSelectionDialog"));
        QgsUserProfileSelectionDialog->resize(313, 417);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        QgsUserProfileSelectionDialog->setPalette(palette);
        verticalLayout = new QVBoxLayout(QgsUserProfileSelectionDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(QgsUserProfileSelectionDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/icons/qgis-icon-60x60.png")));
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        label = new QLabel(QgsUserProfileSelectionDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        mProfileListWidget = new QListWidget(QgsUserProfileSelectionDialog);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/user.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mProfileListWidget);
        __qlistwidgetitem->setIcon(icon);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mProfileListWidget);
        __qlistwidgetitem1->setIcon(icon);
        mProfileListWidget->setObjectName(QString::fromUtf8("mProfileListWidget"));
        mProfileListWidget->setFrameShape(QFrame::NoFrame);
        mProfileListWidget->setUniformItemSizes(true);

        verticalLayout->addWidget(mProfileListWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mAddProfileButton = new QToolButton(QgsUserProfileSelectionDialog);
        mAddProfileButton->setObjectName(QString::fromUtf8("mAddProfileButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddProfileButton->setIcon(icon1);
        mAddProfileButton->setIconSize(QSize(24, 24));
        mAddProfileButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        mAddProfileButton->setAutoRaise(true);

        horizontalLayout->addWidget(mAddProfileButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mOkButton = new QToolButton(QgsUserProfileSelectionDialog);
        mOkButton->setObjectName(QString::fromUtf8("mOkButton"));
        mOkButton->setIconSize(QSize(24, 24));
        mOkButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        mOkButton->setAutoRaise(false);

        horizontalLayout->addWidget(mOkButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QgsUserProfileSelectionDialog);
        QObject::connect(mOkButton, SIGNAL(clicked()), QgsUserProfileSelectionDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(QgsUserProfileSelectionDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsUserProfileSelectionDialog)
    {
        QgsUserProfileSelectionDialog->setWindowTitle(QCoreApplication::translate("QgsUserProfileSelectionDialog", "Profiles", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("QgsUserProfileSelectionDialog", "Choose a profile", nullptr));

        const bool __sortingEnabled = mProfileListWidget->isSortingEnabled();
        mProfileListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mProfileListWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("QgsUserProfileSelectionDialog", "default", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = mProfileListWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("QgsUserProfileSelectionDialog", "New User", nullptr));
        mProfileListWidget->setSortingEnabled(__sortingEnabled);

        mAddProfileButton->setText(QCoreApplication::translate("QgsUserProfileSelectionDialog", "Add new profile", nullptr));
        mOkButton->setText(QCoreApplication::translate("QgsUserProfileSelectionDialog", "Ok", nullptr));
#if QT_CONFIG(shortcut)
        mOkButton->setShortcut(QCoreApplication::translate("QgsUserProfileSelectionDialog", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class QgsUserProfileSelectionDialog: public Ui_QgsUserProfileSelectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSUSERPROFILESELECTIONDIALOG_H
