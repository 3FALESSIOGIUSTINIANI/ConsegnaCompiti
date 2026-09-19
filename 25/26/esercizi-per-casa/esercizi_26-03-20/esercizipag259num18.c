#include <stdio.h>

int main() {
    float v[100];
    int n;
    printf("Inserisci il numero di prodotti: ");
    scanf("%d", &n);
    printf("Inserisci %d prezzi di listino:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%f", &v[i]);
    }
    printf("Prezzi aggiornati con il rincaro:\n");
    for(int i = 0; i < n; i++) {
        if(v[i] < 5.0) {
            v[i] = v[i] + (v[i] * 0.10);
        } else if(v[i] > 5.0) {
            v[i] = v[i] + (v[i] * 0.06);
        }
        printf("%.2f\n", v[i]);
    }
    return 0;
}