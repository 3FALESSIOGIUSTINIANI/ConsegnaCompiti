#include <stdio.h>
#include <math.h>
int main(){
int a;
int b;
int c;
int delta;
float x, xd;
printf("inserisci i valori di a, b e c dell'equazione per calcolare i valori di x \n");
scanf(" %d %d %d", &a ,&b, &c);
if(a!=0)
{
    delta=b*b-4*a*c;
    if(delta>0)
    {
        x=(-b+sqrt(delta))/(2*a);
        xd=(-b-sqrt(delta))/(2*a);
        printf("x puo essere uguale a: %.2f e %.2f", x,xd);
    }
    else
    {
        if(delta=0)
        {
            x=-b/(2*a);
            printf("x è uguale a %.2f", x);
        }
        else
        printf("l'equazione è impossibile");
    }
}
else
{
    printf("l'equazione non è un'equazione di secondo grado");
}



}