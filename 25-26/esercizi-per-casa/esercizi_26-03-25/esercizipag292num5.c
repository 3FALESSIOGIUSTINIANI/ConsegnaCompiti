#include <stdio.h>

#define MAX_DIM 20

int main() {
    int v[MAX_DIM] = {10, 20, 30, 40, 50};
    int dim = 5;
    int nuovo, i, pos;

    printf("Vettore: ");
    for(i=0; i<dim; i++) printf("%d ", v[i]);
    
    printf("\nInserisci un numero da inserire: ");
    scanf("%d", &nuovo);

    pos = 0;
    while (pos < dim && v[pos] < nuovo) {
        pos++;
    }

    for (i = dim; i > pos; i--) {
        v[i] = v[i-1];
    }
    
    v[pos] = nuovo;
    dim++;

    printf("Nuovo vettore: ");
    for (i = 0; i < dim; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}