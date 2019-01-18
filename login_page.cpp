#include "login_page.h"
#include "ui_login_page.h"
#include <QMessageBox>
#include <QGridLayout>
login_page::login_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login_page)
{
    ui->setupUi(this);
    QGridLayout *layout = new QGridLayout;
    layout->addWidget(ui->label,0,0,2,3);
    layout->addWidget(ui->label_2,2,0,1,1);
    layout->addWidget(ui->account,2,1,1,2);
    layout->addWidget(ui->label_3,3,0,1,1);
    layout->addWidget(ui->password,3,1,1,2);
    layout->addWidget(ui->pushButton,4,2,2,1);
    setLayout(layout);
}

login_page::~login_page()
{
    delete ui;
}

void login_page::on_pushButton_clicked()
{
    QString account = ui->account->text();
    QString password = ui->password->text();
    if(account=="12345678"&&password=="lsy853949802")
        accept();
    else
    {
        QMessageBox::information(this,tr("提示对话框"),tr("账号/密码错误!"),QMessageBox::Yes);
    }
}

