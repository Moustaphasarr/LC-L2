#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "statistique.h"







membre* statistique(char *phrase)
{
    membre *T_membre,*T2;
    int position;
    T_membre=(membre*)malloc(26*sizeof(membre));
    if(T_membre==NULL)
    {
        printf("allocation echouer");
        exit(1);
    }

    for(T2=T_membre;T2<T_membre+26;T2++)
    {
        T2->lettre='a'+T2-T_membre;
        T2->occurence=0;
    }

    for(phrase;*phrase!='\0';phrase++)
    {
            position=tolower(*phrase)-'a';
            (T_membre+position)->occurence+=1;
    }

    return T_membre;
}

int annagrame(char *phrase1 , char *phrase2)
{
    membre *T1,*T2;

    T1=statistique(phrase1);
    T2=statistique(phrase2);
    int i=0;

    for(int i=0;i<26;i++)
    {
        if((T1+i)->occurence!=(T2+i)->occurence)
            return 0;
    }

    return 1;




}

