#include <stdio.h>

int main() {
    int v[100];
    int n, count = 0;
    printf("Inserisci la dimensione del vettore (deve essere un numero pari): ");
    scanf("%d", &n);
    if(n % 2 != 0 || n <= 0 || n > 100) {
        printf("Errore: il numero inserito non e' valido.\n");
        return 1;
    }
    printf("Inserisci %d numeri:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    for(int i = 0; i < n - 1; i++) {
        if(v[i] == v[i+1]) {
            count++;
        }
    }
    printf("Coppie di numeri uguali consecutivi: %d\n", count);
    return 0;
}