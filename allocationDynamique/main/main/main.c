// main.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombreAmis = 0, i = 0;
    int* ageAmis = NULL; //utiliser comme tableau après malloc

    printf("Combien d'ami avez vous ? :");
    scanf_s("%d", &nombreAmis); //stockage du nombre d'ami

    if (nombreAmis > 0) //on verifier que l'utilisateur est au moins un ami ;-)
    { 

        ageAmis = malloc(nombreAmis * sizeof(int)); // calcul de la taille du tableau d'entier grace au nombre d'ami de l'utilisateur

        if (ageAmis == NULL) { //si aucune mémoire n'a été aloué alors on arrête le programme
            printf("Erreur allocation mémoire");
            exit(0);
        }
        //demander l'age des amis un part et le stocker dans notre tableau
        for (i = 0; i < nombreAmis; i++) {
            printf("Quel age a votre amis num %d:", i+1);
            scanf_s("%d", &ageAmis[i]);
        }

        //afficher l'age des amis
        for (i = 0; i < nombreAmis; i++) {
            printf("Votre amis %d a %d an(s)\n", i+1, ageAmis[i]);
        }

        free(ageAmis);
    }
    else {
        printf("plus de 0");
    }

    return 0;
}


