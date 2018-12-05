#include <iostream>
#include <conio.h>

using namespace std;

int deret()
{
    int a=1,b,n,jumlah_deret;
    cout<< "Berapa banyak deret yang ingin anda cetak : "; cin>>n;
    cout<< "\nDeretnya adalah : "<<a<<"+";
    jumlah_deret=a;

    for (int x=0; x<n-1;x++)
    {
        b=a+2; a=b;
        cout<<b <<"+";
        jumlah_deret=jumlah_deret+b;
    }
    cout<< "\nJumlah dari semua deretnya adalah : "<<jumlah_deret;
}

int main()
{
    cout<< "# PROGAM MEMBUAT FUNGSI UNTUK MENJUMLAHKAN DERET 1+3+5+7+.....+n #"<<endl;
    cout<< "\n===================================================================\n";

    deret ();
    getch();
    return 0;
}
