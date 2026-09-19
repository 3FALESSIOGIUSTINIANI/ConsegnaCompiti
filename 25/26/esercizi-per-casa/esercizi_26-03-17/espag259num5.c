#include <stdio.h>

int main() {
    int v1[100], v2[100], somma[100];
    int n;
    printf("Inserisci la dimensione dei vettori: ");
    scanf("%d", &n);
    printf("Inserisci %d numeri per il primo vettore:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &v1[i]);
    }
    printf("Inserisci %d numeri per il secondo vettore:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &v2[i]);
    }
    printf("Vettore somma:\n");
    for(int i = 0; i < n; i++) {
        somma[i] = v1[i] + v2[i];
        printf("%d ", somma[i]);
    }
    printf("\n");
    return 0;
}