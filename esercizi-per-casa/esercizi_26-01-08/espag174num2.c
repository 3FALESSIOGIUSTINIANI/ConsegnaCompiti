#include <stdio.h>
int main() {
    int n;
    printf("inserisci il numero di numeri pari e dispari che vuoi: ");
    scanf("%d", &n);
    while(n < 0) {
        printf("inserisci un numero positivo: ");
        scanf("%d", &n);
    }
    printf("i numeri pari sono: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", 2 * i);
    }
    printf("\ni numeri dispari sono: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", 2 * i + 1);
    }
    return 0;
}