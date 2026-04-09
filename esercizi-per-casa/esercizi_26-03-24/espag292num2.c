#include <stdio.h>
#include <string.h>

#define N 5
#define MAX_LEN 50

int main() {
    char nomi[N][MAX_LEN] = {"Luca", "Anna", "Zeno", "Marco", "Elena"};
    char primo[MAX_LEN], ultimo[MAX_LEN];
    int i;

    strcpy(primo, nomi[0]);
    strcpy(ultimo, nomi[0]);

    for (i = 1; i < N; i++) {
        if (strcmp(nomi[i], primo) < 0) {
            strcpy(primo, nomi[i]);
        }
        if (strcmp(nomi[i], ultimo) > 0) {
            strcpy(ultimo, nomi[i]);
        }
    }

    printf("Primo in ordine alfabetico: %s\n", primo);
    printf("Ultimo in ordine alfabetico: %s\n", ultimo);

    return 0;
}