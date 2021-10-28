/**
  * CS351 - Code énoncé de TP 2016-2017
  * Projet TP6-2
  * pile.c
  */
  
#include "pile.h"

/* Réalisation TRES SIMPLE d'une pile d'entiers
   Ne vérifie pas les débordements
*/

pileInt creerPile(){
    pileInt p = (pileInt) malloc(sizeof(sPileInt));
    p->pp = 0;

}

int estPileVide(pileInt p){
    return (p->pp == 0);
};
void empiler(pileInt p, int x){
    p->pp++;
    p->pile[p->pp] = x;
};
int depiler(pileInt p){
    return(p->pile[p->pp--]);
};
