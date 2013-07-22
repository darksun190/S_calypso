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

    /*
    int pos_i,pos_j;
    int len=buf.size();
    pos_i=0;
    pos_j=buf.indexOf('\t');
    planid=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    partnb=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    id=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    type=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    idsymbol=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    actual=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    nominal=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    uppertol=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    lowertol=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    deviation=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    exceed=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    featureid=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    featuresigma=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    comment=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    link=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    linkmode=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    mmc=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    useruppertol=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    userlowertol=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    fftphi=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    fftphiunit=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    zoneroundnessangle=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    groupname=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    groupname2=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    datumAid=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    datumBid=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    datumCid=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    featurePosX=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    featurePosY=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    featurePosZ=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    group1=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    group2=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    group3=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    group4=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    group5=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    group6=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    group7=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    group8=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    group9=buf.mid(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.indexOf('\t',pos_i);
    if(pos_j==-1)pos_j=len;
    group10=buf.mid(pos_i,pos_j-pos_i);
    */
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
