#include <stdio.h>
int main()
{
  int k,i,sum=0,l;
  scanf("%d%d",&k,&l);
  int ar[l];
  for(i=0;i<l;i++)
  { 
    scanf("%d",&ar[i]);
    sum=sum+ar[i];
  }
  if(k<=sum)
  {
    printf("Yes\n");
  }
  else 
   {
     printf("No\n");
   }
  return 0;
}