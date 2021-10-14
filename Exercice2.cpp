#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()	{

	// Variables
	char chaine[100];
	char lettre;
	int i, position = 0;

	// Requête 
	printf("Ecrivez une chaine des caractere: ");
	gets_s(chaine);

	printf("Ecrivez une lettre a retrouver: ");
	gets_s(lettre);

	while (lettre != chaine) do {
		position++;
	}

	printf("Le caractere %c se trouve a la %d position.", lettre, position);
	printf("\n");

	return 0;
}


/* Écrivez un programme qui cherche la première occurrence d'un caractère (donné par
l’utilisateur) dans une chaîne (donnée par l’utilisateur) en partant de la droite.
Ex : chaine entrée : « le langage C est un langage extraordinaire » et le caractère à
rechercher est le ‘a’
Le résultat attendu à l’écran est le suivant :
« Le caractère a se trouve à la position 4 à partir de la droite »
*/

