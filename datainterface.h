#ifndef DATAINTERFACE_H
#define DATAINTERFACE_H

#include <QDialog>

namespace Ui {
class DataInterface;
}

class DataInterface : public QDialog
{
    Q_OBJECT

public:
    explicit DataInterface(QWidget *parent = 0);
    ~DataInterface();
    
private slots:
    void on_buttonBox_accepted();

public:
    Ui::DataInterface *ui;
};

#endif // DATAINTERFACE_H
