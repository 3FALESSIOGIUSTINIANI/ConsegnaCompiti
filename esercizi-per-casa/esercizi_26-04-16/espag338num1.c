#include <stdio.h>  // Libreria standard per input/output (sostituisce iostream)
#include <stdlib.h> // Libreria per rand e srand
#include <time.h>   // Libreria per la gestione del tempo

int main() {
    int c=0;
    int matrice[10][10];
    srand(time(NULL)); 
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matrice[i][j] = rand() % 10;
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if(matrice[i][j] == 0) {
            c++;
            }
        }
    }
    printf("Il numero di zeri nella matrice è: %d\n", c);

}