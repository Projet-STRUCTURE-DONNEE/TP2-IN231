# TP2 – INF231 : Listes chaînées en langage C

**Implémentation en C des opérations d'insertion en tête et en queue  et d'un element dans une liste simplement et doublement chaînée circulaire ou lineaire**




# Objectif du TP

Ce TP vise à mettre en œuvre différentes opérations sur les **listes chaînées** en langage C, dans le cadre du cours INF231 – Techniques de Conception d’Algorithmes et Structures de Données. Il permet de manipuler des structures dynamiques, de comprendre les pointeurs, et de développer des algorithmes efficaces pour la gestion de données en mémoire.


# Programmes réalisés

 1. Insertion dans une liste simplement chaînée triée
- Création d’une liste triée en ordre croissant
- Insertion d’un élément à la bonne position pour maintenir l’ordre
- Gestion des cas : début, milieu, fin

2. Insertion dans une liste doublement chaînée triée
- Structure avec pointeurs suiv et prec
- Insertion d’un élément tout en conservant le tri
- Mise à jour des liens dans les deux sens

3 .Lecture et suppression de toutes les occurrences d’une valeur
- Parcours complet de la liste
- Suppression de chaque nœud contenant la valeur cible
- Mise à jour des pointeurs pour ne pas casser la chaîne

4. Insertion en tête et en queue dans une liste simplement chaînée circulaire
- Gestion du pointeur fin pour maintenir la circularité
- Ajout en tête : avant le premier élément
- Ajout en queue : après le dernier élément

 5.Insertion en tête et en queue dans une liste doublement chaînée circulaire
- Structure circulaire avec double liaison
- Ajout en tête et en queue avec mise à jour des deux pointeurs
- Maintien de la circularité dans les deux directions



# Compilation et exécution

Chaque fichier source peut être compilé avec gcc

gcc -o insertion_triee_simple insertion_triee_simple.c
./insertion_triee_simple
