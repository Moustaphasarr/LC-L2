#include <stdio.h>
#include <stdlib.h>
#include "matrcice.h"





float** creation_de_matrice(int l,int c)
{

    int **T;
    T=(float**)malloc(l*sizeof(float*));
    if(!T)
    {
        printf("errreur");
        exit(1);
    }
    for(int i=0;i<l;i++)
    {
        T[i]=(float*)malloc(c*sizeof(float));
        if(!T[i])
        {
            printf("erreur");
            exit(1);
        }
    }

    for(int i=0;i<l;i++)
        for(int j=0;j<c;j++)
            T[i][j]=0;
    return T;

}
void detruire_matrcie(float **M,int l)
{

    for(int i=0;i<l;i++)
        if(M[i])
            free(M[i]);
    free(M);

}
void affichage_matrice(float **M,int l,int c)
{

    for(int i=0;i<l;i++)
    {
        for(int j=0;j<c;j++)
            printf("%0.f\t ",M[i][j]);
        printf("\n");
    }

}

float** produit_matrice(float **M,int l,int c, float **M1,int l1,int c1)
{

    float **M3;
    if(c==l1)
    {
        M3=creation_de_matrice(l,c1);
        for(int i=0;i<l;i++)
        {
            for(int j=0;j<c1;j++)
            {
                for(int k=0;k<c1;k++)
                    M3[i][j]+=M[i][k]*M1[k][j];
            }
        }
    }else return NULL ;

    return M3;


}
float **transposer(float **M,int l,int c)
{
    float **T;
    T=creation_de_matrice(c,l);
    for(int i=0;i<c;i++)
        for(int j=0;j<l;j++)
            T[i][j]=M[j][i];

     return T;
}
void multiplication_matrice_par_reel(float **M,int c,int l,int r)
{
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<c;j++)
            M[i][j]=r*M[i][j];
    }
}

void saisie_matrice(float **M,int l ,int c)
{
    for(int i=0;i<l;i++ )
    {
        for(int j=0;j<c;j++)
        {
           printf("M[%d][%d]= ",i,j);
           scanf("%f",&M[i][j]);
        }
        printf("\n");
    }
}
