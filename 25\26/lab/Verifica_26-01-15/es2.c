
#include <stdio.h>
 int main(){
char cibo[3];
int prezzo[3];
int scibo;
cibo[0]="Acqua";
cibo[1]="Patatine";
cibo[2]="Cioccolata";
prezzo[0]=1;
prezzo[1]=2;
prezzo[2]=3;
for(int i=0;i<3;i++){
    printf("Il prezzo di %s è %d euro\n",cibo[i],prezzo[i]);
}
printf("Scegli un cibo (1-3): ");
scanf(" %d", &scibo);
switch (scibo) {
    case 1:
        printf("Hai scelto %s, il prezzo è %d euro\n", cibo[0], prezzo[0]);
        break;
    case 2:
        printf("Hai scelto %s, il prezzo è %d euro\n", cibo[1], prezzo[1]);
        break;
    case 3:
        printf("Hai scelto %s, il prezzo è %d euro\n", cibo[2], prezzo[2]);
        break;
    default:
        printf("Scelta non valida\n");
        break;
}









}