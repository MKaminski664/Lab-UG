#include <stdio.h>

int main ()
{

    int a = 0;
    int b = 0;

    printf ("Podaj dwie liczby oddzielone przecinkiem:\n");
    scanf ("%d, %d", &a, &b);

    printf ("Suma twoich liczb wynosi: %d \n", a+b);
    printf ("Różnica twoich liczb wynosi: %d \n", a-b);
    printf ("Wynik mnożenia twoich liczb wynosi: %d \n", a*b);
    printf ("Wynik dzielenia twoich liczb wynosi: %d \n", a/b);
    printf ("Reszta z dzielenia twoich liczb wynosi: %d \n", a%b);

    }
