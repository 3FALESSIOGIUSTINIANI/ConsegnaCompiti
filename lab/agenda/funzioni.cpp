#include "RUBRICA.H"
using namespace std;



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



int i=0;

void aggiungi_contatto(){
cout<<"inserisci il nome il cognome e il numero di telefono del nuovo contatto: ";
cin>>rubrica[numero_contatti].nome;
cin>>rubrica[numero_contatti].cognome;
cin>>rubrica[numero_contatti].numtel;
while (i >= 0 && rubrica[i].cognome > [numero_contatti].cognome) {
        rubrica[i + 1] = rubrica[i];
        i--;
    }
numero_contatti++;


}
