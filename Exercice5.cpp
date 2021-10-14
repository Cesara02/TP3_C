#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	// Variable
	char chaine[100];
	int i;
	int j = -1;

	// Demande
	printf("Entrez une chaine de caractere\n");
	gets_s(chaine);

	//Suppression des espaces
	for (i = 0; chaine[i]; i++)
		if (chaine[i] != ' ')
			chaine[++j] = chaine[i];
	chaine[++j] = '\0';

	//Affichage phrase sans espaces
	printf("%s\n", chaine);

	return (0);
}

/* Réalisez un programme permettant de saisir une chaîne de caractères ayant
éventuellement des espaces puis de traiter cette chaîne sans espaces.
Vous afficherez cette chaîne sans espaces. */