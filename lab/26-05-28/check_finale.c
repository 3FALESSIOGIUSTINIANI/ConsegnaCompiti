#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[20];
    char cognome[20];
    float voto;
} studente;

int max_num_studenti = 10;

void visualizza_studenti(studente studenti[], int n) {
    printf("\nEcco la lista degli studenti inseriti:\n");
    printf("NOME\tCOGNOME\tVOTO");
    for(int i = 0; i < n; i++) {
        printf("\n%s\t%s\t%.2f", studenti[i].nome, studenti[i].cognome, studenti[i].voto);
    }
    printf("\n");
}

void calcolo_media(studente studenti[], int n) {
    float mediatot = 0;
    for(int i = 0; i < n; i++) {
        mediatot += studenti[i].voto;
    }
    mediatot /= n;
    printf("\nLa media totale è: %.2f\n", mediatot);
}

void voto_maggiore_studenti_sufficienti(studente studenti[], int n) {
    int numstudente = 0;
    int numsufficienze = 0;
    float votomax = -1.0;

    for(int i = 0; i < n; i++) {
        if(votomax < studenti[i].voto) {
            votomax = studenti[i].voto;
            numstudente = i; 
        }

        if(studenti[i].voto >= 6) {
            printf("\nLo studente %s %s è sufficiente", studenti[i].nome, studenti[i].cognome);
            numsufficienze++;
        }
    }

    printf("\n\nLo studente con il voto maggiore è: %s %s con il voto %f\nGli studenti sufficienti sono %d\n",
           studenti[numstudente].nome, 
           studenti[numstudente].cognome, 
           votomax, 
           numsufficienze);
}

void ricerca_studente(studente studenti[], int n) {
    char cognome[20];
    printf("\nInserisci il cognome dello studente che vuoi cercare: ");
    scanf("%s", cognome);
    
    int inizio = 0;
    int fine = n - 1;
    
    while (inizio <= fine) {
        int centro = (inizio + fine) / 2;
        
    
        int confronto = strcmp(cognome, studenti[centro].cognome);
        
        if (confronto == 0) {
        
            printf("\n[Ricerca Binaria] Studente trovato: %s %s, Voto: %.2f\n", 
                   studenti[centro].nome, studenti[centro].cognome, studenti[centro].voto);
            return;
        }
        else if (confronto < 0) {
           
            fine = centro - 1;
        }
        else {
            
            inizio = centro + 1;
        }
    }
    
    printf("\nNessuno studente trovato con questo cognome.\n");
}

void ordina_studenti(studente studenti[], int n) {
    studente temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(studenti[j].cognome, studenti[j + 1].cognome) > 0) {
                temp = studenti[j];
                studenti[j] = studenti[j + 1];
                studenti[j + 1] = temp;
            }
        }
    }
}



int main() {
    int scelta;
    int numstudenti;
    printf("Quanti studenti vuoi inserire (max 10): ");
    scanf("%d", &numstudenti);


    while (numstudenti > 10 || numstudenti <= 0) {
        printf("Devi inserire un numero compreso tra 1 e 10: ");
        scanf("%d", &numstudenti);
    }

    studente studenti[numstudenti];

    for(int i = 0; i < numstudenti; i++) {

        printf("\nInserisci nome, cognome e voto dello studente %d (separati da spazio): ", i+1);
        scanf("%s %s %f", studenti[i].nome, studenti[i].cognome, &studenti[i].voto);
    }

    ordina_studenti(studenti, numstudenti);
    visualizza_studenti(studenti, numstudenti);
    do {
        printf("\n========== INSERISCI UNA SCELTA ==========\n");
        printf("1. Visualizza studenti\n");
        printf("2. Media totale\n");
        printf("3. Voto più alto e studenti sufficienti\n");
        printf("4. Cerca uno studente (inserendo il cognome)\n");
        printf("0. Esci dal programma\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        switch(scelta) {
            case 1: 
                visualizza_studenti(studenti, numstudenti); 
                break;
            case 2: 
                calcolo_media(studenti, numstudenti); 
                break;
            case 3: 
                voto_maggiore_studenti_sufficienti(studenti, numstudenti); 
                break;
            case 4: 
                ricerca_studente(studenti, numstudenti); 
                break;
            case 0: 
                printf("\nUscita in corso... Arrivederci!\n"); 
                break;
            default: 
                printf("\nScelta non valida! Riprova.\n"); 
                break;
        }
    } while (scelta != 0);

}