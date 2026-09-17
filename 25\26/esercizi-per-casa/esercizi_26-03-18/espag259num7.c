#include <stdio.h>

int main() {
    int v[100];
    int n, sum_disp = 0, sum_pari = 0;
    printf("Inserisci la dimensione del vettore: ");
    scanf("%d", &n);
    printf("Inserisci %d numeri:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    printf("Numeri in posizioni dispari (indici 1, 3, 5...):\n");
    for(int i = 1; i < n; i += 2) {
        printf("%d ", v[i]);
        sum_disp += v[i];
    }
    printf("\nSomma posizioni dispari: %d\n", sum_disp);
    printf("Numeri in posizioni pari (indici 0, 2, 4...):\n");
    for(int i = 0; i < n; i += 2) {
        printf("%d ", v[i]);
        sum_pari += v[i];
    }
    printf("\nSomma posizioni pari: %d\n", sum_pari);
    return 0;
}