#include<iostream>
using namespace::std;
struct nilai
{
    int uts,uas,tgs,abs;
    double tot;
};
void input()
{
    nilai mhs;
    cout<<"Nilai UTS            : "; cin>>mhs.uts;
    cout<<"Nilai UAS            : "; cin>>mhs.uas;
    cout<<"Nilai Tugas          : "; cin>>mhs.tgs;
    cout<<"Nilai Absen          : "; cin>>mhs.abs;
}
void hitung()
{
    nilai mhs;
    mhs.tot=(mhs.uts*0.2)+(mhs.uas*0.3)+(mhs.tgs*0.35)+(mhs.abs*0.15);
    cout<<"Total Nilai          :"<<mhs.tot<<endl;
}
void grade()
{
    nilai mhs;
    if(mhs.tot>=81)
        cout<<"***********A***********";
    else if(mhs.tot>=61)
        cout<<"***********B***********";
    else if(mhs.tot>=41)
        cout<<"***********C***********";
    else if(mhs.tot>=21)
        cout<<"***********D***********";
    else
        cout<<"***********E***********";
}
main()
{
    input();
    hitung();
    grade();
}
