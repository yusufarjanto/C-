#include <iostream>
using namespace std;

int main() {
    int nilai_mahasiswa;
    cout<<"masukkan nilai mahasiswa : ";
    cin>>nilai_mahasiswa;

    if (nilai_mahasiswa <= 100 && nilai_mahasiswa >=80)
    {
        cout<<"Nilai Mahasiswa A";
    } else if (nilai_mahasiswa < 80 && nilai_mahasiswa >= 65)
    {
        cout<<"Nilai Mahasiswa B";
    } else if (nilai_mahasiswa < 65 && nilai_mahasiswa >= 50)
    {
        cout<<"Nilai Mahasiswa C";
    } else if (nilai_mahasiswa < 50 && nilai_mahasiswa >= 40)
    {
        cout<<"Nilai Mahasiswa D";
    } else 
    {
        cout<<"Nilai Mahasiswa E";
    }
    
}