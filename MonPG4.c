#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  
int main ( int argc, char** argv )
{
	int juste_prix = 0, nombreEntre = 0;
    	const int MAX = 100, MIN = 1;
	int tentative = 0;	  	

	srand(time(NULL));
	juste_prix = (rand() % (MAX - MIN + 1)) + MIN;
	printf("Bienvenue sur le jeu du juste prix ! \n");
	do {
		printf("Saisissez un nombre entre 1 et 100 :\n");
		scanf("%d", &nombreEntre);
		if (juste_prix > nombreEntre) {
		    	printf("C'est plus !\n");
			tentative = tentative + 1;
		} else if (juste_prix < nombreEntre) {
		    	printf("C'est moins !\n");
			tentative = tentative + 1; 
		} else
	    	printf ("Bravo, vous avez trouve le juste prix en %d tentative(s)!\n", tentative);
	} while (nombreEntre != juste_prix);
}
