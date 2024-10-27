#include <stdio.h>

int main ()
{
    int a = 0;

    printf ("Podaj rok aby sprawdzic czy jest przestepny: \n");
    scanf ("%d", &a);

    int b = a%4;

    if ( b == 0 )
    printf ("Tak rok %d jest przestepny", a);

    else
    printf ("Rok %d nie jest przestepny", a);
    }
