#include <iostream>
#include <conio.h>

using namespace std;

int sederhanakan ()
{
    int a,b,c,sisa;
    cout<< "Masukkan pembilang  : "; cin>>b;
    cout<< "Masukkan penyebut   : "; cin>>c;
    cout<< "\nBentuk pecahannya adalah : "<<endl;
    cout<< " "<<b<<endl;
    cout<< " - "<<endl;
    cout<< " "<<c<<endl;

    a=b/c; sisa=b%c;
    cout<< "\nBentuk sederhananya adalah : "<<endl;
    cout<< "  " <<sisa <<endl; //2 spasi
    cout<<a << " ";
    cout<< "-"<<endl;
    cout<< "  "<<c <<endl; // 2spasi

}

int main ()
{
    cout<< "#PROGAM MEMBUAT FUNGSI MENYEDERHANAKAN PECAHAN b/c MENJADI A b/c#"<<endl;
    cout<< "\n===============================================================\n"<<endl;

    sederhanakan();
    getch();
    return 0;
}
