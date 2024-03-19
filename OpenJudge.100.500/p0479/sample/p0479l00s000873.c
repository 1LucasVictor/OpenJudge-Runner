#include<stdio.h>
int main()
{
  int n,i;
  scanf("%d", &n);
 
  int a[n],b[n];
  
  for(i=0;i<=n;i++)
  {b[i]=0;a[i]=0;}
  
  for(i=1;i<n;i++)
  {
   scanf("%d",&a[i]); 
  }
  
  //for(i=0;i<=n;i++)
  //{printf("%d ",a[i]);}
  //printf("\n");

  for(i=1;i<=n;i++)
  {
  	b[a[i]-1]=b[a[i]-1]+1;
  }
  
  for(i=0;i<n;i++)
  {
  	printf("%d\n",b[i]);
  }
  return 0;
}