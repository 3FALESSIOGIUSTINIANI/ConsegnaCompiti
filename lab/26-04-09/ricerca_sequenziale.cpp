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
rubrica[0]={"Mario", "Rossi", "111111111"};
rubrica[1]={"luigi", "verdi", "222222222"};
rubrica[2]={"alice", "bianchi", "333333333"};
rubrica[3]={"valentina", "giallo", "4444444444"};
rubrica[4]={"pino","blu","555555555"};
rubrica[5]={"nino","neri","666666666"};
rubrica[6]={"rino","cesare","777777777"};
rubrica[7]={"zeno","ferri","888888888"};
rubrica[8]={"finn","pescatori","999999999"};
rubrica[9]={"Gino","azzurri","000000000"};
numero_contatti=10;
}




void ricerca_sequenziale(){
    if (numero_contatti == 0) {
        cout << "La rubrica è vuota " << endl;
        return;
    }
    string target;
    cout<<"Inserisci il nome o il cognome della persona che si vuole cercare :";
    cin>>target;
bool trovato=false;
for (int i=0; i<numero_contatti; i++){
    if (rubrica[i].nome==target || rubrica[i].cognome==target){
    cout << "\nContatto trovato alla posizione " << i << ": \n";
            cout << "Nome: " << rubrica[i].nome << "\nCognome: " << rubrica[i].cognome << "\nTel: " << rubrica[i].numtel << endl;
            trovato = true;
        }
    }
    if (!trovato) cout<<"non è stato trovato nessun contatto con questo nome/cognome ";
}





void aggiungi_contatto(){
cout<<"inserisci il nome il cognome e il numero di telefono del nuovo contatto: ";
cin>>rubrica[numero_contatti].nome;
cin>>rubrica[numero_contatti].cognome;
cin>>rubrica[numero_contatti].numtel;
numero_contatti++;


}

int main(){
    int scelta;
    inizializza_contatti();
do {
        cout << "\n====== MENU RUBRICA ======\n";
        cout << "1. Ricerca contatto\n";
        cout << "2. Inserisci nuovo contatto\n";
        cout << "0. Esci (i dati andranno persi)\n";
        cout << "Scelta: ";
        cin >> scelta;

        switch (scelta) {
            case 1:
                ricerca_sequenziale();
                break;
            case 2:
                aggiungi_contatto();
                break;
            case 0:
                cout << "Uscita dal programma. La memoria RAM verra' liberata." << endl;
                break;
            default:
                cout << "Scelta non valida, riprova." << endl;
        }
    } while (scelta != 0);

    return 0;
}





