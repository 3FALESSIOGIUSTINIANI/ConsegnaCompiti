#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v1[100];
    int contatori[10] = {0};
    srand(time(NULL));
    for(int i = 0; i < 100; i++) {
        v1[i] = (rand() % 100) + 1;
        int index = v1[i] / 10;
        if(index == 10) {
            index = 9;
        }
        contatori[index]++;
    }
    printf("Conteggio dei numeri generati raggruppati:\n");
    for(int i = 0; i < 10; i++) {
        if(i == 9) {
            printf("Tra 90 e 100: %d\n", contatori[i]);
        } else {
            printf("Tra %d e %d: %d\n", i * 10, (i * 10) + 9, contatori[i]);
        }
    }
    return 0;
}