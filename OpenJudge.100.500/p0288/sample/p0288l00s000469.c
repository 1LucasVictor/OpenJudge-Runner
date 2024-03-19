#include<stdio.h>

int main(){
  int i,j,k,m,Kazu[100],sum,key;

  scanf("%d",&j);
  if(j>100)
    {
      printf("??°?????§???????????????\n");
    }

  for(i=0;i<j;i++)
    {
      scanf("%d",&Kazu[i]);
      if(Kazu[i]>1000)
	{
	  printf("??°?????§???????????????\n");
	  continue;
	}
    }

  
  
  for(i=1;i<j;i++)
    {
      key = Kazu[i];
       
      for(k=0;k<j;k++)
	{
	  printf("%d ",Kazu[k]);
	}
       
      
      m=i;
       
      while(m > 0 && Kazu[m-1] > key)
	{
	  Kazu[m]=Kazu[m-1];
	  m--;
	  Kazu[m]=key;
	}
       
         printf("\n");
    }
   for(k=0;k<j;k++)
	{
	  printf("%d ",Kazu[k]);
	}
   printf("\n");
  return 0;
  
}