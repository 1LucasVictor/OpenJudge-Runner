#include<stdio.h>

int main(){
    int a ,b;
  scanf("%d %d",&a ,&b);
  if(a==2){
      a=10000;
  }else if(a==1){
      a=100;
  }else{
      a=1;
  }
  b=a*b;
  printf("%d",  b);

return 0;
}