#include <stdio.h>
#include <string.h>
struct esami
{
    char nomeesame[20];
    int voto;
};
int main(){

    int n=0;
    do
    {
    printf("Quanti esami vuoi inserire? (max 30) ");
    scanf("%d", &n);
    }while (n>30 || n<=0);
    
    struct esami esami[n];
    for (int i = 0; i < n; i++)
    {
        printf("Inserisci il nome dell'esame: ");
        scanf("%s", esami[i].nomeesame);
        printf("Inserisci il voto dell'esame: ");
        scanf("%d", &esami[i].voto);
    }
    printf("\nInserisci l'esame di cui vuoi sapere il voto:\n");
    char nomeesame_richiesto[20];
    scanf("%s", nomeesame_richiesto);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(esami[i].nomeesame, nomeesame_richiesto) == 0)
        {
            printf("Il voto dell'esame %s è: %d\n", esami[i].nomeesame, esami[i].voto);
            break;
        }
    }

}
