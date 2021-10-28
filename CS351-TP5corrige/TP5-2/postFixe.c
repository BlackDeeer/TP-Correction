/**
  * CS351 - Corrections de TP 2016-2017
  * Projet TP6-2
  * postFixe.c
  * Eva Gerbert-Gaillard
  */

#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

#define TMAX 20

int main (int argc, char * argv[]){
	int a, b;
	int i;
	char exp[TMAX];
	pileInt pF = creerPile();

	/*Recupération de l'expression en notatio post-fixe passée en argument du main*/
 	for (i=0; i<(argc-1); i++){
		exp[i] = argv[i+1][0];
	}
	
	/*Calcul de l'expression*/
	for (i=0; i<(argc-1); i++) {
		if ((exp[i]>='0') && (exp[i]<='9')) {
			empiler (pF, exp[i]-'0');
		} else {
			switch (exp[i]) {
				case '+' : 
					a = depiler(pF);
					b = depiler(pF);
					empiler (pF, b+a); break;
				case '-' : 
					a = depiler(pF);
					b = depiler(pF);
					empiler (pF, b-a); break;

				case 'x' : 
					a = depiler(pF);
					b = depiler(pF);
					empiler (pF, b*a); break;

				case '/' : 
					a = depiler(pF);
					b = depiler(pF);
					empiler (pF, b/a); break;
			}
		}
	}
	
	printf("L'expression vaut : %d\n", depiler(pF));


	return 0;
}
