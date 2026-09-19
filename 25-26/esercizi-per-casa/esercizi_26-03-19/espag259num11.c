#include <stdio.h>

int main() {
    int v[10];
    int ok = 1;
    printf("Inserisci 10 numeri interi:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }
    for(int i = 0; i < 10; i += 2) {
        if(v[i] % 2 != 0) {
            ok = 0;
        }
    }
    if(ok) {
        printf("In tutte le posizioni pari e' memorizzato un numero pari.\n");
    } else {
        printf("Non in tutte le posizioni pari e' memorizzato un numero pari.\n");
    }
    return 0;
}