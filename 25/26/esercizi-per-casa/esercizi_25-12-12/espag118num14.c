#include <stdio.h>
int main() {
    int h_in, m_in, h_out, m_out;
    int in_min, out_min, durata_min;
    int ore, minuti;
    float costo;

    printf("Inserisci l'ora in cui è entrato: ");
    scanf("%d %d", &h_in, &m_in);

    printf("Inserisci l'orario in cui è uscito: ");
    scanf("%d %d", &h_out, &m_out);


    in_min = h_in * 60 + m_in;
    out_min = h_out * 60 + m_out;

    durata_min = out_min - in_min;

    ore = durata_min / 60;
    minuti = durata_min % 60;

   
    if (durata_min <= 60) {
        costo = 2; 
    } else {
        costo = 2 + (ore - 1); 
        if (minuti > 0) {
            costo += 1; 
        }
    }

    printf("\n----- SCONTRINO PARCHEGGIO -----\n");
    printf("Entrata: %02d:%02d\n", h_in, m_in);
    printf("Uscita : %02d:%02d\n", h_out, m_out);
    printf("Durata : %d ore e %d minuti\n", ore, minuti);
    printf("Costo  : %.2f euro\n", costo);
    printf("--------------------------------\n");

    return 0;
}
