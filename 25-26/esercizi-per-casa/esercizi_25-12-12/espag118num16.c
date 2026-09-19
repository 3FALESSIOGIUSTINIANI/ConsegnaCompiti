#include <stdio.h>
#include <string.h>
int main() {
    char classe1[50], classe2[50], classe3[50];
    int studenti1, studenti2, studenti3;
    int maxStudenti;
    char classeMax[50];
    float media;

    
    printf("Inserisci il nome della prima classe e il numero di studenti: ");
    scanf("%s %d", classe1, &studenti1);

    printf("Inserisci il nome della seconda classe e il numero di studenti: ");
    scanf("%s %d", classe2, &studenti2);

    printf("Inserisci il nome della terza classe e il numero di studenti: ");
    scanf("%s %d", classe3, &studenti3);

    maxStudenti = studenti1;
    strcpy(classeMax, classe1);

    if (studenti2 > maxStudenti) {
        maxStudenti = studenti2;
        strcpy(classeMax, classe2);
    }
    if (studenti3 > maxStudenti) {
        maxStudenti = studenti3;
        strcpy(classeMax, classe3);
    }

    media = (studenti1 + studenti2 + studenti3) / 3.0;

    printf("\nLa classe più numerosa è: %s con %d studenti\n", classeMax, maxStudenti);
    printf("Il numero medio di studenti è: %.2f\n", media);
    printf("Le classi con un numero maggiore di studenti rispetto alla media è:\n");
    if (studenti1 > media) 
    printf("%s\n", classe1);
    if (studenti2 > media) 
    printf("%s\n", classe2);
    if (studenti3 > media) 
    printf("%s\n", classe3);

    printf("Le classi con meno di 20 studenti sono:\n");
    if (studenti1 < 20) printf("%s (%d studenti)\n", classe1, studenti1);
    if (studenti2 < 20) printf("%s (%d studenti)\n", classe2, studenti2);
    if (studenti3 < 20) printf("%s (%d studenti)\n", classe3, studenti3);

    return 0;
}