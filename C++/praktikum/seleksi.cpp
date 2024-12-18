#include <iostream>
using namespace std;

int main() {
    int nilai1,nilai2;
    char ya;
    do {
    cout << "1. Buah\n";
    cout << "2. Snack\n";
    cout << "3. Minuman\n";
    cout << "4. Mie\n";
    cout << "Pilih: ";
    cin >> nilai1;

    switch (nilai1)
    {
    case 1:
        cout<<"Kamu memilih buah\n";
        cout << "1. Buah\n";
        cout << "2. Snack\n";
        cout << "3. Minuman\n";
        cout << "4. Mie\n";
        cout << "Pilih: ";
        cin >> nilai2;

        if (nilai2 ==1)
        {
            cout << "Kamu memilih buah\n";
        } else if (nilai2 ==2)
        {
            cout << "Kamu memilih Snack\n";
        } else if (nilai2 ==3)
        {
            cout << "Kamu memilih Minuman\n";
        } else if (nilai2 ==4)
        {
            cout << "Kamu memilih Mie\n";
        } else 
        {
            cout<<"Anda tidak memilih salah satu pilihan yang ada diatas!\n";
        }
        

        break;
    case 2:
        cout<<"Kamu memilih Snack\n";
        cout << "1. Buah\n";
        cout << "2. Snack\n";
        cout << "3. Minuman\n";
        cout << "4. Mie\n";
        cout << "Pilih: ";
        cin >> nilai2;

        if (nilai2 ==1)
        {
            cout << "Kamu memilih buah\n";
        } else if (nilai2 ==2)
        {
            cout << "Kamu memilih Snack\n";
        } else if (nilai2 ==3)
        {
            cout << "Kamu memilih Minuman\n";
        } else if (nilai2 ==4)
        {
            cout << "Kamu memilih Mie\n";
        } else 
        {
            cout<<"Anda tidak memilih salah satu pilihan yang ada diatas!\n";
        }
        
        break;
    case 3:
        cout<<"Kamu memilih Minuman\n";
        cout << "1. Buah\n";
        cout << "2. Snack\n";
        cout << "3. Minuman\n";
        cout << "4. Mie\n";
        cout << "Pilih: ";
        cin >> nilai2;

        if (nilai2 ==1)
        {
            cout << "Kamu memilih buah\n";
        } else if (nilai2 ==2)
        {
            cout << "Kamu memilih Snack\n";
        } else if (nilai2 ==3)
        {
            cout << "Kamu memilih Minuman\n";
        } else if (nilai2 ==4)
        {
            cout << "Kamu memilih Mie\n";
        } else 
        {
            cout<<"Anda tidak memilih salah satu pilihan yang ada diatas!\n";
        }
        break;
    case 4:
        cout<<"Kamu memilih Mie\n";
        cout << "1. Buah\n";
        cout << "2. Snack\n";
        cout << "3. Minuman\n";
        cout << "4. Mie\n";
        cout << "Pilih: ";
        cin >> nilai2;

        if (nilai2 ==1)
        {
            cout << "Kamu memilih buah\n";
        } else if (nilai2 ==2)
        {
            cout << "Kamu memilih Snack\n";
        } else if (nilai2 ==3)
        {
            cout << "Kamu memilih Minuman\n";
        } else if (nilai2 ==4)
        {
            cout << "Kamu memilih Mie\n";
        } else 
        {
            cout<<"Anda tidak memilih salah satu pilihan yang ada diatas!\n";
        }
        break;
    
    default:
        cout<<"Anda tidak memilih salah satu pilihan yang ada diatas!\n";
        break;
    }
    cout << "Ingin memilih menu lain? (y/n): ";
    cin >> ya;
    } while (ya=='y' || ya=='Y');
}