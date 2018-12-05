#include <iostream>
#include <conio.h>

using namespace std;

int hasil ()
{
    int nilai;
    cout<< "\nMasukkan nilai kamu : "; cin>>nilai;

    if (nilai>=90)
    {
        cout<< "\nNilai kamu A";
    }
    else if ((nilai<90) && (nilai>=75))
    {
        cout<< "\nNilai kamu B";
    }
    else if ((nilai<75) && (nilai>=60))
    {
        cout<< "\nNilai kamu C";
    }
    else if ((nilai<60) && (nilai>=45))
    {
        cout<< "\nNilai kamu D";
    }
    else if ((nilai<45) && (nilai>=30))
    {
        cout<< "\nNilai kamu E";
    }
    else if (nilai<30)
    {
        cout<< "\nNilai kamu F";
    }

}

int main ()
{
    hasil ();

    getch();
    return 0;
}
