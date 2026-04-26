#include <stdio.h>
struct compito_in_classe {
    char nome[20];
    int voto;
};
int main() {
    int n, assenti = 0;
    float mediavoto = 0;
    struct compito_in_classe c;
    printf("Inserisci il numero di alunni: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Inserisci nome e voto dell'alunno: ");
        scanf("%s %d", c[i].nome, &c[i].voto);
        if (c[i].voto == 0) {
            assenti++;
            }else
        mediavoto += c[i].voto;    
    }
printf("La percentuale di studenti assenti è: %.2f%%\n", (float)assenti / n * 100);
mediavoto /= (n - assenti);
printf("La media dei voti è: %.2f\n", mediavoto);
int votomax = 0;
for (int i = 0; i < n; i++) {
    if(votomax < c[i].voto) {
        votomax = c[i].voto;
    }
}
printf("Il voto più alto è: %d dell'alunno %s\n", votomax, c[n-1].nome);
for(int i = 0; i < n; i++) {
if(c[i].voto < 6) {
 printf("L'alunno %s è insufficiente\n", c[i].nome);
}
}
}