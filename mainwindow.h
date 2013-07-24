#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "datainterface.h"
#include "paraset.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    DataInterface *window_data;     //create a new window for show datas and modify
    ParaSet *window_set;            //create a new windows for set the parameters

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_b_data_clicked();       //button for open data window

    void on_b_set_clicked();        //button for open set window

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
