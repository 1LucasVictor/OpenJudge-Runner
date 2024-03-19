#include <stdio.h>
//#include <string.h>

int main(void){

  //char s[11];
  //char *a,*b;
  int a,b= 0;
  scanf("%d %d", &a, &b);
	/*
  if(a<b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
  }
  */


	if((a+b)%2==0) printf("%d", (a+b)/2);
  	else printf("IMPOSSIBLE\n");

  
  return 0;
}

  