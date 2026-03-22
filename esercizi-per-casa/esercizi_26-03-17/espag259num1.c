#include <stdio.h>

int main() {
    int v[100];
    int n, indice;
    printf("Inserisci quanti numeri devi inserire: ");
    scanf("%d", &n);
    printf("Inserisci %d numeri interi:\n", n);
    for(int i = 0; i < n; i++){
    scanf("%d", &v[i]);
    }
    printf("Inserisci l'indice da raddoppiare: ");
    scanf("%d", &indice);
    if(indice >= 0 && indice < n){
        v[indice] *= 2;
    }
    printf("Vettore modificato:\n");
    for(int i = 0; i < n; i++){
    printf("%d ", v[i]);   
    }
    printf("\n");
    return 0;
}