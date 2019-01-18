#include "login_page.h"
#include <QApplication>
#include "main_page.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login_page w;
    main_page m;
    if(w.exec()==QDialog::Accepted)
    {
        m.show();
    }
    return a.exec();
}
