#include <stdlib.h>
#include <stdio.h>
#include "listeChaine.h"

//initialise la liste 
Liste* initialisation() {
	Liste* liste = malloc(sizeof(*liste));
	Element* element = malloc(sizeof(*element));

	if (element == NULL || liste == NULL) {
		exit(EXIT_FAILURE);
	}

	element->number = 0;
	element->suivant = NULL;

	liste->premier = element;

	return liste;
}
//insérer un element en début de liste
void insertionStart(Liste *liste, int nvElement) {

	/* Création du nouvel élément */
	Element* nouveau = malloc(sizeof(*nouveau));
	if (liste == NULL || nouveau == NULL)
	{
		exit(EXIT_FAILURE);
	}
	nouveau->number = nvElement;

	/* Insertion de l'élément au début de la liste */
	nouveau->suivant = liste->premier;
	liste->premier = nouveau;
}
//insérer un element en fin de liste
void insertionEnd(Liste *liste, int nvElement) {
	/*Creation du nouvel élément*/
	Element* nouveauAnd = malloc(sizeof(*nouveauAnd));

	if (liste == NULL || nouveauAnd == NULL) {
		exit(EXIT_FAILURE);
	}

	/*Creation de l'element courant*/
	Element* currentElement = liste->premier;

	while (currentElement->suivant != NULL) {
		currentElement = currentElement->suivant;
	}
	/*insertion en fin de liste*/
	nouveauAnd->number = nvElement;
	nouveauAnd->suivant = NULL;
	currentElement->suivant = nouveauAnd;
}

//Supprimer le premier élément de la liste
void suppStart(Liste *liste) {
	if (liste == NULL) {
		exit(EXIT_FAILURE);
	}
	if (liste->premier != NULL) {
		Element* aSupprimer = liste->premier; 
		liste->premier = aSupprimer->suivant;
		free(aSupprimer);
	}
}

void afficherListe(Liste* liste)
{
	if (liste == NULL)
	{
		exit(EXIT_FAILURE);
	}

	Element* actuel = liste->premier;

	while (actuel != NULL)
	{
		printf("%d -> ", (*actuel).number);
		actuel = actuel->suivant;
	}
	printf("NULL\n");
}

void delValeurListe(Liste *liste, int valeur) {
	if (liste == NULL) {
		exit(EXIT_FAILURE);
	}

	/*Création de l'émément courant*/
	Element* currentElement = liste->premier;
	Element* nextCurrentElement = currentElement->suivant;
	Element* nextNextCurrentElement = nextCurrentElement->suivant;

	/*Pacourir la liste*/
	while (nextCurrentElement->number != valeur && currentElement->suivant != NULL) {
		currentElement = currentElement->suivant;
		nextCurrentElement = currentElement->suivant;
		nextNextCurrentElement = nextCurrentElement->suivant;
	}

	//modifier la liste
	if (currentElement->suivant == NULL) {
		exit(EXIT_FAILURE);
	}
	else {
		currentElement->suivant = nextNextCurrentElement;
		free(nextCurrentElement);
	}

}
