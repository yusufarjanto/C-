//program untuk menentukan profit dan cost
#include <iostream>
#include <iomanip>
using namespace std;
int income,cost,profit,loss;
char ya;

int main() {
    ulang:
    cout<<"program menentukan kamu untung atau rugi\n";
    cout<<"masukkan nilai income Rp : ";cin>>income;
    cout<<"masukkan nilai cost Rp : ";cin>>cost;
    
    if ((income<=0) or (cost<=0)){cout<<"Input Salah! Ulang";goto ulang;}

    if (income == cost)
    {
        profit = income-cost;
        cout<<"Kamu impas bulan ini";
    }
    else if (income > cost)
    {
        profit = income-cost;
        cout<<"Kamu untung sebesar Rp : "<<profit<<endl;
    }
    else 
    {
        loss = cost-income;
        cout<<"kamu rugi Rp : "<<loss<<endl;
    }

    //CARA AGAR PROGRAM TERULANG OTOMATIS
    cout<<"Apakah ingin mengulang lagi ?";cin>>ya;
    if ((ya =='y') or (ya =='Y')) goto ulang;
    cout<<"Terima Kasih !\n";
    
}