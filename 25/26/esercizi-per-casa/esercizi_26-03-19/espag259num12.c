#include <stdio.h>

int main() {
    int v[100];
    int n;
    printf("Inserisci la dimensione del vettore: ");
    scanf("%d", &n);
    printf("Inserisci %d numeri:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    printf("Numeri primi presenti nel vettore:\n");
    for(int i = 0; i < n; i++) {
        int val = v[i];
        int is_prime = 1;
        if(val <= 1) {
            is_prime = 0;
        }
        for(int j = 2; j * j <= val; j++) {
            if(val % j == 0) {
                is_prime = 0;
            }
        }
        if(is_prime) {
            printf("%d ", val);
        }
    }
    printf("\n");
    return 0;
}