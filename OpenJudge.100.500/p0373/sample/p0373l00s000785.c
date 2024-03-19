#include<stdio.h>
#include<stdlib.h>

int main(){
  int h[300],w[300],i,j,k=0;
  while(1){
    scanf("%d%d",&h[k],&w[k]);
    if(h[k]==0&&w[k]==0){
      break;
    }
    k++;
  }
  k=0;
  while(1){
    if(h[k]==0&&w[k]==0){
      break;
    }
    for(j=0;j<w[k];j++){
        printf("#");
    }
    printf("\n");
    for(i=1;i<h[k]-1;i++){
      printf("#");
      for(j=1;j<w[k]-1;j++){
        printf(".");
      }
      printf("#\n");
    }
     for(j=0;j<w[k];j++){
        printf("#");
     }
    printf("\n\n");
    k++;
  }
  return 0;
}
