#include <stdio.h>
struct libro
{
    int codice;
    int pagine;
    float costo;
};

int main() {
    float costomaggiore = 0.0;
    struct libro libri[10];

    for (int i = 0; i < 10; i++) {
        printf("Inserisci codice, pagine e costo del libro %d: ", i + 1);
        scanf("%d %d %f", &libri[i].codice, &libri[i].pagine, &libri[i].costo);
        if(libri[i].costo > costomaggiore) {
            costomaggiore = libri[i].costo;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("Il Libro %d - Codice: %d, Pagine: %d, Costo: %.2f\n ha un costo medio per pagina di %.2f:", i + 1, libri[i].codice, libri[i].pagine, libri[i].costo, libri[i].costo);
        float costomedio = libri[i].costo / libri[i].pagine;
        printf("%.2f\n", costomedio);
    }
    printf("Il libro più costoso è il libro con codice: %.2f\n", costomaggiore);


}