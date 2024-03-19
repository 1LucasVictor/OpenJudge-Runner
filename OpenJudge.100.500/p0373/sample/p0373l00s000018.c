#include <stdio.h>
int main(void){
  int H,W,i,n,m;
  for(i=1;i<=400;i++){
      scanf("%d %d",&H,&W);
      for(m=1;m<=W;m++){
          printf("#");
      }
      printf("\n");
      if(H==0 && W==0){
          i=400;
      }
      for(n=1;n<=H-2;n++){
          printf("#");
          for(m=1;m<=W-2;m++){
          printf(".");
          }
          printf("#\n");
      }
      for(m=1;m<=W;m++){
          printf("#");
          }
      printf("\n");
      printf("\n");
  }
  return 0;
}