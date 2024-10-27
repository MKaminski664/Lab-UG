#include <stdio.h>

int main ()
{
    int a = 0;
    int b = 0;
    int c = 0;

    printf ("Uzupelnij dane aby sprawdzic czy podana data jest prawidlowa:\n");
    printf ("Podaj dzien: \n");
    scanf ("%d", &a);

    printf ("Podaj miesiac: \n");
    scanf ("%d", &b);

    printf ("Podaj rok: \n");
    scanf ("%d", &c);


    if ( b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12 && a >= 1 && a <= 31 && c < 0)
    printf ("Data %d, %d, %d jest prawidlowa\n", a, b, c);

    else if (b == 4 || b == 6 || b == 9 || b == 11 && a >= 1 && a <= 30 && c < 0)
    printf ("Data %d, %d, %d jest prawidlowa\n", a, b, c);

    else if (b == 2 && c%4 == 0 && a >= 1 && a <= 29 && c < 0)
    printf ("Data %d, %d, %d jest prawidlowa\n", a, b, c);

    else if (b == 2 && a >= 1 && a <= 28 && c < 0)
    printf ("Data %d, %d, %d jest prawidlowa\n", a, b, c);

    else
    printf ("Data %d, %d, %d jest nieprawidlowa\n", a, b, c);

    }
