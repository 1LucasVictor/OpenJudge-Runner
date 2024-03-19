#include<stdio.h>
int main(){
  int H,W,i,j;
  while(1){
 scanf("%d %d\n",&H,&W);
 if(H==0 && W==0)break;
 else {for(i=0;i<H;i++){
    printf("#");
    for(j=1;j<W-1;j++){
      if(i==0 ||i==H-1){
	printf("#");
      }else {
	printf(".");
      }
    }
    printf("#");
    printf("\n");
  }
 }
 printf("\n");
  }
  return 0;
}