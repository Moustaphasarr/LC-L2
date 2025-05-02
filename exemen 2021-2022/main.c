#include <stdio.h>
#include<stdlib.h>
#include "liste.h"
int main()
{
    LISTE L;
    L=liste_vide();
    Unpoint *P1,*P2,*P3,*P4;
    P1=constructionpoint(3,4);
    P2=constructionpoint(21,18);
    P3=constructionpoint(0,15.5);
    P4=constructionpoint(1,1);
    ajouterPoint(&L,P1);
    ajouterPoint(&L,P2);
    ajouterPoint(&L,P3);
    ajouterPoint(&L,P4);
    affichage_liste(L);
    detruire_liste(&L);
    return 0;

}
