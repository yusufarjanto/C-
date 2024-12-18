#include <iostream>
using namespace std;

int main() {
    double tb,bi;
    cout<<"Menentukan Berat Badan Ideal Untuk Seseorang"<<endl;
    cout<<"Masukkan tinggi badan anda (cm) :  ";cin>>tb;

    //hitung berat ideal
    bi = (tb - 100) - ((tb - 100) * 10/100);

    cout<<"Berat Badan Ideal Untuk tinggi "<<tb<<" cm adalah "<<bi<<" Kg"<<endl;


}