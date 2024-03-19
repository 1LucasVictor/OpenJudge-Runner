#include <stdio.h>

int main(){
  int a,b,c;
  
  scanf("%d %d %d",&a,&b,&c);
  if(c-(a-b)<=0){
	  printf("0");
  } else {
    printf("%d",c-(a-b));
  }
}
