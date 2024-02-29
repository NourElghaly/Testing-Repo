#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include <QPixmap>

WelcomeWindow::WelcomeWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);

    QPixmap pix ("C:/Users/Nour/Desktop/Cinema_Booking/image.jpeg");
    if (pix.isNull()) {
        qDebug() << "Failed to load image";
    } else {
        ui->theaterimage->setPixmap(pix.scaled(200,200));
    }

}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}


