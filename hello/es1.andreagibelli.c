#include <stdio.h>
#include <stdbool.h>
int main()
{
	char nome[40], cognome[40];
	printf("inserisci il tuo nome: ");
	scanf("%s", nome);
	printf("\ninserisci il tuo cognome: ");
	scanf("%s", cognome);
	printf("\nbenvenuto, %s %s!\nGrazie per aver usato il nostro programma.\nTi auguriamo Buone Feste", nome, cognome);
	printf("\n\t   *\n\t  ***\n\t *****\n\t*******\n\t  ***\n\n\n\n\n\n");
	return 0;
}
