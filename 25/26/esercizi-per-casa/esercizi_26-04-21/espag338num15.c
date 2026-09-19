#include <stdio.h>
void rispetta() {
    printf("La matrice rispetta la condizione.\n");
}
void non_rispetta() {
    printf("La matrice non rispetta la condizione.\n");
}
int main() {
    int matrice[4][5];
    int rispetta_condizione = 1;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Inserisci il valore per la posizione [%d][%d]: ", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 1; j < 5; j++) { // dalla seconda colonna
            int somma = 0;
            for (int k = 0; k < j; k++) {
                somma += matrice[i][k];
            }
            if (matrice[i][j] != somma) {
                rispetta_condizione = 0;
                break;
            }
        }
        if (!rispetta_condizione) break;
    }

    if (rispetta_condizione) {
        rispetta();
    } else {
        non_rispetta();
    }
}
