#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int n=0,i,pilih;
typedef int larik_angka[20];
larik_angka angka;

void tambah_data (larik_angka &x) {
    n++;
    cout<<"masukkan data baru : ";cin>>n[x];
    cout<<"Tambah Data Berhasil !";
}
void cetak_data (larik_angka x) {
    cout<<"data Saat ini : "<<endl;
    cout<<"-----------------------------\n";
    for (i=1;i<=n;i++) cout<<i<<". "<<x[i]<<endl;
    cout<<"-----------------------------\n";
    
}
void edit_data(larik_angka &x){
    int posisi;
    cout<<"Edit data di larik\n";
    ulang:
    cout<<"Masukkan nomor data yang ingin diedit : ";cin>>posisi;
    if((posisi<1 and posisi>n)){cout<<"Posisi data tidak valid! ulangi\n"; goto ulang;}
    cout<<"Angka Yang ada di posisi : "<<posisi<<" Adalah : "<<x[posisi]<<endl;
    cout<<"Masukkan data yang baru : ";cin>>x[posisi];
    cout<<"data berhasil diubah! \n";
}

void hapus_data(larik_angka &x){
    int posisi;
    char ya;
    cout<<"Hapus data di larik\n";
    ulang:
    cout<<"Masukkan nomor data yang ingin dihapus : ";cin>>posisi;
    cout<<"Angka Yang ada di posisi : "<<posisi<<" Adalah : "<<x[posisi]<<endl;
    cout<<"Apakah anda yakin akan menghapus data? y/n : ";cin >>ya;
    if((ya=='y') and (ya=='Y')) {
        if((posisi<1 and posisi>n)){cout<<"Posisi data tidak valid! ulangi\n"; goto ulang;}
        for(i=posisi;i<n;i++) x[i]=x[i+1];
        n--;
        cout<<"Data berhasil dihapus! \n";
    } else {
        cout<<"Data tidak jadi dihapus !"<<endl;
    }

}

int mysum(larik_angka x) {
    int xx=0;
    for (int i = 1; i <=n; i++)
    {
        xx=xx+x[i];
    }
    return xx;
}
int max(larik_angka x) {
    int max = X[1];
    for (int i = 2; i <= n; i++)
        if (x[i] > max) max = x[i];
    return max;
    
}
float rata_rata(larik_angka x) {
    return float(mysum(x))/float(n);
}

int main(){
do{
    system("cls");
    cout<<"CRUD Data \n";
    cout<<"1. Input Data \n";
    cout<<"2. Cetak Data \n";
    cout<<"3. Edit Data \n";
    cout<<"4. Menghapus Data \n";
    cout<<"5. Hitung Rata Rata Data \n";
    cout<<"0. keluar \n";
    cout<<"Pilih Menu <0-5> : ";cin>>pilih;
    switch (pilih){
    case 1 :
        cout<<"Tambah data\n";
        if (n>20) cout<<"Data sudah penuh!"; else tambah_data(angka);
        break;
    case 2 :
        cout<<"cetak data\n";
        if (n==0) cout<<"Data Masih Kosong!"; else cetak_data (angka);
        break;
    case 3 :
        cout<<"Edit data\n";
        if (n==0) cout<<"Data Masih Kosong!"; else edit_data (angka);
        break;
    case 4 :
        cout<<"Hapus data\n";
        if (n==0) cout<<"Data Masih Kosong!"; else hapus_data (angka);
        break;
    case 5 :
        if (n==0) cout<<"Data Masih Kosong!";
        cout<<"Hitung rata rata Seluruh data\n";
        cout<<"Jumlah data seluruhnya adalah : "<<mysum(angka)<<endl;
        cout<<"Rata-Rata Data Data Diatas Adalah : "<<rata_rata(angka)<<endl;
        break;
    case 6 :
        cout<<"Mencari Nilai Maksimum Didalam Array\n";
        if (n==0) cout<<"Data Masih Kosong!"; else max (angka);
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