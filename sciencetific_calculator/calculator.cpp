#include "calculator.h"
#include "ui_calculator.h"
#include "string"
#include "QtMath"
#include "iostream"
#include "QDebug"
#include "math.h"

double iFirstnum;
double iSecondnum;
double iResult;
double a;
QString IOoperator;
float iCelsios,iKelvin,iFarenhite;
char IOperation;
int choise;


Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);

    //eqal button function
    connect(ui->btn_0,SIGNAL(released()),this,SLOT(digite_press()));
    connect(ui->btn_1,SIGNAL(released()),this,SLOT(digite_press()));
    connect(ui->btn_2,SIGNAL(released()),this,SLOT(digite_press()));
    connect(ui->btn_3,SIGNAL(released()),this,SLOT(digite_press()));
    connect(ui->btn_4,SIGNAL(released()),this,SLOT(digite_press()));
    connect(ui->btn_5,SIGNAL(released()),this,SLOT(digite_press()));
    connect(ui->btn_6,SIGNAL(released()),this,SLOT(digite_press()));
    connect(ui->btn_7,SIGNAL(released()),this,SLOT(digite_press()));
    connect(ui->btn_8,SIGNAL(released()),this,SLOT(digite_press()));
    connect(ui->btn_9,SIGNAL(released()),this,SLOT(digite_press()));

    connect(ui->btn_plus,SIGNAL(released()),this,SLOT(Arithmatic_Operator()));
    connect(ui->btn_minus,SIGNAL(released()),this,SLOT(Arithmatic_Operator()));
    connect(ui->btn_devide,SIGNAL(released()),this,SLOT(Arithmatic_Operator()));
    connect(ui->btn_multiple,SIGNAL(released()),this,SLOT(Arithmatic_Operator()));

    connect(ui->btn_mod,SIGNAL(released()),this,SLOT(Arithmatic_Operator()));
    connect(ui->btn_exp,SIGNAL(released()),this,SLOT(Arithmatic_Operator()));

    connect(ui->btn_presantage,SIGNAL(released()),this,SLOT(Arithmatic_Operator()));
    connect(ui->btn_pow,SIGNAL(released()),this,SLOT(Arithmatic_Operator()));

    ui->widget_thermo->setVisible(false);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_btn_clear_all_clicked()
{
    // clear all
    ui->textDisplay->setText("");
    ui->lblshowoperator->setText("");
}

void Calculator::on_btn_clear_clicked()
{
    // clear text display
    ui->textDisplay->setText("");
}

void Calculator:: digite_press()
{
    // read press value
    QPushButton * button = (QPushButton*)sender();

    if(ui->textDisplay->text()==0)
    {
        ui->textDisplay->setText(button->text());
    }else{
        ui->textDisplay->setText( ui->textDisplay->text() + button->text());
    }
}

void Calculator::Arithmatic_Operator()
{
    // Read button
    QPushButton * button = (QPushButton*)sender();

    iFirstnum = ui->textDisplay->text().toDouble();
    ui->textDisplay->setText("");
    IOoperator = button->text();
    ui->lblshowoperator->setText(QString::number(iFirstnum,'g',15) +" "+ IOoperator);

}

void Calculator::on_btn_dot_clicked()
{
    // input decimal number
    if(!ui->textDisplay->text().contains("."))
    {
        ui->textDisplay->setText(ui->textDisplay->text()+".");
    }
}

void Calculator::on_btn_plus_minus_clicked()
{
    // change + or - mark
    if(ui->textDisplay->text().contains("-"))
    {
        ui->textDisplay->setText(ui->textDisplay->text().remove(0,1));
    }else{
        ui->textDisplay->setText("-" + ui->textDisplay->text());
    }
}

