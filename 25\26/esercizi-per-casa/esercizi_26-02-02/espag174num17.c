#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, num;

    do {
        scanf("%d %d", &a, &b);
    } while (a >= b);

    do {
        num = rand() % (b - a + 100) + (a - 50);
        printf("%d\n", num);
    } while (num >= a && num <= b);

    return 0;
}