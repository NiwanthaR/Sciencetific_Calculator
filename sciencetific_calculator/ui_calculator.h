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
#include <QtWidgets/QRadioButton>
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
    QPushButton *btn_lnx;
    QPushButton *btn_oct;
    QPushButton *btn_tan;
    QPushButton *btn_tana;
    QPushButton *btn_hex;
    QPushButton *btn_mod;
    QPushButton *btn_presantage;
    QPushButton *btn_cosa;
    QPushButton *btn_1devx;
    QPushButton *btn_exp;
    QPushButton *btn_bin;
    QPushButton *btn_pow;
    QPushButton *btn_pow3;
    QPushButton *btn_cos;
    QPushButton *btn_pow2;
    QPushButton *btn_sina;
    QPushButton *btn_sin;
    QPushButton *btn_sqrt;
    QPushButton *btn_pi;
    QPushButton *btn_log;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QGridLayout *gridLayout_4;
    QPushButton *btn_backslash;
    QPushButton *btn_plus_minus;
    QPushButton *btn_clear_all;
    QPushButton *btn_clear;
    QPushButton *btn_multiple;
    QPushButton *btn_7;
    QPushButton *btn_plus;
    QPushButton *btn_8;
    QPushButton *btn_4;
    QPushButton *btn_6;
    QPushButton *btn_9;
    QPushButton *btn_3;
    QPushButton *btn_2;
    QPushButton *btn_minus;
    QPushButton *btn_1;
    QPushButton *btn_5;
    QPushButton *btn_dot;
    QPushButton *btn_eqal;
    QPushButton *btn_0;
    QPushButton *btn_devide;
    QLineEdit *textDisplay;
    QLabel *lblshowoperator;
    QLabel *label;
    QWidget *widget_thermo;
    QRadioButton *radio_ctof;
    QRadioButton *radio_ftoc;
    QRadioButton *radio_ctok;
    QRadioButton *radioktoc;
    QLabel *label_2;
    QPushButton *btn_converte;
    QPushButton *btn_g_thermo;
    QPushButton *btn_go_cal;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QStringLiteral("Calculator"));
        Calculator->resize(901, 588);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral("../../../../Downloads/calculator.png"), QSize(), QIcon::Normal, QIcon::Off);
        Calculator->setWindowIcon(icon);
        Calculator->setStyleSheet(QLatin1String("QMainWindow {\n"
"  background-color: rgb(234, 236, 238);\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
""));
        centralWidget = new QWidget(Calculator);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 140, 861, 429));
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
        btn_lnx = new QPushButton(horizontalLayoutWidget);
        btn_lnx->setObjectName(QStringLiteral("btn_lnx"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_lnx->sizePolicy().hasHeightForWidth());
        btn_lnx->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(12);
        btn_lnx->setFont(font);
        btn_lnx->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(195, 155, 211);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #D7BDE2, stop: 1 #EBDEF0);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #AF7AC5;\n"
"}"));

        gridLayout->addWidget(btn_lnx, 3, 3, 1, 1);

        btn_oct = new QPushButton(horizontalLayoutWidget);
        btn_oct->setObjectName(QStringLiteral("btn_oct"));
        sizePolicy1.setHeightForWidth(btn_oct->sizePolicy().hasHeightForWidth());
        btn_oct->setSizePolicy(sizePolicy1);
        btn_oct->setFont(font);
        btn_oct->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(195, 155, 211);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #D7BDE2, stop: 1 #EBDEF0);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #AF7AC5;\n"
"}"));

        gridLayout->addWidget(btn_oct, 3, 2, 1, 1);

        btn_tan = new QPushButton(horizontalLayoutWidget);
        btn_tan->setObjectName(QStringLiteral("btn_tan"));
        sizePolicy1.setHeightForWidth(btn_tan->sizePolicy().hasHeightForWidth());
        btn_tan->setSizePolicy(sizePolicy1);
        btn_tan->setFont(font);
        btn_tan->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(195, 155, 211);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #D7BDE2, stop: 1 #EBDEF0);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #AF7AC5;\n"
