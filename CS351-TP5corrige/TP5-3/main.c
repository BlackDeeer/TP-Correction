/**
  * CS351 - Corrections de TP 2016-2017
  * Projet TP6-3
  * main.c
  * Eva Gerbert-Gaillard
  */
  
#include <stdio.h>
#include <stdlib.h>

#include "listeTableau.h"

#define TAILLEMAX 100

int main()
{
	int x;
	int choix = 1;

	/* declaration du tableau contenant la liste */
	element maListe[TAILLEMAX];

	creerListe(maListe);
	printf("Bienvenue dans le programme de liste chainee.\n");
	/* test switch pour pouvoir facilement tout tester */
	do {
		printf("Pour quitter : Entrez 0\n\
	Pour afficher la liste : Entrez 1\n\
	Pour inserer un element dans la liste : Entrez 2 \n\
	Pour supprimer un element dans la liste : Entrez 3 \n\
	Pour compacter la liste : Entrez 4 \n\
	Choix : ");
		scanf("%d", &choix);
		printf("\n");
		switch (choix) {
			case 1 : afficherListe(maListe);
				break;
			case 2 : 
				printf("Entrez l'element a inserer : ");
				scanf("%d", &x);
				insererElement(x, maListe);
				break;
			case 3 : 
				printf("Entrez l'indice de l'element a supprimer : ");
				scanf("%d", &x);
				supprimerElement(x, maListe);
				break;
			case 4 : 
				compacterListe(maListe);
				break;
			default : break;
		}
		printf("\n");
	}
	while (choix !=0);

	printf("\n");

	return 0;
}
