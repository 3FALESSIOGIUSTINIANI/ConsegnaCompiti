#include <stdio.h>

int main() {
    char v[100];
    int n, occurance = 0;
    char target;
    printf("Inserisci il numero di caratteri: ");
    scanf("%d", &n);
    printf("Inserisci %d caratteri:\n", n);
    for(int i = 0; i < n; i++) {
        scanf(" %c", &v[i]);
    }
    printf("Inserisci il carattere da cercare: ");
    scanf(" %c", &target);
    for(int i = 0; i < n; i++) {
        if(v[i] == target) {
            occurance++;
        }
    }
    printf("Il carattere '%c' compare %d volte.\n", target, occurance);
    return 0;
}