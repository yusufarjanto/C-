#include <iostream>
using namespace std;

int main() {
    double meter,yard,feet,inch;

    cout<<"Masukkan Panjang : ";
    cin>>meter;
    yard = meter * 1.09361;
    feet = meter * 3.28084;
    inch = meter * 39.3701;

    cout<<"Hasil Konversi : \n";
    cout<<"dalam yard : "<<yard<<endl;
    cout<<"dalam feet : "<<feet<<endl;
    cout<<"dalam inch : "<<inch<<endl;  
}