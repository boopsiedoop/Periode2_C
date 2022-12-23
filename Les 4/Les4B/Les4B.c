#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
//Danielle van der Tuin


int main(void){
    struct Persoon{
        char naam[15];
        int leeftijd;
    };

    struct Persoon *pnt1 = (struct Persoon*)
    malloc(sizeof(struct Persoon));
    int y = 1; 
    int x = 1;
    struct Persoon *pnt2;

    while (1){
    pnt2 = pnt1;
    pnt2 += (x-1);
    printf("voer een naam in. \n");
    scanf("%s", pnt2->naam);
    printf("voer een leeftijd in. \n");
    scanf("%d", &pnt2->leeftijd);

    if (y != 1){
    break;
    }

    struct Persoon *ab = pnt1;
    printf("\n");
    printf("Alle entries worden nu weergegeven: \n");

    for (int i = 0; i < x; i++){
    printf("Naam: %s\t", ab->naam);
    printf("Leeftijd: %d\n", ab->leeftijd);
    ab++;
    }

    x++;
    pnt1 = (struct Persoon*)
    realloc(pnt1, x * sizeof(struct Persoon));
    }

    if (pnt1 == 0){
    return (0);
    }
}








