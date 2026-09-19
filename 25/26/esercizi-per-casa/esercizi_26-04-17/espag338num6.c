#include <stdio.h>
int main() {
    int matrice[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            int n =i%2;
            if(n==0)
                matrice[i][j] = 0;
            else
                matrice[i][j] = 1;
        }
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
    }