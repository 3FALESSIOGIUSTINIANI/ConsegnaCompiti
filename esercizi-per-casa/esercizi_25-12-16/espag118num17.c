#include <stdio.h>
#include <string.h>

int main() {
    char g1[50], g2[50], g3[50];
    int c1, c2, c3;
    int totaleCopie;
    float guadagnoPerCopia, incasso;
    char giornalePiuVenduto[50];

    printf("Inserisci il nome del primo quotidiano: ");
    scanf("%s", g1);
    printf("Inserisci le copie vendute: ");
    scanf("%d", &c1);

    printf("Inserisci il nome del secondo quotidiano: ");
    scanf("%s", g2);
    printf("Inserisci le copie vendute: ");
    scanf("%d", &c2);

    printf("Inserisci il nome del terzo quotidiano: ");
    scanf("%s", g3);
    printf("Inserisci le copie vendute: ");
    scanf("%d", &c3);

    strcpy(giornalePiuVenduto, g1);
    int maxCopie = c1;

    if (c2 > maxCopie) {
        maxCopie = c2;
        strcpy(giornalePiuVenduto, g2);
    }

    if (c3 > maxCopie) {
        maxCopie = c3;
        strcpy(giornalePiuVenduto, g3);
    }

    totaleCopie = c1 + c2 + c3;

    if (totaleCopie <= 200) {
        guadagnoPerCopia = 0.10;
    } else if (totaleCopie < 300) {
        guadagnoPerCopia = 0.20;
    } else {
        guadagnoPerCopia = 0.30;
    }

    incasso = totaleCopie * guadagnoPerCopia;

    printf("\nIl giornale più venduto è: %s", giornalePiuVenduto);
    printf("\nL'incasso totale dell'edicolante: %.2f euro\n", incasso);

    return 0;
}