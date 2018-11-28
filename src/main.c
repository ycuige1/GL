//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib_suite.h"
void  initialiserTirage(void);
short tirerNumero(void);

int main(void)
{
    unsigned char joueur[6]={34,12,9,17,33,2},gagnante[6],valeur=0,k,i,n,q;
    for(q=0;q<100;q++)
    {
        for(k=0;k<6;k++)
     {
        initialiserTirage();
        gagnante[k]=tirerNumero();
     }

        for(i=0;i<6;i++)
     {
        for(n=0;n<6;n++)
        {
            if(joueur[i]==gagnante[n])
            {
                valeur=valeur+1;
            }

        }
     }

    }
    return 0;
}