#include <stdio.h>

int main()
{
  int kazu1,kazu2,K,k,amari;
  scanf("%d%d",&kazu1,&kazu2);
  if(kazu1>kazu2){K=kazu1;k=kazu2;}
  else{K=kazu2;k=kazu1;}

  while(1)
    {
      amari=K%k;
      if(amari==0)break;
      K=k;
      k=amari;
    }

  printf("%d\n",k);
  return 0;
}
  
  

