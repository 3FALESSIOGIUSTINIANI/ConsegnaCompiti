#include <stdio.h>
int main() {
    float a, b, c;

    printf("Inserisci tre numeri per verificare se si puo creare un triangolo con essi: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("I numeri dati possono formare un triangolo.\n");
    } else {
        printf("I numeri dati non possono formare un triangolo.\n");
    }

    return 0;
}