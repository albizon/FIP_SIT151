

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct note {
};

typedef struct note* liste_notes;




struct note * creer_nouvelle_note(char *nom,char *prenom,float valeur) {
    // retourne une nouvelle note avec nom/prenom/valeur
    return NULL;
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