"}"));

        gridLayout->addWidget(btn_tan, 3, 0, 1, 1);

        btn_tana = new QPushButton(horizontalLayoutWidget);
        btn_tana->setObjectName(QStringLiteral("btn_tana"));
        sizePolicy1.setHeightForWidth(btn_tana->sizePolicy().hasHeightForWidth());
        btn_tana->setSizePolicy(sizePolicy1);
        btn_tana->setFont(font);
        btn_tana->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(195, 155, 211);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #D7BDE2, stop: 1 #EBDEF0);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #AF7AC5;\n"
"}"));

        gridLayout->addWidget(btn_tana, 3, 1, 1, 1);

        btn_hex = new QPushButton(horizontalLayoutWidget);
        btn_hex->setObjectName(QStringLiteral("btn_hex"));
        sizePolicy1.setHeightForWidth(btn_hex->sizePolicy().hasHeightForWidth());
        btn_hex->setSizePolicy(sizePolicy1);
        btn_hex->setFont(font);
        btn_hex->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(195, 155, 211);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #D7BDE2, stop: 1 #EBDEF0);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #AF7AC5;\n"
"}"));

        gridLayout->addWidget(btn_hex, 4, 2, 1, 1);

        btn_mod = new QPushButton(horizontalLayoutWidget);
        btn_mod->setObjectName(QStringLiteral("btn_mod"));
        sizePolicy1.setHeightForWidth(btn_mod->sizePolicy().hasHeightForWidth());
        btn_mod->setSizePolicy(sizePolicy1);
        btn_mod->setFont(font);
        btn_mod->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(195, 155, 211);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #D7BDE2, stop: 1 #EBDEF0);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #AF7AC5;\n"
"}"));

        gridLayout->addWidget(btn_mod, 4, 1, 1, 1);

        btn_presantage = new QPushButton(horizontalLayoutWidget);
        btn_presantage->setObjectName(QStringLiteral("btn_presantage"));
        sizePolicy1.setHeightForWidth(btn_presantage->sizePolicy().hasHeightForWidth());
        btn_presantage->setSizePolicy(sizePolicy1);
        btn_presantage->setFont(font);
        btn_presantage->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(195, 155, 211);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #D7BDE2, stop: 1 #EBDEF0);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #AF7AC5;\n"
"}"));

        gridLayout->addWidget(btn_presantage, 4, 3, 1, 1);

        btn_cosa = new QPushButton(horizontalLayoutWidget);
        btn_cosa->setObjectName(QStringLiteral("btn_cosa"));
        sizePolicy1.setHeightForWidth(btn_cosa->sizePolicy().hasHeightForWidth());
        btn_cosa->setSizePolicy(sizePolicy1);
        btn_cosa->setFont(font);
        btn_cosa->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(195, 155, 211);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #D7BDE2, stop: 1 #EBDEF0);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #AF7AC5;\n"
"}"));

        gridLayout->addWidget(btn_cosa, 2, 1, 1, 1);

        btn_1devx = new QPushButton(horizontalLayoutWidget);
        btn_1devx->setObjectName(QStringLiteral("btn_1devx"));
        sizePolicy1.setHeightForWidth(btn_1devx->sizePolicy().hasHeightForWidth());
        btn_1devx->setSizePolicy(sizePolicy1);
        btn_1devx->setFont(font);
        btn_1devx->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(195, 155, 211);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #D7BDE2, stop: 1 #EBDEF0);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #AF7AC5;\n"
"}"));

        gridLayout->addWidget(btn_1devx, 2, 3, 1, 1);

        btn_exp = new QPushButton(horizontalLayoutWidget);
        btn_exp->setObjectName(QStringLiteral("btn_exp"));
        sizePolicy1.setHeightForWidth(btn_exp->sizePolicy().hasHeightForWidth());
        btn_exp->setSizePolicy(sizePolicy1);
        btn_exp->setFont(font);
        btn_exp->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(195, 155, 211);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #D7BDE2, stop: 1 #EBDEF0);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #AF7AC5;\n"
"}"));

        gridLayout->addWidget(btn_exp, 4, 0, 1, 1);

        btn_bin = new QPushButton(horizontalLayoutWidget);
        btn_bin->setObjectName(QStringLiteral("btn_bin"));
        sizePolicy1.setHeightForWidth(btn_bin->sizePolicy().hasHeightForWidth());
        btn_bin->setSizePolicy(sizePolicy1);
        btn_bin->setFont(font);
        btn_bin->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(195, 155, 211);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #D7BDE2, stop: 1 #EBDEF0);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #AF7AC5;\n"
