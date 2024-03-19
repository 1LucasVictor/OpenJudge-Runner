#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void){

  int a,b,k,i=0,c=0;
  scanf("%d%d%d",&a,&b,&k);
  
  while(c<k){
    i++;
    if(a%i==0&&b%i==0)
      c++;
  }
  /*for(i=1;i<500;i++){
    if(a%i==0&&b%i==0)
      c++;
    if(c==k)
      break;
  }*/
     printf("%d",i);
}