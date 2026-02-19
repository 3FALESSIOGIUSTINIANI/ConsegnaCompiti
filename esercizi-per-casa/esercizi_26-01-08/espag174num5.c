#include <stdio.h>

int main() {
    int X, Y, i, somma = 0;
    
    printf("Inserisci il numero Y (numero di partenza): ");
    scanf("%d", &Y);
    
    printf("Inserisci il numero X (quanti numeri successivi): ");
    scanf("%d", &X);
    
    for (i = 1; i <= X; i++) {
        int numero = Y + i;
        somma += numero * numero;
    }
    
    printf("La somma dei quadrati dei primi %d numeri successivi a %d è: %d\n", X, Y, somma);
    
    return 0;
}
