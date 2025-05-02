#include <stdio.h>
#include<stdlib.h>
#include "liste.h"

LISTE liste_vide()
{
    LISTE L;
    L.premiere=NULL;
    L.courante=NULL;

    return L;
}
PLACE *construction_place(Unpoint *P)
{
    PLACE *uneplace;
    uneplace=(PLACE*)malloc(sizeof(PLACE));
    if(!uneplace)
        exit(-1);
    uneplace->coordonnee=constructionpoint(P->x,P->y);
    uneplace->suivant=NULL;
    return uneplace;
}
void ajouterPoint(LISTE *L,Unpoint* P)
{
    PLACE *nouveau;
    nouveau=construction_place(P);
    nouveau->suivant=(*L).premiere;
    (*L).premiere=nouveau;

}
void detruire_liste(LISTE *L)
{
    PLACE *temp;
    if(L->premiere)
    {
        L->courante=L->premiere;
        while(L->courante!=NULL)
        {
            temp=L->courante;
            L->courante=L->courante->suivant;
            liberationPoint(temp->coordonnee);
            free(temp);
        }
    }
}
void init(LISTE *L)
{
    L->courante=L->premiere;
}
int extiste(LISTE L)
{
    return L.courante!=NULL;
}
Unpoint* prochain(LISTE *L)
{
    Unpoint *temp;
    temp=L->courante->coordonnee;
    L->courante=L->courante->suivant;
    return temp;
}
void affichage_liste(LISTE L)
{
    init(&L);
    while(extiste(L))
        affichagePoint(prochain(&L));
}
