#include <stdio.h>

int main() {
    float temp[31];
    int giorni;
    printf("Inserisci il numero di giorni del mese (es. 30 o 31): ");
    scanf("%d", &giorni);
    if(giorni <= 0 || giorni > 31) {
        printf("Numero di giorni inserito non valido.\n");
        return 1;
    }
    float sum = 0, media;
    float t_min, t_max;
    int g_min = 1, g_max = 1;
    printf("Inserisci le %d temperature registrate:\n", giorni);
    for(int i = 0; i < giorni; i++) {
        scanf("%f", &temp[i]);
        sum += temp[i];
        if(i == 0) {
            t_min = temp[i];
            t_max = temp[i];
        } else {
            if(temp[i] < t_min) {
                t_min = temp[i];
                g_min = i + 1;
            }
            if(temp[i] > t_max) {
                t_max = temp[i];
                g_max = i + 1;
            }
        }
    }
    media = sum / giorni;
    float scostamento_max = -1.0;
    int g_scostamento = 1;
    for(int i = 0; i < giorni; i++) {
        float diff = temp[i] - media;
        if(diff < 0) {
            diff = -diff; 
        }
        if(diff > scostamento_max) {
            scostamento_max = diff;
            g_scostamento = i + 1;
        }
    }
    printf("Media delle temperature del periodo: %.2f\n", media);
    printf("Giorno con temperatura minima: %d (%.2f)\n", g_min, t_min);
    printf("Giorno con temperatura massima: %d (%.2f)\n", g_max, t_max);
    printf("Giorno con maggior scostamento dalla media: %d (scostamento di %.2f)\n", g_scostamento, scostamento_max);
    return 0;
}