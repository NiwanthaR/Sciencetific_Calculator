#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = 0);
    ~Calculator();

private slots:
    void on_btn_clear_all_clicked();

    void on_btn_clear_clicked();

    void digite_press();

    void Arithmatic_Operator();

    void on_btn_dot_clicked();

    void on_btn_plus_minus_clicked();

    void on_btn_eqal_clicked();

    void on_btn_backslash_clicked();

    void on_btn_pi_clicked();

private:
    Ui::Calculator *ui;
};

#endif // CALCULATOR_H
