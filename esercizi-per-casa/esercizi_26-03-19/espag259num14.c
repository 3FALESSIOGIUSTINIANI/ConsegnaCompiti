#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v[100];
    int freq[21] = {0};
    srand(time(NULL));
    for(int i = 0; i < 100; i++) {
        v[i] = (rand() % 20) + 1;
        freq[v[i]]++;
    }
    printf("Frequenza dei numeri generati (da 1 a 20):\n");
    for(int i = 1; i <= 20; i++) {
        printf("Numero %d: %d volte\n", i, freq[i]);
    }
    return 0;
}