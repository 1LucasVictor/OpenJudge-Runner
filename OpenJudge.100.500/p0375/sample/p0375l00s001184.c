#include<stdio.h>

int main(void) {
  int i=1;
  int n,x;
  scanf("%d",&n);
  do{
    x=i;
    if(x%3==0)
      printf(" %d",x);
    else 
      do{
	if(x%10==3){
	  printf(" %d",x);
	  break;
	}
      }while(x/=10);
  }while(++i<=n);
  printf("\n");
  return(0);
}