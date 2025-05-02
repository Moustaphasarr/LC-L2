#ifndef LISTE_H
#define LISTE_H
#include "point.h"

typedef struct place  {
    Unpoint *coordonnee;
    struct place * suivant;
}PLACE;

typedef struct
{
    PLACE *premiere;
    PLACE *courante;

}LISTE;

LISTE liste_vide();
PLACE *construction_place(Unpoint*);
void ajouterPoint(LISTE*,Unpoint*);
void detruire_liste(LISTE *L);
void init(LISTE *L);
int extiste(LISTE L);
Unpoint* prochain(LISTE *L);
void affichage_liste(LISTE L);
#endif
