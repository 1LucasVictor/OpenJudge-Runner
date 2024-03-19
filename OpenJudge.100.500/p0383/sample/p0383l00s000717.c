#include<stdio.h>
int main()
{
long long int n,m,l,i,j,k;
scanf("%lld%lld%lld",&n,&m,&l);
long long int a[n][m];
long long int b[m][l];

for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        scanf("%lld",&a[i][j]);
    }
}


for(j=0;j<m;j++)
{
    for(k=0;k<l;k++)
    {
        scanf("%lld",&b[j][k]);
    }
}


long long int sum=0;
for(i=0;i<n;i++)
{
    for(k=0;k<l;k++)
    {
        for(j=0;j<m;j++)
        {
          sum=sum+a[i][j]*b[j][k];
        }
        if(k==(l-1))printf("%lld",sum);
       else{ printf("%lld ",sum);}
        sum=0;
    }
    printf("\n");

}

    return 0;
}

