#include <stdio.h>
#include <string.h>

int main(){
char antwoord[40];

printf("voer een zin in: ");
fgets(antwoord, sizeof(antwoord), stdin);
printf("Jouw ingevulde zin:");
puts(antwoord);
printf("De lengte van de ingevulde zin = %zu\n",strlen(antwoord)-1);
return 0;
}