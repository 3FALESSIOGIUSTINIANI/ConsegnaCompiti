#include <stdio.h>

int main() {
    int num;
    int bin[32];
    int i = 0;
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &num);
    if(num == 0) {
        printf("Rappresentazione binaria: 0\n");
        return 0;
    }
    while(num > 0) {
        bin[i++] = num % 2;
        num /= 2;
    }
    printf("Rappresentazione binaria: ");
    for(int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
    printf("\n");
    return 0;
}