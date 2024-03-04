//calcule a complexidade do algoritmo abaixo
int i,j,k,s;
for(i=0;i<n-1,i++)
{
    for(j=i+1;j<n;j++)
    {
        for(k=1;k<j;k++)
        {
            s=1;
        }
    }
}

/*(1) 2+2n+n
(2) 2+3n
(3) 3+2n
(4) 3+2n+n(2+3n)
2n+3n^2
4n+3n^2+3
(5) 3+3n
(6) n(3+2n+n(2+3n))
(7)4n+3n^3+6n+3*/
