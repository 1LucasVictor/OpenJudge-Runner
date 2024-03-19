#include<stdio.h>
int main()
{  int a[101][101];
   int i,n,t,k,p,j,u;
   scanf("%d",&n);
   k=n;
   for(i=0;i<n;i++)
     for(j=0;j<n;j++)
       a[i][j]=0;
   while(k)
   {  scanf("%d%d",&t,&p);
      t=t-1;
      for(i=0;i<p;i++)
      {  scanf("%d",&u);
         u=u-1;
         a[t][u]=1;
      }
      k--;
   }
   for(i=0;i<n;i++)
   {  for(j=0;j<n;j++)
      {  if(j)  printf(" ");
         printf("%d",a[i][j]);
	  }
      printf("\n");
   }
}
