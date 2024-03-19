#include<stdio.h>
int main(){
  int x=0;
  int y=0;
  int flag=0;
  scanf("%d %d",&x,&y);
  for(int i=0;i<=x;i++){
    if(i!=x){
          for(int j=0;j<=x-i;j++){
            if(i*4+j*2==y){
              flag++;
            }
          }
    }else{
      if(y%4==0){
        flag++;
      }
    }
  }
  if(flag==0){
    printf("No");
  }else{
    printf("Yes");
  }
}