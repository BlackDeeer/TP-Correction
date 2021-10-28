/**
  * CS351 - Corrections de TP 2016-2017
  * Projet TP6-1
  * fraction.c
  * Eva Gerbert-Gaillard
  */
  
#include "fraction.h"

int pgcd (int a, int b){
	int r;

	while (b!=0) {
		r = a%b;
		a = b;
		b = r;
	}
	
	return a;
}

/*on considère que si la fraction est négative, le signe est sur numérateur*/
void addFraction(Fraction f1, Fraction f2){
	Fraction fr;
	int r;

	fr.num = f1.num*f2.den + f2.num*f1.den;
	fr.den = f1.den*f2.den;

	r= pgcd(abs(fr.num), fr.den);

	fr.num = fr.num/r;
	fr.den = fr.den/r;
	printf("%d/%d", fr.num, fr.den);
}


void subFraction(Fraction f1, Fraction f2){
	Fraction fr;
	int r;

	fr.num = f1.num*f2.den - f2.num*f1.den;
	fr.den = f1.den*f2.den;

	r = pgcd(abs(fr.num), fr.den);

	fr.num = fr.num/r;
	fr.den = fr.den/r;
	printf("%d/%d", fr.num, fr.den);
}


void mulFraction(Fraction f1, Fraction f2){
	Fraction fr;
	int r;

	fr.num = f1.num*f2.num;
	fr.den = f1.den*f2.den;

	r= pgcd(abs(fr.num), fr.den);

	fr.num = fr.num/r;
	fr.den = fr.den/r;
	printf("%d/%d", fr.num, fr.den);
}


void divFraction(Fraction f1, Fraction f2){
	Fraction fr;
	int r;

	fr.num = f1.num*f2.den;
	fr.den = f1.den*f2.num;

	r= pgcd(abs(fr.num), fr.den);

	fr.num = fr.num/r;
	fr.den = fr.den/r;
	printf("%d/%d", fr.num, fr.den);
}
