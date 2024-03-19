#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  int D,N,i;
  char str[100],*p;
  
  fgets(str,sizeof(str),stdin);
  p=strtok(str," \n");
  D=atoi(p);
  p=strtok(NULL," \n");
  N=atoi(p);
  
  for(i=0;i<D;i++){
    N*=100;
  }
  
  printf("%d\n",N);
  
  return 0;
}