#include <stdio.h>

#define MAX_DIM 20

void trova_massimo(int v[], int dim, int *max, int *pos) {
    *max = v[0];
    *pos = 0;
    for (int i = 1; i < dim; i++) {
        if (v[i] > *max) {
            *max = v[i];
            *pos = i;
        }
    }
}

void inserisci_in_pos(int v[], int *dim, int numero, int pos) {
    for (int i = *dim; i > pos; i--) {
        v[i] = v[i-1];
    }
    v[pos] = numero; 
    (*dim)++;        
}

int main() {
    int vettore[MAX_DIM] = {5, 12, 3, 25, 8};
    int dimensione = 5;
    int numero_da_inserire, val_max, posizione_max;

    printf("Vettore iniziale: ");
    for(int i=0; i<dimensione; i++) printf("%d ", vettore[i]);
    
    printf("\nInserisci il numero da aggiungere: ");
    scanf("%d", &numero_da_inserire);

    trova_massimo(vettore, dimensione, &val_max, &posizione_max);
    printf("Massimo trovato: %d in posizione: %d\n", val_max, posizione_max);

    inserisci_in_pos(vettore, &dimensione, numero_da_inserire, posizione_max);

    printf("Vettore finale: ");
    for(int i=0; i<dimensione; i++) printf("%d ", vettore[i]);
    printf("\n");

    return 0;
}