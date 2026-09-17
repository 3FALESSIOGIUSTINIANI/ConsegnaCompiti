#include <stdio.h>
#include <string.h>

#define N 3
#define MAX_LEN 50

int main() {
    char tit[N][MAX_LEN] = {"Il Signore degli Anelli", "1984", "Lo Hobbit"};
    char aut[N][MAX_LEN] = {"Tolkien", "Orwell", "Tolkien"};
    int ncopie[N] = {2, 0, 5};
    
    char input_tit[MAX_LEN], input_aut[MAX_LEN];
    int i, trovato;

    printf("--- PRESTITO ---\nInserisci titolo libro: ");
    scanf("%s", input_tit); 
    trovato = 0;
    for (i = 0; i < N; i++) {
        if (strcmp(tit[i], input_tit) == 0) {
            trovato = 1;
            if (ncopie[i] > 0) {
                ncopie[i]--;
                printf("Prestito effettuato. Copie rimaste: %d\n", ncopie[i]);
            } else {
                printf("Libro non disponibile.\n");
            }
            break;
        }
    }
    if (!trovato) printf("Titolo non a catalogo.\n");

    printf("\n--- RESTITUZIONE ---\nInserisci titolo libro da restituire: ");
    scanf("%s", input_tit);
    for (i = 0; i < N; i++) {
        if (strcmp(tit[i], input_tit) == 0) {
            ncopie[i]++;
            printf("Restituzione completata. Copie attuali: %d\n", ncopie[i]);
            break;
        }
    }

    printf("\n--- RICERCA AUTORE ---\nInserisci nome autore: ");
    scanf("%s", input_aut);
    printf("Libri di %s:\n", input_aut);
    for (i = 0; i < N; i++) {
        if (strcmp(aut[i], input_aut) == 0) {
            printf("- %s (Copie disponibili: %d)\n", tit[i], ncopie[i]);
        }
    }

    return 0;
}