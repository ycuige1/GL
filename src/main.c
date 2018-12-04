//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"

int main(void)
{
	char nom[100],prenom[100];
	unsigned long int annee;
	printf("veuiller taper votre nom,SVP\n");
	scanf("%s",nom);
	
	printf("veuiller taper votre prenom,SVP\n");  
	scanf("%s",prenom); 
	
	printf("veuiller taper votre annee de naissance,SVP\n");  
	scanf("%lu",&annee);
	printf("Je m'appelle %s %s,et j'ai 19ans.\n",nom,prenom);
	
	printf("merci\n");   
	
	
    return 0;
}
