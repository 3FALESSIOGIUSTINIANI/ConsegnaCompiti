#include <stdio.h>
int main() {
int a, b, n;
printf("inserisci i due numeri tra i quali vuoi trovare i numeri pari: ");
scanf("%d %d", &a, &b);
while(a < 0 || b < 0) {
printf("inserisci due numeri positivi: ");
scanf("%d %d", &a, &b);
}
printf("i numeri pari tra %d e %d sono: ", a, b);
for (int i = a; i <= b; i++) {
    n++;
if (i % 2 == 0) {
printf("%d ", i);
}
printf("\nci sono %d numeri pari tra %d e %d\n", n, a, b);
}
    return 0;
}