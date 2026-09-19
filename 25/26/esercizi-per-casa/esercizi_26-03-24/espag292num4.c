#include <stdio.h>
#include <string.h>

#define N 4
#define LEN_CF 17

int main() {
    char cf[N][LEN_CF] = {"RSSMRA80A01H501U", "BNCGNN90B02F205T", "VRDLSN85C03D123X", "SPZFRN75D04H501Y"};
    float stipendi[N] = {1200.50, 2500.00, 1100.00, 3000.00};
    
    char cf_bassi[N][LEN_CF];
    int dim_bassi = 0;
    float somma = 0, media;
    int i, j;
    char temp[LEN_CF];

    for (i = 0; i < N; i++) somma += stipendi[i];
    media = somma / N;
    printf("Media stipendi: %.2f\n", media);

    for (i = 0; i < N; i++) {
        if (stipendi[i] < media) {
            strcpy(cf_bassi[dim_bassi], cf[i]);
            dim_bassi++;
        }
    }

    for (i = 0; i < dim_bassi - 1; i++) {
        for (j = 0; j < dim_bassi - i - 1; j++) {
            if (strcmp(cf_bassi[j], cf_bassi[j+1]) > 0) {
                strcpy(temp, cf_bassi[j]);
                strcpy(cf_bassi[j], cf_bassi[j+1]);
                strcpy(cf_bassi[j+1], temp);
            }
        }
    }

    printf("Codici fiscali sotto la media (ordinati):\n");
    for (i = 0; i < dim_bassi; i++) {
        printf("%s\n", cf_bassi[i]);
    }

    return 0;
}