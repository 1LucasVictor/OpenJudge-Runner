#include<stdio.h>
int main(){
  int x=0;
  int y=0;
  int flag=0;
  scanf("%d %d",&x,&y);
  if(x*4 < y){
    printf("No");
  }else if(y%2==1){
    printf("No");
  }else{
    for(int i=0;i<=x;i++){
      for(int j=0;j<=x-i;j++){
        if( (4*i+j*2) == y){
          printf("Yes");
          flag++;
          break;
        }
      }
      if(flag!=0){
        break;
      }
    }
    if(flag==0){
     printf("No"); 
    }
  }
}