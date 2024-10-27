#include <stdio.h>

int main ()
{
    int a = 0;
    int b = 0;
    int c = 0;

    printf ("Podaj trzy liczby po przecinku aby porownac\, ktora jest najwieksza: \n");
    scanf ("%d, %d, %d", &a, &b, &c);

    if (a > b && a > c)
    printf ("Najwieksza z tych liczb jest: %d \n", a);

    else if (b > a && b >c)
    printf ("Najwieksza z tych liczb jest: %d \n", b);

    else
    printf ("Najwieksza z tych liczb jest: %d \n", c);


    }
