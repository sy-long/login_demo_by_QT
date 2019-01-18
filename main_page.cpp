#include "main_page.h"
#include "ui_main_page.h"

main_page::main_page(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::main_page)
{
    ui->setupUi(this);
}

main_page::~main_page()
{
    delete ui;
}
