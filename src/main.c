//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib_suite.h"
int main(void)
{
    int joueur[6]={34,12,9,17,33,2},gagnante[6]={17,33,9,35,3,7},valeur,i,n;
    int joueur2[6]={tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero()},gagnante2[6],valeur2,m,o;
    for(i=0;i<6;i++)
    {
        for(n=0;n<6;n++)
        {
            if(joueur[n]==gagnante[i])
            {
                valeur=valeur+1;
            }

        }
    }
    
     initialiserTirage(void)

        for(m=0;m<6;m++)
    {
        for(o=0;o<6;o++)
        {
            if(joueur2[m]==gagnante2[o])
            {
                valeur2=valeur2+1;
            }

        }
    }



    return 0;
}