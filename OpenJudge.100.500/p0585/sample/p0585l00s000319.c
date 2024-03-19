#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  
  int A,B,T;
  char str[100],*p;
  
  fgets(str,sizeof(str),stdin);
  p=strtok(str," \n");
  A=atoi(p);
  p=strtok(NULL," \n");
  B=atoi(p);
  p=strtok(NULL," \n");
  T=atoi(p);
  
  printf("%d\n",(T/A)*B);
  
 return 0; 
}