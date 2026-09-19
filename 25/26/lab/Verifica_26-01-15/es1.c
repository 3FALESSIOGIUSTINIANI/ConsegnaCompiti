#include <stdio.h>
 int main(){
int punteggio;
printf("Inserisci il punteggio (0-100): ");
do
{
    scanf("%d", &punteggio);
    if (punteggio < 0 || punteggio > 100) {
        printf("Punteggio non valido. Inserisci un valore tra 0 e 100: ");
    }
} while (punteggio < 0 || punteggio > 100);

if (punteggio >= 90 && punteggio <= 100) {
    printf("Il tuo giudizio è Eccellente\n");
}
else if (punteggio >= 70 && punteggio < 90) {
    printf("Il tuo giudizio è Buono\n");
}
    else if (punteggio >= 50 && punteggio < 70) {
        printf("Il tuo giudizio è Sufficiente\n");
    }
    else if (punteggio < 50) {
        printf("Il tuo giudizio è Insufficiente\n");
    }







 }