#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int matrice[4][4];
	int i, j;
	srand(time(NULL));

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			matrice[i][j] = rand() % 2;
		}
	}

	printf("Matrice generata:\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", matrice[i][j]);
		}
		printf("\n");
	}

	int uguali = 1;
	int count_precedente = -1;
	for (i = 0; i < 4; i++) {
		int count = 0;
		for (j = 0; j < 4; j++) {
			if (matrice[i][j] == 1) count++;
		}
		if (i > 0 && count != count_precedente) {
			uguali = 0;
			break;
		}
		count_precedente = count;
	}

	if (uguali) {
		printf("Ogni riga ha lo stesso numero di 1 della precedente.\n");
	} else {
		printf("Non tutte le righe hanno lo stesso numero di 1 della precedente.\n");
	}
}
