#include <stdio.h>
#include <stdlib.h>
#include"entreprise.h"

int main()
{

    entreprise T ;
    int n,selction;
    printf("entrer le nombre d'element du tableau: ");
    scanf("%d",&n);
    getchar();
    saisie(T,n);
    puts("----------------------les membres de l'entreprise sont :------------------------------");
    affichage(T,n);
    puts("\n----------------------ces personnes ont un salaire superieure a 300000----------------\n");
    affiche_membre_plusDE300000(T,n);
    puts("\n______________________les femmes secretaire____________________________________________\n");
    femmeSecretaire(T,n);
    puts("\n______________________les ingenieur____________________________________________________\n");
    affichageIngenieur(T,n);
    printf("\nla masse salariale est de %d ",masseSalariale(T,n));
    selction=selectioner(T,n);
    if(selction==-1)
        printf("\nil n'y a pas de femme ingenieur ayant 6 ans d'experience ");
    else printf("\nla femme selection est %s %s",T[selction].prenom,T[selction].nom);


    return 0;
}
