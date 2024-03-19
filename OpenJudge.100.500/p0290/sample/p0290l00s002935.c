
#include<stdio.h>

int main(){

  int i,j,sum,flag=1,sei[10000],count=0;

  scanf("%d",&sum);

  for(j=0;j<sum;j++)
    {
      scanf("%d",&sei[j]);
    }

  for(i=0;i<sum;i++)
    {
      if(flag==0)
	{
	  flag=1;
	}
      for(j=2;j<sei[i]-1;j++)
	{
	  if(sei[i]%j == 0)
	    {
	      flag=0;
	      break;
	    }
	}
      count+=flag;
    }
 
     printf("%d\n",count);
   return 0;
}