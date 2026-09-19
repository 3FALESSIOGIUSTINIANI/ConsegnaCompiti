#include <stdio.h>
int main() {
    float tariffa;
    float peso;
    float totale;

    printf("Inserisci la tariffa del biglietto: ");
    scanf("%f", &tariffa);

    printf("Inserisci il peso del bagaglio: ");
    scanf("%f", &peso);

    if (peso <= 20) {
        totale = tariffa; 
    } else {
        float extra = peso - 20;
        totale = tariffa + (tariffa * 0.02 * extra); 
    }

    printf("Prezzo totale del biglietto: %.2f euro\n", totale);

    return 0;
}