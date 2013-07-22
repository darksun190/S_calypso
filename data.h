#ifndef DATA_H
#define DATA_H
/*
 *  changed at July 2013, use QT date structer instead of the C++ standard.
 *  this file work with data.cpp
 *
 *  This is a template for collect data from Zeiss Calypso merge file.
 *  Author: Sun Xin
 *  Date:   2009/10/03
 *  copyleft by LGPL, you can use it for free, enjoy.
 *
 */

#include <QString>
#include <QDataStream>
#include <QVector>
#include <QTextStream>
#include <QFile>

class one_piece
{
    public:
    QString planid;
    QString partnb;
    QString id;
    QString type;
    QString idsymbol;
    QString actual;
    QString nominal;
    QString uppertol;
    QString lowertol;
    QString deviation;
    QString exceed;
    QString featureid;
    QString featuresigma;	//maybe double
    QString comment;
    QString link;
    QString linkmode;
    QString mmc;
    QString useruppertol;
    QString userlowertol;
    QString fftphi;
    QString fftphiunit;
    QString zoneroundnessangle;
    QString groupname;
    QString groupname2;
    QString datumAid;
    QString datumBid;
    QString datumCid;
    QString featurePosX;
    QString featurePosY;
    QString featurePosZ;
    QString group1;
    QString group2;
    QString group3;
    QString group4;
    QString group5;
    QString group6;
    QString group7;
    QString group8;
    QString group9;
    QString group10;

    public:
    one_piece();
    one_piece(QString buf);
    one_piece(const class one_piece &T);
    friend QDataStream& operator<<( QDataStream&, const one_piece&);
    //you can modify this function to adjust the output
};
class one_measure
{
    public:
    QVector <one_piece> *dat;

    public:
    one_measure();
    one_measure(int n);
    void resize(int n);
};

#endif // DATA_H
