#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "entreprise.h"



void saisie(entreprise *E,int n)
{ 
    if (E->n+n<N)
    {
        for(int i=E->n;i<E->n+n;i++)
        {
            printf("saisie des infomations du membre %d \n",i+1);
            printf("entrer le prenom : ");
            scanf("%s",E->T[i].prenom);
            printf("le nom : ");
            getchar();
            scanf("%s",E->T[i].nom);
            printf("le sexe : ");
            getchar();
            scanf("%c",&E->T[i].sexe);
            printf("le metier : ");
            scanf("%s",E->T[i].metier);
            printf("le nombre d'annee : ");
            scanf("%d",&E->T[i].Nexperience);
            printf("le salaire : ");
            scanf("%d",&E->T[i].salaire);

        }
        E->n=E->n+n;
    }else
        printf("tableau plein");
    
    


}


void affichage(entreprise E)
{   int i;
    for(i=0;i<E.n;i++)
    printf("\n %s %s %c %s %d %d ",E.T[i].prenom,E.T[i].nom,E.T[i].sexe,E.T[i].metier,E.T[i].Nexperience,E.T[i].salaire);
}

void affiche_membre_plusDE300000(entreprise E)
{
    for(int i=0;i<E.n;i++)
    {
        if(E.T[i].salaire>300000)
        {   printf("\nl'employer %d %s %s",i+1,E.T[i].prenom,E.T[i].nom);
        }
    }
}


void femmeSecretaire(entreprise E)
{
    for(int i=0;i<E.n;i++)
    {
        if((strcmp(E.T[i].metier,"secretaire")==0)&&E.T[i].sexe=='F')
            printf("\n  l'employer du nom de %s %s de sexe  %c travail comme %s  experience %d son  salaire est %d \n",E.T[i].prenom,E.T[i].nom,E.T[i].sexe,E.T[i].metier,E.T[i].Nexperience,E.T[i].salaire);
    }
}


void affichageIngenieur(entreprise E)
{
    for(int i=0;i<E.n;i++)
    {
        if(strcmp(E.T[i].metier,"ingenieur")==0)
            printf("\n l'employer du nom de %s %s de sexe  %c travail comme %s  experience %d son  salaire est%d ",E.T[i].prenom,E.T[i].nom,E.T[i].sexe,E.T[i].metier,E.T[i].Nexperience,E.T[i].salaire);
    }
}

int  masseSalariale(entreprise E)
{
    int somme=0;
    for(int i=0;i<E.n;i++)
    {
       somme+=E.T[i].salaire ;
    }
    return somme;
}


int selectioner(entreprise E)
{
    for(int i=0;i<E.n;i++)
    {
        if((strcmp(E.T[i].metier,"ingenieur")==0)&&(E.T[i].Nexperience>5)&&(E.T[i].sexe=='F'))
            return i;
    }
    return -1;
}