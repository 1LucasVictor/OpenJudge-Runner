#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  int D,i;
  long N;
  char str[100],*p;
  
  fgets(str,sizeof(str),stdin);
  p=strtok(str," \n");
  D=atoi(p);
  p=strtok(NULL," \n");
  N=atol(p);
  if(N==100){
    N+=1;
  }
  
  for(i=0;i<D;i++){
    N*=100;
  }
  
  printf("%ld\n",N);
  
  return 0;
}
