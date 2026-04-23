#include <iostream>
#include "RUBRICA.H"

using namespace std;
int main(){
    int scelta;
    inizializza_contatti();
do {
        cout << "\n====== MENU RUBRICA ======\n";
        cout << "1. Ricerca contatto (per cognome)\n";
        cout << "2. Inserisci nuovo contatto\n";
        cout << "0. Esci (i dati andranno persi)\n";
        cout << "Scelta: ";
        cin >> scelta;

        switch (scelta) {
            case 1:
                ricerca_binaria();
                break;
            case 2:
                aggiungi_contatto();
                break;
            case 0:
                cout << "Uscita dal programma. La memoria RAM verra' liberata." << endl;
                break;
            default:
                cout << "Scelta non valida, riprova." << endl;
        }
    } while (scelta != 0);

    return 0;
}