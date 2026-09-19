#include <stdio.h>
int main() {
    int matrice[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Inserisci il valore per la posizione [%d][%d]: ", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }
    for(int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
printf("\nLa colonna o la riga con la somma più alta è: ");
    int maxSomma = 0;
    int indiceMax = 0;
    int tipo = 0; 

    for (int i = 0; i < 4; i++) {
        int sommaRiga = 0;
        for (int j = 0; j < 4; j++) {
            sommaRiga += matrice[i][j];
        }
        if (sommaRiga > maxSomma) {
            maxSomma = sommaRiga;
            indiceMax = i+1;
            tipo = 0;
        }
    }

    for (int j = 0; j < 4; j++) {
        int sommaColonna = 0;
        for (int i = 0; i < 4; i++) {
            sommaColonna += matrice[i][j];
        }
        if (sommaColonna > maxSomma) {
            maxSomma = sommaColonna;
            indiceMax = j+1;
            tipo = 1;
        }
    }

    if (tipo == 0) {
        printf("Riga %d con somma %d\n", indiceMax, maxSomma);
    } else {
        printf("Colonna %d con somma %d\n", indiceMax, maxSomma);
    }




}