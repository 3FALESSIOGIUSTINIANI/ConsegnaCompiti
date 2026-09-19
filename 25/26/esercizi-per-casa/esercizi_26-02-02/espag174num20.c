#include <stdio.h>

int main() {
    int n1, n2, prod = 0, i;
    scanf("%d %d", &n1, &n2);
    for(i = 0; i < n2; i++) {
        prod += n1;
    }
    printf("Prodotto: %d\n", prod);
    return 0;
}