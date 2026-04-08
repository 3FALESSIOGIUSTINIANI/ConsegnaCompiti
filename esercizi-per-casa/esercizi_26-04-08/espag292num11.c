#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    int n, i;
    char cognomi[MAX][50];
    char citta[MAX][50];
    char telefoni[MAX][20];
    int giorni[MAX];
    int mesi[MAX];

    printf("Inserisci il numero di persone: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nPersona %d\n", i + 1);
        printf("Cognome: ");
        scanf("%s", cognomi[i]);
        printf("Citta': ");
        scanf("%s", citta[i]);
        printf("Telefono: ");
        scanf("%s", telefoni[i]);
        printf("Giorno nascita: ");
        scanf("%d", &giorni[i]);
        printf("Mese nascita (1-12): ");
        scanf("%d", &mesi[i]);
    }

    char citta_cerca[50];
    printf("\nInserisci citta' per residenti nati in agosto: ");
    scanf("%s", citta_cerca);
    for (i = 0; i < n; i++) {
        if (strcmp(citta[i], citta_cerca) == 0 && mesi[i] == 8) {
            printf("%s\n", cognomi[i]);
        }
    }

    char tel_cerca[20];
    int trovato = 0;
    printf("\nInserisci numero di telefono per cercare i dati: ");
    scanf("%s", tel_cerca);
    for (i = 0; i < n; i++) {
        if (strcmp(telefoni[i], tel_cerca) == 0) {
            printf("Cognome: %s, Citta': %s, Nascita: %d/%d\n", cognomi[i], citta[i], giorni[i], mesi[i]);
            trovato = 1;
        }
    }
    if (!trovato) printf("Nessuna persona trovata con questo telefono.\n");

    char cognome_cerca[50];
    trovato = 0;
    printf("\nInserisci cognome per trovare il telefono: ");
    scanf("%s", cognome_cerca);
    for (i = 0; i < n; i++) {
        if (strcmp(cognomi[i], cognome_cerca) == 0) {
            printf("Telefono: %s\n", telefoni[i]);
            trovato = 1;
        }
    }
    if (!trovato) printf("Cognome non in elenco.\n");

    int g_corr, m_corr;
    printf("\nInserisci giorno corrente: ");
    scanf("%d", &g_corr);
    printf("Inserisci mese corrente: ");
    scanf("%d", &m_corr);
    for (i = 0; i < n; i++) {
        if (giorni[i] == g_corr && mesi[i] == m_corr) {
            printf("Buon compleanno a %s\n", cognomi[i]);
        }
    }

    return 0;
}