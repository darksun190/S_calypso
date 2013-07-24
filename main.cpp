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
    QSqlQuery query;
    qDebug()<<query.exec("SELECT name FROM sqlite_master WHERE type='table' ");
    QSqlRecord rec;
    rec = query.record();
    qDebug()<<rec.count();
    while(    query.next())
    {
        qDebug()<<query.value(rec.indexOf("name")).toString();
    }

    MainWindow w;
    w.setWindowFlags(Qt::WindowMinimizeButtonHint);             //forbid the windows resize
    w.setFixedSize(700,500);
    w.show();

    return a.exec();
}
