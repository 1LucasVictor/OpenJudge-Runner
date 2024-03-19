#include<stdio.h>
int main(void){
  int H,W;
  do{
    int i,j;
    scanf("%d %d",&H,&W);
    if(H==0&&W==0||100<H||H<3||100<W||W<3)
      return 0;
    for(i=0;i<H;i++){
      for(j=0;j<W;j++){
        if(i==0||i==H-1||j==0||j==W-1)
          printf("#");
        else
          printf(".");
      }
      printf("\n\n");
    }
    printf("\n");
  }while(H!=0||W!=0);
  return 0;
}