"}"));

        gridLayout->addWidget(btn_bin, 2, 2, 1, 1);

        btn_pow = new QPushButton(horizontalLayoutWidget);
        btn_pow->setObjectName(QStringLiteral("btn_pow"));
        sizePolicy1.setHeightForWidth(btn_pow->sizePolicy().hasHeightForWidth());
        btn_pow->setSizePolicy(sizePolicy1);
        btn_pow->setFont(font);
        btn_pow->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(195, 155, 211);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #D7BDE2, stop: 1 #EBDEF0);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #AF7AC5;\n"
"}"));

        gridLayout->addWidget(btn_pow, 1, 2, 1, 1);

        btn_pow3 = new QPushButton(horizontalLayoutWidget);
        btn_pow3->setObjectName(QStringLiteral("btn_pow3"));
        sizePolicy1.setHeightForWidth(btn_pow3->sizePolicy().hasHeightForWidth());
        btn_pow3->setSizePolicy(sizePolicy1);
        btn_pow3->setFont(font);
        btn_pow3->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(195, 155, 211);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #D7BDE2, stop: 1 #EBDEF0);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #AF7AC5;\n"
"}"));

        gridLayout->addWidget(btn_pow3, 1, 3, 1, 1);

        btn_cos = new QPushButton(horizontalLayoutWidget);
        btn_cos->setObjectName(QStringLiteral("btn_cos"));
        sizePolicy1.setHeightForWidth(btn_cos->sizePolicy().hasHeightForWidth());
        btn_cos->setSizePolicy(sizePolicy1);
        btn_cos->setFont(font);
        btn_cos->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(195, 155, 211);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #D7BDE2, stop: 1 #EBDEF0);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #AF7AC5;\n"
"}"));

        gridLayout->addWidget(btn_cos, 2, 0, 1, 1);

        btn_pow2 = new QPushButton(horizontalLayoutWidget);
        btn_pow2->setObjectName(QStringLiteral("btn_pow2"));
        sizePolicy1.setHeightForWidth(btn_pow2->sizePolicy().hasHeightForWidth());
        btn_pow2->setSizePolicy(sizePolicy1);
        btn_pow2->setFont(font);
        btn_pow2->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(195, 155, 211);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #D7BDE2, stop: 1 #EBDEF0);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #AF7AC5;\n"
"}"));

        gridLayout->addWidget(btn_pow2, 0, 3, 1, 1);

        btn_sina = new QPushButton(horizontalLayoutWidget);
        btn_sina->setObjectName(QStringLiteral("btn_sina"));
        sizePolicy1.setHeightForWidth(btn_sina->sizePolicy().hasHeightForWidth());
        btn_sina->setSizePolicy(sizePolicy1);
        btn_sina->setFont(font);
        btn_sina->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(195, 155, 211);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #D7BDE2, stop: 1 #EBDEF0);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #AF7AC5;\n"
"}"));

        gridLayout->addWidget(btn_sina, 1, 1, 1, 1);

        btn_sin = new QPushButton(horizontalLayoutWidget);
        btn_sin->setObjectName(QStringLiteral("btn_sin"));
        sizePolicy1.setHeightForWidth(btn_sin->sizePolicy().hasHeightForWidth());
        btn_sin->setSizePolicy(sizePolicy1);
        btn_sin->setFont(font);
        btn_sin->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(195, 155, 211);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #D7BDE2, stop: 1 #EBDEF0);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #AF7AC5;\n"
"}"));

        gridLayout->addWidget(btn_sin, 1, 0, 1, 1);

        btn_sqrt = new QPushButton(horizontalLayoutWidget);
        btn_sqrt->setObjectName(QStringLiteral("btn_sqrt"));
        sizePolicy1.setHeightForWidth(btn_sqrt->sizePolicy().hasHeightForWidth());
        btn_sqrt->setSizePolicy(sizePolicy1);
        btn_sqrt->setFont(font);
        btn_sqrt->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(195, 155, 211);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #D7BDE2, stop: 1 #EBDEF0);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #AF7AC5;\n"
