#include <stdio.h>
#include<stdlib.h>
#include "point.h"


Unpoint* constructionpoint(float x,float y)
{
    Unpoint *P;
    P=(Unpoint *)malloc(sizeof(Unpoint));
    if(!P)
        exit(-1);
    P->x=x;
    P->y=y;
    return P;

}
void liberationPoint(Unpoint *P)
{
    if(P)
        free(P);
}
void affichagePoint(Unpoint *P)
{
    printf("X=%.2f et Y=%.2f \n",P->x,P->y);
}
