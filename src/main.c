//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <math.h>
#include <stdio.h>

int main(void)
{
    unsigned char bin[10]={8,5,23,56,7,98,4,15,20,2},i,seuil=20;
    int sat[10]={rand()%100-50,rand()%100-50,rand()%100-50,rand()%100-50,rand()%100-50,rand()%100-50,rand()%100-50,rand()%100-50,rand()%100-50,rand()%100-50},n,SEUILB=-100,SEUILH=200;
    int dist[10]={20,46,-2,90,78,17,33,-50,14,3},m,distance;
    int a[5]={17,33,50,38,4},b[5],p;
    int miroir[6]={8,18,13},q;
    for(i=0;i<10;i++)
    {
        if(bin[i]>seuil)
        {
            bin[i]=1;
        }
        else
        {
            bin[i]=0;
        }
    }

    for(n=0;n<10;n++)
    {
        if(sat[n]>SEUILH)
        {
            sat[n]=SEUILH;
        }else if(sat[n]<SEUILB)
        {
            sat[n]=SEUILB;
        }
    }


    for(m=9;m>0;m--)
    {
        distance=abs(dist[m]-dist[m-1]);
        dist[m]=distance;
    }


    for(p=0;p<4;p++)
    {
        b[p]=a[4-p];
    }


    for(q=0;q<3;q++)
    {
        miroir[5-q]=miroir[q];

    }

    return 0;
}
