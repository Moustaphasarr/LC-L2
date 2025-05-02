#ifndef MATRCICE_H_INCLUDED
#define MATRCICE_H_INCLUDED



float** creation_de_matrice(int l,int c);
void detruire_matrcie(float **M,int l);
void affichage_matrice(float **M,int l,int c);
float** produit_matrice(float **M,int l,int c, float **M1,int l1,int c1);
float **transposer(float **M,int l,int c);
void multiplication_matrice_par_reel(float **M,int c,int l,int r);
void saisie_matrice(float **M,int l ,int c);

#endif // MATRCICE_H_INCLUDED
