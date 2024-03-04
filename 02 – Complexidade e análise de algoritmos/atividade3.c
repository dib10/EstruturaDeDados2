//calcule a complexidade do algoritmo abaixo
int i,j,s;
s=0;
for(i=1;i<n-1;i++)
{
    for(j=1;j<2*n;j++)
    {
        s=s+1;
    }
}
/*
(1) 3+3n+2n
(2) 3+5n
(3) 4+3n+n(3+5n)
    4+6n+5n^2
*/