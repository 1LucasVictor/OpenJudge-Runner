#include<stdio.h>

int main(void){
  int a=0,b=0;
  scanf("%d %d",&a,&b);
  if(a>=1){
    if(a<=9){
      if(b>=1){
        if(b<=9){
          printf("%d",a*b);
		}
		else{
    printf("-1");
  }
	  }
	  else{
    printf("-1");
  }
	}
	else{
    printf("-1");
  }
  }
  else{
    printf("-1");
  }
  return 0;
}