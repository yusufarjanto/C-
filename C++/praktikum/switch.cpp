#include <iostream>
using namespace std;

int main() {
    char code;
    cout<<"Kode-kode alat yang tersedia:\n";
    cout<<"A. Alat Olahraga\n";
    cout<<"B. Alat Memasak\n";
    cout<<"C. Alat Elektronik\n";
    cout<<"\n";
    cout<<"masukkan kode (A,B,C) : ";
    cin>>code;

    switch (code)
    {
    case 'A':
        cout<<"Section Alat Olahraga";
        break;
    
    case 'B':
        cout<<"Section Alat Memasak";
        break;
    case 'C':
        cout<<"Section Alat elektronik";
        break;
    
    default:
        cout<<"Kode yang anda masukkan salah!";
        return 0;
        break;
    }

    
    
}