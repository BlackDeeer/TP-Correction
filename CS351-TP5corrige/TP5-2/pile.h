/**
  * CS351 - Code énoncé de TP 2016-2017
  * Projet TP6-2
  * pile.h
  */
  
#include <stdlib.h>

#define TAILLE 100

typedef struct {
  int pile[TAILLE]; /* tableau contenant la pile*/
  int pp;           /* pointeur de pile*/
} sPileInt;
typedef sPileInt* pileInt;


pileInt creerPile();
int estPileVide(pileInt);
void empiler(pileInt, int);
int depiler(pileInt);
