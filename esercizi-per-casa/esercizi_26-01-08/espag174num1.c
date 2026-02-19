#include <stdio.h>
const double PI=3.14159;

int main() {
    int raggio;
    double circonferenza, area;

    for (raggio = 1; raggio <= 20; raggio++) {
        circonferenza = 2 * PI * raggio;
        area = PI * raggio * raggio;
        printf("con raggio %d la circonferenza è uguale a %.2f e l'area è uguale a  %.2f\n", raggio, circonferenza, area);
    }

    return 0;
}