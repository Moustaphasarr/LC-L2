#include <stdio.h>
#include <stdlib.h>
#include "manipulation.h"

void saisie(int *t,int taille)
{
    int *p;
    for(p=t;p<t+taille;p++)
    {
        printf("entrer TAB[%d]=",p-t+1);// P-t permet de recuperer l'indice
        scanf("%d",p);
    }
}

void affichage(int *t,int taille )
{
    int *p;
    for(p=t;p<t+taille;p++)
        printf("T[%d]=%d ",p-t+1,*p);
        printf("\n");
}

void ajout_d_element(int **t1,int *t2,int *taille1,int taille2)
{
        *t1=(int*)realloc(*t1,(*taille1+taille2)*sizeof(int));

    int *pA=*t1+*taille1;
    int *pB=t2;

    for(pB;pB<t2+taille2;)
        *(pA++)=*(pB++);
    *taille1+=taille2;

}

void occurences(int t[],int *taille,int x)
{
  int *p1,*p2;
  for(p1=t;p1<t+*taille;p1++)
  {
      if(*p1==x)
      {
          for(p2=p1;p2<t+*taille-1;p2++)
            {
                *p2=*(p2+1);
            }

          (*taille)--;
          p1--;
      }
  }
}


