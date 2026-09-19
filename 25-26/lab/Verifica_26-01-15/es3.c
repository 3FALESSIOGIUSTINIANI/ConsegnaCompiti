#include <stdio.h>
int main(){
int somma=0;
int num;
int n=1;
for (int i=0;n!=0;i++)
{
    printf("Inserisci un numero: ");
    scanf("%d", &num);
    somma=somma+num;
    printf("Inserisci 0 se vuoi terminare: ");
    scanf("%d",&n);

}
printf("La somma dei numeri inseriti è: %d", somma);
}