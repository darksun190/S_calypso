#include "data.h"

//data input function
//give a filename for input, QVector is the container these data
//use this with data.h & data.cpp
//need another function write to database

void data_input(QString fileName,QVector <one_measure> &all_data)
{
    QString buf_line;
    QString now_partnb;
    QString old_partnb;

    QFile in_file(fileName);
    in_file.open(QFile::ReadOnly|QFile::Text);

    QTextStream merge_in(&in_file);	    //define stream for input data
    //first line is header, ignore

    one_piece buf_T;
    one_measure buf_G;

    all_data.clear();

    merge_in.readLine();

    while(1)
    {
        buf_line = merge_in.readLine();
        if(buf_line=="END")
            break;
        buf_T=buf_line;
        now_partnb=buf_T.partnb;
        if(old_partnb==now_partnb || old_partnb.size()==0)
        {
            buf_G.dat->push_back(buf_T);
        }
        else
        {
            all_data.push_back(buf_G);
            buf_G.dat->clear();
            buf_G.dat->push_back(buf_T);
        }
        old_partnb=now_partnb;

    }
    all_data.push_back(buf_G);

}
