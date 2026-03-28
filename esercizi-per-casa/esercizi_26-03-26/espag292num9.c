#include <stdio.h>
#include <string.h>

#define MAX_CITTA 20
#define MAX_LEN 50

int main() {
    char citta[MAX_CITTA][MAX_LEN];
    int abitanti[MAX_CITTA];
    int n, i, j, temp_ab;
    char temp_citta[MAX_LEN];
    
    printf("Quante citta' vuoi inserire? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Nome citta' %d: ", i+1);
        scanf("%s", citta[i]);
        printf("Abitanti %d: ", i+1);
        scanf("%d", &abitanti[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (abitanti[j] > abitanti[j+1]) {
                temp_ab = abitanti[j];
                abitanti[j] = abitanti[j+1];
                abitanti[j+1] = temp_ab;
                strcpy(temp_citta, citta[j]);
                strcpy(citta[j], citta[j+1]);
                strcpy(citta[j+1], temp_citta);
            }
        }
    }
    printf("\n--- Citta' ordinate per abitanti ---\n");
    for(i=0; i<n; i++) printf("%s: %d\n", citta[i], abitanti[i]);

    char nuova_citta[MAX_LEN];
    int nuovi_ab, pos = 0;
    printf("\nInserisci nuova citta': ");
    scanf("%s", nuova_citta);
    printf("Abitanti nuova citta': ");
    scanf("%d", &nuovi_ab);
    
    while(pos < n && abitanti[pos] < nuovi_ab) pos++;
    
    for(i = n; i > pos; i--) {
        abitanti[i] = abitanti[i-1];
        strcpy(citta[i], citta[i-1]);
    }
    abitanti[pos] = nuovi_ab;
    strcpy(citta[pos], nuova_citta);
    n++;
    
    printf("\nEliminazione citta' piu' piccola (%s)...\n", citta[0]);
    for(i = 0; i < n - 1; i++) {
        abitanti[i] = abitanti[i+1];
        strcpy(citta[i], citta[i+1]);
    }
    n--;
    printf("Dati aggiornati:\n");
    for(i=0; i<n; i++) printf("%s: %d\n", citta[i], abitanti[i]);

    char citta1[MAX_CITTA][MAX_LEN];
    int n_citta1 = 0;
    
    for(i = 1; i < n; i += 2) {
        strcpy(citta1[n_citta1], citta[i]);
        n_citta1++;
    }
    
    for (i = 0; i < n_citta1 - 1; i++) {
        for (j = 0; j < n_citta1 - i - 1; j++) {
            if (strcmp(citta1[j], citta1[j+1]) > 0) {
                strcpy(temp_citta, citta1[j]);
                strcpy(citta1[j], citta1[j+1]);
                strcpy(citta1[j+1], temp_citta);
            }
        }
    }
    
    printf("\n--- VETTORE CITTA1 (Posizioni dispari, in ordine alfabetico) ---\n");
    for(i=0; i<n_citta1; i++) printf("%s\n", citta1[i]);

    return 0;
}