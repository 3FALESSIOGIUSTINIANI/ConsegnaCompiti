#include <stdio.h>
int main(){
int temp;
for(int i=0;i<=5;i++){
printf("Inserisci la temperatura in gradi Celsius: ");
scanf("%d", &temp);
if (temp >= 30)
{
    printf("Caldo Torrido\n");
} 
    else {
        if (temp >= 0)
{
    printf("caldo normale\n");
} 
    else{ 
        if (temp <= -10)
{
    printf("gelo polare\n");
} 
        else
{
    printf("Fa freddo\n");
}
    }
    }
}

}