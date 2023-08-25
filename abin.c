#include <stdlib.h>
#include <stdio.h>

typedef struct abin 
{
    struct abin* fils_gauche;
    struct abin* fils_droit;
    int val;
} Arbre_binaire;

Arbre_binaire enracinement(Arbre_binaire b1, Arbre_binaire b2, int val)
{
    Arbre_binaire b = malloc(sizeof(struct abin));
    b->val=val;
    b->fils_gauche=b1;
    b->fils_droit=b2;    
    return b;
}

Arbre_binaire fils_g(Arbre_binaire b)
{
    return b->fils_gauche;
}
Arbre_binaire fils_d(Arbre_binaire b)
{
    return b->fils_droit;
}
int estVide(Arbre_binaire b)
{
    if ((b->fils_gauche == NULL) && (b->fils_droit == NULL))
    {
        printf("arbre sans fils \n");
        return 0;
    }
    else 
    {
        printf("arbre non vide \n");
        return 1;
    }
}
Arbre_binaire vide(void)
{
    Arbre_binaire b=malloc(sizeof(struct abin));
    b->fils_gauche=NULL;
    b->fils_droit==NULL;
    b->val=0;
    return b;
}
void liberer_arbre(Arbre_binaire b)
{
    free(b);
}


void elem(Arbre_binaire b, int val)
{
    while(b->val != val)
    {    
        if ((b->fils_droit == NULL) && (b->fils_gauche == NULL)) 
            printf("valeur inexistante");
        else       
    }   
}
int hauteur(Arbre_binaire b);
int nb_feuilles(Arbre_binaire b);
int nb_noeuds(Arbre_binaire b);
void estComplet(Arbre_binaire b);

int main(void)
{
    Arbre_binaire b1=vide();
    Arbre_binaire b2=vide();
    Arbre_binaire b3=vide();
    Arbre_binaire b=enracinement(NULL,NULL,25);
    b->fils_gauche=enracinement(b1,b2,10);
    b->fils_droit=enracinement(NULL,NULL,15);
    b1->fils_gauche=NULL;
    b1->val=13;
    b1->fils_droit=enracinement(b3,NULL,12);
    b3->fils_gauche=enracinement(NULL,NULL,7);  
    b3->fils_droit=enracinement(NULL,NULL,3);
}
