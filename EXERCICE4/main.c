#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "manipulation.h"

int main()
{
    int *T1,*T2,x;
    int taille1,taille2;
    printf("veiller entrer la taille du premier tableau : ");
    scanf("%d",&taille1);
    printf("\nveiller entrer la taille du second tableau : ");
    scanf("%d",&taille2);

    // Apres avoir recuperer la taille , on fait une allocation dynamique

    T1=(int*)malloc(taille1*sizeof(int));
    T2=(int*)malloc(taille2*sizeof(int));
    
    if(T1==NULL&&T2==NULL)
    {
        printf("pas assez d'espace ");
        exit(1);
    }
    /*
        Autrement au lieu de faire l'allocation dans la main , on peut ecrire une fonction
        qui recçoit la taille d'un tableau en parametre , fait l'allocation en fonction du taille
        puis renvois un pointeur . le prototyte de cette fonction sera: int* creerTableau(int taille);
    */

    puts("saisie du premier tableau");
    saisie(T1,taille1);
    puts("saisie du second tableau");
    saisie(T2,taille2);
    puts("affichage des elements du premier tableau");
    affichage(T1,taille1 );
    puts("________fin l'affichage du tableau T1_______\n");
    puts("affichage des elements du second tableau");
    affichage(T2,taille2 );
    puts("________fin l'affichage du tableau T2_______\n");
    puts("_______________________________________\n");
    puts("ajout des elements du tableau B a la fin du tableau A et apres on l'affiche le tableau fusionner \n");
    ajout_d_element(&T1,T2,&taille1,taille2);//comme que la taille du second tableau change , on fait un passage par adresse
    affichage(T1,taille1 );
    puts("_______________________________________\n");
    printf("entrer la valeur que vous voulez suprimer du tableau : ");
    scanf("%d",&x);
    occurences(T1,&taille1,x);
    printf("voici le tableau apres avoire suprimer %d\n",x);
    affichage(T1,taille1 );
    return 0;
}
