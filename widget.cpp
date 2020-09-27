#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("Calculadora_EDI2");
    ui->label_4->setText("0.00");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_suma_clicked()
{
    ui->label_4->setText(
    QString::number(ui->doubleSpinBox->value()+ui->doubleSpinBox_2->value() ));
}

void Widget::on_resta_clicked()
{
    ui->label_4->setText(
    QString::number(ui->doubleSpinBox->value()-ui->doubleSpinBox_2->value() ));

}

void Widget::on_multiplica_clicked()
{
    ui->label_4->setText(
    QString::number(ui->doubleSpinBox->value()*ui->doubleSpinBox_2->value() ));

}

void Widget::on_divide_clicked()
{
    ui->label_4->setText(
    QString::number(ui->doubleSpinBox->value()/ui->doubleSpinBox_2->value() ));
}
