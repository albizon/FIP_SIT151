#infndef __CRYPTER_H__
#define __CRYPTER_H__


/*
@author : 		Alexis BIZON
@Revision : 		1.0
@Creation Date : 	18/09/2017
@Function Overview : 	Fonction lisant une phrase saisie au clavier par l'utilisateur commençant et finissant par "
@params :
			-char string[] : pointeur vers le tableau contennant la chaine à renvoyer
@return :		-int : longueur de la chaîne de caractères
*/
int lirePhrase(char string[]);

/*
@author : 		Alexis BIZON
@Revision : 		1.0
@Creation Date : 	18/09/2017
@Function Overview : 	Fonction lisant une clef étant un entier compris entre 0 et 256
@params :		-none
@return :		-int : la clef
*/
int getKey();




#endif
