#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "welcomewindow.h"

Loginwindow::Loginwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Loginwindow)
{
    ui->setupUi(this);
}

Loginwindow::~Loginwindow()
{
    delete ui;
}



void Loginwindow::on_pushButtonLogin_clicked()
{
    hide();
    WelcomeWindow* welcomewindow=new WelcomeWindow(this);
    welcomewindow->show();
}

