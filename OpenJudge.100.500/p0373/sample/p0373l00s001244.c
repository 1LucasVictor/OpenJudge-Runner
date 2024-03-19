#include <stdio.h>

int main(void){
  int h,w,i,j;

  scanf("%d%d",&h,&w);

  while(h!=0 || w!=0){
    for(j=0;j<w;j++)  printf("#");
    printf("\n");
    for(i=1;i<h-1;i++){
      printf("#");
      for(j=1;j<w-1;j++)  printf(".");
      printf("#\n");
    }
    for(j=0;j<w;j++)  printf("#");
    printf("\n\n");
    scanf("%d%d",&h,&w);
  }

  return 0;
}