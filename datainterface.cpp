#include "datainterface.h"
#include "ui_datainterface.h"

DataInterface::DataInterface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DataInterface)
{
    ui->setupUi(this);
    QObject::connect(ui->buttonBox,SIGNAL(accepted()),this,SLOT(close()));
}

DataInterface::~DataInterface()
{
    delete ui;
}

void DataInterface::on_buttonBox_accepted()
{
}
