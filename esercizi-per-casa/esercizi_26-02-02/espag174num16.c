#include <stdio.h>

int main() {
    FILE *fp;
    int N, tessera, min_tessera, i;
    float spesa, totale = 0.0, min_spesa = -1.0;

    fp = fopen("Clienti.txt", "r");
    if (fp == NULL) return 1;

    fscanf(fp, "%d", &N);

    for (i = 0; i < N; i++) {
        fscanf(fp, "%d %f", &tessera, &spesa);
        totale += spesa;

        if (min_spesa == -1.0 || spesa < min_spesa) {
            min_spesa = spesa;
            min_tessera = tessera;
        }
    }

    fclose(fp);

    printf("%.2f\n", totale);
    if (N > 0) {
        printf("%d\n", min_tessera);
    }

    return 0;
}