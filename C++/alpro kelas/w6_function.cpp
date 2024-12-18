#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;


void greeting() {
    cout << "Selamat datang di Kelas !" << endl;
}
void perkenalan() {
    string nama;
    cout<<"Siapa namamu? ";cin >> nama;
    cout<<"Perkenalkan, nama saya "<<nama<<" ,Saya adalah seorang mahasiswa yang sedang belajar di kelas ini."<<endl;
}
void perkenalan2() {
    cout<<"Perkenalkan, nama saya "<<nama<<" ,Saya adalah seorang mahasiswa yang sedang belajar di kelas ini."<<endl;
}
int umur20(int umur) {
    return umur+20;
}
int main() {
    string nama;
    int umur;
    greeting();
    // perkenalan();
    cout<<"Siapa namamu? ";cin >> nama;
    perkenalan2(nama);
    cout<<"berapa umurmu? : ";cin >> umur;
    cout<<"Selamat datang, anda berusia "<<umur<<" tahun. Anda akan berumur "<<umur20(umur)<<" tahun 20 tahun ke depan."<<endl;

}

