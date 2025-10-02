# TP2 – INF231 : Liste doublement chaînée triée en langage C

- **Nom** : Megninguim Kelly Jovanie  
- **Matricule** : 23V2074
- **Groupe de TD/TP** : Groupe  
- **Enseignant** : Pr. Melatagia  
- **Année académique** : 2025–2026  


##  Objectif du TP

Ce TP s’inscrit dans le cadre du cours INF231 – Techniques de Conception d’Algorithmes et Structures de Données. Il vise à implémenter une **liste doublement chaînée triée** en langage C, permettant d’insérer dynamiquement des éléments tout en maintenant l’ordre croissant.


##  Description du programme réalisé

### 🔸 Liste doublement chaînée triée

- Chaque cellule contient :
  - Une valeur entière
  - Un pointeur vers le nœud suivant (`suiv`)
  - Un pointeur vers le nœud précédent (`prec`)
- L’insertion respecte l’ordre croissant :
  - Si la liste est vide, le nouvel élément devient le premier
  - Si la valeur est inférieure à la tête, elle est insérée au début
  - Sinon, elle est insérée à la bonne position entre deux nœuds
- Les pointeurs sont mis à jour dans les deux sens pour préserver la structure


##  Fichiers réalisés
trie_listedouble.c

- `/code/insertion_triee_double.c`
