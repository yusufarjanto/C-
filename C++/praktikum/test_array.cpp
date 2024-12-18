#include <iostream>
#include <iomanip>
using namespace std;

typedef int larik[20];

//membuat tipe data larik
larik angka;
int pilih, n=0;

void input_data(larik &x){
    char ya;
    do
    {
        cout<<"Input data Ke "<< n + 1 << " : ";
        cin>>x[n];
        n++;
        cout<<"Input Data Lagi? y/n : ";
        cin>>ya;
    } while ((ya == 'y') and n<20);
}
void cetak_data(larik x){
    cout<<"Data adalah Sebagai Berikut "<<endl;
    cout<<"============================"<<endl;
    cout<<"| data ke | data |"<<endl;
    cout<<"============================"<<endl;
    for(int i=0; i<n; i++){
        cout<<"| " << setw(7) << i +1 << " | " << setw(5) << x[i] << " | " << endl;
        cout<<"---------------------------"<<endl;
    }
    cout<< "Data Sebanyak " << n << "Buah" << endl;
}

int max(larik x) {
    int maxS = x[0];
    for (int i = 1; i < n; i++)
        if (x[i]>maxS) maxS = x[i];
    return maxS;
}

int min(larik x){
    int minS = x[0];
    for (int i = 1; i < n; i++)
        if (x[i]<minS) minS = x[i];
    return minS;
}

float rata_rata(larik x){
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += x[i];
    return sum / n;
}
float median(larik x) {
    if (n%2 == 0)
    {
        return (float (x [(n/2)-1]) + float (x [(n/2+1)]))/2;
    } else
    {
        return x [(n/2)];
    }
}

void cari_data(larik x) {
    bool ketemu = false;
    int pos,cari;
    cout<<"Mencari data dalam Larik"<<endl;
    cout<<"masukkan data yang dicari : ";
    cin>>cari;

    for (int i = 0; i < n; i++)
    {
        if (x[i] == cari)
        {
            ketemu = true;
            pos = i + 1;
        }
    }

    if (ketemu)
    {
        cout<<"data ditemukan pada posisi: "<<pos<<endl;
    } else {
        cout<<"data tidak ditemukan dalam Larik"<<endl;
    }
    
}

int main () {
    do {
        system("cls");
        cout<<"Menu Pilihan "<<endl;
        cout<<"1. Input Data"<<endl;
        cout<<"2. Input Data"<<endl;
        cout<<"3. Cetak Data Terbesar"<<endl;
        cout<<"4. Cetak Data Terkecil"<<endl;
        cout<<"5. Cetak Data Median"<<endl;
        cout<<"6. Cetak Rata-Rata"<<endl;
        cout<<"7. Mencari Data Dalam Larik"<<endl;
        cout<<"0. Selesai"<<endl;
        cout<<"Pilih Menu (0-7) : ";
        cin>>pilih;

        switch (pilih) {
            case 1:
                if(n==20)
                    cout<<"Data Sudah Penuh"<<endl;
                else
                    input_data (angka);
            break;

            case 2:
                if(n==0)
                    cout<<"Data Dalam Array Masih Kosong"<<endl;
                else
                    cetak_data(angka);
            break;

            case 3:
                if(n==0)
                    cout<<"Data Dalam Array Masih Kosong"<<endl;
                else
                    cout<<"Data Terbesar Adalah "<<max(angka)<<endl;
            break;

            case 4:
                if (n==0)
                    cout<<"Data Dalam Array Masih Kosong"<<endl;
                else
                    cout<<"Data Terkecil Adalah "<<min(angka)<<endl;
            break;

            case 5:
                if (n==0)
                    cout<<"Data Dalam Array Masih Kosong"<<endl;
                else
                    cout<<"Median Data Dalam Larik Adalah "<<median(angka)<<endl;
            break;

            case 6:
                if (n==0)
                    cout<<"Data Dalam Array Masih Kosong"<<endl;
                else 
                    cout<<"Rata-Rata Data Data Diatas Adalah : "<<rata_rata(angka)<<endl;
            break;

            case 7:
                if (n==0)
                    cout<<"Data Dalam Array Masih Kosong"<<endl;
                else 
                    cari_data(angka);
            break;

            case 0:
                cout<<"Terimakasih"<<endl;
            break;

            default:
                cout<<"Salah Pilih Menu"<<endl;
            break;
        }

        system("pause");

    } while (pilih != 0);
}