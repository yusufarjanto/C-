#include <iostream>
using namespace std;

int main() {
    int nilai_awal,nilai_akhir,nilai_kelipatan;
    cout<<"Masukkan Nilai awal: ";
    cin >> nilai_awal;

    cout<<"Masukkan Nilai akhir: ";
    cin >> nilai_akhir;

    cout<<"Masukkan Nilai kelipatan: ";
    cin >> nilai_kelipatan;

    for (int i = nilai_awal; i < nilai_akhir; i++)
    {
        cout<<"Nilai Kelipatan dari "<< nilai_kelipatan<<" : "<<i<<endl;
        i+= nilai_kelipatan;
    }
    
}