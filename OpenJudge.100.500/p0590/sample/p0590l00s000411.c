#include <stdio.h>
#include <stdlib.h>
int main(){
  int x[6];//a,b,c,d,e,k
  for(int k=0; k<=5; k++){
    scanf("%d",&x[k]);
  }
  for(int l=0; l<=5; l++){
    if(x[l+1]-x[l]>x[5]){
      printf(":(");
      exit(0);
    }
  }
  printf("Yay!");
}