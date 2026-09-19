#include <stdio.h>
#include <string.h>

#define N 5
#define MAX_LEN 30

int main() {
    char squadre[N][MAX_LEN] = {"Juventus", "Brescia", "Inter", "Palermo", "Milan"};
    char serie[N] = {'A', 'B', 'A', 'B', 'A'};
    int punti[N] = {80, 55, 85, 40, 70};
    
    char classif_B[N][MAX_LEN];
    int dim_B = 0;
    int i, max_punti_A = -1;
    char campione[MAX_LEN];

    printf("--- SQUADRE SERIE A ---\n");
    for (i = 0; i < N; i++) {
        if (serie[i] == 'A') {
            printf("%s - Punti: %d\n", squadre[i], punti[i]);
            
            if (punti[i] > max_punti_A) {
                max_punti_A = punti[i];
                strcpy(campione, squadre[i]);
            }
        } else if (serie[i] == 'B') {
            strcpy(classif_B[dim_B], squadre[i]);
            dim_B++;
        }
    }

    printf("\n--- VETTORE CLASSIF (Solo Serie B) ---\n");
    for (i = 0; i < dim_B; i++) {
        printf("%s\n", classif_B[i]);
    }

    printf("\n--- CAMPIONE D'ITALIA ---\n");
    printf("La squadra campione di Serie A e': %s con %d punti\n", campione, max_punti_A);

    return 0;
}