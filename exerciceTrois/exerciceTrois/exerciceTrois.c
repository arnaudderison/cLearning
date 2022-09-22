
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

double lireDouble();
int lire(char* chaine, int longueur);
int viderBuffer();

int main()
{
    double poids;

    printf("Quel est votre poids ?");
    poids = lireDouble();

    printf("Votre poids est  de %lf Kg", poids);
    return 0;
}

int lire(char *chaine, int longueur) {
    char* positionToucheEnter = NULL;
    char* positionVirgule = NULL;

    if (fgets(chaine, longueur, stdin) != NULL) //la saisie est converti ?
    {
        //trouver '\n"
        positionToucheEnter = strchr(chaine, "\n");
        positionVirgule = strchr(chaine, ",");

        if (positionVirgule != NULL) {
            *positionVirgule = ".";
        }

        if (positionToucheEnter != NULL)
        {
            *positionToucheEnter = "\0"; //change "\n" en "\0" pour supprimer le retour à la ligne
            return 1;
        }
        else {
            viderBuffer();
        }
    }
    else {
        viderBuffer();
        return 0;
    }
}

int viderBuffer()
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}

//double lireDouble()
double lireDouble()
{
    char nombreText[100]; //100 devrait suffir selon OpenClasroom
    
    if (lire(nombreText, 100)) {
        //char* endptr;
        //lire le text sans "\n" et convertir en nombre
        //return strtol(nombreText, NULL, 10);

        return strtod(nombreText, NULL);
        
    }
    else {
        return 0.0;
    }
}
