#include <stdio.h>

int f(int n){
    if(n==0)return 0;
return n+f(n-1);
}

void calcolo(){
int v={2,4,10,3,1};
int c=0;
int n=5;
for(int i=0;i<n;i++){
    if(v[i]%2==0)c++;
}
}

int cerca(const int v[],int n, int x){
    for(int i=0;i<n;i++){
        if(v[i]==x) return i;
    }
    return -1;
}


void stampa(){
int v[]={3,1,4};
int n=3;
for (int i=0;i<n;i++){
    if(v[i]>2)printf("%d",v[i]);
}

}

void c(){
int v[]={3,2,2,5,7,3};
int n=4;
int c=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(v[i]==v[j])c++;
    }
}

}


int main(){
    int vcerca[]={5,2,7,2};
    int num=4;
    int x=2;
f(4);//nessuno dei valori elencati
calcolo();//conta quanti elementi sono pari
cerca(vcerca,num,x);    //ritorna 1
stampa();// stampa 3 4
c();//il valore finale di c è 2
}
