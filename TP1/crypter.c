

#include <stdio.h>
#include <stlib.h>

#include "crypter.h"

#define TRUE 1
#define FALSE 0
#define YES 1
#define NO 0



int lirePhrase(char string[])
{
  int length = 0;//variable contenant la longueur de la chaine de caractères
  char c;//variable contenant le caractère courant
  
  printf("Veuillez saisir un phrase entre \" : \n");//message à l'utilisateur pour lui demander de saisir la chaîne
  
  while(getchar() !='"');//on attend le caractère '"'
  do//on entre au moins une fois dans la boucle
  {
    c = getchar();//on lit le buffer d'entrée
    if(c!='"') string[length++] = c;//si ce n'est pas '"', on l'ajoute à la chaîne
  }while(c!='"');//on recommence jusqu'à avoir '"'
  
  return length;//on renvoie la longueur de la chaîne
}

int getKey()
{
  int key =-1;//initialisation de la clef à -1 pour qu'elle soit mauvaise au début
  
  do//on entre au moins une fois dans la boucle
  {
    printf("Veuillez saisir un nombre compris entre 0 et 256 servant de clef : \n");//message à l'utilisateur pour lui demander de saisir la clef
    scanf("%d", &key);//on scan le buffer d'entrée en attendant un entier
  }while(key<0 && key>256);//si la clef est supèrieure à 256 ou infèrieure à 0, on recommence
  
  return key;//on renvoie la clef
}
