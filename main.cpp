//this file was the main function of the program
//this program was using for save edit CMM data
//then calculate the statics of these data.
//the author is Sun Xin darksun190@gmail.com
//this program was published in LGPL license.

#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>
#include <QSettings>
#include <QDir>
#include <QDebug>
#include "connect.h"
#include <QSqlRecord>
//for Global setting

//functions
#ifndef DEBUG
//#define DEBUG
#endif




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    createConnection();     //create a sql connection, see connect.h

    QCoreApplication::setOrganizationName("sean");
    QCoreApplication::setOrganizationDomain("darksun190.cn");
    QCoreApplication::setApplicationName("FUCK_Zeiss");

    QDir::setCurrent(QCoreApplication::applicationDirPath());   //set the current folder
    //QTextCodec *codec = QTextCodec::codecForName("System");   //only if use multi language version
    //QTextCodec::setCodecForTr(codec);
    QSettings setting;
    setting.setValue("path","C:\\sunxin");


    //check if the main tables is exits
    {
        QSqlQuery query;
       if (!query.exec("SELECT name FROM sqlite_master WHERE name='main_list' "))
        {
            QMessageBox::critical(0,qApp->tr("Check the permissiong"),
                                  qApp->tr("Can NOT execute the SQL commmand.\n"
                                     "Please check the file or permission."),QMessageBox::Cancel);
        }
        if(!query.size()>0)           //which means no result from the select, no results table
        {
        }

    }
#ifndef DEBUG
    MainWindow w;
    w.setWindowFlags(Qt::WindowMinimizeButtonHint);             //forbid the windows resize
    w.setFixedSize(700,500);
    w.show();

    return a.exec();
#endif
#ifdef DEBUG
    return 0;
#endif
}
