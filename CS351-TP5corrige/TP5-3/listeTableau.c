/**
  * CS351 - Corrections de TP 2016-2017
  * Projet TP6-3
  * listeTableau.c
  * Eva Gerbert-Gaillard
  */

#include "listeTableau.h"

#define FIN 		0
#define INOCCUPE 	-1

int elementLibre(liste l) {
	int select = 1;

	while (l[select].suivant != INOCCUPE) {
		select++;
	}
	return select;
}

void creerListe(liste l) {
	int select;

	l[0].suivant = FIN;
	for(select=1; select<TAILLEMAX; select++){
		l[select].suivant = INOCCUPE;
	}
}

void afficherListe(liste l) {
	int select;

	printf("valeur[indice de stockage]\n");
	select = l[0].suivant;
	while (select != FIN) {
		printf("%4d[%2d]", l[select].valeur, select);
		select = l[select].suivant;
	}
	printf("\n");
}

void insererElement(int x, liste l) {
	int select, suiv, libre;

	select 	= 0;
	suiv = l[select].suivant;

	/*Détermination de la position de l'insertion*/
	while ((suiv != FIN) && (l[suiv].valeur < x)){
		select = suiv;
		suiv = l[select].suivant;
	}

	/*Insertion*/
	libre = elementLibre(l);
	l[select].suivant = libre;
	l[libre].valeur = x;
	l[libre].suivant = suiv;

	printf("Insertion de %d OK\n", x);
}


void supprimerElement(int i, liste l) {
	int select, suiv, n;

	n=i;
	select = 0;
	suiv = l[select].suivant;

	/*Détermination de la position de la suppression (attention aux indices))*/
	while ((suiv != FIN) && (i > 1)){
		select = suiv;
		suiv = l[select].suivant;
		i--;
	}

	if ((i <= 1) && (suiv == FIN)) {
		printf("Il n'y avait pas de %d-ème élément dans la liste\n", n);
	} else {
		/*Suppression de l'élément*/
		l[select].suivant = l[suiv].suivant;
		l[suiv].suivant = INOCCUPE;
		printf("Suppression du %d-ème élément OK\n", n);
	}
}

void compacterListe(liste l) {
	int select, suiv, libre;

	select = 0;
	suiv = l[select].suivant;

	while (suiv != FIN) {

		libre = elementLibre(l); /*Trouve le premier emplacment libre*/

		if(libre < suiv){
			l[select].suivant = libre;
			l[libre].valeur =  l[suiv].valeur;
			l[libre].suivant =  l[suiv].suivant;
			l[suiv].suivant = INOCCUPE;
		}

		select = l[select].suivant;
		suiv = l[select].suivant;
	}
}
