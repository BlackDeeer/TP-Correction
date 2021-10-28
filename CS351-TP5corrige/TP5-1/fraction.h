/**
  * CS351 - Corrections de TP 2016-2017
  * Projet TP6-1
  * fraction.h
  * Eva Gerbert-Gaillard
  */
  
#ifndef __FRACTION_H__
#define __FRACTION_H__

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
	int num; /*numerateur*/
	int den; /*denominateur*/
} Fraction;

void addFraction(Fraction f1, Fraction f2);
void subFraction(Fraction f1, Fraction f2);
void mulFraction(Fraction f1, Fraction f2);
void divFraction(Fraction f1, Fraction f2);

#endif
