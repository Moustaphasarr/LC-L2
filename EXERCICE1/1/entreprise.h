#ifndef ENTREPRISE_H_INCLUDED
#define ENTREPRISE_H_INCLUDED
#define N 100
typedef struct
{
    char prenom[50],nom[50],sexe,metier[55];
    int Nexperience;
    unsigned int salaire;
}MenmbrePersonnel;

typedef MenmbrePersonnel entreprise[N];

void saisie(entreprise T,int taille);
void affichage(entreprise t,int taille);
void affiche_membre_plusDE300000(entreprise t,int taille);
void femmeSecretaire(entreprise t , int taille);
void affichageIngenieur(entreprise t,int taille);
int  masseSalariale(entreprise t,int taille);
int selectioner(entreprise t,int taille);
#endif // ENTREPRISE_H_INCLUDED
