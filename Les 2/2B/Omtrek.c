#include <stdio.h>
#include <math.h>

void bereken_omtrek(float, float*);

int main(){
    float diameter, omtrek;

    printf("geef een getal om de omtrek van een cirkel te berekenen:");
    scanf("%f", &diameter);
    printf("het diameter van deze cirkel is: %.2f\n", diameter);
    
    bereken_omtrek(diameter, &omtrek);
    printf("De omtrek van deze cirkel is: %.2f\n", omtrek);

    return 0 ;
}

void bereken_omtrek(float dia, float *om){
    *om = (3.14*dia);
}