//calcule a complexidade do algoritmo abaixo
#include <stdio.h>
#include <stdlib.h>
int i,j,k,
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        r[i][j]=0;
        for(k=0;k<n;k++)
        {
            r[i][j]+=a[i][k]*b[k][j];
        }
    }
}

