#ifndef POINT_h
#define POINT_h

typedef struct
{
    float x;
    float y;
}Unpoint;
Unpoint* constructionpoint(float,float);
void liberationPoint(Unpoint *);
void affichagePoint(Unpoint *);

#endif
