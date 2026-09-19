#include <stdio.h>

int main() {
    int limite, numero, contatore = 0;
    

    printf("Inserisci il numero limite di inserimenti: ");
    scanf("%d", &limite);
    

    while (contatore < limite) {
        printf("Inserisci un numero intero: ");
        scanf("%d", &numero);
        contatore++;

        if (numero % 7 == 0) {
            printf("è stato trovato un numero divisibile per 7 dopo %d inserimenti.\n", contatore);
            return 0;
        }
    }
    
    printf("è stato raggiunto il limite di inserimenti (%d) senza trovare un numero divisibile per 7.\n", limite);

    return 0;
}