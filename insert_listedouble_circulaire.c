#include <stdio.h>
#include <stdlib.h>

// Définition d'une cellule doublement chaînee
typedef struct cellule {
    int val;
    struct cellule* suiv;
    struct cellule* prec;
} cellule;

// Pointeur vers la dernière cellule
cellule* fin = NULL;

// Insertion en tete
void insert_tete(int v) {
    cellule* p = (cellule*)malloc(sizeof(cellule));
    p->val = v;

    if (fin == NULL) {
        p->suiv = p;
        p->prec = p;
        fin = p;
    } else {
        cellule* debut = fin->suiv;
        p->suiv = debut;
        p->prec = fin;
        debut->prec = p;
        fin->suiv = p;
    }
}

// Insertion en queue
void insert_queue(int v) {
    cellule* p = (cellule*)malloc(sizeof(cellule));
    p->val = v;

    if (fin == NULL) {
        p->suiv = p;
        p->prec = p;
        fin = p;
    } else {
        cellule* debut = fin->suiv;
        p->suiv = debut;
        p->prec = fin;
        debut->prec = p;
        fin->suiv = p;
        fin = p;
    }
}

// Affichage de la liste

void afficher_liste() {
    if (fin == NULL) {
        printf("La liste est vide\n");
        return;
    }

    cellule* l = fin->suiv;
    do {
        printf("%d <-> ", l->val);
        l = l->suiv;
    } while (l != fin->suiv);
    printf("retour au debut\n");
}

// Programme principal interactif


int main() {
    int choix, valeur;

    do {
        printf("\n--------------- MENU ---------------------\n");
        printf("1. Inserer en tete\n");
        printf("2. Inserer en queue\n");
        printf("3. Afficher la liste\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("Entrez la valeur a inserer en tete : ");
                scanf("%d", &valeur);
                insert_tete(valeur);
                break;
            case 2:
                printf("Entrez la valeur a insérer en queue : ");
                scanf("%d", &valeur);
                insert_queue(valeur);
                break;
            case 3:
                afficher_liste();
                break;
            case 0:
                printf("Fin du programme, au revoir \n");
                break;
            default:
                printf("Choix invalide, Veuillez reessayer.\n");
        }
    } while (choix != 0);

    return 0;
}

