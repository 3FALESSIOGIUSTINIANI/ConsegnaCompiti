#include <stdio.h>
int main(){
int n;
int num;
printf("inserisci i numeri da mettere in ordine crescente \n");
scanf("%d %d",&n, &num);
if (n>num)
printf("ecco i numeri in ordine crescente: \n %d %d", num,n);
else
printf("ecco i numeri in ordine crescente: \n %d %d", n,num);
}