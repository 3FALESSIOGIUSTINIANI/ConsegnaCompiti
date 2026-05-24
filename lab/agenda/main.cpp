#include <iostream>
#include "RUBRICA.H"
using namespace std;

int main() {
   GestoreContattiABC* gestore = new GestoreRAMOrdinata();
    int scelta;

    do {
        cout << "\n====== MENU RUBRICA (CRUD) ======\n";
        cout << "1. CREATE  - Inserisci nuovo contatto\n";
        cout << "2. SEARCH  - Ricerca contatto per cognome\n";
        cout << "3. READ    - Visualizza tutti i contatti\n";
        cout << "4. UPDATE  - Modifica contatto\n";
        cout << "5. DELETE  - Elimina contatto\n";
        cout << "0. Esci\n";
        cout << "Scelta: ";
        cin >> scelta;

        switch (scelta) {
            case 1: gestore->aggiungi_contatto();  break;
            case 2: gestore->ricerca_binaria();    break;
            case 3: gestore->visualizza_tutti();   break;
            case 4: gestore->modifica_contatto();  break;
            case 5: gestore->elimina_contatto();   break;
            case 0:
                cout << "Uscita dal programma." << endl;
                break;
            default:
                cout << "Scelta non valida!" << endl;
        }
    } while (scelta != 0);
    delete gestore;
    return 0;
}