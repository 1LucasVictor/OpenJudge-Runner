#include <stdio.h>
int main(){
  while(1){
    int h,w;
    int counth,countw;
    scanf("%d%d",&h,&w);
    if(h==0&&w==0) break;
    for(countw=0;countw<w;countw++) printf("#");
    printf("\n");
    for(counth=0;counth<h-2;counth++){
      printf("#");
      for(countw=0;countw<w-2;countw++){
        printf(".");
      }
      printf("#");
      printf("\n");
    }
    for(countw=0;countw<w;countw++) printf("#");
    printf("\n");
  }
  return 0;
}