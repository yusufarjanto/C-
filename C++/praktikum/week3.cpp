#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout <<"Selamat Datang"<<endl;
    double phi = 22/7,jari_jari,luas_lingkaran;

    cout << "Masukkan jari jari : " ;
    cin>>jari_jari;

    luas_lingkaran = phi * pow(jari_jari, 2) ; //cara kerja pow() adalah pow(variabel,pangkat)

    cout << "Luas lingkaran dari jari-jari : "<<jari_jari<<" : " << luas_lingkaran << endl;

}