#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
//#include <SDL.h>
 
int main(int argc, char *argv[])
{
/*	SDL_Window *window = NULL;
	
    if (SDL_Init(SDL_INIT_VIDEO) != 0) 
    {
    	SDL_Log("Erreur d'initialisation");
        exit(EXIT_FAILURE); 
    }
    
 	window = SDL_CreateWindow("Fenetre", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600,0);
 
 	if(window == NULL) {
 		SDL_Log("Erreur d'initialisation de la fenetre");
 		exit(EXIT_FAILURE);
 	}
 	
 	SDL_bool quitter = SDL_TRUE;
 	while(quitter) {
 		SDL_Event event;
 		while(SDL_WaitEvent(&event) == 1) {
 			switch(event.type) {
 				case SDL_KEYDOWN:
 					switch(event.key.keysym.sym) {
 						case SDLK_b:
 							quitter = SDL_FALSE;
 							break;
 						default:
 							break;
 					}
 				case SDL_QUIT:
 					quitter = SDL_FALSE;
 					break;
 				default:
 					break;
 			}
 		}
 	}
    SDL_Quit();*/
 	
 	int notes = 0;
 	int nombre = 0;
 	int cpt = 0;
 	char ch;
 	bool autre = true;
 	char continuer = 'n';
 	printf("Programme pour calculer une moyenne!\n");
 	while (autre == true) {
 		printf("Entrez votre note: ");
 		scanf("%d", &nombre);
 		cpt = cpt + 1;
 		notes = notes + nombre;
 		scanf("%c", &ch);
 		printf("Voulez-vous ajouter une note? (y/n)");
 		scanf("%c", &ch);
 		if(ch == continuer)
 			autre = false; 		
 	}
 	printf("Votre moyenne est de : %d \n", (notes/cpt));
 
    return EXIT_SUCCESS;
}
