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

}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_btn_clear_all_clicked()
{
    ui->textDisplay->setText("");
    ui->lblshowoperator->setText("");
}

void Calculator::on_btn_clear_clicked()
{
    ui->textDisplay->setText("");
}

void Calculator:: digite_press()
{
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
    QPushButton * button = (QPushButton*)sender();

    iFirstnum = ui->textDisplay->text().toDouble();
    ui->textDisplay->setText("");
    IOoperator = button->text();
    ui->lblshowoperator->setText(QString::number(iFirstnum,'g',15) +" "+ IOoperator);

}

void Calculator::on_btn_dot_clicked()
{
    if(!ui->textDisplay->text().contains("."))
    {
        ui->textDisplay->setText(ui->textDisplay->text()+".");
    }
}

void Calculator::on_btn_plus_minus_clicked()
{
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
        iResult=iFirstnum+iSecondnum;
        ui->textDisplay->setText(QString::number(iResult,'g',15));
        ui->lblshowoperator->setText(ui->lblshowoperator->text()+" "+QString::number(iSecondnum,'g',15));

    }else if(IOoperator == "*")
    {
        iResult=iFirstnum*iSecondnum;
        ui->textDisplay->setText(QString::number(iResult,'g',15));
        ui->lblshowoperator->setText(ui->lblshowoperator->text()+" "+QString::number(iSecondnum,'g',15));

    }else if(IOoperator == "/")
    {
        iResult=iFirstnum/iSecondnum;
        ui->textDisplay->setText(QString::number(iResult,'g',15));
        ui->lblshowoperator->setText(ui->lblshowoperator->text()+" "+QString::number(iSecondnum,'g',15));

    }else if(IOoperator == "-")
    {
        iResult=iFirstnum-iSecondnum;
        ui->textDisplay->setText(QString::number(iResult,'g',15));
        ui->lblshowoperator->setText(ui->lblshowoperator->text()+" "+QString::number(iSecondnum,'g',15));

    }else if(IOoperator == "Mod")
    {
        int ifirst,isecond,iresult;
        ifirst = (int)iFirstnum;
        isecond = (int)iSecondnum;
        iresult = ifirst % isecond;
        ui->textDisplay->setText(QString::number(iresult,'g',15));
        ui->lblshowoperator->setText(ui->lblshowoperator->text()+" "+QString::number(iSecondnum,'g',15));

    }else if(IOoperator == "Exp")
    {
        iResult = (iFirstnum,(1/iSecondnum));
        iResult = qExp(iResult);
        ui->textDisplay->setText(QString::number(iResult,'g',15));
        ui->lblshowoperator->setText(ui->lblshowoperator->text()+" "+QString::number(iSecondnum,'g',15));

    }else if(IOoperator == "%")
    {
        iResult = ((iFirstnum/iSecondnum)*100);
        ui->textDisplay->setText(QString::number(iResult,'g',15));
        ui->lblshowoperator->setText(ui->lblshowoperator->text()+" "+QString::number(iSecondnum,'g',15));

    }else if(IOoperator == "Pow")
    {
        iResult = qPow(iFirstnum,iSecondnum);
        ui->lblshowoperator->setText("Power of ( " +QString::number(iFirstnum) + " to " +QString::number(iSecondnum) + " )");
        ui->textDisplay->setText(QString::number(iResult));
    }
}

void Calculator::on_btn_backslash_clicked()
{
    if(ui->textDisplay->text().length()>0)
    {
        ui->textDisplay->setText(ui->textDisplay->text().remove(ui->textDisplay->text().length()-1,1));
    }
}

void Calculator::on_btn_pi_clicked()
{
    if(ui->textDisplay->text()==0)
    {
        ui->textDisplay->setText("3.141592653589793238");
    }else{
        ui->textDisplay->setText(ui->textDisplay->text()+" 3.141592653589793238");
    }
}
