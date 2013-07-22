#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "datainterface.h"
#include "ui_datainterface.h"
#include "ui_paraset.h"
#include <QObject>
#include <QSettings>
#include <QDebug>

extern QSettings setting;

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

void MainWindow::on_b_data_clicked()
{
    this->hide();
    window_data = new DataInterface(this);
    QObject::connect(window_data->ui->buttonBox,SIGNAL(clicked(QAbstractButton*)),this,SLOT(show()));
    window_data->show();

}

void MainWindow::on_b_set_clicked()
{
    this->hide();
    window_set = new ParaSet(this);
    QObject::connect(window_set->ui->buttonBox,SIGNAL(clicked(QAbstractButton*)),this,SLOT(show()));
    window_set->show();
}
