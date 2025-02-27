#ifndef ENTREPRISE_H_INCLUDED
#define ENTREPRISE_H_INCLUDED
#define N 100
typedef struct
{
    char prenom[50],nom[50],sexe,metier[55];
    int Nexperience;
    unsigned int salaire;
}MenmbrePersonnel;

typedef struct
{
    MenmbrePersonnel T[N];
    int n;
}entreprise;

void saisie(entreprise *E, int n);
void affichage(entreprise E);
void affiche_membre_plusDE300000(entreprise E);
void femmeSecretaire(entreprise E);
void affichageIngenieur(entreprise E);
int  masseSalariale(entreprise E);
int selectioner(entreprise E);

#endif // ENTREPRISE_H_INCLUDED
