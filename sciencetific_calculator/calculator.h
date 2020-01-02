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

    void on_btn_log_clicked();

    void on_btn_sqrt_clicked();

    void on_btn_sina_clicked();

    void on_btn_cosa_clicked();

    void on_btn_tana_clicked();

    void on_btn_sin_clicked();

    void on_btn_cos_clicked();

    void on_btn_tan_clicked();

    void on_btn_bin_clicked();

    void on_btn_oct_clicked();

    void on_btn_hex_clicked();

    void on_btn_pow2_clicked();

    void on_btn_pow3_clicked();

    void on_btn_1devx_clicked();

    void on_btn_lnx_clicked();



    void on_btn_go_cal_clicked();

    void on_btn_g_thermo_clicked();

private:
    Ui::Calculator *ui;
};

#endif // CALCULATOR_H
