#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
	int choix;
	printf("Programme pour connaître quelques valeurs importantes en physique chimie:\n");
	printf("Quelle valeur voulez-vous connaître \n") ;
	printf("	- vitesse de la lumière (choix 1);\n");
	printf("	- nombre d'Avogadro (choix 2);\n");
	printf("	- constante gravitationnelle (choix 3);\n");
	printf("	- constante de Planck (choix 4);\n");
	printf("	- masse du Soleil (choix 5);\n");
	printf("	- distance Soleil-Terre (choix 6);\n");
	printf("	- charge élémentaire (choix 7).\n");
	printf("Rentrez le choix voulu: ");
	scanf("%d", &choix);
	if(choix == 1) {
		printf("La vitesse de la lumière est égale c = à 2.99792458*10⁸ m.s^-1 .\n");
	} else if(choix == 2) {
		printf("Le nombre d'Avogadro est égal à Na = 6.02204.10²³ mol^-1 .\n");
	} else if(choix == 3) {
		printf("La constante gravitationnelle est égale à G = 6.672.1011 N.m².kg^-2 .\n");
	} else if(choix == 4) {
		printf("La constante de Planck est égale à h = 6.62617.10^-34 J.s .\n");
	} else if(choix == 5) {
		printf("La masse du Soleil est égale à 1.9891.10³⁰ kg .\n");
	} else if(choix == 6) {
		printf("La distance Soleil-Terre est égale à 149 597 870 km .\n");
	} else if(choix == 7) {
		printf("La charge élémentaire est égale à e = 1.60219.10^-19 C .\n");
	} else {
		printf("La valeur selectionnée n'est pas disponible pour le moment..\n");
	}
}
