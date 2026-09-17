#ifndef RUBRICA_H
#define RUBRICA_H

#include <iostream>
#include <string>
#include "contatto.h"
using namespace std;

class GestoreContattiABC {
public:
    virtual void aggiungi_contatto() = 0;
    virtual void ricerca_binaria() = 0;
    virtual void visualizza_tutti() = 0;
    virtual void modifica_contatto() = 0;
    virtual void elimina_contatto() = 0;
    virtual ~GestoreContattiABC() {}
};

class GestoreRAMOrdinata : public GestoreContattiABC {
protected:
    static const int max_contatti = 100;
    Contatto rubrica[max_contatti];
    int numero_contatti;
    
    void inizializza_contatti();
    
public:
    GestoreRAMOrdinata();
    
    void aggiungi_contatto() override;
    void ricerca_binaria() override;
    void visualizza_tutti() override;
    void modifica_contatto() override;
    void elimina_contatto() override;
};

class GestoreMirroredRAM : public GestoreRAMOrdinata {
private:
    string filename;
    
    void carica_da_file();
    void salva_su_file() const;
    
public:
    GestoreMirroredRAM(const string& file = "rubrica.txt");
    ~GestoreMirroredRAM();
    
    void aggiungi_contatto() override;
    void modifica_contatto() override;
    void elimina_contatto() override;
};

#endif