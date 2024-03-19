#include<stdio.h>
int main(){
  int X,Y;
  scanf("%d%d",&X,&Y);
  
  for(int i=0;i<Y;i++){
    for(int t=0;t<Y;t++){
      if(Y==i*2+t*4 && X==i+t){
        printf("Yes");
        return 0;
      }
    }
  }
  printf("No");
  return 0;
}
