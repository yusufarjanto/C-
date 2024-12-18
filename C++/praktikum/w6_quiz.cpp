#include <iostream>
using namespace std;

int sisi,lk,vk;

void Lkub(int sisi) {
    cout << "masukkan nilai sisi : ";
    cin >> sisi;
    lk = (sisi*sisi)*6;;
    cout<<"Luas permukaan kubus dengan Sisi : "<<sisi<<" adalah  "<<lk<<endl;
}
void Vkub(int sisi) { 
    cout << "masukkan nilai sisi : ";
    cin >> sisi;
    vk = sisi*sisi*sisi;
    cout<<"volume kubus dengan Sisi : "<<sisi<<" adalah  "<<vk<<endl;
}

int Volkub(int sisi){
    return sisi*sisi*sisi;
}
int Lukub(int sisi){
    return (sisi*sisi)*6;
}
int main() {
    int pilih;
    char ya;
    
    do
    {
        cout<<"1. Mencari Luas permukaan kubus(dengan fungsi)"<<endl;
        cout<<"2. Mencari volume kubus(dengan fungsi)"<<endl;
        cout<<"3. Mencari Luas permukaan kubus(dengan prosedur)"<<endl;
        cout<<"4. Mencari volume kubus(dengan prosedur)"<<endl;
        cout<<"Pilih : ";
        cin>>pilih;

        switch (pilih)
            {
            case 1:
                Lkub(sisi);
                break;
            case 2:
                Vkub(sisi);
                break;
            case 3:
                cout<<"Masukkan Nilai Sisi : ";
                cin>>sisi;
                cout<<"Luas Permukaan Kubus dengan sisi "<<sisi<<"adalah : "<<Lukub(sisi)<<endl;
                break;
            case 4:
                cout<<"Masukkan Nilai Sisi : ";
                cin>>sisi;
                cout<<"Volume Kubus dengan sisi "<<sisi<<"adalah : "<<Volkub(sisi)<<endl;
                break;
            }
        cout<<"Apakah anda ingin mencoba lagi? (y/n) ";
        cin>>ya;
    } while (ya=='y'|| ya=='Y');
    cout<<"Bilang makasih dong! "<<endl;
    

}