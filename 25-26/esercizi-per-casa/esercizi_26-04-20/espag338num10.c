#include <stdio.h>
int main() {
    int matrice[6][6];//la matrice deve essere di numero pari di righe se no l'ultima riga non avrà una riga da scambiare

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("Inserisci il valore per la posizione [%d][%d]: ", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }

    for (int i = 0; i < 6; i += 2) {
        if (i + 1 < 6) {
            for (int j = 0; j < 6; j++) {
                int temp = matrice[i][j];
                matrice[i][j] = matrice[i + 1][j];
                matrice[i + 1][j] = temp;
            }
        }
    }


    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }

}