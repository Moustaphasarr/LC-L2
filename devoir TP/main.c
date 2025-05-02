#include <stdio.h>
#include <stdlib.h>
#include "matrcice.h"

int main()
{

    float **M,**M1,**M2,**M3;
    int l=3,c=4,l1=4,c1=3;
    M=creation_de_matrice(l,c);
    M1=creation_de_matrice(l1,c1);
    printf("saisie du matrice 1\n");
    saisie_matrice(M,l,c);
    printf("\nsaisie du matrice 2\n");
    saisie_matrice(M1,l1,c1);
    printf("\naffichage du matrice 1\n");
    affichage_matrice(M,l,c);
    printf("\naffichage du matrice 2\n");
    affichage_matrice(M1,l1,c1);
    printf("produit du M1 avce M2 et affichage\n");
    M2=produit_matrice(M,l,c,M1,l1,c1);
    affichage_matrice(M2,l,c1);
    printf("transposer de M1 et affichage\n");
    M3=transposer(M,l,c);
    affichage_matrice(M3,c,l);
    printf("multiplication du premier matrice par un reel et affichage\n");
    multiplication_matrice_par_reel(M,c,l,5);
    affichage_matrice(M,l,c);
    detruire_matrcie(M,l);
    detruire_matrcie(M1,l1);
    detruire_matrcie(M2,l);
    detruire_matrcie(M,c);




    return 0;
}
