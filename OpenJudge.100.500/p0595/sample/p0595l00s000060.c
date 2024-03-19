#include <stdio.h>

int main(void){

  int a,b,k,i;
  scanf("%d %d %d",&a,&b,&k);
  
  for(i=100;i>0;i--){
  	if(a%i==0 && b%i==0){
    	k--;
    }
    if(k==0){
    	printf("%d",i);
    }
  }
  
  return 0;
}
  