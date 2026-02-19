#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Inserisci un numero: ";
    cin >> numero;
   if (numero <= -5 || numero >= 10) {
        cout << "Il dato e' fuori dall'intervallo. \n";
    } else {
        cout << "OK" << std::endl;
    }

}