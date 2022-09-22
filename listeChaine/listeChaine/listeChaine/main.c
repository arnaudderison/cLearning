#include <stdio.h>
#include <stdlib.h>

#include "listeChaine.h"


int main()
{
    Liste* maListe = initialisation();

    insertionStart(maListe, 4);
    insertionStart(maListe, 8);
    insertionStart(maListe, 15);
    //suppStart(maListe);

    afficherListe(maListe);

    return 0;
}