#include <stdio.h>
#include <string.h>
#define NUM_BEVANDE 10

typedef struct {
    char nome[40];
    float prezzo;
} Bevanda;

int main() {
    Bevanda listino[NUM_BEVANDE] = {
        {"Coca Cola", 2.50},
        {"Fanta", 2.00},
        {"Sprite", 2.00},
        {"Acqua", 1.00},
        {"Caffè", 1.50},
        {"Thè", 2.20},
        {"Birra", 3.50},
        {"Succo", 2.80},
        {"Latte", 1.20},
        {"Cioccolata", 2.50}
    };

    for (int i = 0; i < NUM_BEVANDE; i++) {
        for(int j = 0; j < NUM_BEVANDE - 1; j++) {
            if (strcmp(listino[j].nome, listino[j + 1].nome) > 0) {
                Bevanda temp = listino[j];
                listino[j] = listino[j + 1];
                listino[j + 1] = temp;
            }
        }
    }

    printf("\nListino ordinato per nome:\n");
    printf("Nome\tPrezzo\n");
    printf("--------------------------\n");
    for (int i = 0; i < NUM_BEVANDE; i++) {
        printf("%s\t%.2f\n", listino[i].nome, listino[i].prezzo);
    }

    Bevanda listinoPerPrezzo[NUM_BEVANDE];
    for (int i = 0; i < NUM_BEVANDE; i++) {
        listinoPerPrezzo[i] = listino[i];
    }

    for (int i = 0; i < NUM_BEVANDE - 1; i++) {
        for (int j = 0; j < NUM_BEVANDE - 1 - i; j++) {
            if (listinoPerPrezzo[j].prezzo > listinoPerPrezzo[j + 1].prezzo) {
                Bevanda temp = listinoPerPrezzo[j];
                listinoPerPrezzo[j] = listinoPerPrezzo[j + 1];
                listinoPerPrezzo[j + 1] = temp;
            }
        }
    }

    printf("\nListino ordinato per prezzo:\n");
    printf("Nome\tPrezzo\n");
    printf("--------------------------\n");
    for (int i = 0; i < NUM_BEVANDE; i++) {
        printf("%s\t%.2f\n", listinoPerPrezzo[i].nome, listinoPerPrezzo[i].prezzo);
    }
}
