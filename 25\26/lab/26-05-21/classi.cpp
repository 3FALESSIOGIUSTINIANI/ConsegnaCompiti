#include <iostream>

using namespace std;

class Veicolo {
public:
    virtual ~Veicolo() = default;

    void eseguiDiagnostica() const {
        cout << " INIZIO DIAGNOSTICA VEICOLO " << endl;
        
        controlloElettronica(); 
        controlloMotore();       
        controlloFreni();        
        
        cout << " FINE DIAGNOSTICA " << endl << endl;
    }

protected:

    virtual void controlloElettronica() const = 0;
    virtual void controlloMotore() const = 0;
    virtual void controlloFreni() const = 0;
};

class Automobile : public Veicolo {
protected:
    void controlloElettronica() const override { 
        cout << "[Auto] Controllo centralina di bordo: OK." << endl; 
    }
    void controlloMotore() const override { 
        cout << "[Auto] Controllo livello olio e liquido radiatore: OK." << endl; 
    }
    void controlloFreni() const override { 
        cout << "[Auto] Verifica usura pastiglie freni anteriori: OK." << endl; 
    }
};


class Moto : public Veicolo {
protected:
    void controlloElettronica() const override { 
        cout << "[Moto] Controllo fari e indicatori di direzione: OK." << endl; 
    }
    void controlloMotore() const override { 
        cout << "[Moto] Controllo tensione e lubrificazione catena: OK." << endl; 
    }
    void controlloFreni() const override { 
        cout << "[Moto] Controllo pressione circuito freno anteriore: OK." << endl; 
    }
};

class Camion : public Veicolo {
protected:
    void controlloElettronica() const override { 
        cout << "[Camion] Controllo del cronotachigrafo digitale: OK." << endl; 
    }
    void controlloMotore() const override { 
        cout << "[Camion] Controllo dei livelli di AdBlue e pressione turbo: OK." << endl; 
    }
    void controlloFreni() const override { 
        cout << "[Camion] Verifica del sistema frenante pneumatico ad aria: OK." << endl; 
    }
};

int main() {

    Veicolo* flotta[3];
    flotta[0] = new Automobile();
    flotta[1] = new Moto();
    flotta[2] = new Camion();


    for (int i = 0; i < 3; i++) {
        flotta[i]->eseguiDiagnostica();
    }


    for (int i = 0; i < 3; i++) {
        delete flotta[i];
    }

    return 0;
}