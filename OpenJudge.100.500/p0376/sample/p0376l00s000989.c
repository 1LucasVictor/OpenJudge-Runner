#include<stdio.h>

int main()
{
  int n;
  int data[100]={};
  int i,j;

  scanf("%d",&n);
  
  for(i=0;i<n;i++)
    {
      scanf("%d",&data[i]);
    }

  for(j=n-1;j >-1;j--)
    {
      printf("%d",data[j]);
      if(j)printf(" ");
    }
  printf("\n");
  
  return 0;
}
  

