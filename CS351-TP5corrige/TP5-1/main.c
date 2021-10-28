/**
  * CS351 - Corrections de TP 2016-2017
  * Projet TP6-1
  * struct.c
  * Eva Gerbert-Gaillard
  */
  
#include <stdio.h>

#include "fraction.h"


int main (int argc, char * argv[]){
	char choix;	
	


	Fraction frac1 = {0,1};
	Fraction frac2 = {0,1};

	printf("Entrer deux fraction : ");
	scanf("%d/%d %d/%d", &frac1.num, &frac1.den, &frac2.num, &frac2.den);
	printf("Entrer une opération (+,-,/,*): ");
	scanf("\n%c", &choix);	/*\n%c car en ayant taper entrée précédemment, le caractère '\n' reste stocké dans le buffer*/
	printf("Le resultat est : ");
	switch (choix) {
		case '+' : addFraction(frac1, frac2); break;
		case '-' : subFraction(frac1, frac2); break;
		case '*' : mulFraction(frac1, frac2); break;
		case '/' : divFraction(frac1, frac2); break;
		default : printf ("Erreur"); break;
	}
	printf("\n\n");

	return 0;
}
