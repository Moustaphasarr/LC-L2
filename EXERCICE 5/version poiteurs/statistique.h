#ifndef STATISTIQUE_H_INCLUDED
#define STATISTIQUE_H_INCLUDED

#define N 26


typedef struct{

    char lettre ;
    int occurence;

}membre;


membre* statistique(char *phrase);
int annagrame(char *phrase1 , char *phrase2);



#endif // STATISTIQUE_H_INCLUDED
