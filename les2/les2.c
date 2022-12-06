#include <stdio.h>
#include "hello.h"

int main( void )
{
    int a;
    printf("kies een nummer 1, 2 of 3: \n");
    scanf("%d", &a);
    printf("gekozen nummer is: %d", a);
    printf("\n");
    if(a<0)
    {
        printf("Voer geen negatieve getallen in ");
        return(0);
    };
    if(a==1)
    {
        printf("1 is een goeie keuze maar probeer 2!");
    }
    if(a==2)
    {
        Hello();
    }
    if(a==3)
    {
         printf("3 is een goeie keuze maar probeer 2!");
    }

}