#include<stdio.h>
#include<string.h>
#include<time.h>

int main () {
	int choixDuJoueur;


printf("choisissez ou aller, (1)  foret hantee par une sorciere (2)  manoir hante d'un ancien invocateur : ");
scanf("%d", &choixDuJoueur);
	if(choixDuJoueur == 1)
		{
	printf("vous prenez le chemin en direction de la foret \n ");
	printf("...\n");
	printf("vous arrivez a la foret une etrange ambiance en sort. ");
}
	if (choixDuJoueur == 2)
{
	printf("vous prenez le chemin en direction du manoir \n ");
	printf("...\n");
	printf("vous entendez des bruits mystiques et paranormaux a l'intérieur, vous y entrez quand meme. ");
}
return 0;
}