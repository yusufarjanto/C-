#include <iostream>
using namespace std;

int main() {
    int nilai_awal, nilai_akhir,option;
    char ya;
    do
    {
    cout << "Pilih Program" << endl;
    cout << "1. Mencari kelipatan 5 antar bilangan"<< endl;
    cout << "2. Mencari bilangan ganjil antar bilangan" << endl;
    cout << "Pilih: ";
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "Masukkan Nilai awal: ";
        cin >> nilai_awal;

        cout << "Masukkan Nilai akhir: ";
        cin >> nilai_akhir;

        for (int i = nilai_awal; i < nilai_akhir; i++)
        {
            if (i%5 == 0)
            {
                cout << i <<endl;
            }
        }
        cout << "Ingin memilih menu lain? (y/n): ";
        cin >> ya;
        break;
    case 2:
        cout << "Masukkan Nilai awal: ";
        cin >> nilai_awal;
        
        cout << "Masukkan Nilai akhir: ";
        cin >> nilai_akhir;

        for (int i = nilai_awal; i < nilai_akhir; i++)
        {
            if (i%2 == 1)
            {
                cout << i <<endl;
            }
        }
        cout << "Ingin memilih menu lain? (y/n): ";
        cin >> ya;
        break;
    
    default:
        cout<<"anda tidak memilih menu diatas!"<<endl;
        cout << "Ingin memilih menu lain? (y/n): ";
        cin >> ya;
        break;
    }
    } while (ya=='y' || ya=='Y');
}
    