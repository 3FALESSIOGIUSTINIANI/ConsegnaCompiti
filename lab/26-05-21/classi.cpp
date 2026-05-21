#include <iostream>

using namespace std;
class Veicolo {
public:

    virtual ~Veicolo() = default;

    void identifica() const {
        cout << "[Veicolo - Non Virtuale] Sono un mezzo di trasporto generico." << endl;

        virtual void identifica();
        virtual void muoviti();
        virtual void suonaClacson();
    }
   
};


class Automobile : public Veicolo {
public:


     virtual void muoviti() const {
        cout << "[Veicolo - Virtuale 1] Mi muovo in qualche modo." << endl;
    }

    virtual void suonaClacson() const {
        cout << "[Veicolo - Virtuale 2] Emetto un suono generico." << endl;
    }

    virtual int getNumeroRuote() const {
        return 0;
    }
};


int main() {
    cout << "Creazione di un oggetto Automobile gestito da un puntatore Veicolo..." << endl;

    Veicolo* mioVeicolo = new Automobile();

    mioVeicolo->identifica();
    
    cout << endl;


    mioVeicolo->muoviti();
    mioVeicolo->suonaClacson();
    cout << "[Automobile - Virtuale 3] Numero di ruote: " << mioVeicolo->getNumeroRuote() << endl;

    delete mioVeicolo;

}