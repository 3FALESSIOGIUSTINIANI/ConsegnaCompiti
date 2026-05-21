#ifndef RUBRICA_H
#define RUBRICA_H

#include <iostream>
#include "contatto.h"
using namespace std;

const int max_contatti = 100;

extern int numero_contatti;
extern Contatto rubrica[max_contatti];

void inizializza_contatti();
void aggiungi_contatto();
void ricerca_binaria();

#endif
