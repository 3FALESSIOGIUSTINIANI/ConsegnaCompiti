#include <stdio.h>
#include <string.h>

#define NUM_AGENTI 20
#define MESI 12

typedef struct {
    char nominativo[50];
    char indirizzo[100];
} Agente;

// Procedure e Funzioni
void inserisciDati(Agente a[], float f[][MESI]);
void stampaFatturatoAnnuo(Agente a[], float f[][MESI]);
void agenteTop(Agente a[], float f[][MESI]);
void totaleMensileRete(float f[][MESI]);

int main() {
    Agente agenti[NUM_AGENTI];
    float fatturato[NUM_AGENTI][MESI];
    int scelta;

    printf("--- GESTIONE RETE VENDITA AZIENDALE ---\n");
    inserisciDati(agenti, fatturato);

    do {
        printf("\nMENU OPERAZIONI:\n");
        printf("1. Visualizza dati agenti e fatturato annuo\n");
        printf("2. Visualizza agente con fatturato massimo\n");
        printf("3. Visualizza fatturato totale della rete per mese\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        switch(scelta) {
            case 1: stampaFatturatoAnnuo(agenti, fatturato); break;
            case 2: agenteTop(agenti, fatturato); break;
            case 3: totaleMensileRete(fatturato); break;
            case 0: printf("Chiusura programma...\n"); break;
            default: printf("Scelta non valida.\n");
        }
    } while(scelta != 0);
}

void inserisciDati(Agente a[], float f[][MESI]) {
    for(int i = 0; i < NUM_AGENTI; i++) {
        printf("\nAgente %d - Nominativo: ", i + 1);
        scanf(" %[^\n]s", a[i].nominativo);
        printf("Agente %d - Indirizzo: ", i + 1);
        scanf(" %[^\n]s", a[i].indirizzo);
        
        for(int j = 0; j < MESI; j++) {
            printf("  Fatturato mese %d: ", j + 1);
            scanf("%f", &f[i][j]);
        }
    }
}

void stampaFatturatoAnnuo(Agente a[], float f[][MESI]) {
    printf("\n--- RIEPILOGO ANNUO AGENTI ---\n");
    for(int i = 0; i < NUM_AGENTI; i++) {
        float totale = 0;
        for(int j = 0; j < MESI; j++) totale += f[i][j];
        printf("Agente: %s | Indirizzo: %s | Totale Annuo: %.2f\n", a[i].nominativo, a[i].indirizzo, totale);
    }
}

void agenteTop(Agente a[], float f[][MESI]) {
    float maxFatturato = -1;
    int indiceMax = 0;

    for(int i = 0; i < NUM_AGENTI; i++) {
        float totale = 0;
        for(int j = 0; j < MESI; j++) totale += f[i][j];
        
        if(totale > maxFatturato) {
            maxFatturato = totale;
            indiceMax = i;
        }
    }
    printf("\nL'agente con il fatturato piu' alto e': %s (%.2f)\n", a[indiceMax].nominativo, maxFatturato);
}

void totaleMensileRete(float f[][MESI]) {
    printf("\n--- FATTURATO TOTALE RETE PER MESE ---\n");
    for(int j = 0; j < MESI; j++) {
        float totaleMese = 0;
        for(int i = 0; i < NUM_AGENTI; i++) {
            totaleMese += f[i][j];
        }
        printf("Mese %d: %.2f totali\n", j + 1, totaleMese);
    }
}
