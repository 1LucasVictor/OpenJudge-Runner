#include<stdio.h>
int main(){
  int h,f,i,j;
  scanf("%d%d",&h,&f);
  for(i=0;i<=h;i++){
    for(j=0;j<=h-j;j++){
      if((i*2+j*4) == f){
        printf("Yes");
        return 0;
      }
    }
  }
  printf("No");
}