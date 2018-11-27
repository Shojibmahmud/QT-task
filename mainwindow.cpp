#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
   close();
}

void MainWindow::on_pushButton_2_clicked()
{
    QString str1= ui->lineEdit->text();
    QString str2= ui->lineEdit_2->text();
    if(str1=="" && str2=="")
    {
        QMessageBox::warning(this, "NEW window","Text boxes are empty!");
    }
    else
    {
        QString str= str1+" "+str2;
        QMessageBox::information(this, "NEW window", str);
    }
}
