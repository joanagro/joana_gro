#include "stdafx.h"
#include <stdio.h>

#define MIN 2//min l.wierszy
#define MAX 20//max l.wierszy

int main() {

	printf("Autor: Joanna Grodzicka\n\nProgram wyswietla tabele, w ktorej z kazdym wierszem jest coraz mniej zer pomiedzy liczbami,\na w ostatnim nie ma zadnego.\n\n");
	printf("Podaj liczbe n (min %d, max %d): ", MIN, MAX);
	int wiersze;//liczba wierszy podawana przez uzytkownika
	while (scanf_s("%d", &wiersze) != 1 || wiersze < MIN || wiersze > MAX || getchar() != '\n')
	{
		printf("Bledna dana. Sprobuj ponownie.\n");
		printf("Podaj liczbe n (min %d, max %d)", MIN, MAX);
		while (getchar() != '\n')
			;
	}

	int tab[MAX][2 * MAX];//tablica zawierajaca liczby od 1 do 20

	int i, j;

	printf("\nOto tablica:\n\n");

	for (i = 0; i < wiersze; i++)
	{
		for (j = 0; j < 2 * wiersze; j++)
		{
			tab[i][j] = i + 1;
		}
		for (j = i + 1; j < 2 * wiersze - (i + 1); j++)
		{
			tab[i][j] = 0;
		}
	}

	for (i = 0; i < wiersze; i++)
	{
		for (j = 0; j < 2 * wiersze; j++)
		{
			printf("%2d ", tab[i][j]);
		}
		printf("\n");
	}
	printf("\n\nKoniec programu.\n");
	return 0;
}