/*
@Author : Alexis BIZON
@Revision : 1.0
@Creation Date : 18/09/2017
@Project Overview : TP pour chiffrer et déchiffrer une chaine de caractères
*/

#include <stdlib.h>
#include <stdio.h>

#include "crypter.h"

#define TRUE 1
#define FALSE 0
#define YES 1
#define NO 0

#define STRING_MAX_SIZE 200//Longueur max de la chaîne de caractères


int main()
{
  char string[STRING_MAX_SIZE];//tableau contenant la chaine de caractère
  int key =0;//clef de cryptage
  int length =0;//longueur de la chaine de caractères
  
  length = lirePhrase(string);//on lit la chaine de caractères
  
  key = getKey();//on lit la clef
  
  printf("Le message à chiffrer est : %s\n", string);//on affiche la chaine à crypter
  printf("La clef de chiffrement est : %d\n", key);//on affiche la clef de cryptage

  return 0;
}
