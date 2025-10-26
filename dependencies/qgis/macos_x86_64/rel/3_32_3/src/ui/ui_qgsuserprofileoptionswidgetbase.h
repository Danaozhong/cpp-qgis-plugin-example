/********************************************************************************
** Form generated from reading UI file 'qgsuserprofileoptionswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSUSERPROFILEOPTIONSWIDGETBASE_H
#define UI_QGSUSERPROFILEOPTIONSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsUserProfileOptionsWidgetBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *mProfilePolicyGroupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QRadioButton *mAskUser;
    QRadioButton *mDefaultProfile;
    QComboBox *mDefaultProfileComboBox;
    QRadioButton *mLastProfile;
    QGroupBox *mProfileSelectorGroupBox;
    QFormLayout *formLayout;
    QLabel *mIconSizeLabel;
    QComboBox *mIconSize;
    QGroupBox *mActiveProfileGroupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *mChangeIconLabel;
    QToolButton *mChangeIconButton;
    QToolButton *mResetIconButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsUserProfileOptionsWidgetBase)
    {
        if (QgsUserProfileOptionsWidgetBase->objectName().isEmpty())
            QgsUserProfileOptionsWidgetBase->setObjectName(QString::fromUtf8("QgsUserProfileOptionsWidgetBase"));
        QgsUserProfileOptionsWidgetBase->resize(462, 378);
        verticalLayout_2 = new QVBoxLayout(QgsUserProfileOptionsWidgetBase);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mProfilePolicyGroupBox = new QGroupBox(QgsUserProfileOptionsWidgetBase);
        mProfilePolicyGroupBox->setObjectName(QString::fromUtf8("mProfilePolicyGroupBox"));
        gridLayout = new QGridLayout(mProfilePolicyGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(mProfilePolicyGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(9);
        font.setItalic(true);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 5, 0, 1, 2);

        mAskUser = new QRadioButton(mProfilePolicyGroupBox);
        mAskUser->setObjectName(QString::fromUtf8("mAskUser"));

        gridLayout->addWidget(mAskUser, 2, 0, 1, 2);

        mDefaultProfile = new QRadioButton(mProfilePolicyGroupBox);
        mDefaultProfile->setObjectName(QString::fromUtf8("mDefaultProfile"));

        gridLayout->addWidget(mDefaultProfile, 1, 0, 1, 1);

        mDefaultProfileComboBox = new QComboBox(mProfilePolicyGroupBox);
        mDefaultProfileComboBox->setObjectName(QString::fromUtf8("mDefaultProfileComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mDefaultProfileComboBox->sizePolicy().hasHeightForWidth());
        mDefaultProfileComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mDefaultProfileComboBox, 1, 1, 1, 1);

        mLastProfile = new QRadioButton(mProfilePolicyGroupBox);
        mLastProfile->setObjectName(QString::fromUtf8("mLastProfile"));

        gridLayout->addWidget(mLastProfile, 0, 0, 1, 2);


        verticalLayout_2->addWidget(mProfilePolicyGroupBox);

        mProfileSelectorGroupBox = new QGroupBox(QgsUserProfileOptionsWidgetBase);
        mProfileSelectorGroupBox->setObjectName(QString::fromUtf8("mProfileSelectorGroupBox"));
        formLayout = new QFormLayout(mProfileSelectorGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        mIconSizeLabel = new QLabel(mProfileSelectorGroupBox);
        mIconSizeLabel->setObjectName(QString::fromUtf8("mIconSizeLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, mIconSizeLabel);

        mIconSize = new QComboBox(mProfileSelectorGroupBox);
        mIconSize->addItem(QString());
        mIconSize->addItem(QString());
        mIconSize->addItem(QString());
        mIconSize->addItem(QString());
        mIconSize->addItem(QString());
        mIconSize->setObjectName(QString::fromUtf8("mIconSize"));
        mIconSize->setMaximumSize(QSize(50, 16777215));

        formLayout->setWidget(0, QFormLayout::FieldRole, mIconSize);


        verticalLayout_2->addWidget(mProfileSelectorGroupBox);

        mActiveProfileGroupBox = new QGroupBox(QgsUserProfileOptionsWidgetBase);
        mActiveProfileGroupBox->setObjectName(QString::fromUtf8("mActiveProfileGroupBox"));
        horizontalLayout = new QHBoxLayout(mActiveProfileGroupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mChangeIconLabel = new QLabel(mActiveProfileGroupBox);
        mChangeIconLabel->setObjectName(QString::fromUtf8("mChangeIconLabel"));

        horizontalLayout->addWidget(mChangeIconLabel);

        mChangeIconButton = new QToolButton(mActiveProfileGroupBox);
        mChangeIconButton->setObjectName(QString::fromUtf8("mChangeIconButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/user.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mChangeIconButton->setIcon(icon);
        mChangeIconButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(mChangeIconButton);

        mResetIconButton = new QToolButton(mActiveProfileGroupBox);
        mResetIconButton->setObjectName(QString::fromUtf8("mResetIconButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mResetIconButton->setIcon(icon1);

        horizontalLayout->addWidget(mResetIconButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(mActiveProfileGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        QWidget::setTabOrder(mLastProfile, mDefaultProfile);
        QWidget::setTabOrder(mDefaultProfile, mDefaultProfileComboBox);
        QWidget::setTabOrder(mDefaultProfileComboBox, mAskUser);
        QWidget::setTabOrder(mAskUser, mChangeIconButton);

        retranslateUi(QgsUserProfileOptionsWidgetBase);

        QMetaObject::connectSlotsByName(QgsUserProfileOptionsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsUserProfileOptionsWidgetBase)
    {
        QgsUserProfileOptionsWidgetBase->setWindowTitle(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "User Profile Settings", nullptr));
        mProfilePolicyGroupBox->setTitle(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "Startup Profile", nullptr));
        label->setText(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "These settings do not apply if a profile was explicitly selected with the --profile command line argument", nullptr));
        mAskUser->setText(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "Let user choose profile at start up", nullptr));
        mDefaultProfile->setText(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "Always use profile", nullptr));
        mLastProfile->setText(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "Use last closed profile", nullptr));
        mProfileSelectorGroupBox->setTitle(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "Profile Selector", nullptr));
        mIconSizeLabel->setText(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "Icon size", nullptr));
        mIconSize->setItemText(0, QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "16", nullptr));
        mIconSize->setItemText(1, QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "24", nullptr));
        mIconSize->setItemText(2, QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "32", nullptr));
        mIconSize->setItemText(3, QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "48", nullptr));
        mIconSize->setItemText(4, QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "64", nullptr));

        mActiveProfileGroupBox->setTitle(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "Active Profile", nullptr));
        mChangeIconLabel->setText(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "Change icon", nullptr));
#if QT_CONFIG(tooltip)
        mChangeIconButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mChangeIconButton->setText(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "Change profile icon", nullptr));
#if QT_CONFIG(tooltip)
        mResetIconButton->setToolTip(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "Reset icon", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class QgsUserProfileOptionsWidgetBase: public Ui_QgsUserProfileOptionsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSUSERPROFILEOPTIONSWIDGETBASE_H
