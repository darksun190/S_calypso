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


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDir::setCurrent(QCoreApplication::applicationDirPath());
    QTextCodec *codec = QTextCodec::codecForName("System");
    QTextCodec::setCodecForTr(codec);

    QSettings setting("sunx","fuck_zeiss");
    QDir test_dir(setting.value("path").toString());
    qDebug()<<test_dir.toNativeSeparators(test_dir.absolutePath());
    qDebug()<<setting.value("test").toString();
    MainWindow w;
    w.setWindowFlags(Qt::WindowMinimizeButtonHint);
    w.setFixedSize(700,500);
    w.show();

    return a.exec();
}
