#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include <QPixmap>

WelcomeWindow::WelcomeWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);

    QPixmap pix ("C:/Users/Nour/Desktop/Cinema_Booking/AUC.jpg");
    ui->theaterimage->setPixmap(pix.scaled(500,500));
}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}



