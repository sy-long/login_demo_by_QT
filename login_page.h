#ifndef LOGIN_PAGE_H
#define LOGIN_PAGE_H

#include <QDialog>

namespace Ui {
class login_page;
}

class login_page : public QDialog
{
    Q_OBJECT

public:
    explicit login_page(QWidget *parent = nullptr);
    ~login_page();

private slots:
    void on_pushButton_clicked();


private:
    Ui::login_page *ui;
};

#endif // LOGIN_PAGE_H
