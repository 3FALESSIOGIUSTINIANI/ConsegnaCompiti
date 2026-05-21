#include "contatto.h"
#include <iostream>
using namespace std;

Contatto::Contatto() : nome(""), cognome(""), numtel("") {}

Contatto::Contatto(string n, string c, string t)
    : nome(n), cognome(c), numtel(t) {}

string Contatto::getNome()    const { return nome; }
string Contatto::getCognome() const { return cognome; }
string Contatto::getNumtel()  const { return numtel; }

void Contatto::setNome(const string& n)    { nome = n; }
void Contatto::setCognome(const string& c) { cognome = c; }
void Contatto::setNumtel(const string& t)  { numtel = t; }

void Contatto::stampa() const {
    cout << "Nome: "     << nome
         << "  Cognome: " << cognome
         << "  Tel: "     << numtel << endl;
}
