#include "data.h"

one_piece::one_piece()
{
    ;
};
one_piece::one_piece(QString buf)
{
    QTextStream in(&buf);
    in>> planid
     >> partnb
    >> id
    >> type
    >> idsymbol
    >> actual
    >> nominal
    >> uppertol
    >> lowertol
    >> deviation
    >> exceed
    >> featureid
    >> featuresigma
    >> comment
    >> link
    >> linkmode
    >> mmc
    >> useruppertol
    >> userlowertol
    >> fftphi
    >> fftphiunit
    >> zoneroundnessangle
    >> groupname
    >> groupname2
    >> datumAid
    >> datumBid
    >> datumCid
    >> featurePosX
    >> featurePosY
    >> featurePosZ
    >> group1
    >> group2
    >> group3
    >> group4
    >> group5
    >> group6
    >> group7
    >> group8
    >> group9
    >> group10;


    return;
};
one_piece::one_piece(const class one_piece &T)
{
    this->planid=T.planid;
    this->partnb=T.partnb;
    this->id=T.id;
    this->type=T.type;
    this->idsymbol=T.idsymbol;
    this->actual=T.actual;
    this->nominal=T.nominal;
    this->uppertol=T.uppertol;
    this->lowertol=T.lowertol;
    this->deviation=T.deviation;
    this->exceed=T.exceed;
    this->featureid=T.featureid;
    this->featuresigma=T.featuresigma;
    this->comment=T.comment;
    this->link=T.link;
    this->linkmode=T.linkmode;
    this->mmc=T.mmc;
    this->useruppertol=T.useruppertol;
    this->userlowertol=T.userlowertol;
    this->fftphi=T.fftphi;
    this->fftphiunit=T.fftphiunit;
    this->zoneroundnessangle=T.zoneroundnessangle;
    this->groupname=T.groupname;
    this->groupname2=T.groupname2;
    this->datumAid=T.datumAid;
    this->datumBid=T.datumBid;
    this->datumCid=T.datumCid;
    this->featurePosX=T.featurePosX;
    this->featurePosY=T.featurePosY;
    this->featurePosZ=T.featurePosZ;
    this->group1=T.group1;
    this->group2=T.group2;
    this->group3=T.group3;
    this->group4=T.group4;
    this->group5=T.group5;
    this->group6=T.group6;
    this->group7=T.group7;
    this->group8=T.group8;
    this->group9=T.group9;
    this->group10=T.group10;
};

QDataStream& operator<<(QDataStream& os, const one_piece& a)
{
    os<<a.planid<<'\t'<<a.partnb<<'\t'<<a.type<<'\t'<<a.actual<<'\t'<<a.nominal<<"\n";
    return os;
};

one_measure::one_measure()
{
    dat = new QVector <one_piece>();
};
one_measure::one_measure(int n)
{
    dat = new QVector <one_piece> (n);
}

void one_measure::resize(int n)
{
    dat->resize(n);
}
