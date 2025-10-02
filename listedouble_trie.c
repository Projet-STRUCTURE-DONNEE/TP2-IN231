#include <stdio.h>
#include <stdlib.h>

typedef struct cellule {
    int val;
    struct cellule* suiv;
    struct cellule* prec;
} cellule;

cellule* debut = NULL;

void inserer_triee_double(int v) {
    cellule* p = (cellule*)malloc(sizeof(cellule));
    p->val = v;
    p->suiv = p->prec = NULL;

    if (debut == NULL || v < debut->val) {
        p->suiv = debut;
        if (debut != NULL) debut->prec = p;
        debut = p;
    } else {
        cellule* courant = debut;
        while (courant->suiv != NULL && courant->suiv->val < v) {
            courant = courant->suiv;
        }
        p->suiv = courant->suiv;
        p->prec = courant;
        if (courant->suiv != NULL) courant->suiv->prec = p;
        courant->suiv = p;
    }
}

void afficher_liste_double() {
    cellule* courant = debut;
    while (courant != NULL) {
        printf("%d <-> ", courant->val);
        courant = courant->suiv;
    }
    printf("NULL\n");
}

