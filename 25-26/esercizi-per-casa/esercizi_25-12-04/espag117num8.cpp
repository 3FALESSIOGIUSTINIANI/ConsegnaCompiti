#include <iostream>
#include <cmath> // Necessario per il comando abs, utile per il confronto con numeri decimali
using namespace std;
int main() {
    // Dichiara tre variabili per i numeri
    double num1, num2, num3, differenza2, differenza1;

    cout << "Inserisci il primo numero: ";
    cin >> num1;

    cout << "Inserisci il secondo numero: ";
    cin >> num2;

    cout << "Inserisci il terzo numero: ";
    cin >> num3;
    differenza1 = num2 - num1;
    differenza2 = num3 - num2;
    if (abs(differenza1 - differenza2) < 0.00001) {
        cout << "I numeri sono in progressione aritmetica. \n";

        cout << "La ragione (differenza costante) e': \n"<< differenza1;
    } else {
        cout << "I numeri NON sono in progressione aritmetica. \n";
    }

}