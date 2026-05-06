#include "RUBRICA.H"
using namespace std;

// DEFINIZIONI delle variabili globali (dichiarate extern in RUBRICA.H)
int numero_contatti = 0;
Contatto rubrica[max_contatti];

void inizializza_contatti() {
    rubrica[0] = Contatto("Gino",      "azzurri",   "000000000");
    rubrica[1] = Contatto("alice",     "bianchi",   "333333333");
    rubrica[2] = Contatto("pino",      "blu",       "555555555");
    rubrica[3] = Contatto("rino",      "cesare",    "777777777");
    rubrica[4] = Contatto("zeno",      "ferri",     "888888888");
    rubrica[5] = Contatto("valentina", "giallo",    "444444444");
    rubrica[6] = Contatto("nino",      "neri",      "666666666");
    rubrica[7] = Contatto("finn",      "pescatori", "999999999");
    rubrica[8] = Contatto("mario",     "rossi",     "111111111");
    rubrica[9] = Contatto("luigi",     "verdi",     "222222222");
    numero_contatti = 10;
}

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

        if (rubrica[medio].getCognome() == target) {
            cout << "\nContatto trovato alla posizione " << medio << ":\n";
            rubrica[medio].stampa();
            trovato = true;
            break;
        }

        if (rubrica[medio].getCognome() < target) {
            inizio = medio + 1;
        } else {
            fine = medio - 1;
        }
    }

    if (!trovato) {
        cout << "Nessun contatto trovato con il cognome: " << target << endl;
    }
}

void aggiungi_contatto() {
    if (numero_contatti >= max_contatti) {
        cout << "Errore: Rubrica piena!" << endl;
        return;
    }

    string nome, cognome, numtel;
    cout << "Inserisci nome: ";    cin >> nome;
    cout << "Inserisci cognome: "; cin >> cognome;
    cout << "Inserisci telefono: "; cin >> numtel;

    Contatto nuovo(nome, cognome, numtel);  // costruttore con parametri

    int i = numero_contatti - 1;

    while (i >= 0 && rubrica[i].getCognome() > nuovo.getCognome()) {
        rubrica[i + 1] = rubrica[i];
        i--;
    }

    rubrica[i + 1] = nuovo;
    numero_contatti++;
    cout << "Il contatto è stato aggiunto correttamente!" << endl;
}
