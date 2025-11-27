#include <stdio.h>

int modes(void) {
    printf("mode 1 | addition\n");
    printf("mode 2 | soustraction\n");
    printf("mode 3 | multiplication\n");
    printf("mode 4 | division\n");

    return 0;
}

// calculatrice demandent 2 nombres en ligne de commande
int main(void) {
    int a = 0; // premier nombre de la calculatrice
    int b = 0; // 2ème nombre
    int mode = 0; // mode choisit pour la calculatrice
    int continuer = 1;

    printf("Bienvenue sur la calculatrice\n");

    while (continuer == 1) {
        printf("Entrez le premier nombre : ");
        scanf("%d",&a); // %d pour un entier et mettre &a pour insérer la valeur dans a

        printf("\nEntrez le deuxième nombre : ");
        scanf("%d", &b); // %s sert pour les strings

        printf("\nVous avez entrez %d et %d\n",a,b);

        modes();
        printf("Entrez le mode souhaitez -> ");
        scanf("%d", &mode);

        switch (mode) {
            case 1:
                printf("Résultat de l'addition -> %d\n", a+b);
                break;
            case 2:
                printf("Résultat de la soustraction -> %d\n", a-b);
                break;
            case 3:
                printf("Résultat de la multiplication -> %d\n", a*b);
                break;
            case 4:
                if (b==0 || a==0) {
                    printf("Erreur : division par 0 impossible !\n");
                } else {
                    printf("Résultat de la divison -> %d\n", a/b);
                }
                break;
            default:
                printf("Entrez un mode valide !\n");
                break;
        }


        printf("Voulez vous continuez ? (oui = 1, non = 0)\n");
        scanf("%d", &continuer);
    }

    printf("\nMerci d'avoir utilisé la calculatrice !");

    return 0;
}