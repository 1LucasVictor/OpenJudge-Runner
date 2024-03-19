#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  int a,b;
  char str[100],*p;
  
  fgets(str,sizeof(str),stdin);
  p=strtok(str," \n");
  a=atoi(p);
  p=strtok(NULL," \n");
  b=atoi(p);
  
  if(((a*b)/2)*2 == a*b){
    printf("Even\n");
  }else{
    printf("Odd\n");
    
  }
  return 0;
}