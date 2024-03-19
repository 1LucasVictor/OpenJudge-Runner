#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  int a,x;
  char str[100],*p;
  
  fgets(str,sizeof(str),stdin);
  p=strtok(str," \n");
  x=atoi(p);
  p=strtok(NULL," \n");
  a=atoi(p);
  
  if(x>=a){
    printf("10\n"); 
  }else{
    printf("0\n");
  }
  
  
  return 0;
}