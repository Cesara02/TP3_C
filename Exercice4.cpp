#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
	// Variables
	char ch[101];
	int i;

	// Requ�te
	printf("Entrez une chaine de caractere ( maximum 100 caracteres )\n");
	gets_s(ch); // R�cup�ration de la chaine et stockage dans la variable "ch"


	for (i = 0; ch[i] != '\0'; i++) { // D�but boucle
			if (ch[i] >= 'A' && ch[i] <= 'Z') {
				ch[i] = ch[i] + 32; // Ajoute 32 pour convertir les caract�res MAJ en minuscule via table ASCII
	} // Fin boucle
}

printf("\nVoici la chaine de caractere convertie en minuscule\n%s\n", ch);
return 0;

}

/* �crivez un programme en C qui saisit une cha�ne donn� par l�utilisateur et qui
convertit les �ventuelles majuscules en minuscules */
