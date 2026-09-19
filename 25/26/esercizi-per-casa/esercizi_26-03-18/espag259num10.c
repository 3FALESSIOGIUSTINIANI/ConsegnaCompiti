#include <stdio.h>

int main() {
    float v[100];
    int n, insuff = 0;
    float sum = 0;
    printf("Inserisci il numero di voti: ");
    scanf("%d", &n);
    printf("Inserisci %d voti:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%f", &v[i]);
    }
    printf("Voti insufficienti:\n");
    for(int i = 0; i < n; i++) {
        if(v[i] < 6.0) {
            insuff++;
            printf("%.2f ", v[i]);
        }
        sum += v[i];
    }
    printf("\nNumero totale di voti insufficienti: %d\n", insuff);
    if(n > 0) {
        printf("Media dei voti: %.2f\n", sum / n);
    }
    return 0;
}