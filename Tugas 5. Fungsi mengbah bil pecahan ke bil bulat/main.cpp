#include <iostream>
#include <conio.h>

using namespace std;

int pembulatan ()
{
    int a,b,hasil;
    cout<< "Masukkan bilangan pembilangnya  : "; cin>>a;
    cout<< "Masukkan bilangan penyebutnya   : "; cin>>b;
    cout<< "Bentuk pecahanya adalah : \n";
    cout<< a <<endl;
    cout<< "-"<<endl;
    cout<< b <<endl;
    hasil=a/b;
    cout<< "\n Bilangan bulatnya adalah : " <<hasil <<endl;
}

int main ()
{
    pembulatan ();

    getch();
    return 0;
}