void Calculator::on_btn_eqal_clicked()
{
    iSecondnum = ui->textDisplay->text().toDouble();

    if(IOoperator == "+")
    {
        //find sum
        iResult=iFirstnum+iSecondnum;
        ui->textDisplay->setText(QString::number(iResult,'g',15));
        ui->lblshowoperator->setText(ui->lblshowoperator->text()+" "+QString::number(iSecondnum,'g',15));

    }else if(IOoperator == "*")
    {
        // find multiple
        iResult=iFirstnum*iSecondnum;
        ui->textDisplay->setText(QString::number(iResult,'g',15));
        ui->lblshowoperator->setText(ui->lblshowoperator->text()+" "+QString::number(iSecondnum,'g',15));

    }else if(IOoperator == "/")
    {
        // find devide
        iResult=iFirstnum/iSecondnum;
        ui->textDisplay->setText(QString::number(iResult,'g',15));
        ui->lblshowoperator->setText(ui->lblshowoperator->text()+" "+QString::number(iSecondnum,'g',15));

    }else if(IOoperator == "-")
    {
        // find substraction
        iResult=iFirstnum-iSecondnum;
        ui->textDisplay->setText(QString::number(iResult,'g',15));
        ui->lblshowoperator->setText(ui->lblshowoperator->text()+" "+QString::number(iSecondnum,'g',15));

    }else if(IOoperator == "Mod")
    {
        //find mod
        int ifirst,isecond,iresult;
        ifirst = (int)iFirstnum;
        isecond = (int)iSecondnum;
        iresult = ifirst % isecond;
        ui->textDisplay->setText(QString::number(iresult,'g',15));
        ui->lblshowoperator->setText(ui->lblshowoperator->text()+" "+QString::number(iSecondnum,'g',15));

    }else if(IOoperator == "Exp")
    {
        // find exp
        iResult = (iFirstnum,(1/iSecondnum));
        iResult = qExp(iResult);
        ui->textDisplay->setText(QString::number(iResult,'g',15));
        ui->lblshowoperator->setText(ui->lblshowoperator->text()+" "+QString::number(iSecondnum,'g',15));

    }else if(IOoperator == "%")
    {
        // get presantage of two input value
        iResult = ((iFirstnum/iSecondnum)*100);
        ui->textDisplay->setText(QString::number(iResult,'g',15));
        ui->lblshowoperator->setText(ui->lblshowoperator->text()+" "+QString::number(iSecondnum,'g',15));

    }else if(IOoperator == "Pow")
    {
        // power of enterd two value
        iResult = qPow(iFirstnum,iSecondnum);
        ui->lblshowoperator->setText("Power of ( " +QString::number(iFirstnum) + " to " +QString::number(iSecondnum) + " )");
        ui->textDisplay->setText(QString::number(iResult));
    }
}

void Calculator::on_btn_backslash_clicked()
{
    // Click backslash to erease one value
    if(ui->textDisplay->text().length()>0)
    {
        ui->textDisplay->setText(ui->textDisplay->text().remove(ui->textDisplay->text().length()-1,1));
    }
}

void Calculator::on_btn_pi_clicked()
{
    // assign pi value
    if(ui->textDisplay->text()==0)
    {
        ui->textDisplay->setText("3.141592653589793238");
    }else{
        ui->textDisplay->setText(ui->textDisplay->text()+" 3.141592653589793238");
    }
}

void Calculator::on_btn_log_clicked()
{
    // Find log value of enter value
    int log = ui->textDisplay->text().toInt();
    ui->lblshowoperator->setText("Log (" +(ui->textDisplay->text()) + ")");
    log = qLn(log);
    ui->textDisplay->setText(QString::number(log));
}

void Calculator::on_btn_sqrt_clicked()
{
    // Find sqrt of enter value
    int sqrt = ui->textDisplay->text().toInt();
    ui->lblshowoperator->setText("Sqrt (" +(ui->textDisplay->text()) + ")");
    sqrt = qSqrt(sqrt);
    ui->textDisplay->setText(QString::number(sqrt));
}

void Calculator::on_btn_sina_clicked()
{
    // Find anty sin value in enter value
    double sinh = ui->textDisplay->text().toDouble();
    ui->lblshowoperator->setText("Sin A (" +(ui->textDisplay->text()) + ")");
    sinh = qAsin(sinh);
    ui->textDisplay->setText(QString::number(sinh));
}

