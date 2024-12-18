#include <iostream>
using namespace std;

int main() {
    int nilai_awal, nilai_akhir, nilai_kelipatan;
    cout<<"Masukkan Nilai awal: ";
    cin >> nilai_awal;
    
    cout<<"Masukkan Nilai akhir: ";
    cin >> nilai_akhir;

    //increment
    for (int i = nilai_awal; i < nilai_akhir; i++)
    {
        cout<<"i : "<<i<<endl;
    }
    
    //decrement & if Else
    for (int i = 20; i >= 1; i--)
    {
        if (i%2==0)
        {
            cout<<"Angka genap: "<<i<<endl;
        } else
        {
            cout<<"Angka ganjil: "<<i<<endl;
        }
        
        
    }
    
}