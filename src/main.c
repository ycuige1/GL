//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"

int main(void)
{
    char nom_fig[80];
    int nb_pts;
    int x[10],y[10];
    char ligne1T[80]= "Nom: triangle_A";
	char ligne2T[80]= "Nb points: 3";
	char ligne3T[80]= "Cordonnees: 10 20 30 20 30 40 -1 -1 -1 -1";
	char ligne1P[80]= "Nom: Pentagone_B";
	char ligne2P[80]= "Nb points: 5";
	char ligne3P[80]= "Cordonnees: 10 20 30 20 30 40 43 53 35 65";

    sscanf(ligne1T,"%*s %s",nom_fig[0]);
	sscanf(ligne2T,"%*s %*s %d",&nb_ptsA);
	sscanf(ligne3T,"%*s %d %d %d %d %d %d %d %d %d %d",&x1[0],&y1[0],&x1[1],&y1[1],&x1[2],&y1[2],&x1[3],&y1[3],&x1[4],&y1[4]);
    sscanf(ligne1P,"%*s %s" , nom_fig[1]);
	sscanf(ligne2P,"%*s %*s %d" ,&nb_ptsB);
	sscanf(ligne3P,"%*s %d %d %d %d %d %d %d %d %d %d",&x2[0],&y2[0],&x2[1],&y2[1],&x2[2],&y2[2],&x2[3],&y2[3],&x2[4],&y2[4]);
    return 0;
}
