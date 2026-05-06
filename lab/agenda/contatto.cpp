#include "contatto.h"
#include <iostream>
using namespace std;

// Costruttore di default: inizializza tutto a stringa vuota
Contatto::Contatto() : nome(""), cognome(""), numtel("") {}

// Costruttore con parametri
Contatto::Contatto(string n, string c, string t)
    : nome(n), cognome(c), numtel(t) {}

// --- Getter ---
string Contatto::getNome()    const { return nome; }
string Contatto::getCognome() const { return cognome; }
string Contatto::getNumtel()  const { return numtel; }

// --- Setter ---
void Contatto::setNome(const string& n)    { nome = n; }
void Contatto::setCognome(const string& c) { cognome = c; }
void Contatto::setNumtel(const string& t)  { numtel = t; }

// Stampa tutte le info del contatto
void Contatto::stampa() const {
    cout << "Nome: "     << nome
         << "  Cognome: " << cognome
         << "  Tel: "     << numtel << endl;
}
