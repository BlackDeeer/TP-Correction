#include <stdio.h>
#include "polynome.h"

void addPolynomes(Polynome p1, Polynome p2, Polynome res){
    int i1, i2, ires;
    i1 = i2 = ires = 0;

    while (p1[i1].degre != -1 && p2[i2].degre != -1){
        if(p1[i1].degre == p2[i2].degre){
            res[ires].degre = p1[i1].degre;
            res[ires].coeff = p1[i1].coeff + p2[i2].coeff;
            ires++; i1++; i2++;
        } else if (p1[i1].degre > p2[i2].degre){
            res[ires++] = p1[i1++];
        } else {
            res[ires++] = p2[i2++];
        }
    }
    while(p1[i1].degre != -1){res[ires++] = p1[i1++];}
    while(p2[i2].degre != -1){res[ires++] = p2[i2++];}

    res[ires].degre = -1;
}

int main(){
  Polynome P1,P2,RES;
  int compt = 0;
  P1[0].degre = 2;
  P1[0].coeff = 3;
  P1[1].degre = 1;
  P1[1].coeff = 1;
  P1[2].degre = 0;
  P1[2].coeff = 7;
  P1[3].coeff = 1;
  P1[3].degre = -1;
  P2[0].degre = 5;
  P2[0].coeff = 1;
  P2[1].degre = 2;
  P2[1].coeff = 3;
  P2[2].degre = 1;
  P2[2].coeff = 1;
  P2[3].coeff = 1;
  P2[3].degre = -1;

  addPolynomes(P1,P2,RES);

  while(RES[compt].degre != -1){
    printf("%f x^%d\n", RES[compt].coeff, RES[compt].degre);
    compt++;
  }

return(0);
}
