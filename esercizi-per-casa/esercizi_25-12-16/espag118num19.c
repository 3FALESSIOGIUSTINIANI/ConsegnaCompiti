#include <stdio.h>

int main() {
    int a, b;
    int rispostaUtente;
    int somma;

    printf("Inserisci il primo numero: ");
    scanf("%d", &a);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);

    somma = a + b;

    printf("Inserisci il risultato della somma: ");
    scanf("%d", &rispostaUtente);

    if (rispostaUtente == somma) {
        printf("Bravo, hai indovinato al primo tentativo.\n");
    } else {
        printf("Hai sbagliato, prova ancora.\n");
        printf("Inserisci di nuovo il risultato della somma: ");
        scanf("%d", &rispostaUtente);

        if (rispostaUtente == somma) {
            printf("Bravino, hai indovinato al secondo tentativo.\n");
        } else {
            printf("Ti serve un ripasso di matematica.\n");
        }
    }

    return 0;
}