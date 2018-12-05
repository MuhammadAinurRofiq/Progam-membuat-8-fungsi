#include <iostream>
#include <conio.h>
using namespace std;

int kuadran ()
{
    int x,y;
    cout<< "Masukkan kordinat yang ingin di cek : "<<endl;
    cin>>x;
    cin>>y;
    cout<< "\nKordinat anda adalah : ("<<x <<"," <<y <<")" <<endl;
    cout<< "\nKordinat yang anda masukkan termasuk ke dalam : ";

    if (x>0 && y>0)
    {
        cout<< "Kuadran 1";
    }
    else if (x<0 && y>0)
    {
        cout<< "Kuadran 2";
    }
    else if (x<0 && y<0)
    {
        cout<< "Kuadran 3";
    }
    else
    {
        cout<< "Kuadran 4";
    }
}

int main ()
{
    cout<< "# PROGAM MEMBUAT FUNGSI UNTUK MENGETAHUI KUADRAN SUATU KORDINAT #"<<endl;
    cout<< "\n==============================================================\n"<<endl;

    kuadran ();
    getch();
    return 0;
}
