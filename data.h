#ifndef DATA_H
#define DATA_H
/*
 *  This is a template for collect data from Zeiss Calypso merge file.
 *  Author: Sun Xin
 *  Date:   2009/10/03
 *  copyleft by GPL, you can use it for free, enjoy.
 *
 */
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<queue>
using namespace std;

class one_piece
{
    public:
    string planid;
    string partnb;
    string id;
    string type;
    string idsymbol;
    string actual;
    string nominal;
    string uppertol;
    string lowertol;
    string deviation;
    string exceed;
    string featureid;
    string featuresigma;	//maybe double
    string comment;
    string link;
    string linkmode;
    string mmc;
    string useruppertol;
    string userlowertol;
    string fftphi;
    string fftphiunit;
    string zoneroundnessangle;
    string groupname;
    string groupname2;
    string datumAid;
    string datumBid;
    string datumCid;
    string featurePosX;
    string featurePosY;
    string featurePosZ;
    string group1;
    string group2;
    string group3;
    string group4;
    string group5;
    string group6;
    string group7;
    string group8;
    string group9;
    string group10;

    public:
    one_piece();
    one_piece(string buf);
    one_piece(const class one_piece &T);
    friend ostream& operator<<( ostream&, const one_piece&);
    //you can modify this function to adjust the output
};
class Z_database
{
    public:
    vector<one_piece> *dat;

    public:
    Z_database();
    void resize(int n);
};
typedef class Z_database one_measure;

#endif // DATA_H
