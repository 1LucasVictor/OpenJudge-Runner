#include<stdio.h>
int main()
{
    int N,i,j,k,l;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d%d%d",&j,&k,&l);
    if(j*j==k*k+l*l||k*k==j*j+l*l||l*l==j*j+k*k)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    }
    return 0;
}
