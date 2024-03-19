#include<stdio.h>

int main()
{
int n,k,v,i,j,bv[100][100],u[100];
scanf("%d",&n);

for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
bv[i][j]=0;
}
}

for(i=1;i<=n;i++)
{
scanf("%d",&u[i]);
scanf("%d",&k);
if(k==0) continue;
else
{
for(j=0;j<k;j++)
{
scanf("%d",&v);
bv[i][v]=1;
}
}
}


for(i=1;i<=n;i++)
{
for(j=1;j<n;j++)
{
printf("%d ",bv[i][j]);
}
printf("%d\n",bv[i][n]);
}

return 0;
}