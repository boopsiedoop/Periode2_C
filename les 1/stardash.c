#include <stdio.h>

void print_function( char letter );
int ctr;
int tel;


int main( void )
{
    char star = '*';
    char dash = '-';
  
    printf("Hello world!");

    printf("\n");
    for (tel = 0 ; tel < 10; tel++ )
    {
        print_function( star );
        print_function( dash );
        printf("\n");
    
    }
    return 0;
}

void print_function ( char letter )
{
    for ( ctr = 0; ctr < 9; ctr++) 
    {
        printf("%c", letter);
    }
}
