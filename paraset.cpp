#include "paraset.h"
#include "ui_paraset.h"
#include <QSettings>
#include <QObject>
#include <QDebug>




ParaSet::ParaSet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ParaSet)
{
    ui->setupUi(this);
    QSettings all_settings("./setting.ini",QSettings::IniFormat);
    //include this parameters:
    //communication path( Calypso output path)
    //default import path
    //data restore path
}

ParaSet::~ParaSet()
{
    delete ui;
}

void ParaSet::on_set_results_path_clicked()
{

}
