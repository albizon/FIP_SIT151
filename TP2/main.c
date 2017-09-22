

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct note {
    char *nom;
    char *prenom;
    float valeur;
    struct note *suivant;
}Note;

typedef struct note* liste_notes;




Note * creer_nouvelle_note(char *nom,char *prenom,float valeur) {
    Note *newNote = malloc(sizeof(struct note));
	newNote->nom = nom;
	newNote->prenom = prenom;
    newNote->valeur = valeur;
    newNote->suivant = NULL;
    return newNote;
}

liste_notes ajouter_note_tete(liste_notes notes,char *nom,char *prenom,float valeur) {
    Note *newNote = malloc(sizeof(struct note));
	newNote->nom = nom;
	newNote->prenom = prenom;
	newNote->valeur = valeur;
	newNote->suivant = notes;
    return newNote;
}


liste_notes ajouter_note_queue(liste_notes notes,char *nom,char *prenom,float valeur) {
    Note *newNote = malloc(sizeof(struct note));
	listeNote currentListe = notes;
	newNote->nom = nom;
	newNote->prenom = prenom;
	newNote->valeur = valeur;
	newNote->suivant = NULL;
	if(notes == NULL) return newNote;
	else
	{
		while (currentListe->suivant) currentListe = currentListe->suivant;
		currentListe->suivant = newNote;
    	return notes;
	}
}


void afficher_notes(liste_notes notes) {
    // affiche l'ensemble des notes 
}


float calculer_moyenne(liste_notes notes) {
    // calcule et retourne la moyenne des notes de la liste.
    return 0;
}



void main() {


    liste_notes notes_SIT151 = NULL;
    
    Note *noteTest = NULL;
    
    noteTest = creer_nouvelle_note("BERNEL","Lucas", 2);
    printf("\n%s - %s : %f\n",noteTest->nom, noteTest->prenom, noteTest->valeur);
    

    notes_SIT151 = ajouter_note_tete(notes_SIT151,"Kerdreux","Jerome",12.0);
    notes_SIT151 = ajouter_note_tete(notes_SIT151,"Floch","Jean-Yves",14.0);
    notes_SIT151 = ajouter_note_tete(notes_SIT151,"Thepaut","Andre",18.5);
    notes_SIT151 = ajouter_note_tete(notes_SIT151,"Le Moan","Corinne",16);
    notes_SIT151 = ajouter_note_queue(notes_SIT151,"Tanguy","Philippe",14);
    notes_SIT151 = ajouter_note_queue(notes_SIT151,"Le Nestour","Florian",15);

    printf("\nLa moyenne est de %0.2f\n\n",calculer_moyenne(notes_SIT151));
    afficher_notes(notes_SIT151);

    //return 0;
}
