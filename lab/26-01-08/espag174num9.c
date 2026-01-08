#include <stdio.h>
int main() 
{
int n;
int num=1;
printf("inserisci quanti numeri vuoi raddoppiare:");
scanf("%d", &n);
while (n<0)
{
    printf("\n devi inserire un numero positivo: ");
    scanf("%d", &n);
}

for (int i = 0; i < n; i++)
{
    num=num*2;
    printf("il doppio del numero precedente è %d\n", num);
}
}