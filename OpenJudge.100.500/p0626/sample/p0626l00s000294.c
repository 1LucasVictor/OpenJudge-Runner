#include<stdio.h>
int main()
{
	int D,N;
	 scanf("%d",&D);
	 scanf("%d",&N);
  if(D==0){
	  printf("%d",1*N);
  }
  if(D==1)
  {
	  printf("%d",100*N);
  }
  if(D==2){
	  printf("%d",10000*N);
  }
  return 0;
}
