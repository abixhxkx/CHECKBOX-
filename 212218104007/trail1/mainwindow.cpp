#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_1_clicked()
{
    if(ui->radioButton_1->isChecked())
       {
       QMessageBox::information(this,"Abishek 212218104006","Age is above 18");
       }
       if(ui->radioButton_2->isChecked())
       {
       QMessageBox::information(this,"Abishek  212218104006","Age is below 18");
       }
}

void MainWindow::on_pushButton_2_clicked()
{
    if(ui->checkBox_1->isChecked())
        {
        QMessageBox::information(this, "Abishek 212218104006","Games!!");
        }
        if(ui->checkBox_2->isChecked())
        {
        QMessageBox::information(this,"Abishek 212218104006","Music!!");
        }
        if(ui->checkBox_3->isChecked())
        {
        QMessageBox::information(this,"Abishek 212218104006","Reading Books");
        }
}
