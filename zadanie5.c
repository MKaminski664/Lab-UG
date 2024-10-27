#include <stdio.h>

int main ()
{
    char a = 0;

    printf ("Podaj dowolny znak z klawiatury aby sprawdzic czy jest w alfabecie: \n");
    scanf ("%c", &a);

    if ( a > 64 && a < 91  )
    printf ("Tak %c znajduje sie w alfabecie", a);

    else if ( a > 96 && a < 123 )
    printf ("Tak %c znajduje sie w alfabecie", a);

    else
    printf ("Nie %c nie znajduje sie w alfabecie", a);



    }
