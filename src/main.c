//  Copyright (c) 2018 Antoine Tran Tan
//

#include <userint.h>
#include <stdio.h>
#include "my_header.h"

int main(void)
{
	char nom[100],prenom[100],chaine[100];
	unsigned long int annee,age;
    int a;
    
	printf("veuillez taper votre nom,SVP\n");
	scanf("%s",nom);
	
	printf("veuillez taper votre prenom,SVP\n");  
	scanf("%s",prenom); 
	
	printf("veuillez taper votre annee de naissance,SVP\n");  
	scanf("%lu",&annee);

    age=2018-annee;

    sprintf(chaine,"Je m'appelle %s %s et j'ai %lu ans.",prenom,nom,age)
    printf("%s\n",chaine);
	
    a=MessagePopup("votre profil",chaine);
 
    return 0;
}