"}"));

        gridLayout->addWidget(btn_sqrt, 0, 2, 1, 1);

        btn_pi = new QPushButton(horizontalLayoutWidget);
        btn_pi->setObjectName(QStringLiteral("btn_pi"));
        sizePolicy1.setHeightForWidth(btn_pi->sizePolicy().hasHeightForWidth());
        btn_pi->setSizePolicy(sizePolicy1);
        btn_pi->setFont(font);
        btn_pi->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(195, 155, 211);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #D7BDE2, stop: 1 #EBDEF0);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #AF7AC5;\n"
"}"));

        gridLayout->addWidget(btn_pi, 0, 0, 1, 1);

        btn_log = new QPushButton(horizontalLayoutWidget);
        btn_log->setObjectName(QStringLiteral("btn_log"));
        sizePolicy1.setHeightForWidth(btn_log->sizePolicy().hasHeightForWidth());
        btn_log->setSizePolicy(sizePolicy1);
        btn_log->setFont(font);
        btn_log->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(195, 155, 211);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #D7BDE2, stop: 1 #EBDEF0);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #AF7AC5;\n"
"}"));

        gridLayout->addWidget(btn_log, 0, 1, 1, 1);


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
        btn_backslash = new QPushButton(horizontalLayoutWidget);
        btn_backslash->setObjectName(QStringLiteral("btn_backslash"));
        sizePolicy1.setHeightForWidth(btn_backslash->sizePolicy().hasHeightForWidth());
        btn_backslash->setSizePolicy(sizePolicy1);
        btn_backslash->setFont(font);
        btn_backslash->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(243, 156, 18);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #D68910;\n"
"}"));

        gridLayout_4->addWidget(btn_backslash, 0, 2, 1, 1);

        btn_plus_minus = new QPushButton(horizontalLayoutWidget);
        btn_plus_minus->setObjectName(QStringLiteral("btn_plus_minus"));
        sizePolicy1.setHeightForWidth(btn_plus_minus->sizePolicy().hasHeightForWidth());
        btn_plus_minus->setSizePolicy(sizePolicy1);
        btn_plus_minus->setFont(font);
        btn_plus_minus->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(46, 134, 193);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3498DB, stop: 1 #5DADE2);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #2874A6;\n"
"}"));

        gridLayout_4->addWidget(btn_plus_minus, 0, 3, 1, 1);

        btn_clear_all = new QPushButton(horizontalLayoutWidget);
        btn_clear_all->setObjectName(QStringLiteral("btn_clear_all"));
        sizePolicy1.setHeightForWidth(btn_clear_all->sizePolicy().hasHeightForWidth());
        btn_clear_all->setSizePolicy(sizePolicy1);
        btn_clear_all->setFont(font);
        btn_clear_all->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(243, 156, 18);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #D68910;\n"
"}"));

        gridLayout_4->addWidget(btn_clear_all, 0, 0, 1, 1);

        btn_clear = new QPushButton(horizontalLayoutWidget);
        btn_clear->setObjectName(QStringLiteral("btn_clear"));
        sizePolicy1.setHeightForWidth(btn_clear->sizePolicy().hasHeightForWidth());
        btn_clear->setSizePolicy(sizePolicy1);
        btn_clear->setFont(font);
        btn_clear->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(243, 156, 18);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #D68910;\n"
"}"));

        gridLayout_4->addWidget(btn_clear, 0, 1, 1, 1);

        btn_multiple = new QPushButton(horizontalLayoutWidget);
        btn_multiple->setObjectName(QStringLiteral("btn_multiple"));
        sizePolicy1.setHeightForWidth(btn_multiple->sizePolicy().hasHeightForWidth());
        btn_multiple->setSizePolicy(sizePolicy1);
        btn_multiple->setFont(font);
        btn_multiple->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(46, 134, 193);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3498DB, stop: 1 #5DADE2);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #2874A6;\n"
"}"));

        gridLayout_4->addWidget(btn_multiple, 4, 3, 1, 1);

        btn_7 = new QPushButton(horizontalLayoutWidget);
        btn_7->setObjectName(QStringLiteral("btn_7"));
        sizePolicy1.setHeightForWidth(btn_7->sizePolicy().hasHeightForWidth());
        btn_7->setSizePolicy(sizePolicy1);
        btn_7->setFont(font);
        btn_7->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(213, 219, 219);\n"
