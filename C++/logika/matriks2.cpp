#include <iostream>
using namespace std;

int main() {
    int baris, kolom;

    // Meminta input jumlah baris dan kolom
    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;

    // Membuat matriks dengan ukuran baris x kolom
    int matriks[baris][kolom];

    // Mengisi matriks dengan input dari pengguna
    cout << "Masukkan elemen matriks:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Elemen [" << i << "][" << j << "]: ";
            cin >> matriks[i][j];
        }
    }

    // Menampilkan matriks
    cout << "Matriks yang telah diinputkan:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    // Meminta pengguna untuk memilih baris atau kolom
    int pilihan;
    cout << "Apakah Anda ingin menampilkan (1) Baris atau (2) Kolom? Masukkan pilihan (1/2): ";
    cin >> pilihan;

    if (pilihan == 1) {
        // Menampilkan baris tertentu
        int barisPilihan;
        cout << "Masukkan nomor baris yang ingin ditampilkan (0 hingga " << baris - 1 << "): ";
        cin >> barisPilihan;

        if (barisPilihan >= 0 && barisPilihan < baris) {
            cout << "Elemen pada baris " << barisPilihan << ": ";
            for (int j = 0; j < kolom; j++) {
                cout << matriks[barisPilihan][j] << " ";
            }
            cout << endl;

            // Meminta pengguna untuk memilih elemen dalam baris
            int kolomPilihan;
            cout << "Masukkan nomor kolom dari baris " << barisPilihan << " yang ingin ditampilkan (0 hingga " << kolom - 1 << "): ";
            cin >> kolomPilihan;

            if (kolomPilihan >= 0 && kolomPilihan < kolom) {
                cout << "Elemen yang dipilih: " << matriks[barisPilihan][kolomPilihan] << endl;
            } else {
                cout << "Nomor kolom tidak valid!" << endl;
            }
        } else {
            cout << "Nomor baris tidak valid!" << endl;
        }
    } else if (pilihan == 2) {
        // Menampilkan kolom tertentu
        int kolomPilihan;
        cout << "Masukkan nomor kolom yang ingin ditampilkan (0 hingga " << kolom - 1 << "): ";
        cin >> kolomPilihan;

        if (kolomPilihan >= 0 && kolomPilihan < kolom) {
            cout << "Elemen pada kolom " << kolomPilihan << ": ";
            for (int i = 0; i < baris; i++) {
                cout << matriks[i][kolomPilihan] << " ";
            }
            cout << endl;

            // Meminta pengguna untuk memilih elemen dalam kolom
            int barisPilihan;
            cout << "Masukkan nomor baris dari kolom " << kolomPilihan << " yang ingin ditampilkan (0 hingga " << baris - 1 << "): ";
            cin >> barisPilihan;

            if (barisPilihan >= 0 && barisPilihan < baris) {
                cout << "Elemen yang dipilih: " << matriks[barisPilihan][kolomPilihan] << endl;
            } else {
                cout << "Nomor baris tidak valid!" << endl;
            }
        } else {
            cout << "Nomor kolom tidak valid!" << endl;
        }
    } else {
        cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}