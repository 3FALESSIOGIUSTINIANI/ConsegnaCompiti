#include <iostream>
using namespace std;

void bubblesort(int arr[],int n){
  
for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }
}
}
int main(){
int num[] = {1, 23, 45, 2, 67, 9, 0, 15};
int n=8;
bubblesort(num, n);
cout<<"ecco l'array ordinato"<<endl;
for(int i=0;i<n; i++)
    cout<<num[i]<<"  ";
cout<<endl;

}

#include <iostream>
using namespace std;

void bubblesort(int arr[],int n){
  
for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;            }
    }
}
}
int main(){
int num[1, 23, 45, 2, 67, 9, 0,15];
int n=8;
bubblesort(num, n);
cout<<"ecco l'array ordinato";
for(int i=0;i<n; i++)
cout<<num[i]<<"  ";

}

