#include<stdio.h>
int main(void)
{
  int i,j,wide,height;
  int h[10000],w[10000];
  i = 1;
  while(1){
    scanf("%d %d",&h[i],&w[i]);
    if(h[i] == 0 && w[i] == 0){
      break;
    }
    i++;
  }
  for(j = 1;j < i;j++){
    for(wide = 0;wide < w[j];wide++){
      printf("#");
    }
    printf("\n");
    for(height = 3;height <= h[j];height++){
      printf("#");
      for(wide = 3;wide <= w[j];wide++){
        printf(".");
      }
      printf("#\n");
    }
    for(wide = 1;wide <= w[j];wide++){
      printf("#");
    }
    printf("\n");
    if(h[j+1] != 0){
       printf("\n");
    }
  }
  return 0;
}