
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("[+] Tu dois trouver le nombre compris entre 1 et 100 !\n");
    printf("Bonne chance !! \n");

    int nombreMystere = 0, nombreEntre = 0;
    const int MAX = 100, MIN = 1;

    //génération du nombre améatoire
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN; 

    //Demander de choisir un nombre tant qu'il n'est pas égale au nombre mystère
    do
    {
        printf("Votre nombre >");
        scanf_s("%d", &nombreEntre);

        if (nombreEntre < 0 || nombreEntre < nombreMystere) {
            printf("Votre nombre est trop petit\n");
       }
        else if (nombreEntre > 100 || nombreEntre > nombreMystere) {
            printf("Votre nombre est trop grand\n");
        }
        else {
            printf("Bravo, vous avez gagne !\n");
        }
    } while (nombreEntre != nombreMystere);
    return 0;
}