"  color: black; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #5DADE2, stop: 1 #85C1E9);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #BFC9CA;\n"
"}"));

        gridLayout_4->addWidget(btn_7, 1, 0, 1, 1);

        btn_plus = new QPushButton(horizontalLayoutWidget);
        btn_plus->setObjectName(QStringLiteral("btn_plus"));
        sizePolicy1.setHeightForWidth(btn_plus->sizePolicy().hasHeightForWidth());
        btn_plus->setSizePolicy(sizePolicy1);
        btn_plus->setFont(font);
        btn_plus->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(46, 134, 193);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3498DB, stop: 1 #5DADE2);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #2874A6;\n"
"}"));

        gridLayout_4->addWidget(btn_plus, 1, 3, 1, 1);

        btn_8 = new QPushButton(horizontalLayoutWidget);
        btn_8->setObjectName(QStringLiteral("btn_8"));
        sizePolicy1.setHeightForWidth(btn_8->sizePolicy().hasHeightForWidth());
        btn_8->setSizePolicy(sizePolicy1);
        btn_8->setFont(font);
        btn_8->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(213, 219, 219);\n"
"  color: black; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #5DADE2, stop: 1 #85C1E9);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #BFC9CA;\n"
"}"));

        gridLayout_4->addWidget(btn_8, 1, 1, 1, 1);

        btn_4 = new QPushButton(horizontalLayoutWidget);
        btn_4->setObjectName(QStringLiteral("btn_4"));
        sizePolicy1.setHeightForWidth(btn_4->sizePolicy().hasHeightForWidth());
        btn_4->setSizePolicy(sizePolicy1);
        btn_4->setFont(font);
        btn_4->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(213, 219, 219);\n"
"  color: black; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #5DADE2, stop: 1 #85C1E9);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #BFC9CA;\n"
"}"));

        gridLayout_4->addWidget(btn_4, 2, 0, 1, 1);

        btn_6 = new QPushButton(horizontalLayoutWidget);
        btn_6->setObjectName(QStringLiteral("btn_6"));
        sizePolicy1.setHeightForWidth(btn_6->sizePolicy().hasHeightForWidth());
        btn_6->setSizePolicy(sizePolicy1);
        btn_6->setFont(font);
        btn_6->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(213, 219, 219);\n"
"  color: black; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #5DADE2, stop: 1 #85C1E9);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #BFC9CA;\n"
"}"));

        gridLayout_4->addWidget(btn_6, 2, 2, 1, 1);

        btn_9 = new QPushButton(horizontalLayoutWidget);
        btn_9->setObjectName(QStringLiteral("btn_9"));
        sizePolicy1.setHeightForWidth(btn_9->sizePolicy().hasHeightForWidth());
        btn_9->setSizePolicy(sizePolicy1);
        btn_9->setFont(font);
        btn_9->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(213, 219, 219);\n"
"  color: black; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #5DADE2, stop: 1 #85C1E9);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #BFC9CA;\n"
"}"));

        gridLayout_4->addWidget(btn_9, 1, 2, 1, 1);

        btn_3 = new QPushButton(horizontalLayoutWidget);
        btn_3->setObjectName(QStringLiteral("btn_3"));
        sizePolicy1.setHeightForWidth(btn_3->sizePolicy().hasHeightForWidth());
        btn_3->setSizePolicy(sizePolicy1);
        btn_3->setFont(font);
        btn_3->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(213, 219, 219);\n"
"  color: black; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #5DADE2, stop: 1 #85C1E9);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #BFC9CA;\n"
"}"));

        gridLayout_4->addWidget(btn_3, 3, 2, 1, 1);

        btn_2 = new QPushButton(horizontalLayoutWidget);
        btn_2->setObjectName(QStringLiteral("btn_2"));
        sizePolicy1.setHeightForWidth(btn_2->sizePolicy().hasHeightForWidth());
        btn_2->setSizePolicy(sizePolicy1);
        btn_2->setFont(font);
        btn_2->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(213, 219, 219);\n"
"  color: black; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #5DADE2, stop: 1 #85C1E9);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #BFC9CA;\n"
"}"));

        gridLayout_4->addWidget(btn_2, 3, 1, 1, 1);

        btn_minus = new QPushButton(horizontalLayoutWidget);
        btn_minus->setObjectName(QStringLiteral("btn_minus"));
        sizePolicy1.setHeightForWidth(btn_minus->sizePolicy().hasHeightForWidth());
        btn_minus->setSizePolicy(sizePolicy1);
        btn_minus->setFont(font);
        btn_minus->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(46, 134, 193);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3498DB, stop: 1 #5DADE2);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #2874A6;\n"
