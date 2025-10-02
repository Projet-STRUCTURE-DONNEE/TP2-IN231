#include <stdio.h>
#include <stdlib.h>

typedef struct cellule {
    int val;
    struct cellule *suiv;
} cellule;

// Fonction pour insérer une cellule en tête de liste (pour le test)
void insertionTete(cellule **tete, int val) {
    cellule *p = malloc(sizeof(cellule));
    P->data = val;
    P->suiv= *tete;
    *tete = p;
}

// Affiche la liste
void afficheListe(cellule *tete) {
    while (tete!= NULL) {
        printf("%d -> ", tete->val);
        tete = tete->suiv;
    }
    printf("NULL\n");
}

// Supprime toutes les occurrences de val dans la liste
void supprimer (cellule **tete, int valeur) {
    cellule **courant = tete;
    cellule *temp;

    while (*courant!= NULL) {
        if ((*courant)->val == valeur) {
            temp = *courant;
            *courant= (*courant)->suiv;  // contourne le noeud à supprimer
            free(temp);
        } else {
            courant= &(*courant)->next;  // avance au prochain
        }
    }
}

int main() {
    cellule *tete = NULL;
    int n, valAsup;/* valeur à supprimer*/

    // Exemple: création d’une liste
    insertionTete (&tete, 5);
    insertionTete (&tete, 2);
    insertionTete (&tete, 5);
    insertionTete (&tete, 3);
    insertionTete (&tete, 5);

    printf("Liste avant suppression:\n");
    afficheListe (tete);

    printf("Entrez la valeur à supprimer: ");
    scanf("%d", & valAsup);

    supprimer (&tete, valAsup);

    printf("Liste après suppression:\n");
    afficheListe (tete);

    return 0;
}
