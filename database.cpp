#include <QString>
#include <QMessageBox>
#include <QApplication>
#include <QDebug>
#include "connect.h"
#include "data.h"

#define DEBUG


void init_db()
{

#ifdef DEBUG
    QSqlQuery query;
    // for test, check how many tables it have

    query.exec("SELECT name FROM sqlite_master ");
    while(query.next())
    {
        qDebug()<<query.value(0).toString();
    }
#endif

    // the command create the main_list table, only done once.
    //query.exec("create table main_list (name graphic(120) primary key)");

    // every program (inspection) has 3 tables
    //      "XXXX_chr" for record all the characteristic
    //      "XXXX_dat" for record all the actuals by several times
    //      "XXXX_head" for record all the header varibles by each measurements.

}
bool db_create_inspection(QString inspection_name)
{
    QSqlQuery query;
    query.exec(QString("select name from sqlite_master where name == '%1_hdr' "
                       "or name == '%1_chr'"
                       "or name == '%1_dat'"
                       ).arg(inspection_name));
    if(query.last())    //which means have at least a result
    {
        if(query.at()+1 <3 )    //which means don't have 3 tables
        {
            QMessageBox::critical(0, qApp->tr("database was broken"),
                                  qApp->tr("It looks like the database was broken"
                                           "Click Cancel to exit."), QMessageBox::Cancel);
            return false;   //return false, the program will quit directly
        }
        return true;        //didn't do anything but return true, program will go on for insert data.
    }
    // to here, means no tables for this inspection
    // so let's create these 3 tables
    QString command;

    {
        //create talbe_hdr
        command = QString("create table %1_hdr "
                          "(i_of_time integer primary key,"
                          "planid graphic(120),"
                          "partnb graphic(120),"
                          "filename graphic(120),"
                          "operid graphic(120),"
                          "date  graphic(120),"
                          "dateshort graphic(120),"
                          "time  graphic(120),"
                          "tmeid graphic(120),"
                          "devicegroup graphic(120),"
                          "dmesn graphic(120),"
                          "controllertyp graphic(120),"
                          "dmeswi graphic(120),"
                          "dmeswv graphic(120),"
                          "pointCloudFile graphic(120),"
                          "measRun graphic(120),"
                          "actpgnr graphic(120),"
                          "nrpgs graphic(120),"
                          "lengthunit graphic(120),"
                          "palletlocationnumber graphic(120),"
                          "partid graphic(120),"
                          "drawing_no graphic(120),"
                          "partrv graphic(120),"
                          "partsn graphic(120),"
                          "partcomment graphic(120),"
                          "clmpid graphic(120),"
                          "clmpsn graphic(120),"
                          "fixtid graphic(120),"
                          "fixtsn graphic(120),"
                          "prevop graphic(120),"
                          "creationdate graphic(120),"
                          "changedate graphic(120),"
                          "produceoper graphic(120),"
                          "changeoper graphic(120),"
                          "creationswi graphic(120),"
                          "creationdme graphic(120),"
                          "partnbinc graphic(120),"
                          "partnbLong graphic(120),"
                          "startcomment graphic(120),"
                          "order_name graphic(120),"
                          "tooldf graphic(120),"
                          "mfgdev graphic(120),"
                          "lotid graphic(120),"
                          "procid graphic(120),"
                          "palletlocation graphic(120),"
                          "palletid graphic(120),"
                          "vda_auditno graphic(120),"
                          "vda_version graphic(120),"
                          "vda_subjno graphic(120),"
                          "vda_remark graphic(120),"
                          "vda_name graphic(120),"
                          "aname graphic(120),"
                          "vda_departm graphic(120),"
                          "vda_phone graphic(120),"
                          "vda_departm2 graphic(120),"
                          "vda_signature graphic(120),"
                          "vda_number graphic(120),"
                          "temperatureworkpiece graphic(120),"
                          "temperaturescalex graphic(120),"
                          "temperaturescaley graphic(120),"
                          "temperaturescalez graphic(120),"
                          "temperaturebasesystem graphic(120),"
                          "durationofrun graphic(120),"
                          "deviationmode  graphic(120),"
                          "deviationmodekey  graphic(120),"
                          "outdecimalunits  graphic(120),"
                          "languageid  graphic(120),"
                          "mccplanversion  graphic(120),"
                          "mmcmode  graphic(120))"
                          ).arg(inspection_name); //finish header表，参考hdr文件，只是默认的，如果有自定义的表头变量，需要每次检查并添加列
        query.exec(command);
    }

    {
        //create the chr table
        command = QString ("create table %1_chr "
                           "(i_of_chr int primary key,"
                           "planid graphic(120),"
                           "partnb graphic(120),"
                           "id graphic(120),"
                           "type graphic(120),"
                           "idsymbol graphic(120),"
                           "actual double,"
                           "nominal double,"
                           "uppertol double,"
                           "lowertol double,"
                           "deviation double,"
                           "exceed double,"
                           "warningLimitCF double,"
                           "featureid graphic(120),"
                           "featuresigma double,"
                           "comment graphic(120),"
                           "link graphic(120),"
                           "link_mode graphic(120),"
                           "mmc graphic(120),"
                           "useruppertol double,"
                           "userlowertol double,"
                           "fftphi graphic(120),"
                           "fftphiunit graphic(120),"
                           "zoneroundnessangle graphic(120),"
                           "groupname graphic(120),"
                           "groupname2 graphic(120),"
                           "datumAid graphic(120),"
                           "datumBid graphic(120),"
                           "datumCid graphic(120),"
                           "natuppertolid double,"
                           "natlowertolid double,"
                           "decimalplaces int,"
                           "featurePosX double,"
                           "featurePosY double,"
                           "featurePosZ double,"
                           "group1 graphic(120),"
                           "group2 graphic(120),"
                           "group3 graphic(120),"
                           "group4 graphic(120),"
                           "group5 graphic(120),"
                           "group6 graphic(120),"
                           "group7 graphic(120),"
                           "group8 graphic(120),"
                           "group9 graphic(120),"
                           "group10 graphic(120))"
                           ).arg(inspection_name); // finish 特性结果表，参考chr文件
        query.exec(command);
    }

    {
        //create the table_data
        //as default, didn't create any column for characterestic
        //every time insert new measurement data, check the column and add new ones.
        command = QString("create table %1_dat"
                          "(i_of_times integer primary key)")
                .arg(inspection_name);
    }

    command = QString(" insert into main_list values ('%1')").arg(inspection_name);
    query.exec(command);

    return true;
}

