#include <iostream>
using namespace std;

float phi = 3.14,luas,keliling;
float jari_jari;
int nilai_awal,nilai_akhir,sisi,lp,kp;

    void ganjil() {
        cout<<"Mencari Bilangan Ganjil Diantara Dua Bilangan"<<endl;
        cout<<"Masukkan nilai awal : ";
        cin>>nilai_awal;
        cout<<"Masukkan nilai akhir : ";
        cin>>nilai_akhir;
        while (nilai_awal<=nilai_akhir) 
        {
            if (nilai_awal%2==1)
            {
                cout<<nilai_awal<<endl;
            }
            nilai_awal++;
        }
        cout<<endl;
    }
//PROSEDUR
    void genap () {
        cout<<"Mencari Bilangan Genap Diantara Dua Bilangan"<<endl;
        cout<<"Masukkan Nilai Awal : ";
        cin>>nilai_awal;
        cout<<"Masukkan Nilai Akhir : ";
        cin>>nilai_akhir;
        while (nilai_awal<=nilai_akhir) 
        {
            if (nilai_awal%2==0)
            {
                cout<<nilai_awal<<endl;
            }
            nilai_awal++;
        }
        cout<<endl;
    }

    float luas_lingkaran (float jari_jari) {
        return phi*jari_jari*jari_jari;
    }
    float keliling_lingkaran (float jari_jari) {
        return 2*phi*jari_jari;
    }
    void Lpersegi(int sisi) { 
        cout<<"Masukkan Nilai Sisi : ";
        cin>>sisi<<endl;
        lp = sisi * sisi;
        cout<<"Luas persegi dengan Sisi : "<<sisi<<" adalah  "<<lp<<endl;

    }
    void Kpersegi(int sisi) { 
        cout<<"Masukkan Nilai Sisi : ";
        cin>>sisi<<endl;
        kp = sisi * 4;
        cout<<"Keliling persegi dengan Sisi : "<<sisi<<" adalah  "<<kp<<endl;

    }
    
    int main (){
        int pilih;
        char ya;

        do
        {
            cout<<"1. Menampilkan bilangan ganjil diantara dua bilangan"<<endl;
            cout<<"2. Menampilkan bilangan genap diantara dua bilangan"<<endl;
            cout<<"3. Mencari luas lingkaran"<<endl;
            cout<<"4. Mencari keliling lingkaran"<<endl;
            cout<<"5. Mencari Luas Persegi"<<endl;
            cout<<"6. Mencari keliling Persegi"<<endl;
            cout<<"Pilih : ";
            cin>>pilih;

            switch (pilih)
            {
            case 1:
                ganjil();
                break;
            case 2:
                genap();
                break;
            case 3:
                cout<<"Masukkan Nilai Jari-Jari : ";
                cin>>jari_jari;
                cout<<"Luas lingkaran dengan jari-jari "<<jari_jari<<"adalah : "<<luas_lingkaran(jari_jari)<<endl;
                break;
            case 4:
                cout<<"Masukkan Nilai Jari-Jari : ";
                cin>>jari_jari;
                cout<<"Keliling lingkaran dengan jari-jari "<<jari_jari<<"adalah : "<<keliling_lingkaran(jari_jari)<<endl;
                break;
            case 5:
                Lpersegi();
                break;
            case 6:
                Kpersegi();
                break;
            default:
            cout<<"ENTE TIDAK MEMILIH SALAH SATU PILIHAN DIATAS!"<<endl;
                break;
            }
        
            cout<<"Apakah anda ingin mencoba lagi? (y/n) ";
            cin>>ya;
        } while (ya=='y'|| ya=='Y');
        cout<<"Bilang makasih dong! "<<endl;
        
    }