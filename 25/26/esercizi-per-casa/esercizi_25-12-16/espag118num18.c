#include <stdio.h>

int main() {
    int settimane;
    int lenzuola;
    float costoTotale = 100;

    printf("Inserisci il numero di settimane di soggiorno (1 o 2): ");
    scanf("%d", &settimane);

    printf("Vuoi il supplemento di lenzuola? (1 = si, 0 = no): ");
    scanf("%d", &lenzuola);
    
    if (settimane == 1) {
        costoTotale = costoTotale + 600;
    } else if (settimane == 2) {
        costoTotale = costoTotale + 1100;
    } else {
        printf("Numero di settimane non valido\n");
        return 0;
    }

    if (lenzuola == 1) {
        costoTotale = costoTotale + (20 * settimane);
    }

    printf("Il costo totale del soggiorno è: %.2f euro\n", costoTotale);

    return 0;
}