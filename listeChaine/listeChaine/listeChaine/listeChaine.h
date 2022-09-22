#ifndef H_LISTE_CHAINEE
#define H_LISTE_CHAINEE

typedef struct Liste Liste;
struct Liste
{
	Liste* premier;
};

typedef struct Element Element;
struct Element
{
	int number;
	Element* suivant;
};


Liste* initialisation();
void insertionStart(Liste* liste, int nvElement);
void suppStart(Liste* liste);
void afficherListe(Liste* liste);
#endif
