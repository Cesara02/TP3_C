#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 1024
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()	{

	char lettre[BUFFER_SIZE];
	char chaine[BUFFER_SIZE];
	int position = 0;

	printf("Ecrivez une chaine des caractere: ");
	fgets(chaine, BUFFER_SIZE, stdin);
	printf("Ecrivez une lettre a retrouver: ");
	fgets(lettre, BUFFER_SIZE, stdin);

	if (lettre != chaine) {
		position = position + 1;
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
