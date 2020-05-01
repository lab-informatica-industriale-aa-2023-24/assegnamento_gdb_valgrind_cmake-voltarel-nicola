// gdb1.c
// Calcola la media dei numeri dati in ingresso
// premete enter dopo ogni numero
// CTRL-D per terminare l'input
// Esempio
// 1 <enter>
// 2 <enter>
// 2 <enter>
// <CTRL>-D


#include <stdio.h>

int main()
{
	int somma = 0;
	int val;
	int numeri = 0;
	while (scanf("%d\n",&val) != EOF) {
		somma += val;
		numeri++;
	}

	double media;
	if (numeri > 0) {
		media = somma/numeri;
		printf("La media è %f\n", media);
	}

	return 0;
}