#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

const int maks_data = 10;
string Data[maks_data], input, CariData, EditData;
int jumlah_data = 0;

void YusufA_Tambah_Data () {
    if (jumlah_data < maks_data) {
        cout<<"Masukkan Data Baru : ";
        cin.ignore(); 
        getline(cin, input);
        Data[jumlah_data] = input;
        jumlah_data++;
        cout<<"Data Sudah Berhasil Di Tambahkan."<<endl;
    }
    else {
        cout<<"Data Sudah Penuh, Kamu Tidak Bisa Menambahkan Data Baru Lagi!!"<<endl;
    }
}

void YusufA_Edit_Data () {
    int index;
    cout << "Masukkan Index Data Yang Ingin Kamu Edit (0 - " << jumlah_data - 1 << "): ";
    cin >> index;
    if (index >= 0 && index < jumlah_data) {
        cout << "Masukkan Data Baru: ";
        cin.ignore(); 
        getline(cin, EditData); 
        Data[index] = EditData;
        cout << "Data Berhasil Kamu Ubah."<<endl;
    } else {
        cout << "Index Yang Kamu Masukkan Tidak Valid!!"<<endl;
    }
}

void YusufA_Hapus_Data () {
    int index;
    cout << "Masukkan index data yang ingin dihapus (0 - " << jumlah_data - 1 << "): ";
    cin >> index;
    if (index >= 0 && index < jumlah_data) {
        for (int i = index; i < jumlah_data - 1; i++) {
            Data[i] = Data[i + 1];
        }
        jumlah_data--;
        cout << "Data berhasil dihapus!" << endl;

    } else {
        cout << "Index tidak valid!" << endl;

    }
}

void YusufA_Cetak_Data () {
    if (jumlah_data == 0) {
        cout << "Data Yang Kamu Cari Tidak Ditemukan!!" << endl;
    } else {
        cout << "Data Yang Kamu Cari : " << endl;
        for (int i = 0; i < jumlah_data; i++) {
            cout << i << ". " << Data[i] << endl;
        }
    }
    system("pause");
}

void YusufA_Temukan_Saya () {
    cout << "Masukkan Data Yang Kamu Cari : ";
    cin>>CariData;
    bool found = false;
    for (int i = 0; i < jumlah_data; i++) {
        if (Data[i] == CariData) {
            cout << "Data Ditemukan Pada Index." << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Data Tidak Ditemukan Index!!" << endl;
    }
    system("pause");
}

int main () {
        int pilih;
    do {
        system ("cls");
        cout<<"====== Menu Pilihan ======"<<endl;
        cout<<"1. Tambah Data"<<endl;
        cout<<"2. Edit Data"<<endl;
        cout<<"3. Hapus Data"<<endl;
        cout<<"4. Cetak Data"<<endl;
        cout<<"5. Temukan Saya"<<endl;
        cout<<"0. Keluar"<<endl;
        cout<<"Pilih Menu (0-5) : ";
        cin>>pilih;

        switch (pilih) {
            case 1 :
            cout<<"Menambahkan Data Baru... \n";
            YusufA_Tambah_Data ();
            break;

            case 2 :
            cout<<"Mengedit Data Yang Sudah Ada... \n";
            YusufA_Edit_Data ();
            break;

            case 3 :
            cout<<"Menghapus Data Yang Sudah Ada... \n";
            YusufA_Hapus_Data ();
            break;

            case 4 :
            cout<<"Mencetak Data Yang Sudah Dimassukkan... \n";
            YusufA_Cetak_Data ();
            break;

            case 5 :
            cout<<"Mencari Data Yang Sudah Diinputkan... \n";
            YusufA_Temukan_Saya ();
            break;

            case 0 : 
            cout<<"Terima Kasih Telah Menggunakan Program Ini"<<endl;
            break;
        }
    } while (pilih!=0);
}