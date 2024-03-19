#include<stdio.h>
int main(){
  int h,w,i,j,k,l;
  while(scanf("%d %d",&h,&w)){
    if(h==0 && w==0)break;
    for(i=1;i<h-1;i++){
      if(i==1){
        for(k=0;k<w-1;k++)printf("#");
        printf("#\n");
      }
      for(j=1;j<w-1;j++){
        if(j==1)printf("#");
        printf(".");
        if(j==w-2)printf("#\n");
      }
    }
     for(l=0;l<w-1;l++)printf("#");
     printf("#\n");
     printf("\n");
  }
  return 0;
}