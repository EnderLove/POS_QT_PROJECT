#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar, SLOT(setValue(int)));

    connect(ui->lineEdit, &QLineEdit::editingFinished, this, [this]()
    {
        ui->label->setText(ui->lineEdit->text());
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("");
}

//void MainWindow::on_lineEdit_editingFinished()
//{
//    QString text = ui->lineEdit->text();
//    ui->label->setText(text);
//}
