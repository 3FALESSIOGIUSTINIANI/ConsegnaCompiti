#include "RUBRICA.H"
using namespace std;

void ricerca_binaria() {
    if (numero_contatti == 0) {
        cout << "La rubrica è vuota." << endl;
        return;
    }

    string target;
    cout << "Inserisci il COGNOME da cercare: ";
    cin >> target;

    int inizio = 0;
    int fine = numero_contatti - 1;
    bool trovato = false;

    while (inizio <= fine) {
        int medio = inizio + (fine - inizio) / 2;

        if (rubrica[medio].cognome == target) {
            cout << "\nContatto trovato alla posizione " << medio << ":\n";
            cout << "Nome: " << rubrica[medio].nome << "\nCognome: " << rubrica[medio].cognome << "\nTel: " << rubrica[medio].numtel << endl;
            trovato = true;
            break;
        }
        
        if (rubrica[medio].cognome < target) {
            inizio = medio + 1;
        } else {
            fine = medio - 1;
        }
    }

    if (!trovato) {
        cout << "Nessun contatto trovato con il cognome: " << target << endl;
    }
}


int i=0;

void aggiungi_contatto() {
    if (numero_contatti >= max_contatti) {
        cout << "Errore: Rubrica piena!" << endl;
        return;
    }

    contatti nuovo;
    cout << "Inserisci nome: "; cin >> nuovo.nome;
    cout << "Inserisci cognome: "; cin >> nuovo.cognome;
    cout << "Inserisci telefono: "; cin >> nuovo.numtel;

    int i = numero_contatti - 1;
    
    while (i >= 0 && rubrica[i].cognome > nuovo.cognome) {
        rubrica[i + 1] = rubrica[i];
        i--;
    }
    
    rubrica[i + 1] = nuovo;
    numero_contatti++;
    cout << "Il contatto è stato aggiunto correttamente!" << endl;
}
