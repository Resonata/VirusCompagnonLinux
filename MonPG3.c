#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
	int figure;
	double cote_carre;
	double long_rect;
	double larg_rect;
	double haut_los;
	double cote_los;
	
	printf("Programme pour calculer l'aire d'une figure!\n");
	printf("Sélectioner la figure concernée dans cette liste :\n");
	printf("		- carre (choix 1)\n");
	printf("		- rectangle(choix 2)\n");
	printf("		- losange(choix 3)\n");
	printf("Rentrez le choix voulu: ");
	scanf("%d", &figure);
	if(figure == 1) {
		printf("Rentrez le côté de votre carré (en cm): ");
		scanf("%lf", &cote_carre);
		printf("L'aire de votre carré est de : %lf cm2.\n", (cote_carre*cote_carre));
	} else if(figure == 2) {
		printf("Rentrez la longueur de votre rectangle (en cm): ");
		scanf("%lf", &long_rect);
		printf("Rentrez la largeur de votre rectangle (en cm): ");
		scanf("%lf", &larg_rect);
		printf("L'aire de votre rectangle est de : %lf cm2.\n", (long_rect*larg_rect));
	} else if(figure == 3) {
		printf("Rentrez le côté de votre losange (en cm): ");
		scanf("%lf", &cote_los);
		printf("Rentrez la hauteur de votre losange (en cm): ");
		scanf("%lf", &haut_los);
		printf("L'aire de votre losange est de : %lf cm2.\n", (cote_los*haut_los));
	} else {
		printf("La figure selectionnée n'est pas disponible pour le moment..\n");
	}
}
