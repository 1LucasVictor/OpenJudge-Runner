#include <stdio.h>
int main(void){
  int h,w,i,j;
  while(scanf("%d %d",&h,&w),h+w){
    for(i=0;i<w;i++)
      printf("#");
    printf("\n");
    for(i=0;i<h-2;i++){
      printf("#");
      for(j=0;j<w-2;j++)
        printf(".");
      printf("#");
      printf("\n");
    }
    for(i=0;i<w;i++)
      printf("#");
    printf("\n");
  }
  return 0;
}