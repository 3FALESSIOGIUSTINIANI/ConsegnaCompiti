#include <stdio.h>
#include <string.h>

#define N 5
#define MAX_LEN 50

int main() {
    char cognomi[N][MAX_LEN] = {"Rossi", "Bianchi", "Verdi", "Esposito", "Brambilla"};
    char temp[MAX_LEN];
    int i, j;

    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (strcmp(cognomi[j], cognomi[j+1]) > 0) {
                strcpy(temp, cognomi[j]);
                strcpy(cognomi[j], cognomi[j+1]);
                strcpy(cognomi[j+1], temp);
            }
        }
    }

    printf("Elenco in ordine alfabetico:\n");
    for (i = 0; i < N; i++) {
        printf("- %s\n", cognomi[i]);
    }

    return 0;
}