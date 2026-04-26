#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[20];
    char cognome[20];
} anagrafici;

typedef struct {
    float Acconto;
    float Saldo;
} quote;

struct associazione {
    anagrafici socio;
    quote pagamento;
};

int main() {
    struct associazione soci[5];
    int i, continua = 1;

    for (i = 0; i < 5; i++) {
        printf("\n--- Inserimento Socio %d ---\n", i + 1);
        printf("Nome: "); scanf("%s", soci[i].socio.nome);
        printf("Cognome: "); scanf("%s", soci[i].socio.cognome);
        printf("Acconto gia' versato: "); scanf("%f", &soci[i].pagamento.Acconto);
        printf("Saldo ancora dovuto: "); scanf("%f", &soci[i].pagamento.Saldo);
    }

    while (continua) {
        printf("\nVuoi registrare un nuovo pagamento? (1=Si, 0=No): ");
        scanf("%d", &continua);
        
        if (continua) {
            char cercaNome[20];
            float versamento;
            int trovato = 0;

            printf("Inserisci il nome del socio che sta pagando: ");
            scanf("%s", cercaNome);

            for (i = 0; i < 5; i++) {
                if (strcmp(soci[i].socio.nome, cercaNome) == 0) {
                    printf("Socio trovato: %s %s. Saldo attuale: %.2f\n", soci[i].socio.nome, soci[i].socio.cognome, soci[i].pagamento.Saldo);
                    printf("Inserisci importo versato: ");
                    scanf("%f", &versamento);
                    soci[i].pagamento.Acconto += versamento;
                    soci[i].pagamento.Saldo -= versamento;
                    
                    printf("Tabella aggiornata correttamente.\n");
                    trovato = 1;
                    break;
                }
            }
            if (!trovato) printf("Socio non in elenco.\n");
        }
    }

    printf("\n--- ELENCO ISCRITTI CHE DEVONO ANCORA IL SALDO ---\n");
    int tuttiInRegola = 1;
    for (i = 0; i < 5; i++) {
        if (soci[i].pagamento.Saldo > 0) {
            printf("- %s %s: deve ancora %.2f Euro\n", soci[i].socio.nome, soci[i].socio.cognome, soci[i].pagamento.Saldo);
            tuttiInRegola = 0;
        }
    }

    if (tuttiInRegola) printf("Tutti i soci hanno saldato le quote.\n");
}
