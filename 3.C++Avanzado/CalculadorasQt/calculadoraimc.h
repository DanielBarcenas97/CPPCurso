#ifndef CALCULADORAIMC_H
#define CALCULADORAIMC_H

#include <QDialog>

namespace Ui {
class CalculadoraIMC;
}

class CalculadoraIMC : public QDialog
{
    Q_OBJECT

public:
    explicit CalculadoraIMC(QWidget *parent = 0);
    ~CalculadoraIMC();

private slots:
    void on_pushButton_calcular_clicked();

private:
    Ui::CalculadoraIMC *ui;
};

#endif // CALCULADORAIMC_H
