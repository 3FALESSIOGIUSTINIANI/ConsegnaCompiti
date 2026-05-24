#ifndef RUBRICA_H
#define RUBRICA_H

#include <iostream>
#include "contatto.h"
using namespace std;

class GestoreContatti {
private:
    static const int max_contatti = 100;
    Contatto rubrica[max_contatti];
    int numero_contatti;
    
    void inizializza_contatti();

public:
    GestoreContatti();
    
    void aggiungi_contatto();
    void ricerca_binaria();
    void visualizza_tutti();
    void modifica_contatto();
    void elimina_contatto();
};

#endif