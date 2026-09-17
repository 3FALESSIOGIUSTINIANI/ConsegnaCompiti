#include <stdio.h>

int main() {
    char v1[20];
    char v2[5];
    printf("Inserisci i 20 caratteri per il primo vettore (V1):\n");
    for(int i = 0; i < 20; i++) {
        scanf(" %c", &v1[i]);
    }
    printf("Inserisci i 5 caratteri per il secondo vettore (V2):\n");
    for(int i = 0; i < 5; i++) {
        scanf(" %c", &v2[i]);
    }
    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 5; j++) {
            if(v1[i] == v2[j]) {
                v1[i] = '*';
                break;
            }
        }
    }
    printf("Vettore V1 modificato:\n");
    for(int i = 0; i < 20; i++) {
        printf("%c ", v1[i]);
    }
    printf("\n");
    return 0;
}