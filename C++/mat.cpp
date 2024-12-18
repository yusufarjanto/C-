#include <iostream>

using namespace std;

int main()  {
    int baris,kolam;

    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolam;
    
    for (int i = 1; i <= baris; i++) {
        for (int j = 1; j <= kolam; j++) {
            cout << "* ";
        }
        cout << endl;
}
    for(int i = 0; i <) {
        for(int j = 0; j < kolam; j++) {
            cout << "  ";
        }
        cout << "*" << endl;
        baris--;
    }

}