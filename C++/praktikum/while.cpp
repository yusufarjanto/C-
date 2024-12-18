#include <iostream>
using namespace std;

int main() {
    int a = 0;
    while (a>=-10)
    {
        a-=1;
        cout << "Nilai a: " << a << endl;
    }
    cout<<endl;
    do
    {
        a+=1;
        cout << "Nilai a: " << a << endl;
    } while (a<=10);
}