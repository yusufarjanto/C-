#include <iostream>
using namespace std;

int main() {
    int suhu;
    cout << "Masukkan suhu ruangan anda dalam Celsius: ";
    cin >> suhu;

    if (suhu <= 25 && suhu >= 10)
    {
        cout << "Suhu ruangan anda saat ini sejuk";
    } else if (suhu < 10)
    {
        cout << "Suhu ruangan anda saat ini dingin";
    } else {
        cout << "Suhu ruangan anda saat ini panas";
    }
    
    
}