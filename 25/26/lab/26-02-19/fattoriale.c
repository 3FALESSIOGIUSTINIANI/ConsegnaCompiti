#include <stdio.h>
int fatt(int n){
    if (n==1 || n==0){
    return 1;
    }
    int ret=n*fatt(n-1);
return ret;
}
int main(){
    int num;
    printf("inserisci il valore di cui vuoi il fattoriale: ");
    scanf("%d",&num);
    int fatt(int num);
    long fattoriale=fatt(num);
printf("il fattoriale di %d è %d", num, fattoriale);
}