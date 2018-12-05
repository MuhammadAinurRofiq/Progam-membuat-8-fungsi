#include <iostream>
#include <conio.h>

using namespace std;

int terkecil ()
{
    int a,b,c,t;
    cout<< "Masukkan angka pertama  : "; cin>>a;
    cout<< "Masukkan angka kedua    : "; cin>>b;
    cout<< "Masukkan angka ketiga   : "; cin>>c;

    if (a<b)
        t=a;
    else
        t=b;
    if (c<t)
        t=c;
    cout << "Bilangan terkecilnya adalah : " <<t <<endl;
}

int main ()
{
    cout<< "\n #PROGAM MENENTUKAN BILANGAN TERKECIL DARI 3 BILANGAN YANG DIINPUTKAN#\n";
    cout<< "=======================================================================\n";

    terkecil ();

    getch();
    return 0;
}
