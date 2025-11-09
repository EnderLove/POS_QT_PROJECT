#include "productwindow.h"
#include "ui_productwindow.h"

productwindow::productwindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::productwindow)
{
    ui->setupUi(this);
}

productwindow::~productwindow()
{
    delete ui;
}
