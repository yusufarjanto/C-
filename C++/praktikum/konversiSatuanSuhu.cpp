#include <iostream>

using namespace std;

int main() {
    double celcius,fahrenheit,kelvin,reamur;

    cout << "Konversi Suhu Celcius ke Fahrenheit, Kelvin, dan Reamur" << endl;
    cout << "--------------------------------------------------------" << endl;

    cout << "Masukkan Suhu Celcius : ";
    cin >> celcius;

    fahrenheit = celcius * 9/5 + 32;
    kelvin = celcius + 273.15;
    reamur = celcius * 4/5;

    cout << "Suhu celcius " <<celcius<<" dalam Fahrenheit : " << fahrenheit << endl;
    cout << "Suhu celcius " <<celcius<<" dalam Kelvin : " << kelvin << endl;
    cout << "Suhu celcius " <<celcius<<" dalam Reamur : " << reamur << endl;
}