bool insert_one_file(const QString fileName)
{
    //this part is for chr & dat table
    QString buf_line;
    QString now_partnb;
    QString old_partnb;

    QFile in_file(fileName);
    in_file.open(QFile::ReadOnly|QFile::Text);

    QTextStream merge_in(&in_file);	    //define stream for input data
    //first line is header, ignore

    one_piece buf_T;
    QVector<one_piece> buf_G;


    merge_in.readLine();    //first header line

    while(1)
    {
        buf_line = merge_in.readLine();
        if(buf_line=="END")
            break;
        buf_T=buf_line;
        now_partnb=buf_T.partnb;
        if(old_partnb==now_partnb || old_partnb.size()==0)
        {
            buf_G.push_back(buf_T);
        }
        else
        {
            insert_one_measure(buf_G);
            buf_G.clear();
            buf_G.push_back(buf_T);
        }
        old_partnb=now_partnb;

    }
    insert_one_measure(buf_G);
    return true;
}

bool insert_one_measure(const QVector <one_piece> &one_measure)
{
    QString inspection_name;
    QSqlQuery query;
    QString command;

    inspection_name = one_measure.at(0).planid;
    db_create_inspection(inspection_name);

    QStringList measure_chr_list;
    one_piece temp;
    foreach(temp, one_measure)
    {
        measure_chr_list.push_back(temp.id);
        //add a row to *_chr table
        command = QString("insert into %1_chr values(");
        command.append("'null',");
        command.append(temp.planid+", ");
        command.append(temp.partnb+", ");
        command.append(temp.id+", ");
        command.append(temp.type+", ");
        command.append(temp.idsymbol+", ");
        command.append(temp.actual+", ");
        command.append(temp.nominal+", ");
        command.append(temp.uppertol+", ");
        command.append(temp.lowertol+", ");
        command.append(temp.deviation+", ");
        command.append(temp.exceed+", ");
        command.append(temp.featureid+", ");
        command.append(temp.featuresigma+", ");
        command.append(temp.comment+", ");
        command.append(temp.link+", ");
        command.append(temp.linkmode+", ");
        command.append(temp.mmc+", ");
        command.append(temp.useruppertol+", ");
        command.append(temp.userlowertol+", ");
        command.append(temp.fftphi+", ");
        command.append(temp.fftphiunit+", ");
        command.append(temp.zoneroundnessangle+", ");
        command.append(temp.groupname+", ");
        command.append(temp.groupname2+", ");
        command.append(temp.datumAid+", ");
        command.append(temp.datumBid+", ");
        command.append(temp.datumCid+", ");
        command.append(temp.featurePosX+", ");
        command.append(temp.featurePosY+", ");
        command.append(temp.featurePosZ+", ");
        command.append(temp.group1+", ");
        command.append(temp.group2+", ");
        command.append(temp.group3+", ");
        command.append(temp.group4+", ");
        command.append(temp.group5+", ");
        command.append(temp.group6+", ");
        command.append(temp.group7+", ");
        command.append(temp.group8+", ");
        command.append(temp.group9+", ");
        command.append(temp.group10+")");
    }
    command = QString("select id from %1_chr").arg(inspection_name);
    query.exec(command);
    while(query.next())
    {
        QString id_name = query.value(0).toString();

    }
}
