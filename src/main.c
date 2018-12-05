//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"

int main(void)
{
	char ligne1[80]= "Nom: Pentagone_B";
	char ligne2[80]= "Nb points: 5";
	char ligne3[80]= "Cordonnees: 10 20 30 20 30 40 43 53 35 65";

    char nom_fig[80];
    int nb_pts,i;
    long int x[10],y[10];

    char message[80];

    sscanf(ligne1,"%*s %s" ,nom_fig);
	sscanf(ligne2,"%*s %*s %d" ,&nb_pts);
	sscanf(ligne3,"%*s %d %d %d %d %d %d %d %d %d %d",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x[3],&y[3],&x[4],&y[4]);

    if(ligne1[5]==0||ligne2[11]==0||ligne3[41]==0)
        {
             MessagePopup("Erreur","Il manque au moins d'une donnee.");
        }
     else
     {
        sprintf(message,"La figure %s possede %d sommets",nom_fig,nb_pts);
        MessagePopup("information de la figure",message);
     }

    return 0;
}
