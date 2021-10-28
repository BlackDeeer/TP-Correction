/*********************************************************************/
/* Realisation d'une liste chainee dans un tableau                   */
/* ioannis.parissis@grenoble-inp.fr                                  */
/* Sep 2012                                                          */
/*********************************************************************/

#ifndef __LISTETABLEAU_H__
#define __LISTETABLEAU_H__

#include <stdio.h>

#define TAILLEMAX 100

typedef struct {
	int valeur ;
	int suivant ;
} element ;

/* le type liste permet de ne pas utiliser de pointeurs */
typedef element* liste;




/* Retourne un element libre du tableau
   (suivant = -1). On suppose qu'il y en a toujours un */
int elementLibre(liste l);

/* Initialise tous les elements de la liste
   à vide (suivant = -1 *) */
void creerListe(liste l);

/* Affiche les elements de la liste dans l'ordre */
void afficherListe(liste l);

/* Ajoute x dans la liste triee l */
void insererElement(int x, liste l);

/* Supprime la premiere occurrence de x de l */
void supprimerElement(int i, liste l);

void compacterListe(liste l);


#endif
