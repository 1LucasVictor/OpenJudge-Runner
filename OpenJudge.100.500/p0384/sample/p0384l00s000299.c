#include<stdio.h>

int main(void){
  int i=0;
  char c;
  while(1){
    scanf("%c",&c);
      if(c>='A'&&'Z'>=c)c += 'a'-'A';
      else if(c>='a'&&'z'>=c)c += 'A' - 'a';
      printf("%c",c);
      if(c =='\n'){
	return(0);
      }
    }
  return(0);
}