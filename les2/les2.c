#include <stdio.h>
#include "hello.c"

int main( void )
{
    int a;
    printf("kies een nummer -1, 2 of 3: \n");
    scanf("%d", &a);
        
    if(a<0)
    {
        printf("Voer geen negatieve getallen in");
        return(0);
    };
    if(a==2)
    {
        Hello_world();
    }
    else
    {
        printf("gekozen nummer is: %d", a);
    }
}