"}"));

        gridLayout_4->addWidget(btn_minus, 2, 3, 1, 1);

        btn_1 = new QPushButton(horizontalLayoutWidget);
        btn_1->setObjectName(QStringLiteral("btn_1"));
        sizePolicy1.setHeightForWidth(btn_1->sizePolicy().hasHeightForWidth());
        btn_1->setSizePolicy(sizePolicy1);
        btn_1->setFont(font);
        btn_1->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(213, 219, 219);\n"
"  color: black; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #5DADE2, stop: 1 #85C1E9);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #BFC9CA;\n"
"}"));

        gridLayout_4->addWidget(btn_1, 3, 0, 1, 1);

        btn_5 = new QPushButton(horizontalLayoutWidget);
        btn_5->setObjectName(QStringLiteral("btn_5"));
        sizePolicy1.setHeightForWidth(btn_5->sizePolicy().hasHeightForWidth());
        btn_5->setSizePolicy(sizePolicy1);
        btn_5->setFont(font);
        btn_5->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(213, 219, 219);\n"
"  color: black; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #5DADE2, stop: 1 #85C1E9);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #BFC9CA;\n"
"}"));

        gridLayout_4->addWidget(btn_5, 2, 1, 1, 1);

        btn_dot = new QPushButton(horizontalLayoutWidget);
        btn_dot->setObjectName(QStringLiteral("btn_dot"));
        sizePolicy1.setHeightForWidth(btn_dot->sizePolicy().hasHeightForWidth());
        btn_dot->setSizePolicy(sizePolicy1);
        btn_dot->setFont(font);
        btn_dot->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(46, 134, 193);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3498DB, stop: 1 #5DADE2);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #2874A6;\n"
"}"));

        gridLayout_4->addWidget(btn_dot, 4, 0, 1, 1);

        btn_eqal = new QPushButton(horizontalLayoutWidget);
        btn_eqal->setObjectName(QStringLiteral("btn_eqal"));
        sizePolicy1.setHeightForWidth(btn_eqal->sizePolicy().hasHeightForWidth());
        btn_eqal->setSizePolicy(sizePolicy1);
        btn_eqal->setFont(font);
        btn_eqal->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(46, 134, 193);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3498DB, stop: 1 #5DADE2);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #2874A6;\n"
"}"));

        gridLayout_4->addWidget(btn_eqal, 4, 2, 1, 1);

        btn_0 = new QPushButton(horizontalLayoutWidget);
        btn_0->setObjectName(QStringLiteral("btn_0"));
        sizePolicy1.setHeightForWidth(btn_0->sizePolicy().hasHeightForWidth());
        btn_0->setSizePolicy(sizePolicy1);
        btn_0->setFont(font);
        btn_0->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(213, 219, 219);\n"
"  color: black; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #5DADE2, stop: 1 #85C1E9);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #BFC9CA;\n"
"}"));

        gridLayout_4->addWidget(btn_0, 4, 1, 1, 1);

        btn_devide = new QPushButton(horizontalLayoutWidget);
        btn_devide->setObjectName(QStringLiteral("btn_devide"));
        sizePolicy1.setHeightForWidth(btn_devide->sizePolicy().hasHeightForWidth());
        btn_devide->setSizePolicy(sizePolicy1);
        btn_devide->setFont(font);
        btn_devide->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(46, 134, 193);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3498DB, stop: 1 #5DADE2);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #2874A6;\n"
