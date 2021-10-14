#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main()
{
	char str[BUFFER_SIZE];

	printf("------ CHAINE A L'ENVERS ------\n\n");

	printf("Saisissez une chaine de caracteres : ");
	fgets(str, BUFFER_SIZE, stdin);

	printf("La chaine a l'envers est : \n");
	for (int i = strlen(str) - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}

	printf("\n");

	return 0;
}

/* Ecrire un programme qui saisit une chaîne de caractères au clavier et qui l’affiche
dans l’ordre inverse
Exemple : PASCAL → LACSAP
*/
