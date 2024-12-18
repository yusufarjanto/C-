#include <iostream>
using namespace std;

int main() {
    int baris, kolom;

    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;

    int matriks[baris][kolom];

    cout << "Masukkan elemen matriks:" << endl;
    for (int i = 1; i <= baris; i++) {
        for (int j = 1; j <= kolom; j++) {
            cout << "Elemen [" << i << "][" << j << "]: ";
            cin >> matriks[i][j];
        }
    }
    
    cout << "Matriks yang telah diinputkan:" << endl;
    for (int i = 1; i <= baris; i++) {
        for (int j = 1; j <= kolom; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}