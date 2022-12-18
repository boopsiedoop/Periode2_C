#include <stdio.h>

struct opleiding{
    char naam[15];
    int leeftijd[15];
    int instroomjaar[15];
}info;
 
int main(void){
    const int NUMBER_OF_ENTRIES = 3;
    int i; 

    struct opleiding list[NUMBER_OF_ENTRIES];

    for (i = 0; i < NUMBER_OF_ENTRIES ; i++){
        printf("voer een naam in ,\n");
        scanf("%s", list[i].naam);
        printf("voer een leeftijd in ,\n");
        scanf("%s", list[i].leeftijd);
        printf("voer het instroomjaar in ,\n");
        scanf("%s", list[i].instroomjaar);
    }

    for (i = 0; i < NUMBER_OF_ENTRIES; i++){
        printf("Name: %s", list[i].naam);
        printf("\tleeftijd: %s", list[i].leeftijd);
        printf("\tinstroomjaar: %s\n", list[i].instroomjaar);
    }
return 0;
}
 



