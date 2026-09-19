#include <stdio.h>
float main() {
    float a[10][10];
    float b[10][10];
    float c[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            c[i][j] = a[i][j] + b[i][j];//non ho inizializzato a e b, quindi c conterrà valori indefiniti
        }
        for(int j = 0; j < 10; j++) {
            printf("%1.0f\t", c[i][j]); 
        }
        printf("\n");
    }
}