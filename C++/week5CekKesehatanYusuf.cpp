#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string nama,status1,status2,status3;
int gd,td;
char ulangi;

int main() {
    ulang:
    cout<<"mengecek kesehatan pasien berdasar tekanan darah dan gula darah\n";
    cout<<"masukkan nama : ";getline(cin,nama);
    cout<<"Masukkan tekanan darah : ";cin>>td;
    cout<<"Masukkan gula darah : ";cin>>gd;

    //CEK TEKANAN DARAH
    if (td>300) status1="hipertensi akut";
    else if (td>150) status1="hipertensi ringan";
    else if (td<100) status1="hipotensi";
    else status1="Normal";
    
    //cek gula
    if(gd>300) status2="Diabetes";
    else if(gd>120) status2 ="Waspada Diabetes";
    else status2="Normal";

    //penentuan status sehat
    if ((status1=="Normal") and (status2=="Normal")) status3="sehat";
    else status3="kurang sehat";
    

    //cetak hasil
    cout<<"Pasien bernama : "<<nama<<endl;
    cout<<"dengan tekanan darah : "<<td<<" Status : "<<status1<<endl;
    cout<<"dan gula darah : "<<gd<<" Status : "<<status2<<endl;
    cout<<"Dinyatakan "<<status3<<endl;

    cout<<"\nCoba lagi (y/n)? ";
    cin>>ulangi;
    if(ulangi=='y' || ulangi=='Y') goto ulang;
}