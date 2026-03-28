#include <stdio.h>
#include <string.h>

#define N 4
#define MAX_LEN 50

int main() {
    char titolo[N][MAX_LEN] = {"Film1", "Film2", "Film3", "Film4"};
    char regista[N][MAX_LEN] = {"Nolan", "Tarantino", "Nolan", "Spielberg"};
    float incasso[N] = {150.5, 90.0, 200.0, 110.0};
    
    char regista_input[MAX_LEN];
    int i, count_regista = 0;
    float max_incasso = -1, somma_incassi = 0;
    int pos_max = 0;

    printf("Inserisci il nome di un regista (es. Nolan): ");
    scanf("%s", regista_input);

    printf("\n--- Film di %s ---\n", regista_input);
    for (i = 0; i < N; i++) {
        if (strcmp(regista[i], regista_input) == 0) {
            printf("- %s (Incasso: %.2f)\n", titolo[i], incasso[i]);
            somma_incassi += incasso[i];
            count_regista++;
        }
        
        if (incasso[i] > max_incasso) {
            max_incasso = incasso[i];
            pos_max = i;
        }
    }

    printf("\n--- Film con maggior incasso in assoluto ---\n");
    printf("Titolo: %s | Regista: %s (Incasso: %.2f)\n", titolo[pos_max], regista[pos_max], max_incasso);

    printf("\n--- Media incassi di %s ---\n", regista_input);
    if (count_regista > 0) {
        printf("Media: %.2f\n", somma_incassi / count_regista);
    } else {
        printf("Nessun film trovato per questo regista.\n");
    }

    return 0;
}