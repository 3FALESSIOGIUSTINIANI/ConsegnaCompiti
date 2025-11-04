#include <stdio.h>

int main() {
    int scelta;
    float base, altezza, lato, diagM, diagm, area;

    do {
        printf("MENU:\n");
        printf("1 - Triangolo\n");
        printf("2 - Rettangolo\n");
        printf("3 - Quadrato\n");
        printf("4 - Rombo\n");
        printf("0 - Esci\n");
        printf("Scegli una figura: ");
        scanf("%d", &scelta);

        switch(scelta) {
            case 1:
                printf("Inserisci base: ");
                scanf("%f", &base);
                printf("Inserisci altezza: ");
                scanf("%f", &altezza);
                area = (base * altezza) / 2;
                printf("Area del triangolo = %.2f\n\n", area);
                break;
            case 2:
                printf("Inserisci base: ");
                scanf("%f", &base);
                printf("Inserisci altezza: ");
                scanf("%f", &altezza);
                area = base * altezza;
                printf("Area del rettangolo = %.2f\n\n", area);
                break;
            case 3:
                printf("Inserisci lato: ");
                scanf("%f", &lato);
                area = lato * lato;
                printf("Area del quadrato = %.2f\n\n", area);
                break;
            case 4:
                printf("Inserisci diagonale maggiore: ");
                scanf("%f", &diagM);
                printf("Inserisci diagonale minore: ");
                scanf("%f", &diagm);
                area = (diagM * diagm) / 2;
                printf("Area del rombo = %.2f\n\n", area);
                break;
            case 0:
                printf("Uscita dal programma.\n");
                break;
            default:
                printf("Scelta non valida!\n\n");
                break;
        }

    } while (scelta != 0);

    return 0;
}