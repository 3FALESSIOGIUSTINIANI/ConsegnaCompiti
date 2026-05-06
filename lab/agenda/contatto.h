#ifndef CONTATTO_H
#define CONTATTO_H

#include <string>
using namespace std;

class Contatto {
private:
    string nome;
    string cognome;
    string numtel;

public:
    // Costruttore di default
    Contatto();

    // Costruttore con parametri
    Contatto(string nome, string cognome, string numtel);

    // Getter
    string getNome()    const;
    string getCognome() const;
    string getNumtel()  const;

    // Setter
    void setNome(const string& nome);
    void setCognome(const string& cognome);
    void setNumtel(const string& numtel);

    // Stampa il contatto a schermo
    void stampa() const;
};

#endif