"}"));

        gridLayout_4->addWidget(btn_devide, 3, 3, 1, 1);


        horizontalLayout_8->addLayout(gridLayout_4);


        horizontalLayout_7->addLayout(horizontalLayout_8);

        textDisplay = new QLineEdit(centralWidget);
        textDisplay->setObjectName(QStringLiteral("textDisplay"));
        textDisplay->setGeometry(QRect(20, 50, 861, 81));
        QFont font1;
        font1.setPointSize(18);
        textDisplay->setFont(font1);
        textDisplay->setStyleSheet(QLatin1String("QLineEdit {\n"
" padding-bottom:6px;\n"
" padding-right:10px;\n"
"}"));
        textDisplay->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        textDisplay->setReadOnly(true);
        lblshowoperator = new QLabel(centralWidget);
        lblshowoperator->setObjectName(QStringLiteral("lblshowoperator"));
        lblshowoperator->setGeometry(QRect(30, 60, 841, 31));
        QFont font2;
        font2.setPointSize(10);
        lblshowoperator->setFont(font2);
        lblshowoperator->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 431, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Rockwell Extra Bold"));
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        widget_thermo = new QWidget(centralWidget);
        widget_thermo->setObjectName(QStringLiteral("widget_thermo"));
        widget_thermo->setEnabled(true);
        widget_thermo->setGeometry(QRect(20, 140, 431, 431));
        widget_thermo->setAutoFillBackground(false);
        widget_thermo->setStyleSheet(QLatin1String("QWidget {\n"
"  background-color: rgb(234, 236, 238);\n"
"  \n"
"}"));
        radio_ctof = new QRadioButton(widget_thermo);
        radio_ctof->setObjectName(QStringLiteral("radio_ctof"));
        radio_ctof->setGeometry(QRect(110, 100, 221, 31));
        radio_ctof->setFont(font);
        radio_ftoc = new QRadioButton(widget_thermo);
        radio_ftoc->setObjectName(QStringLiteral("radio_ftoc"));
        radio_ftoc->setGeometry(QRect(110, 150, 221, 31));
        radio_ftoc->setFont(font);
        radio_ctok = new QRadioButton(widget_thermo);
        radio_ctok->setObjectName(QStringLiteral("radio_ctok"));
        radio_ctok->setGeometry(QRect(110, 200, 221, 31));
        radio_ctok->setFont(font);
        radioktoc = new QRadioButton(widget_thermo);
        radioktoc->setObjectName(QStringLiteral("radioktoc"));
        radioktoc->setGeometry(QRect(110, 250, 221, 31));
        radioktoc->setFont(font);
        label_2 = new QLabel(widget_thermo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 30, 331, 41));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        label_2->setFont(font4);
        btn_converte = new QPushButton(widget_thermo);
        btn_converte->setObjectName(QStringLiteral("btn_converte"));
        btn_converte->setGeometry(QRect(110, 320, 191, 41));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(false);
        font5.setWeight(50);
        btn_converte->setFont(font5);
        btn_converte->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(243, 156, 18);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"  border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #D68910;\n"
"}"));
        btn_g_thermo = new QPushButton(centralWidget);
        btn_g_thermo->setObjectName(QStringLiteral("btn_g_thermo"));
        btn_g_thermo->setGeometry(QRect(730, 10, 131, 28));
        QFont font6;
        font6.setPointSize(10);
        font6.setBold(false);
        font6.setWeight(50);
        btn_g_thermo->setFont(font6);
        btn_g_thermo->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color:#4CC417;\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
" border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3498DB, stop: 1 #5DADE2);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #52D017;\n"
"}"));
        btn_go_cal = new QPushButton(centralWidget);
        btn_go_cal->setObjectName(QStringLiteral("btn_go_cal"));
        btn_go_cal->setGeometry(QRect(592, 10, 131, 28));
        btn_go_cal->setFont(font6);
        btn_go_cal->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color:#4CC417;\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
