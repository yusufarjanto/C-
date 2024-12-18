#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int tu,tb,tk,kupon;
string hadiah;
char ya;
char tukarkupon;

int main(){
    ulang:
    cout<<"Menghitung Kembalian Pelanggan Dan Kupon\n"<<endl;
    cout<<"masukkan Total Belanjaan Rp : ";cin>>tb;
    cout<<"masukkan total uang pembayaran : ";cin>>tu;

    if (tu<=tb)
    {
        cout<<"uang Anda tidak cukup, Ulangi Proses!";
        goto ulang;
    }
    else {
        tk = tu-tb;
        kupon = abs(tb/10000);
        
        cout<<"Total Uang Anda : "<<tu<<endl;
        cout<<"total Belanja Anda : "<<tb<<endl;
        if (tk==0)
        {
            cout<<"Tidak Ada Kembalian!"<<endl;
        } else {
            cout<<"Kembalian : "<<tk<<endl;
        }
        
        cout<<"Mendapatkan Kupon : "<<kupon<<endl;

        cout<<"Apakah Anda ingin menukarkan kupon? : (y/n)";cin>>tukarkupon;
        if ((tukarkupon == 'y') || (tukarkupon == 'Y'))
        {
            if (kupon >= 15)
            {
                cout<<"Anda mendapatkan satu unit mobil!\n";
            } 
            else if(kupon >= 10){
                cout<<"anda mendapatkan satu unit motor\n";
            }
            else if(kupon >=5){
                cout<<"anda mendapatkan satu unit sepeda\n";
            }
            else {
                cout<<"Kupon anda belum cukup untuk mendapatkan apapun\n";
            }

            cout<<"Apakah anda akan Menghitung belanjaan lagi?";cin>>ya;
            if ((ya =='y') || (ya =='Y')) goto ulang;
            
            
        }
        cout<<"Apakah anda akan Menghitung belanjaan lagi?";cin>>ya;
            if ((ya =='y') || (ya =='Y')) goto ulang;
        
    }
    

}