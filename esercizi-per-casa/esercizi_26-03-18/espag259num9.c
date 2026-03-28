#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v[20];
    int minore_di_10 = 0;
    srand(time(NULL));
    printf("Vettore generato casualmente:\n");
    for(int i = 0; i < 20; i++) {
        v[i] = (rand() % 100) + 1;
        printf("%d ", v[i]);
        if(v[i] < 10) {
            minore_di_10 = 1;
        }
    }
    printf("\n");
    if(minore_di_10) {
        printf("Esiste almeno un numero minore di 10.\n");
    } else {
        printf("Non esiste alcun numero minore di 10.\n");
    }
    return 0;
}