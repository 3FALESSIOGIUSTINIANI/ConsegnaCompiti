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
    Contatto();
    Contatto(string nome, string cognome, string numtel);

    string getNome()    const;
    string getCognome() const;
    string getNumtel()  const;

    void setNome(const string& nome);
    void setCognome(const string& cognome);
    void setNumtel(const string& numtel);

    void stampa() const;
};

#endif