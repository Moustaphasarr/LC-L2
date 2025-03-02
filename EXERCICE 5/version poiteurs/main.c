#include <stdio.h>
#include <stdlib.h>
#include "statistique.h"


int main()
{
    membre *TAB1,*TAB2,*TAB3;
    char phrase1[100],phrase2[100];
    printf("Tapez une phrase : ");
    gets(phrase1);
    TAB1=statistique(phrase1);
    printf("__________________________________\n");
    for(TAB3=TAB1;TAB3<TAB1+26;TAB3++)
        if(TAB3->occurence!=0)
        printf("%d %c\n",(*TAB3).occurence,(*TAB3).lettre);

    printf("entrer la deuxieme phrase pour verifier si c anagramme par rapport au premier\n");
    gets(phrase2);

    TAB2=statistique(phrase2);
    for(TAB3=TAB2;TAB3<TAB2+26;TAB3++)
        if(TAB3->occurence!=0)
        printf("%d %c\n",(*TAB3).occurence,(*TAB3).lettre);
    
    if(!annagrame(phrase1,phrase2))
        printf("non anagramme");
    else
        printf("les phrase sont anagramme");



    return 0;
}
