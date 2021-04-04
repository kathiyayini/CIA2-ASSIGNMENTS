#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QtDebug"
#include "QPixmap"
#include "QIcon"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_5->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"kathiyayini-125","This Is Information Box");
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply= QMessageBox::question(this,"kathiyayini","Do You Like Apples",QMessageBox::Yes|QMessageBox::No);
       if(reply==QMessageBox::Yes){
           QMessageBox::information(this,"kathiyayini-125","Yes");
       }
       else{
           QMessageBox::information(this,"kathiyayini-125","No");
       }
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply= QMessageBox::question(this,"kathiyayini M-125","this is a custom message",QMessageBox::Yes|QMessageBox::No|QMessageBox::YesAll|QMessageBox::NoAll);
      if(reply==QMessageBox::Yes)
          qDebug()<< "Nothing is Displayed";
      else if(reply==QMessageBox::YesAll)
          QMessageBox::warning(this,"kathiyayini_125","Display The Message With Warning As Yes To All");
      else if(reply==QMessageBox::No)
          qDebug() <<"Nothing Is Displayed";
      else
          QMessageBox::warning(this,"kathiyayini 125","Dont Display The Message With Warning As Yes To All");
}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"kathiyayini 125","This is a Warning Message");

}

void MainWindow::on_pushButton_5_toggled(bool checked)
{
    if(checked)
       {
           qDebug()<<"Button Checked--ON--";
           ui->pushButton_5->setIcon(QIcon("E:/sem 6/212218106125_kathiyayini M/on.jfif"));
            ui->pushButton_5->setIconSize(QSize(150,150));
       }
       else
       {
           qDebug()<<"Button Checked--OFF--";
           ui->pushButton_5->setIcon(QIcon("E:/sem 6/212218106125_kathiyayini M/off.jpg"));
            ui->pushButton_5->setIconSize(QSize(150,150));
       }

}
