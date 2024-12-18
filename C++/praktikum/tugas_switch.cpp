#include <iostream>

using namespace std;

int main() {
    float nilai1,nilai2,hasil;
    int option;
    cout << "Masukkan Nilai pertama: ";
    cin >> nilai1;

    cout << "Masukkan Nilai kedua: ";
    cin >> nilai2;
    
    cout << "Pilih operasi aritmatika yang akan anda lakukan:\n";
    cout << "1. Penambahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    cout << "Pilih salah satu: ";
    cin >> option;

    switch (option)
    {
    case 1:
        hasil = nilai1 + nilai2;
        cout << "Hasil " << nilai1 << " + " << nilai2 << " = " << hasil << endl;
        break;
    
    case 2:
        hasil = nilai1 - nilai2;
        cout << "Hasil " << nilai1 << " - " << nilai2 << " = " << hasil << endl;
        break;
        
    case 3:
        hasil = nilai1 * nilai2;
        cout << "Hasil " << nilai1 << " x " << nilai2 << " = " << hasil << endl;
        break;
        
    case 4:
        hasil = nilai1 / nilai2;
        cout << "Hasil " << nilai1 << " : " << nilai2 << " = " << hasil << endl;
        break;
    default:
        cout<<"Anda tidak memilih salah satu pilihan yang ada diatas !";
        break;
    }
}