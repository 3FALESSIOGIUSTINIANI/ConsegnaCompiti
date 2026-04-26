#include <stdio.h>
struct supermercato
{
    char reparti[20];
    float vendite;
    float percentuale;
};

int main() {
    struct supermercato s[5];
    for (int i = 0; i < 5; i++) {
        printf("Inserisci il nome del reparto: ");
        scanf("%s", s[i].reparti);
        printf("Inserisci le vendite: ");
        scanf("%f", &s[i].vendite);
    }
    float totaleVendite = 0;
    for (int i = 0; i < 5; i++) {
        totaleVendite += s[i].vendite;
    }
    for (int i = 0; i < 5; i++) {
        s[i].percentuale = s[i].vendite / totaleVendite * 100;
    }
    
    printf("Reparto\tVendite\tPercentuale\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\t%.2f\t%.2f%%\n", s[i].reparti, s[i].vendite, s[i].percentuale);
    }
}