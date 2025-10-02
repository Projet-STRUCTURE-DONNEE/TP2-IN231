#include <stdio.h>
#include <stdlib.h>

typedef struct cellule {
    int val;
    struct cellule* suiv;
} cellule;

cellule* tete = NULL;

void inserer_triee(int v) {
    cellule* p = (cellule*)malloc(sizeof(cellule));
    p->val = v;
    p->suiv = NULL;

    if (tete == NULL || v < tete->val) {
        p->suiv = tete;
        tete = p;
    } else {
        cellule* courant = tete;
        while (courant->suiv != NULL && courant->suiv->val < v) {
            courant = courant->suiv;
        }
        p->suiv = courant->suiv;
        courant->suiv = p;
    }
}

void afficher_liste() {
    cellule* courant = tete;
    while (courant != NULL) {
        printf("%d -> ", courant->val);
        courant = courant->suiv;
    }
    printf("NULL\n");
}

