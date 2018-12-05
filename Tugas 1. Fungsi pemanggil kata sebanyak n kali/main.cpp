#include <stdio.h>
#include <conio.h>

using namespace std;

int kata ()
{
    int n;
    printf ("\n Berapa kata yang ingin anda cetak ? ");
    scanf ("%d",&n);

    for (int a=1; a<=n; a++)
    {
        printf ("\n %d. ALGORITMA DAN PEMROGAMAN",a);
    }
}
int main()
{
    kata();

    getch ();
    return 0;
}
