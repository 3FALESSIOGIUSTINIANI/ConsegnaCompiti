#include <stdio.h>
int main()
{
char carattere;
printf("inserire un carattere \n");
scanf( "%c", &carattere);
if(carattere=='s')
printf("Sì");
else
{
    if(carattere=='n')
    printf("No");
    else
    printf("errore");
}



}