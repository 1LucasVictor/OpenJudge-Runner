#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void){

  int i,x[5],k,max=0,min=200;
  for(i=0;i<5;i++){
  scanf("%d",&x[i]);
   if(max<=x[i]){
    max=x[i];
   }
   if(min>=x[i]){
     min=x[i];
   }
  }
  scanf("%d",&k);
  if(abs(max-min)<=k)
   printf("Yay!");
  else
   printf(":(");
}