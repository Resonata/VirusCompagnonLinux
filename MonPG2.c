#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	double euro;
	double dollar;
	printf("Programme pour convertir Euro en Dollar Américain (taux de change du 22/03/19)!");
	printf("\nDonnez le montant à convertir: ");
	scanf("%lf", &euro);
	dollar = 0.89 * euro;
	printf("\n%lf € est équivalent à %lf $\n", euro, dollar);	 
	return EXIT_SUCCESS;
}