" border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3498DB, stop: 1 #5DADE2);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #52D017;\n"
"}"));
        Calculator->setCentralWidget(centralWidget);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator", Q_NULLPTR));
        btn_lnx->setText(QApplication::translate("Calculator", "Ln x", Q_NULLPTR));
        btn_oct->setText(QApplication::translate("Calculator", "Oct", Q_NULLPTR));
        btn_tan->setText(QApplication::translate("Calculator", "Tan", Q_NULLPTR));
        btn_tana->setText(QApplication::translate("Calculator", "Tan A", Q_NULLPTR));
        btn_hex->setText(QApplication::translate("Calculator", "Hex", Q_NULLPTR));
        btn_mod->setText(QApplication::translate("Calculator", "Mod", Q_NULLPTR));
        btn_presantage->setText(QApplication::translate("Calculator", "%", Q_NULLPTR));
        btn_cosa->setText(QApplication::translate("Calculator", "Cos A", Q_NULLPTR));
        btn_1devx->setText(QApplication::translate("Calculator", "1/x", Q_NULLPTR));
        btn_exp->setText(QApplication::translate("Calculator", "Exp", Q_NULLPTR));
        btn_bin->setText(QApplication::translate("Calculator", "Bin", Q_NULLPTR));
        btn_pow->setText(QApplication::translate("Calculator", "Pow", Q_NULLPTR));
        btn_pow3->setText(QApplication::translate("Calculator", "X^3", Q_NULLPTR));
        btn_cos->setText(QApplication::translate("Calculator", "Cos", Q_NULLPTR));
        btn_pow2->setText(QApplication::translate("Calculator", "X^2", Q_NULLPTR));
        btn_sina->setText(QApplication::translate("Calculator", "Sin A", Q_NULLPTR));
        btn_sin->setText(QApplication::translate("Calculator", "Sin", Q_NULLPTR));
        btn_sqrt->setText(QApplication::translate("Calculator", "Sqrt", Q_NULLPTR));
        btn_pi->setText(QApplication::translate("Calculator", "\317\200", Q_NULLPTR));
        btn_log->setText(QApplication::translate("Calculator", "Log", Q_NULLPTR));
        btn_backslash->setText(QApplication::translate("Calculator", "<==", Q_NULLPTR));
        btn_plus_minus->setText(QApplication::translate("Calculator", "\302\261", Q_NULLPTR));
        btn_clear_all->setText(QApplication::translate("Calculator", "CE", Q_NULLPTR));
        btn_clear->setText(QApplication::translate("Calculator", "C", Q_NULLPTR));
        btn_multiple->setText(QApplication::translate("Calculator", "*", Q_NULLPTR));
        btn_7->setText(QApplication::translate("Calculator", "7", Q_NULLPTR));
        btn_plus->setText(QApplication::translate("Calculator", "+", Q_NULLPTR));
        btn_8->setText(QApplication::translate("Calculator", "8", Q_NULLPTR));
        btn_4->setText(QApplication::translate("Calculator", "4", Q_NULLPTR));
        btn_6->setText(QApplication::translate("Calculator", "6", Q_NULLPTR));
        btn_9->setText(QApplication::translate("Calculator", "9", Q_NULLPTR));
        btn_3->setText(QApplication::translate("Calculator", "3", Q_NULLPTR));
        btn_2->setText(QApplication::translate("Calculator", "2", Q_NULLPTR));
        btn_minus->setText(QApplication::translate("Calculator", "-", Q_NULLPTR));
        btn_1->setText(QApplication::translate("Calculator", "1", Q_NULLPTR));
        btn_5->setText(QApplication::translate("Calculator", "5", Q_NULLPTR));
        btn_dot->setText(QApplication::translate("Calculator", ".", Q_NULLPTR));
        btn_eqal->setText(QApplication::translate("Calculator", "=", Q_NULLPTR));
        btn_0->setText(QApplication::translate("Calculator", "0", Q_NULLPTR));
        btn_devide->setText(QApplication::translate("Calculator", "/", Q_NULLPTR));
        textDisplay->setPlaceholderText(QApplication::translate("Calculator", "0", Q_NULLPTR));
        lblshowoperator->setText(QString());
        label->setText(QApplication::translate("Calculator", "Sciencetific Calculator", Q_NULLPTR));
        radio_ctof->setText(QApplication::translate("Calculator", "Celsius to Fahrenheit", Q_NULLPTR));
        radio_ftoc->setText(QApplication::translate("Calculator", "Fahrenheit to Celsius", Q_NULLPTR));
        radio_ctok->setText(QApplication::translate("Calculator", "Celsius to Kelvin", Q_NULLPTR));
        radioktoc->setText(QApplication::translate("Calculator", "Kelvin to Celsius", Q_NULLPTR));
        label_2->setText(QApplication::translate("Calculator", "Temperature Converter", Q_NULLPTR));
        btn_converte->setText(QApplication::translate("Calculator", "Convert", Q_NULLPTR));
        btn_g_thermo->setText(QApplication::translate("Calculator", "Thermo Cal", Q_NULLPTR));
        btn_go_cal->setText(QApplication::translate("Calculator", "Science Cal", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
