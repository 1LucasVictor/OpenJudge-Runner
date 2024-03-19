#include<stdio.h>
#include<math.h>
int main()
{
  int l,x,i,j,k=0;
  
  scanf("%d",&l);

  for(i=0;i<l;i++)
    {
      scanf("%d",&x);
      
      for(j=2;j<=sqrt(x);j++)
	{
	  if(x%j==0){ k++; break;}
	}
      
    }
  
  printf("%d\n",l-k);

  return 0;
}

