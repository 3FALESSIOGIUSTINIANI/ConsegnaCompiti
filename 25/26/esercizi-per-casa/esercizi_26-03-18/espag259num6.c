#include <stdio.h>

int main() {
    float stip[100];
    int n;
    float max = 0, min = 0;
    int primo = 1;
    printf("Inserisci il numero di dipendenti: ");
    scanf("%d", &n);
    printf("Inserisci %d stipendi:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%f", &stip[i]);
    }
    for(int i = 0; i < n; i++) {
        if(stip[i] >= 1500 && stip[i] <= 2000) {
            if(primo) {
                max = stip[i];
                min = stip[i];
                primo = 0;
            } else {
                if(stip[i] > max) {
                    max = stip[i];
                }
                if(stip[i] < min) {
                    min = stip[i];
                }
            }
        }
    }
    if(!primo) {
        printf("Stipendio maggiore (nel range): %f\nStipendio minore (nel range): %f\n", max, min);
    } else {
        printf("Nessuno stipendio e' compreso tra 1500 e 2000 euro.\n");
    }
    return 0;
}