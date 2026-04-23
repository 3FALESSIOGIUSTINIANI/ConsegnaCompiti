#ifndef RUBRICA_H
#define RUBRICA_H

#include <iostream>
#include <string>
using namespace std;


const int max_contatti=100;

struct contatti
{
    string nome;
    string cognome;
    string numtel;
};

int numero_contatti=0;
contatti rubrica[max_contatti];
void inizializza_contatti(){
    rubrica[0] = {"Gino",      "azzurri",   "000000000"};
    rubrica[1] = {"alice",     "bianchi",   "333333333"};
    rubrica[2] = {"pino",      "blu",       "555555555"};
    rubrica[3] = {"rino",      "cesare",    "777777777"};
    rubrica[4] = {"zeno",      "ferri",     "888888888"};
    rubrica[5] = {"valentina", "giallo",    "4444444444"};
    rubrica[6] = {"nino",      "neri",      "666666666"};
    rubrica[7] = {"finn",      "pescatori", "999999999"};
    rubrica[8] = {"mario",     "rossi",     "111111111"};
    rubrica[9] = {"luigi",     "verdi",     "222222222"};
numero_contatti=10;
}
void ricerca_sequenziale();
void aggiungi_contatto();



#endif


