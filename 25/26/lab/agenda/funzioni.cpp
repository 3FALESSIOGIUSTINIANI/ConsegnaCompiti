#include "RUBRICA.H"
#include <fstream>
#include <cstdio>
using namespace std;


GestoreRAMOrdinata::GestoreRAMOrdinata() : numero_contatti(0) {
    inizializza_contatti();
}

void GestoreRAMOrdinata::inizializza_contatti() {
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

void GestoreRAMOrdinata::aggiungi_contatto() {
    if (numero_contatti >= max_contatti) {
        cout << "Errore: Rubrica piena!" << endl;
        return;
    }

    string nome, cognome, numtel;
    cout << "Inserisci nome: "; cin >> nome;
    cout << "Inserisci cognome: "; cin >> cognome;
    cout << "Inserisci telefono: "; cin >> numtel;

    Contatto nuovo(nome, cognome, numtel);

    int i = numero_contatti - 1;
    while (i >= 0 && rubrica[i].getCognome() > nuovo.getCognome()) {
        rubrica[i + 1] = rubrica[i];
        i--;
    }

    rubrica[i + 1] = nuovo;
    numero_contatti++;
    cout << "Contatto aggiunto con successo!" << endl;
}

void GestoreRAMOrdinata::ricerca_binaria() {
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
        cout << "Nessun contatto trovato con cognome: " << target << endl;
    }
}

void GestoreRAMOrdinata::visualizza_tutti() {
    if (numero_contatti == 0) {
        cout << "La rubrica è vuota." << endl;
        return;
    }
    
    cout << "\n=== RUBRICA COMPLETA (" << numero_contatti << " contatti) ===\n";
    for (int i = 0; i < numero_contatti; i++) {
        cout << i << ". ";
        rubrica[i].stampa();
    }
}

void GestoreRAMOrdinata::modifica_contatto() {
    if (numero_contatti == 0) {
        cout << "La rubrica è vuota." << endl;
        return;
    }

    string cognome;
    cout << "Inserisci il cognome del contatto da modificare: ";
    cin >> cognome;

    int pos = -1;
    for (int i = 0; i < numero_contatti; i++) {
        if (rubrica[i].getCognome() == cognome) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        cout << "Contatto non trovato." << endl;
        return;
    }

    cout << "Contatto attuale:\n";
    rubrica[pos].stampa();

    string nuovoNome, nuovoCognome, nuovoTel;
    cout << "\nInserisci nuovo nome: ";     cin >> nuovoNome;
    cout << "Inserisci nuovo cognome: ";    cin >> nuovoCognome;
    cout << "Inserisci nuovo telefono: ";   cin >> nuovoTel;

    if (nuovoCognome != cognome) {
        for (int i = pos; i < numero_contatti - 1; i++) {
            rubrica[i] = rubrica[i + 1];
        }
        numero_contatti--;

        Contatto modificato(nuovoNome, nuovoCognome, nuovoTel);
        int i = numero_contatti - 1;
        while (i >= 0 && rubrica[i].getCognome() > modificato.getCognome()) {
            rubrica[i + 1] = rubrica[i];
            i--;
        }
        rubrica[i + 1] = modificato;
        numero_contatti++;
    } else {
        rubrica[pos].setNome(nuovoNome);
        rubrica[pos].setCognome(nuovoCognome);
        rubrica[pos].setNumtel(nuovoTel);
    }

    cout << "Contatto modificato con successo!" << endl;
}

void GestoreRAMOrdinata::elimina_contatto() {
    if (numero_contatti == 0) {
        cout << "La rubrica è vuota." << endl;
        return;
    }

    string cognome;
    cout << "Inserisci il cognome del contatto da eliminare: ";
    cin >> cognome;

    int pos = -1;
    for (int i = 0; i < numero_contatti; i++) {
        if (rubrica[i].getCognome() == cognome) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        cout << "Contatto non trovato." << endl;
        return;
    }

    cout << "Eliminazione del contatto:\n";
    rubrica[pos].stampa();

    for (int i = pos; i < numero_contatti - 1; i++) {
        rubrica[i] = rubrica[i + 1];
    }
    numero_contatti--;

    cout << "Contatto eliminato con successo!" << endl;
}


GestoreMirroredRAM::GestoreMirroredRAM(const string& file) : filename(file) {
    carica_da_file();
}

GestoreMirroredRAM::~GestoreMirroredRAM() {
    salva_su_file();
}

void GestoreMirroredRAM::carica_da_file() {
    ifstream file(filename);
    
    if (!file.is_open()) {
        cout << "File '" << filename << "' non trovato. Creazione con contatti di default...\n";
        inizializza_contatti();
        salva_su_file();
        cout << "File creato con successo.\n\n";
        return;
    }

    string nome, cognome, numtel;
    numero_contatti = 0;
    
    while (file >> nome >> cognome >> numtel && numero_contatti < max_contatti) {
        rubrica[numero_contatti] = Contatto(nome, cognome, numtel);
        numero_contatti++;
    }
    
    file.close();
    cout << "Caricati " << numero_contatti << " contatti dal file.\n\n";
}

void GestoreMirroredRAM::salva_su_file() const {
    ofstream file(filename);
    
    if (!file.is_open()) {
        cerr << "Errore: impossibile aprire il file '" << filename << "' per la scrittura!" << endl;
        return;
    }
    
    for (int i = 0; i < numero_contatti; i++) {
        file << rubrica[i].getNome() << " "
             << rubrica[i].getCognome() << " "
             << rubrica[i].getNumtel() << "\n";
    }
    
    file.close();
}

void GestoreMirroredRAM::aggiungi_contatto() {
    GestoreRAMOrdinata::aggiungi_contatto();
    salva_su_file();
}

void GestoreMirroredRAM::modifica_contatto() {
    GestoreRAMOrdinata::modifica_contatto();
    salva_su_file();
}

void GestoreMirroredRAM::elimina_contatto() {
    GestoreRAMOrdinata::elimina_contatto();
    salva_su_file();
}
