#include<stdio.h>
int main(){
  int width,high,i,j;

  while(1){
    scanf("%d %d",&high,&width);
    if(width == 0 && high == 0) break;
    for(i=0;i<high;i++){
      for(j=0;j<width;j++){
        if(i == 0) printf("#");
        else if(j == 0) printf("#");
        else if(j == width-1) printf("#");
        else if(i == high-1) printf("#");
        else printf(".");
      }
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}

