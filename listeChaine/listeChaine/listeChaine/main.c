#include <stdio.h>
#include <stdlib.h>

#include "listeChaine.h"


int main()
{
    Liste* maListe = initialisation();

    insertionStart(maListe, 4);
    insertionStart(maListe, 8);
    insertionStart(maListe, 15);
    insertionEnd(maListe, 13);

    afficherListe(maListe);

    //delListe(maListe);

    suppStart(maListe);

    afficherListe(maListe);

    printf( "%d", countListe(maListe));

    return 0;
}