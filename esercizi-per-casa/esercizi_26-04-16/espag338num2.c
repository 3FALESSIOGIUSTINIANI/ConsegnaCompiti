#include <stdio.h>

int main() {
    printf("Inserisci l'ordine della tavola pitagorica: ");
    int n;
    scanf("%d", &n);
    int matrice[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            matrice[i][j] = (i+1) * (j+1);
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
    return 0;

}