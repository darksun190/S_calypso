#include "header.h"

Z_C_merge::Z_C_merge()
{
    ;
};
Z_C_merge::Z_C_merge(string buf)
{
    signed int pos_i,pos_j;
    signed int len=buf.size();
    pos_i=0;
    pos_j=buf.find('\t');
    planid=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    partnb=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    id=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    type=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    idsymbol=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    actual=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    nominal=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    uppertol=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    lowertol=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    deviation=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    exceed=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    featureid=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    featuresigma=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    comment=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    link=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    linkmode=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    mmc=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    useruppertol=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    userlowertol=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    fftphi=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    fftphiunit=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    zoneroundnessangle=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    groupname=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    groupname2=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    datumAid=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    datumBid=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    datumCid=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    featurePosX=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    featurePosY=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    featurePosZ=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    group1=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    group2=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    group3=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    group4=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    group5=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    group6=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    group7=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    group8=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    group9=buf.substr(pos_i,pos_j-pos_i);

    pos_i=pos_j+1;
    if(pos_i>=len) return;
    pos_j=buf.find('\t',pos_i);
    if(pos_j==std::string::npos)pos_j=len;
    group10=buf.substr(pos_i,pos_j-pos_i);

    return;
};
Z_C_merge::Z_C_merge(const class Z_C_merge &T)
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

ostream& operator<<(ostream& os, const Z_C_merge& a)
{
    os<<a.planid<<'\t'<<a.partnb<<'\t'<<a.type<<'\t'<<a.actual<<'\t'<<a.nominal<<endl;
    return os;
};

Z_database::Z_database()
{
    ;
};
void Z_database::resize(int n)
{
    dat.resize(n);
}
