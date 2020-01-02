/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_9;
    QGridLayout *gridLayout;
    QPushButton *pushButton_14;
    QPushButton *pushButton_16;
    QPushButton *pushButton_15;
    QPushButton *pushButton_10;
    QPushButton *pushButton_56;
    QPushButton *pushButton_55;
    QPushButton *pushButton_54;
    QPushButton *pushButton_53;
    QPushButton *pushButton_13;
    QPushButton *pushButton_12;
    QPushButton *pushButton_11;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_51;
    QPushButton *pushButton_52;
    QPushButton *pushButton_49;
    QPushButton *pushButton_50;
    QPushButton *pushButton_48;
    QPushButton *pushButton_33;
    QPushButton *pushButton_34;
    QPushButton *pushButton_35;
    QPushButton *pushButton_38;
    QPushButton *pushButton_37;
    QPushButton *pushButton_36;
    QPushButton *pushButton_44;
    QPushButton *pushButton_43;
    QPushButton *pushButton_40;
    QPushButton *pushButton_41;
    QPushButton *pushButton_39;
    QPushButton *pushButton_42;
    QPushButton *pushButton_47;
    QPushButton *pushButton_46;
    QPushButton *pushButton_45;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QStringLiteral("Calculator"));
        Calculator->resize(904, 555);
        centralWidget = new QWidget(Calculator);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 110, 861, 429));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout->setContentsMargins(0, -1, -1, -1);
        pushButton_14 = new QPushButton(horizontalLayoutWidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_14, 3, 1, 1, 1);

        pushButton_16 = new QPushButton(horizontalLayoutWidget);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        sizePolicy.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_16, 3, 3, 1, 1);

        pushButton_15 = new QPushButton(horizontalLayoutWidget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        sizePolicy.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_15, 3, 2, 1, 1);

        pushButton_10 = new QPushButton(horizontalLayoutWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_10, 3, 0, 1, 1);

        pushButton_56 = new QPushButton(horizontalLayoutWidget);
        pushButton_56->setObjectName(QStringLiteral("pushButton_56"));
        sizePolicy.setHeightForWidth(pushButton_56->sizePolicy().hasHeightForWidth());
        pushButton_56->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_56, 4, 3, 1, 1);

        pushButton_55 = new QPushButton(horizontalLayoutWidget);
        pushButton_55->setObjectName(QStringLiteral("pushButton_55"));
        sizePolicy.setHeightForWidth(pushButton_55->sizePolicy().hasHeightForWidth());
        pushButton_55->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_55, 4, 2, 1, 1);

        pushButton_54 = new QPushButton(horizontalLayoutWidget);
        pushButton_54->setObjectName(QStringLiteral("pushButton_54"));
        sizePolicy.setHeightForWidth(pushButton_54->sizePolicy().hasHeightForWidth());
        pushButton_54->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_54, 4, 1, 1, 1);

        pushButton_53 = new QPushButton(horizontalLayoutWidget);
        pushButton_53->setObjectName(QStringLiteral("pushButton_53"));
        sizePolicy.setHeightForWidth(pushButton_53->sizePolicy().hasHeightForWidth());
        pushButton_53->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_53, 4, 0, 1, 1);

        pushButton_13 = new QPushButton(horizontalLayoutWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        sizePolicy.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_13, 2, 3, 1, 1);

        pushButton_12 = new QPushButton(horizontalLayoutWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_12, 2, 2, 1, 1);

        pushButton_11 = new QPushButton(horizontalLayoutWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_11, 2, 1, 1, 1);

        pushButton_9 = new QPushButton(horizontalLayoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_9, 2, 0, 1, 1);

        pushButton_8 = new QPushButton(horizontalLayoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_8, 1, 3, 1, 1);

        pushButton_7 = new QPushButton(horizontalLayoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_7, 1, 2, 1, 1);

        pushButton_6 = new QPushButton(horizontalLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_6, 1, 1, 1, 1);

        pushButton_5 = new QPushButton(horizontalLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_5, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(horizontalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_4, 0, 3, 1, 1);

        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);


        horizontalLayout_9->addLayout(gridLayout);


        horizontalLayout_7->addLayout(horizontalLayout_9);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout_4->setContentsMargins(0, -1, -1, -1);
        pushButton_51 = new QPushButton(horizontalLayoutWidget);
        pushButton_51->setObjectName(QStringLiteral("pushButton_51"));
        sizePolicy.setHeightForWidth(pushButton_51->sizePolicy().hasHeightForWidth());
        pushButton_51->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_51, 0, 2, 1, 1);

        pushButton_52 = new QPushButton(horizontalLayoutWidget);
        pushButton_52->setObjectName(QStringLiteral("pushButton_52"));
        sizePolicy.setHeightForWidth(pushButton_52->sizePolicy().hasHeightForWidth());
        pushButton_52->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_52, 0, 3, 1, 1);

        pushButton_49 = new QPushButton(horizontalLayoutWidget);
        pushButton_49->setObjectName(QStringLiteral("pushButton_49"));
        sizePolicy.setHeightForWidth(pushButton_49->sizePolicy().hasHeightForWidth());
        pushButton_49->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_49, 0, 0, 1, 1);

        pushButton_50 = new QPushButton(horizontalLayoutWidget);
        pushButton_50->setObjectName(QStringLiteral("pushButton_50"));
        sizePolicy.setHeightForWidth(pushButton_50->sizePolicy().hasHeightForWidth());
        pushButton_50->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_50, 0, 1, 1, 1);

        pushButton_48 = new QPushButton(horizontalLayoutWidget);
        pushButton_48->setObjectName(QStringLiteral("pushButton_48"));
        sizePolicy.setHeightForWidth(pushButton_48->sizePolicy().hasHeightForWidth());
        pushButton_48->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_48, 4, 3, 1, 1);

        pushButton_33 = new QPushButton(horizontalLayoutWidget);
        pushButton_33->setObjectName(QStringLiteral("pushButton_33"));
        sizePolicy.setHeightForWidth(pushButton_33->sizePolicy().hasHeightForWidth());
        pushButton_33->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_33, 1, 0, 1, 1);

        pushButton_34 = new QPushButton(horizontalLayoutWidget);
        pushButton_34->setObjectName(QStringLiteral("pushButton_34"));
        sizePolicy.setHeightForWidth(pushButton_34->sizePolicy().hasHeightForWidth());
        pushButton_34->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_34, 1, 3, 1, 1);

        pushButton_35 = new QPushButton(horizontalLayoutWidget);
        pushButton_35->setObjectName(QStringLiteral("pushButton_35"));
        sizePolicy.setHeightForWidth(pushButton_35->sizePolicy().hasHeightForWidth());
        pushButton_35->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_35, 1, 1, 1, 1);

        pushButton_38 = new QPushButton(horizontalLayoutWidget);
        pushButton_38->setObjectName(QStringLiteral("pushButton_38"));
        sizePolicy.setHeightForWidth(pushButton_38->sizePolicy().hasHeightForWidth());
        pushButton_38->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_38, 2, 0, 1, 1);

        pushButton_37 = new QPushButton(horizontalLayoutWidget);
        pushButton_37->setObjectName(QStringLiteral("pushButton_37"));
        sizePolicy.setHeightForWidth(pushButton_37->sizePolicy().hasHeightForWidth());
        pushButton_37->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_37, 2, 2, 1, 1);

        pushButton_36 = new QPushButton(horizontalLayoutWidget);
        pushButton_36->setObjectName(QStringLiteral("pushButton_36"));
        sizePolicy.setHeightForWidth(pushButton_36->sizePolicy().hasHeightForWidth());
        pushButton_36->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_36, 1, 2, 1, 1);

        pushButton_44 = new QPushButton(horizontalLayoutWidget);
        pushButton_44->setObjectName(QStringLiteral("pushButton_44"));
        sizePolicy.setHeightForWidth(pushButton_44->sizePolicy().hasHeightForWidth());
        pushButton_44->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_44, 3, 2, 1, 1);

        pushButton_43 = new QPushButton(horizontalLayoutWidget);
        pushButton_43->setObjectName(QStringLiteral("pushButton_43"));
        sizePolicy.setHeightForWidth(pushButton_43->sizePolicy().hasHeightForWidth());
        pushButton_43->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_43, 3, 1, 1, 1);

        pushButton_40 = new QPushButton(horizontalLayoutWidget);
        pushButton_40->setObjectName(QStringLiteral("pushButton_40"));
        sizePolicy.setHeightForWidth(pushButton_40->sizePolicy().hasHeightForWidth());
        pushButton_40->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_40, 2, 3, 1, 1);

        pushButton_41 = new QPushButton(horizontalLayoutWidget);
        pushButton_41->setObjectName(QStringLiteral("pushButton_41"));
        sizePolicy.setHeightForWidth(pushButton_41->sizePolicy().hasHeightForWidth());
        pushButton_41->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_41, 3, 0, 1, 1);

        pushButton_39 = new QPushButton(horizontalLayoutWidget);
        pushButton_39->setObjectName(QStringLiteral("pushButton_39"));
        sizePolicy.setHeightForWidth(pushButton_39->sizePolicy().hasHeightForWidth());
        pushButton_39->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_39, 2, 1, 1, 1);

        pushButton_42 = new QPushButton(horizontalLayoutWidget);
        pushButton_42->setObjectName(QStringLiteral("pushButton_42"));
        sizePolicy.setHeightForWidth(pushButton_42->sizePolicy().hasHeightForWidth());
        pushButton_42->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_42, 4, 0, 1, 1);

        pushButton_47 = new QPushButton(horizontalLayoutWidget);
        pushButton_47->setObjectName(QStringLiteral("pushButton_47"));
        sizePolicy.setHeightForWidth(pushButton_47->sizePolicy().hasHeightForWidth());
        pushButton_47->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_47, 4, 2, 1, 1);

        pushButton_46 = new QPushButton(horizontalLayoutWidget);
        pushButton_46->setObjectName(QStringLiteral("pushButton_46"));
        sizePolicy.setHeightForWidth(pushButton_46->sizePolicy().hasHeightForWidth());
        pushButton_46->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_46, 4, 1, 1, 1);

        pushButton_45 = new QPushButton(horizontalLayoutWidget);
        pushButton_45->setObjectName(QStringLiteral("pushButton_45"));
        sizePolicy.setHeightForWidth(pushButton_45->sizePolicy().hasHeightForWidth());
        pushButton_45->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_45, 3, 3, 1, 1);


        horizontalLayout_8->addLayout(gridLayout_4);


        horizontalLayout_7->addLayout(horizontalLayout_8);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 20, 861, 81));
        QFont font;
        font.setPointSize(18);
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 841, 31));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Calculator->setCentralWidget(centralWidget);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("Calculator", "Tan A", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("Calculator", "Ln x", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("Calculator", "Oct", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("Calculator", "Tan", Q_NULLPTR));
        pushButton_56->setText(QApplication::translate("Calculator", "%", Q_NULLPTR));
        pushButton_55->setText(QApplication::translate("Calculator", "Hex", Q_NULLPTR));
        pushButton_54->setText(QApplication::translate("Calculator", "Mod", Q_NULLPTR));
        pushButton_53->setText(QApplication::translate("Calculator", "Exp", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("Calculator", "1/x", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("Calculator", "Bin", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("Calculator", "Cos A", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("Calculator", "Cos", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("Calculator", "X^3", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("Calculator", "Poq", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Calculator", "Sin A", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Calculator", "Sin", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Calculator", "X^2", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Calculator", "Sqrt", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Calculator", "Log", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Calculator", "\317\200", Q_NULLPTR));
        pushButton_51->setText(QApplication::translate("Calculator", "<==", Q_NULLPTR));
        pushButton_52->setText(QApplication::translate("Calculator", "\302\261", Q_NULLPTR));
        pushButton_49->setText(QApplication::translate("Calculator", "CE", Q_NULLPTR));
        pushButton_50->setText(QApplication::translate("Calculator", "C", Q_NULLPTR));
        pushButton_48->setText(QApplication::translate("Calculator", "*", Q_NULLPTR));
        pushButton_33->setText(QApplication::translate("Calculator", "7", Q_NULLPTR));
        pushButton_34->setText(QApplication::translate("Calculator", "+", Q_NULLPTR));
        pushButton_35->setText(QApplication::translate("Calculator", "8", Q_NULLPTR));
        pushButton_38->setText(QApplication::translate("Calculator", "4", Q_NULLPTR));
        pushButton_37->setText(QApplication::translate("Calculator", "6", Q_NULLPTR));
        pushButton_36->setText(QApplication::translate("Calculator", "9", Q_NULLPTR));
        pushButton_44->setText(QApplication::translate("Calculator", "3", Q_NULLPTR));
        pushButton_43->setText(QApplication::translate("Calculator", "2", Q_NULLPTR));
        pushButton_40->setText(QApplication::translate("Calculator", "-", Q_NULLPTR));
        pushButton_41->setText(QApplication::translate("Calculator", "1", Q_NULLPTR));
        pushButton_39->setText(QApplication::translate("Calculator", "5", Q_NULLPTR));
        pushButton_42->setText(QApplication::translate("Calculator", ".", Q_NULLPTR));
        pushButton_47->setText(QApplication::translate("Calculator", "=", Q_NULLPTR));
        pushButton_46->setText(QApplication::translate("Calculator", "0", Q_NULLPTR));
        pushButton_45->setText(QApplication::translate("Calculator", "/", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("Calculator", "0", Q_NULLPTR));
        label->setText(QApplication::translate("Calculator", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
