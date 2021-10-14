#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	/* Déclarations */
	char CH[101]; /* chaîne donnée */
	char *PCH;    /* pointeur d'aide dans CH  */
	int ABC[26];  /* compteurs des différents caractères */
	int *PABC;    /* pointeur d'aide dans ABC */

   /* Saisie des données */
	printf("Entrez une ligne de texte (max.100 caracte res) :\n");
	gets_s(CH);

	/* Initialiser le tableau ABC */
	for (PABC = ABC; PABC < ABC + 26; PABC++)
		*PABC = 0;

	/* Compter les lettres */
	for (PCH = CH; *PCH; PCH++)
	{
		if (*PCH >= 'A' && *PCH <= 'Z')
			(*(ABC + (*PCH - 'A')))++; /* Attention aux parenthèses! */
		if (*PCH >= 'a' && *PCH <= 'z')
			(*(ABC + (*PCH - 'a')))++;
	}

	/* Affichage des résultats */
	/* (PABC-ABC) est le numéro de la lettre de l'alphabet. */
	printf("La chaine \"%s\" contient :\n", CH);
	for (PABC = ABC; PABC < ABC + 26; PABC++)
		if (*PABC)
			printf(" %d\tfois la lettre '%c' \n",
				*PABC, 'A' + (PABC - ABC));

	return 0;
}

/* Ecrire un programme qui saisit une chaîne de caractères au clavier et qui compte le
nombre de fois que chacune des lettres de l’alphabet et le nombre d’espaces ont été
présents dans la phrase.*/
	