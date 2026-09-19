#include <stdio.h>
#include <string.h>

int main() {
    char a1[5][30] = {"mario", "luigi", "anna", "paolo", "sara"};
    char a2[5][30] = {"giulia", "luigi", "marco", "sara", "luca"};
    char nome[30];
    int in_a1 = 0, in_a2 = 0;
    printf("Inserisci il nome di un atleta da cercare: ");
    scanf("%29s", nome);
    for(int i = 0; i < 5; i++) {
        if(strcmp(a1[i], nome) == 0) {
            in_a1 = 1;
        }
        if(strcmp(a2[i], nome) == 0) {
            in_a2 = 1;
        }
    }
    if(in_a1 && in_a2) {
        printf("L'atleta compare in entrambi i vettori.\n");
    } else if(in_a1) {
        printf("L'atleta compare solo nel vettore a1.\n");
    } else if(in_a2) {
        printf("L'atleta compare solo nel vettore a2.\n");
    } else {
        printf("L'atleta non compare in nessun vettore.\n");
    }
    return 0;
}