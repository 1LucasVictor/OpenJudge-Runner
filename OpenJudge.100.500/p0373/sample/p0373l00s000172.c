#include<stdio.h>

int main(void){
  int h,w;
  int i,j;
  
  while(1){
    scanf("%d",&h);
    scanf("%d",&w);

    if(h==0 && w==0){
      break;
    }
    
    for(i=0;i<h;i++){
      for(j=0;j<w;j++){
        if(i!=0 && j!=0 && i!=h-1 && j!=w-1){
          printf(".");
        }else{
          printf("#");
        }
      }
      putchar('\n');
    }
    putchar('\n');
  }
  
  return 0;
}