#include <iostream>
using namespace std;

int i, n, value[10];

int main() {

    value[0] = 1;
    value[1] = 2;
    value[2] = 3;
    value[3] = 4;

    cout << "Array yang sudah diinput adalah: "<<endl;
    cout<<"Array ke-1 Adalah : "<<value[0]<<endl;
    cout<<"Array ke-2 Adalah : "<<value[1]<<endl;
    cout<<"Array ke-3 Adalah : "<<value[2]<<endl;
    cout<<"Array ke-4 Adalah : "<<value[3]<<endl;

    cout << "Berapa Array Yang ingin anda pakai? (maks 10): ";
    cin >> n;

    //input array
    for (i = 0; i <= n-1; i++)
    {
        cout<<"Masukkan Array ke-"<<i+1<<": ";
        cin>>value[i];
    }
    //output array
    cout<<"\nArray yang anda masukkan adalah: "<<endl;
    for (i = 0; i <= n-1; i++)
    {
        cout<<"Array ke-"<<i+1<<" Adalah : "<<value[i]<<endl;
    }
    // penjumlahan antar array
    int jumlah = 0;
    for ( i = 0; i <= n-1; i++)
    {
        jumlah +=value[i];
    }
    cout<<"\nJumlah Array yang anda masukkan adalah: "<<jumlah<<endl;
    
    
}