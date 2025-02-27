#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "entreprise.h"

void saisie(entreprise T,int taille)
{
  
    for(int i=0;i<taille;i++)
    {
        printf("saisie des infomations du membre %d \n",i+1);
        printf("entrer le prenom : ");
        scanf("%s",T[i].prenom);
        printf("le nom : ");
        getchar();
        scanf("%s",T[i].nom);
        printf("le sexe : ");
        getchar();
        scanf("%c",&T[i].sexe);
        printf("le metier : ");
        scanf("%s",T[i].metier);
        printf("le nombre d'annee : ");
        scanf("%d",&T[i].Nexperience);
        printf("le salaire : ");
        scanf("%d",&T[i].salaire);

    }


}

void affichage(entreprise t,int taille)
{   int i;
    for(i=0;i<taille;i++)
    printf("\n %s %s %c %s %d %d ",t[i].prenom,t[i].nom,t[i].sexe,t[i].metier,t[i].Nexperience,t[i].salaire);
}

void affiche_membre_plusDE300000(entreprise t,int taille)
{
    for(int i=0;i<taille;i++)
    {
        if(t[i].salaire>300000)
        {   printf("\nl'employer %d %s %s",i+1,t[i].prenom,t[i].nom);
        }
    }
}
void femmeSecretaire(entreprise t , int taille)
{
    for(int i=0;i<taille;i++)
    {
        if((strcmp(t[i].metier,"secretaire")==0)&&t[i].sexe=='F')
            printf("\n secretaire l'employer du nom de %s %s de sexe  %c travail comme %s  experience %d son  salaire est %d \n",t[i].prenom,t[i].nom,t[i].sexe,t[i].metier,t[i].Nexperience,t[i].salaire);
    }
}

void affichageIngenieur(entreprise t,int taille)
{
    for(int i=0;i<taille;i++)
    {
        if(strcmp(t[i].metier,"ingenieur")==0)
            printf("\n l'employer du nom de %s %s de sexe  %c travail comme %s  experience %d son  salaire es t%d ",t[i].prenom,t[i].nom,t[i].sexe,t[i].metier,t[i].Nexperience,t[i].salaire);
    }
}

int  masseSalariale(entreprise t,int taille)
{
    int somme=0;
    for(int i=0;i<taille;i++)
    {
       somme+=t[i].salaire ;
    }
    return somme;
}

int selectioner(entreprise t,int taille)
{
    for(int i=0;i<taille;i++)
    {
        if((strcmp(t[i].metier,"ingenieur")==0)&&(t[i].Nexperience>5)&&(t[i].sexe=='F'))
            return i;
    }
    return -1;
}


