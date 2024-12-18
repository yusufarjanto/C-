#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout<<"Masukkan Nilai: ";
    cin >> nilai;
    
    if (nilai > 0)
    {
        cout<<"Nilai tersebut adalah nilai positif";

    } else if(nilai < 0){
        cout<<"Nilai tersebut adalah nilai negatif";
    } else {
        cout<<"Nilai tersebut adalah nol";
    }
    
}