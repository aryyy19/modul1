#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a;
    bool pintu = false;
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &a);

    // orang 1
    if (a % 2 == 0)
    {
        pintu = false;
    }
    else
    {
        pintu = true;
    }
    // orang 2
    if (a % 3 == 0)
    {
        pintu = !pintu;
    }
    else
    {
        pintu = pintu;
    }
    // orang 3
    if (a % 5 == 0)
    {
        pintu = !pintu;
    }
    else
    {
        pintu = pintu;
    }
    // orang 4
    if (a % 8 == 0)
    {
        pintu = !pintu;
    }
    else
    {
        pintu = pintu;
    }
    // orang 5
    if (a % 11 == 0)
    {
        pintu = !pintu;
    }
    else
    {
        pintu = pintu;
    }
    // orang 6
    if (a % 17 == 0)
    {
        pintu = !pintu;
    }
    else
    {
        pintu = pintu;
    }
    // orang 7
    if (a % 26 == 0)
    {
        pintu = !pintu;
    }
    else
    {
        pintu = pintu;
    }
    printf("Pintu dengan nomor %d: %s\n", a, pintu ? "terbuka" : "tertutup");
    return 0;
}
