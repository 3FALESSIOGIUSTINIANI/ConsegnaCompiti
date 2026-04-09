#include <stdio.h>

int main() {
    int v[10] = {2, 4, 6, 8, 10, 12, 14, 16};
    int dim = 8; 
    int da_eliminare, i, pos = -1;

    printf("Vettore attuale: ");
    for(i=0; i<dim; i++) printf("%d ", v[i]);
    printf("\nInserisci numero da eliminare: ");
    scanf("%d", &da_eliminare);

    for (i = 0; i < dim; i++) {
        if (v[i] == da_eliminare) {
            pos = i;
            break;
        }
    }

    if (pos != -1) {
        for (i = pos; i < dim - 1; i++) {
            v[i] = v[i+1];
        }
        dim--;
        
        printf("Vettore aggiornato: ");
        for (i = 0; i < dim; i++) {
            printf("%d ", v[i]);
        }
        printf("\n");
    } else {
        printf("Numero non trovato.\n");
    }

    return 0;
}