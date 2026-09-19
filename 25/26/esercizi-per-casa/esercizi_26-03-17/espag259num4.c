#include <stdio.h>

int main() {
    float v[100];
    int n;
    float min_val, max_val;
    printf("Inserisci il numero di premi: ");
    scanf("%d", &n);
    printf("Inserisci %d premi:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%f", &v[i]);
    }
    printf("Inserisci il valore minimo e massimo prefissati:\n");
    scanf("%f %f", &min_val, &max_val);
    printf("Premi compresi tra %f e %f:\n", min_val, max_val);
    for(int i = 0; i < n; i++) {
        if(v[i] >= min_val && v[i] <= max_val) {
            printf("%f\n", v[i]);
        }
    }
    return 0;
}