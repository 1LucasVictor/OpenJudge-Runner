#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
  long l,r,i,j,d,min;
  char str[100],*p;
  
  fgets(str,sizeof(str),stdin);
  p=strtok(str," \n");
  l=atol(p);
  p=strtok(NULL," \n");
  r=atol(p);
  
  if(r-l>=2019){
    min=0;
    printf("%ld",min);
    return 0;
  }
  
  for(i=l,min=1000000000;i<r;i++){
    for(j=i+1;j<r+1;j++){
      d=(j%2019)*(i%2019);
      if(min>d){
        min=d;
      }
    }
  }
  
  printf("%ld",min);
  
  
  return 0;
}