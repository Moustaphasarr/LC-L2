#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include "statistique.h"






membre* statistique(char phrase[])
{
    membre* T_membre=(membre*)malloc(26*sizeof(membre));
    int i,position;
    if(T_membre==NULL)
    {
        printf("pas assez de memoire");
        exit(-1);
    }

   for(int i=0;i<26;i++)
   {
        T_membre[i].lettre='a'+i;
        T_membre[i].nb_occurence=0;
   }

    for(int i=0;phrase[i]!='\0';i++)
    {
        position=tolower(phrase[i])-'a';
        T_membre[position].nb_occurence++;
    }

    return T_membre;
}

int annagrame(char *phrase1,char *phrase2)
{
    membre *p1 ,*p2;
    int i=0;
    p1=statistique(phrase1);
    p2=statistique(phrase2);

    for(int i=0;i<26;i++)
    {
        if(p1[i].nb_occurence!=p2[i].nb_occurence)
            return 0;
    }
    return 1;
}
