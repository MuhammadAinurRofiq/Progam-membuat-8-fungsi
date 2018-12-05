#include <iostream>
#include <conio.h>

using namespace std;

int jumlah ()
{
    int a,b;
    cout<< "\n #PRNJUMLAHAN# \n";
    cout<< "\nMasukkan angka pertama : "; cin>>a;
    cout<< "Masukkan angka kedua : "; cin>>b;
    cout<< "Hasil : " <<a+b <<endl;
}

int kurang ()
{
    int a,b;
    cout<< "\n #PENGURANGAN# \n";
    cout<< "\nMasukkan angka pertama : "; cin>>a;
    cout<< "Masukkan angka kedua : "; cin>>b;
    cout<< "Hasil : " <<a-b <<endl;
}

int kali ()
{
    int a,b;
    cout<< "\n #PERKALIAN# \n";
    cout<< "\nMasukkan angka pertama : "; cin>>a;
    cout<< "Masukkan angka kedua : "; cin>>b;
    cout<< "Hasil : " <<a*b <<endl;
}
int bagi ()
{
    int a,b;
    cout<< "\n #PEMBAGIAN# \n";
    cout<< "\nMasukkan angka pertama : "; cin>>a;
    cout<< "Masukkan angka kedua : "; cin>>b;
    cout<< "Hasil : " <<a/b <<endl;
}

int main ()
{
    jumlah ();
    kurang ();
    kali ();
    bagi ();
    getch();
    return 0;
}
