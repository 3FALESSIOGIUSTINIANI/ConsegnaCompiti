#include <stdio.h>
int main(){
int nh;
int n;
char risp;
printf("inserisci il numero di ore da trasformare in minuti o in secondi \n");
scanf("%d", &nh);
printf("inserire s per trasformare in secondi, m per trasformarlo in minuti \n");
scanf(" %c", &risp);
if(risp=='s')
{
    n=nh*3600;
    printf("%d ore sono uguali a %d secondi", nh, n);
}
else
{
    n=nh*60;
    printf("%d ore sono uguali a %d minuti", nh, n);
}
}