void Calculator::on_btn_cosa_clicked()
{
    // Find anty cos value in enter value
    double cosh = ui->textDisplay->text().toDouble();
    ui->lblshowoperator->setText("Cos A (" +(ui->textDisplay->text()) + ")");
    cosh = cos(cosh);
    ui->textDisplay->setText(QString::number(cosh));
}

void Calculator::on_btn_tana_clicked()
{
    // Find anty tan value in enter value
    double tanh = ui->textDisplay->text().toDouble();
    ui->lblshowoperator->setText("Tan A (" +(ui->textDisplay->text()) + ")");
    tanh = qAtan(tanh);
    ui->textDisplay->setText(QString::number(tanh));
}

void Calculator::on_btn_sin_clicked()
{
    // Find sin value of enter value
    double sin = ui->textDisplay->text().toDouble();
    ui->lblshowoperator->setText("Sin (" +(ui->textDisplay->text()) + ")");
    sin = qSin(sin);
    ui->textDisplay->setText(QString::number(sin));
}

void Calculator::on_btn_cos_clicked()
{
    // Find cos value of enter value
    double cos = ui->textDisplay->text().toDouble();
    ui->lblshowoperator->setText("Cos (" +(ui->textDisplay->text()) + ")");
    cos = qCos(cos);
    ui->textDisplay->setText(QString::number(cos));
}

void Calculator::on_btn_tan_clicked()
{
    // Finad tan value of enter value
    double tan = ui->textDisplay->text().toDouble();
    ui->lblshowoperator->setText("Tan A (" +(ui->textDisplay->text()) + ")");
    tan = qTan(tan);
    ui->textDisplay->setText(QString::number(tan));
}

void Calculator::on_btn_bin_clicked()
{
    // convert to binnary format
    QString a = ui->textDisplay->text();
    ui->lblshowoperator->setText("Binary Value of (" +(ui->textDisplay->text()) + ")");
    bool ok;
    ui->textDisplay->setText( QString::number(a.toLongLong(&ok, 10),2));
}

void Calculator::on_btn_oct_clicked()
{
    // convert octa decimal format
    QString a = ui->textDisplay->text();
    ui->lblshowoperator->setText("Binary Value of (" +(ui->textDisplay->text()) + ")");
    bool ok;
    ui->textDisplay->setText( QString::number(a.toLongLong(&ok, 10),8));
}

void Calculator::on_btn_hex_clicked()
{
    // convert hexa decimal format
    QString a = ui->textDisplay->text();
    ui->lblshowoperator->setText("Hexadecimal Value of (" +(ui->textDisplay->text()) + ")");
    bool ok;
    ui->textDisplay->setText( QString::number(a.toLongLong(&ok, 10),16));
}

void Calculator::on_btn_pow2_clicked()
{
    // power of x*2 of enter value
    double x = ui->textDisplay->text().toDouble();
    x = x*x;
    ui->lblshowoperator->setText("x^2 of ( " +(ui->textDisplay->text()) + " )");
    ui->textDisplay->setText(QString::number(x));
}

void Calculator::on_btn_pow3_clicked()
{
    // power of x*3 of enter value
    double x = ui->textDisplay->text().toDouble();
    x = x*x*x;
    ui->lblshowoperator->setText("x^3 of ( " +(ui->textDisplay->text()) + " )");
    ui->textDisplay->setText(QString::number(x));
}

void Calculator::on_btn_1devx_clicked()
{
    //1/x value of enter value
    double x = ui->textDisplay->text().toDouble();
    x=1/x;
    ui->lblshowoperator->setText("1/x of ( " +(ui->textDisplay->text()) + " )");
    ui->textDisplay->setText(QString::number(x));
}

void Calculator::on_btn_lnx_clicked()
{
    //log 10 to power btn click
    double log = ui->textDisplay->text().toDouble();
    ui->lblshowoperator->setText("Log (" +(ui->textDisplay->text()) + ")");
    log = log10(log);
    ui->textDisplay->setText(QString::number(log));
}

void Calculator::on_btn_go_cal_clicked()
{
    ui->widget_thermo->setVisible(false);
}

void Calculator::on_btn_g_thermo_clicked()
{
    ui->widget_thermo->setVisible(true);
}
