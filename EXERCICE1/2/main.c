#include <stdio.h>
#include <stdlib.h>
#include"entreprise.h"

int main()
{
    entreprise E ;
    E.n=0;
    int n ,selection;
    printf("entrer le nombre d'element a saisir : ");
    scanf("%d",&n);
    getchar();
    saisie(&E,n);
    printf("%d",E.n);
    puts("----------------------les membres de l'entreprise sont :------------------------------");
    affichage(E);
    puts("\n----------------------ces personnes ont un salaire superieure a 300000----------------\n");
    affiche_membre_plusDE300000(E);
    puts("\n______________________les femmes secretaire____________________________________________\n");
    femmeSecretaire(E);
    puts("\n______________________les ingenieur____________________________________________________\n");
    affichageIngenieur(E);
    printf("\nla masse salariale est de %d ",masseSalariale(E));
    selection=selectioner(E);
    if(selection==-1)
        printf("\nil n'y a pas de femme ingenieur ayant 6 ans d'experience ");
    else printf("\nla femme selection est %s %s",E.T[selection].prenom,E.T[selection].nom);


    return 0;
}