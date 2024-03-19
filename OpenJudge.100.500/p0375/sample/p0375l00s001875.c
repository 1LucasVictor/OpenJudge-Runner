#include <stdio.h>

int main(void)
{
  int i,x;
  int n;

  scanf("%d",&n);

  for(i=1; i<=n; i++){ 
    if(i % 3 == 0){
      printf(" %d",i);
    }
    for(x=i; x>0; x=x/10){
      if((x % 10 == 3)&&(i % 3 != 0)){
	printf(" %d",i);
	break;
      }    
    }
  }
  
  puts("");
  
  return(0);
}