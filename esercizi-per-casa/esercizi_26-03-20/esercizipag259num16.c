#include <stdio.h>

int main() {
    int v[100], pari[100], dispari[100];
    int n, p = 0, d = 0;
    printf("Inserisci la dimensione del vettore: ");
    scanf("%d", &n);
    printf("Inserisci %d numeri interi:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    for(int i = 0; i < n; i++) {
        if(v[i] % 2 == 0) {
            pari[p++] = v[i];
        } else {
            dispari[d++] = v[i];
        }
    }
    printf("Vettore dei numeri pari:\n");
    for(int i = 0; i < p; i++) {
        printf("%d ", pari[i]);
    }
    printf("\n");
    printf("Vettore dei numeri dispari:\n");
    for(int i = 0; i < d; i++) {
        printf("%d ", dispari[i]);
    }
    printf("\n");
    return 0;
}