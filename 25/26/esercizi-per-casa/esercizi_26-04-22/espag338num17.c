#include <stdio.h>
int main() {
int matrice[5][5];
int maxriga, mincolonna, max, min;
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        printf("Inserisci un numero: ");
        scanf("%d", &matrice[i][j]);
    }
}
for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
        printf("%d ", matrice[i][j]);
    }
    printf("\n");
}
    for(int i = 0; i < 5; i++) {
        maxriga = 0;
        for(int j = 0; j < 5; j++) {
            if(matrice[i][j] > maxriga) {
                maxriga = matrice[i][j];
            }
             if (matrice[i][j] > max) {
            max = matrice[i][j];
        }
        if (matrice[i][j] < min) {
            min = matrice[i][j];
        
        }
            printf("Il numero massimo della riga %d è: %d\n", i+1, maxriga);
    }
for (int j = 0; j < 5; j++) {
    mincolonna = matrice[0][j];
    for (int i = 0; i < 5; i++) {
        if (matrice[i][j] < mincolonna) {
            mincolonna = matrice[i][j];
        }
    }
    printf("Il numero minimo della colonna %d è: %d\n", j+1, mincolonna);
}
printf("Il numero massimo della matrice è: %d\n", max);
printf("Il numero minimo della matrice è: %d\n", min);
}