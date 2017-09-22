

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH_NOM 50
#define MAX_LENGTH_PRENOM 30


typedef struct note {
    char nom[MAX_LENGTH_NOM];
    char prenom[MAX_LENGTH_PRENOM];
    float valeur;
    struct note *suivant;
}note;

typedef struct note* liste_notes;




note * creer_nouvelle_note(char *nom,char *prenom,float valeur) {
    note *newNote = malloc(sizeof(note));
    strcpy(nom,newNote->nom);
    strcpy(prenom,newNote->prenom);
    newNote->valeur = valeur;
    newNote->suivant = NULL;
    return newNote;
}

liste_notes ajouter_note_tete(liste_notes notes,char *nom,char *prenom,float valeur) {
    // ajoute la note en tête, retourne la nouvelle liste de notes.
    return NULL;
}


liste_notes ajouter_note_queue(liste_notes notes,char *nom,char *prenom,float valeur) {
    // ajoute la note en queue, retourne la nouvelle liste de notes.
}


void afficher_notes(liste_notes notes) {
    // affiche l'ensemble des notes 
}


float calculer_moyenne(liste_notes notes) {
    // calcule et retourne la moyenne des notes de la liste.
    return 0;
}



int main() {

    liste_notes notes_SIT151 = NULL;
    
    note *noteTest = NULL;
    
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

    return 0;
}
