#include <stdio.h>

int main(void){
  int n,x,i;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    x=i;
    if(x%3==0)
      printf(" %d",i);
    else{
      do{
	if(x%10==3){
	  printf(" %d",i);
	  break;
	}else x /= 10;
      }while(x != 0);
    }
  }
  puts("");
  return 0;
}