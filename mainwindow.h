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
    DataInterface *window_data;
    ParaSet *window_set;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_b_data_clicked();

    void on_b_set_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
