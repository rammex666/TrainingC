Projets C - Du Débutant à l'Avancé
Voici une progression de projets avec leurs cahiers des charges :
🟢 Niveau 1 : Débutant
Projet 1 : Calculatrice Simple
Objectif : Créer une calculatrice en ligne de commande
Cahier des charges :

Afficher un menu avec les 4 opérations (+, -, *, /)
Demander deux nombres à l'utilisateur
Effectuer l'opération choisie
Afficher le résultat
Gérer la division par zéro
Permettre de refaire un calcul

Compétences : variables, scanf/printf, structures conditionnelles, boucles

Projet 2 : Jeu du Nombre Mystère
Objectif : L'ordinateur choisit un nombre, le joueur doit le deviner
Cahier des charges :

Générer un nombre aléatoire entre 1 et 100
Demander au joueur de deviner
Indiquer si le nombre est trop grand ou trop petit
Compter le nombre de tentatives
Afficher un message de victoire avec le score
Proposer de rejouer

Compétences : rand(), boucles while, conditions

🟡 Niveau 2 : Intermédiaire Débutant
Projet 3 : Gestionnaire de Liste de Courses
Objectif : Créer un programme pour gérer une liste de courses
Cahier des charges :

Menu avec options : ajouter, afficher, supprimer, quitter
Stocker jusqu'à 50 articles
Chaque article a un nom (max 30 caractères) et une quantité
Afficher la liste complète numérotée
Supprimer un article par son numéro
Sauvegarder la liste dans un fichier texte
Charger la liste au démarrage

Compétences : tableaux, structures, chaînes de caractères, fichiers

Projet 4 : Convertisseur d'Unités
Objectif : Convertir différentes unités de mesure
Cahier des charges :

Menu de catégories : longueur, poids, température, volume
Sous-menus pour chaque type (ex: km↔miles, °C↔°F)
Saisie de la valeur à convertir
Affichage du résultat avec précision
Utiliser des fonctions pour chaque conversion
Interface claire et ergonomique

Compétences : fonctions, switch, calculs, organisation du code

🟠 Niveau 3 : Intermédiaire
Projet 5 : Carnet d'Adresses
Objectif : Gérer un répertoire de contacts
Cahier des charges :

Structure Contact : nom, prénom, téléphone, email, adresse
Fonctionnalités : ajouter, rechercher, modifier, supprimer, lister
Recherche par nom (partielle acceptée)
Tri alphabétique de la liste
Sauvegarde/chargement dans fichier binaire
Maximum 200 contacts
Validation du format email et téléphone

Compétences : structures complexes, pointeurs, fichiers binaires, algorithmes de tri

Projet 6 : Jeu du Pendu
Objectif : Implémenter le jeu classique du pendu
Cahier des charges :

Dictionnaire de 20+ mots minimum
Choisir un mot aléatoirement
Afficher les lettres trouvées et les '_' pour les manquantes
7 vies maximum
Afficher les lettres déjà proposées
Dessiner le pendu en ASCII art selon les erreurs
Système de score basé sur la longueur du mot
Proposer de rejouer

Compétences : chaînes de caractères, tableaux, fonctions, manipulation de caractères

🔴 Niveau 4 : Avancé
Projet 7 : Éditeur de Texte Simple
Objectif : Créer un éditeur de texte en console
Cahier des charges :

Ouvrir/créer/sauvegarder des fichiers texte
Afficher le contenu avec numéros de ligne
Commandes : insérer ligne, supprimer ligne, rechercher, remplacer
Navigation : aller à la ligne N
Statistiques : nombre de lignes, mots, caractères
Gestion dynamique de la mémoire (liste chaînée de lignes)
Historique d'annulation (undo) pour 10 actions

Compétences : allocation dynamique, listes chaînées, gestion fichiers, structures de données

Projet 8 : Gestionnaire de Tâches (Todo List Avancé)
Objectif : Application de gestion de projets et tâches
Cahier des charges :

Structure à 3 niveaux : Projet > Catégorie > Tâche
Chaque tâche : titre, description, priorité, deadline, statut
Fonctions : CRUD complet pour chaque niveau
Filtrage : par priorité, statut, date
Tri : alphabétique, par date, par priorité
Statistiques : tâches complétées, en retard, par catégorie
Export en fichier CSV
Sauvegarde automatique en JSON ou XML
Interface menu avec sous-menus

Compétences : structures imbriquées, pointeurs complexes, parsing, algorithmes

🟣 Niveau 5 : Expert
Projet 9 : Mini Shell (Interpréteur de Commandes)
Objectif : Créer un shell Unix simplifié
Cahier des charges :

Prompt personnalisé avec chemin courant
Commandes intégrées : cd, pwd, exit, help, history
Exécution de programmes externes via fork/exec
Gestion des arguments de commandes
Redirections : >, <, >>
Pipes : cmd1 | cmd2
Variables d'environnement
Historique des 100 dernières commandes
Auto-complétion (bonus)
Gestion des signaux (Ctrl+C)

Compétences : processus, fork, exec, pipes, signaux, parsing avancé, syscalls

Projet 10 : Allocateur de Mémoire Custom
Objectif : Implémenter votre propre malloc/free
Cahier des charges :

Fonctions : my_malloc(), my_free(), my_realloc()
Utiliser sbrk() ou mmap() pour obtenir de la mémoire
Algorithme de gestion : First Fit ou Best Fit
Structure de blocs avec métadonnées (taille, libre/occupé)
Fusion des blocs libres adjacents (coalescing)
Détection de double free
Statistiques : mémoire utilisée, fragmentée, nombre d'allocations
Tests de performance et de robustesse
Protection contre les corruptions

Compétences : gestion mémoire bas niveau, pointeurs avancés, structures de données, debugging complexe, optimisation