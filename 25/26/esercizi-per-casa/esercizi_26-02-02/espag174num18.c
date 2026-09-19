#include <stdio.h>

int main() {
    FILE *fp;
    int N, num, i;
    int somma_pari = 0, conta_pari = 0;
    int somma_dispari = 0, conta_dispari = 0;
    int max_pos = -1, min_neg = 1;
    int trov_pos = 0, trov_neg = 0;

    fp = fopen("Numeri.txt", "r");
    if (fp == NULL) return 1;

    fscanf(fp, "%d", &N);

    for (i = 0; i < N; i++) {
        fscanf(fp, "%d", &num);

        if (num % 2 == 0) {
            somma_pari += num;
            conta_pari++;
        } else {
            somma_dispari += num;
            conta_dispari++;
        }

        if (num > 0) {
            if (!trov_pos || num > max_pos) {
                max_pos = num;
                trov_pos = 1;
            }
        } else if (num < 0) {
            if (!trov_neg || num < min_neg) {
                min_neg = num;
                trov_neg = 1;
            }
        }
    }

    fclose(fp);

    if (conta_pari > 0) printf("%.2f\n", (float)somma_pari / conta_pari);
    if (conta_dispari > 0) printf("%.2f\n", (float)somma_dispari / conta_dispari);
    if (trov_pos) printf("%d\n", max_pos);
    if (trov_neg) printf("%d\n", min_neg);

    return 0;
}