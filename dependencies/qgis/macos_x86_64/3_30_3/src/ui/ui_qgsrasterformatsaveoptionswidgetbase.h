/********************************************************************************
** Form generated from reading UI file 'qgsrasterformatsaveoptionswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERFORMATSAVEOPTIONSWIDGETBASE_H
#define UI_QGSRASTERFORMATSAVEOPTIONSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsRasterFormatSaveOptionsWidgetBase
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_3;
    QWidget *mProfileButtons;
    QHBoxLayout *mProfileButtonsLayout;
    QPushButton *mProfileNewButton;
    QPushButton *mProfileDeleteButton;
    QPushButton *mProfileResetButton;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *mProfileComboBox;
    QLabel *mProfileLabel;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QTableWidget *mOptionsTable;
    QGridLayout *gridLayout_4;
    QPushButton *mOptionsAddButton;
    QPushButton *mOptionsDeleteButton;
    QPushButton *mOptionsValidateButton;
    QPushButton *mOptionsHelpButton;
    QSpacerItem *horizontalSpacer;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *mOptionsLineEdit;
    QFrame *mSeparator;

    void setupUi(QWidget *QgsRasterFormatSaveOptionsWidgetBase)
    {
        if (QgsRasterFormatSaveOptionsWidgetBase->objectName().isEmpty())
            QgsRasterFormatSaveOptionsWidgetBase->setObjectName(QString::fromUtf8("QgsRasterFormatSaveOptionsWidgetBase"));
        QgsRasterFormatSaveOptionsWidgetBase->resize(341, 203);
        QgsRasterFormatSaveOptionsWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsRasterFormatSaveOptionsWidgetBase);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mProfileButtons = new QWidget(QgsRasterFormatSaveOptionsWidgetBase);
        mProfileButtons->setObjectName(QString::fromUtf8("mProfileButtons"));
        mProfileButtonsLayout = new QHBoxLayout(mProfileButtons);
        mProfileButtonsLayout->setContentsMargins(0, 0, 0, 0);
        mProfileButtonsLayout->setObjectName(QString::fromUtf8("mProfileButtonsLayout"));
        mProfileNewButton = new QPushButton(mProfileButtons);
        mProfileNewButton->setObjectName(QString::fromUtf8("mProfileNewButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mProfileNewButton->setIcon(icon);

        mProfileButtonsLayout->addWidget(mProfileNewButton);

        mProfileDeleteButton = new QPushButton(mProfileButtons);
        mProfileDeleteButton->setObjectName(QString::fromUtf8("mProfileDeleteButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mProfileDeleteButton->setIcon(icon1);

        mProfileButtonsLayout->addWidget(mProfileDeleteButton);

        mProfileResetButton = new QPushButton(mProfileButtons);
        mProfileResetButton->setObjectName(QString::fromUtf8("mProfileResetButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionUndo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mProfileResetButton->setIcon(icon2);

        mProfileButtonsLayout->addWidget(mProfileResetButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mProfileButtonsLayout->addItem(horizontalSpacer_2);


        gridLayout_3->addWidget(mProfileButtons, 1, 1, 1, 1);

        mProfileComboBox = new QComboBox(QgsRasterFormatSaveOptionsWidgetBase);
        mProfileComboBox->setObjectName(QString::fromUtf8("mProfileComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mProfileComboBox->sizePolicy().hasHeightForWidth());
        mProfileComboBox->setSizePolicy(sizePolicy);
        mProfileComboBox->setMinimumSize(QSize(150, 0));

        gridLayout_3->addWidget(mProfileComboBox, 0, 1, 1, 1);

        mProfileLabel = new QLabel(QgsRasterFormatSaveOptionsWidgetBase);
        mProfileLabel->setObjectName(QString::fromUtf8("mProfileLabel"));

        gridLayout_3->addWidget(mProfileLabel, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 0, 1, 1, 1);

        mOptionsStackedWidget = new QStackedWidget(QgsRasterFormatSaveOptionsWidgetBase);
        mOptionsStackedWidget->setObjectName(QString::fromUtf8("mOptionsStackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mOptionsTable = new QTableWidget(page);
        if (mOptionsTable->columnCount() < 2)
            mOptionsTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mOptionsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mOptionsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        mOptionsTable->setObjectName(QString::fromUtf8("mOptionsTable"));
        mOptionsTable->setMinimumSize(QSize(204, 0));
        mOptionsTable->horizontalHeader()->setMinimumSectionSize(30);
        mOptionsTable->horizontalHeader()->setStretchLastSection(true);

        gridLayout_2->addWidget(mOptionsTable, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mOptionsAddButton = new QPushButton(page);
        mOptionsAddButton->setObjectName(QString::fromUtf8("mOptionsAddButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOptionsAddButton->sizePolicy().hasHeightForWidth());
        mOptionsAddButton->setSizePolicy(sizePolicy1);
        mOptionsAddButton->setIcon(icon);
        mOptionsAddButton->setIconSize(QSize(16, 16));

        gridLayout_4->addWidget(mOptionsAddButton, 0, 0, 1, 1);

        mOptionsDeleteButton = new QPushButton(page);
        mOptionsDeleteButton->setObjectName(QString::fromUtf8("mOptionsDeleteButton"));
        sizePolicy1.setHeightForWidth(mOptionsDeleteButton->sizePolicy().hasHeightForWidth());
        mOptionsDeleteButton->setSizePolicy(sizePolicy1);
        mOptionsDeleteButton->setIcon(icon1);

        gridLayout_4->addWidget(mOptionsDeleteButton, 0, 1, 1, 1);

        mOptionsValidateButton = new QPushButton(page);
        mOptionsValidateButton->setObjectName(QString::fromUtf8("mOptionsValidateButton"));

        gridLayout_4->addWidget(mOptionsValidateButton, 0, 2, 1, 1);

        mOptionsHelpButton = new QPushButton(page);
        mOptionsHelpButton->setObjectName(QString::fromUtf8("mOptionsHelpButton"));

        gridLayout_4->addWidget(mOptionsHelpButton, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 4, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 1, 0, 1, 1);

        mOptionsStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_2 = new QVBoxLayout(page_2);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mOptionsLineEdit = new QLineEdit(page_2);
        mOptionsLineEdit->setObjectName(QString::fromUtf8("mOptionsLineEdit"));
        mOptionsLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_2->addWidget(mOptionsLineEdit);

        mOptionsStackedWidget->addWidget(page_2);

        gridLayout->addWidget(mOptionsStackedWidget, 2, 1, 1, 1);

        mSeparator = new QFrame(QgsRasterFormatSaveOptionsWidgetBase);
        mSeparator->setObjectName(QString::fromUtf8("mSeparator"));
        mSeparator->setFrameShape(QFrame::HLine);
        mSeparator->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(mSeparator, 1, 1, 1, 1);

        QWidget::setTabOrder(mProfileComboBox, mProfileNewButton);
        QWidget::setTabOrder(mProfileNewButton, mProfileDeleteButton);
        QWidget::setTabOrder(mProfileDeleteButton, mProfileResetButton);
        QWidget::setTabOrder(mProfileResetButton, mOptionsTable);
        QWidget::setTabOrder(mOptionsTable, mOptionsAddButton);
        QWidget::setTabOrder(mOptionsAddButton, mOptionsDeleteButton);
        QWidget::setTabOrder(mOptionsDeleteButton, mOptionsValidateButton);
        QWidget::setTabOrder(mOptionsValidateButton, mOptionsHelpButton);
        QWidget::setTabOrder(mOptionsHelpButton, mOptionsLineEdit);

        retranslateUi(QgsRasterFormatSaveOptionsWidgetBase);

        mOptionsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsRasterFormatSaveOptionsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRasterFormatSaveOptionsWidgetBase)
    {
        mProfileNewButton->setText(QCoreApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "New", nullptr));
        mProfileDeleteButton->setText(QCoreApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Remove", nullptr));
        mProfileResetButton->setText(QCoreApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Reset", nullptr));
        mProfileLabel->setText(QCoreApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Profile", nullptr));
        QTableWidgetItem *___qtablewidgetitem = mOptionsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = mOptionsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Value", nullptr));
        mOptionsAddButton->setText(QString());
        mOptionsDeleteButton->setText(QString());
        mOptionsValidateButton->setText(QCoreApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Validate", nullptr));
        mOptionsHelpButton->setText(QCoreApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Help", nullptr));
#if QT_CONFIG(tooltip)
        mOptionsLineEdit->setToolTip(QCoreApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Insert KEY=VALUE pairs separated by spaces", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)QgsRasterFormatSaveOptionsWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsRasterFormatSaveOptionsWidgetBase: public Ui_QgsRasterFormatSaveOptionsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERFORMATSAVEOPTIONSWIDGETBASE_H
