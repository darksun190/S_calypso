#ifndef PARASET_H
#define PARASET_H

#include <QDialog>

namespace Ui {
class ParaSet;
}

class ParaSet : public QDialog
{
    Q_OBJECT
    
public:
    explicit ParaSet(QWidget *parent = 0);
    ~ParaSet();
    
public:
    Ui::ParaSet *ui;
private slots:
    void on_set_results_path_clicked();
};

#endif // PARASET_H
