#include <stdio.h>
#include <stdlib.h>
#include "statistique.h"
#include <ctype.h>

int main()
{

    membre *T,*T1;
    char Phrase1[100] ;char Phrase2[100];
    printf("Tapez une phrase : ");
    gets(Phrase1);
    T=statistique(Phrase1);
    printf("__________________________________\n");
    for(int i=0;i<26;i++)
        {
            if(T[i].nb_occurence!=0)
                printf("\n%d %c",T[i].nb_occurence,T[i].lettre);
        }
    printf("\n      fin1__________________________________\n");
        /*______________________*/

    printf("\nTapez une phrase : ");
    gets(Phrase2);
    T1=statistique(Phrase2);
    printf("__________________________________\n");
    for(int i=0;i<26;i++)
        {
            if(T1[i].nb_occurence!=0)
                printf("\n%d %c",T1[i].nb_occurence,T1[i].lettre);
        }
        printf("    fin2__________________________________\n");
    /*_________________________*/

    if(annagrame(Phrase1,Phrase2))
        printf("\n anagramme");
    else printf("\n pas anagramme");

    free(T);
    free(T1);
    return 0;
}
