// Menggunakan Do While Untuk Menu
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int pilih, panjang, lebar, tinggi, radius;
float luas, keliling, volume, miring;
char ya;
const float phi=22/7;

float kel_segitiga_yusuf(int a,int t){
    miring=sqrt(pow(a,2)+pow(t,2));
    keliling=miring+a+t;
    return miring+a+t;
}
float luas_segitiga_yusuf(int p,int t) {
    return 0.5*p*t;
}
int faktorial_yusuf(int a){
    if ((a == 0) or (a == 1))
    {
        return 1;
    } else {
        return a*faktorial_yusuf(a-1);
    }
    
}

int luas_p_balok_yusuf(int p,int l,int t) {
    return 2*(p*l+l*t+p*t);
}
int volume_balok_yusuf(int p,int l,int t) {
    return p*l*t;
}
float luas_permukaan_tabung_yusuf(int r,int t){
    return 2*phi*r*(r+t);
}
float volume_tabung_yusuf(int r,int t) {
    return phi*r*r*t;
}

float luas_p_bola_yusuf(int r) {
    return 4*phi*pow(r,2);
}
float volume_bola_yusuf(int r) {
    return (4/3)*phi*pow(r,3);
}
float luas_lingkaran_yusuf(int r) {
    return phi*pow(r,2);
}
float keliling_lingkaran_yusuf(int r) {
    return 2*phi*r;
}

int main(){
do{
    system("cls");
    cout<<"Menghitung Luas, Keliling dan Volum Bangun dan Ruang \n";
    cout<<"1. Menghitung Luas dan Keliling Segitiga Siku-siku \n";
    cout<<"2. Menghitung Luas Permukaan dan Volume Balok \n";
    cout<<"3. Menghitung Luas Permukaan dan Volume Silinder \n";
    cout<<"4. Menghitung Luas dan Keliling Lingkaran \n";
    cout<<"5. Menghitung Luas Permukaan dan Volume Bola \n";
    cout<<"6. Faktorial Angka \n";
    cout<<"0. keluar \n";
    cout<<"Pilih Menu <0-5> : ";cin>>pilih;
    switch (pilih){
    case 1 :
        cout<<"Menghitung Luas dan Keliling Segitiga Siku-siku \n";
        cout<<"Masukkan Alas : ";cin>>panjang;
        cout<<"Masukkan Tinggi : ";cin>>tinggi;
        cout<<"Luas Segitiga Adalah "<<luas_segitiga_yusuf(panjang,tinggi)<<" cm persegi \n";
        cout<<"Keliling Segitiga Adalah "<<kel_segitiga_yusuf(panjang,tinggi)<<" cm \n";
        break;
    case 2 :
        cout<<"Menghitung Luas Permukaan dan Volume Balok \n";
        cout<<"Masukkan Panjang : ";cin>>panjang;
        cout<<"Masukkan lebar : ";cin>>lebar;
        cout<<"Masukkan Tinggi : ";cin>>tinggi;
        cout<<"Luas Permukaan Balok Adalah "<<luas_p_balok_yusuf(panjang,lebar,tinggi)<<" cm persegi \n";
        cout<<"Volume Balok Adalah "<<volume_balok_yusuf(panjang,lebar,tinggi)<<" cm persegi \n";
        break;
    case 3 :
        cout<<"Menghitung Luas Permukaan dan Volume Silinder \n";
        cout<<"Masukkan Jari-Jari tabung : ";cin>>radius;
        cout<<"Masukkan tinggi tabung : ";cin>>tinggi;
        cout<<"Luas Permukaan Tabung Adalah "<<luas_permukaan_tabung_yusuf(radius,tinggi)<<" cm persegi \n";
        cout<<"Volume Tabung Adalah "<<volume_tabung_yusuf(radius,tinggi)<<" cm persegi \n";
        break;
    case 4 :
        cout<<"Menghitung Luas dan Keliling Lingkaran \n";
        cout<<"Masukkan Jari-Jari Lingkaran : ";cin>>radius;
        cout<<"Luas Lingkaran Adalah "<<luas_lingkaran_yusuf(radius)<<" cm2 \n";
        cout<<"Keliling Lingkaran Adalah "<<keliling_lingkaran_yusuf(radius)<<" cm \n";
        break;
    case 5 :
        cout<<"Menghitung Luas Permukaan dan Voolume Bola \n";
        cout<<"Masukkan Jari-Jari Bola : ";cin>>radius;

        cout<<"Volume Bola Adalah "<<volume_bola_yusuf(radius)<<" cm3 \n";
        cout<<"Luas Permukaan Bola Adalah "<<luas_p_bola_yusuf(radius)<<" cm2 \n";
        break;
    case 6 :
        cout<<"Masukkan nilai yang mau difaktorkan : ";cin>>panjang;
        cout<<"Faktorial dari : "<<panjang<<" Adalah : "<<faktorial_yusuf(panjang)<<endl;
        break;
    case 0 :
        cout<<"Terimakasih Sudah Mencoba Program Ini \n";
        break;
    default :
        cout<<"Anda Salah Pilih Menu \n";
        break;
    } //case
    cout<<"Tekan Enter Untuk lanjut \n";
    system("pause");
}
while (pilih!=0); //end do while<kondisi>
cout<<"Terimakasih \n";
} //end program