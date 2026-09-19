#include <stdio.h>

int main() {
    int v[100];
    int n, ordinato = 1;
    printf("Inserisci la dimensione dell'array: ");
    scanf("%d", &n);
    printf("Inserisci %d numeri interi:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    for(int i = 1; i < n; i++) {
        if(v[i] <= v[i-1]) {
            ordinato = 0;
        }
    }
    if(ordinato) {
        printf("L'array e' ordinato in modo crescente.\n");
    } else {
        printf("L'array non e' ordinato in modo crescente.\n");
    }
    return 0;
}