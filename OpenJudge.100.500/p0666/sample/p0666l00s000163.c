#include <stdio.h>
int main(){
    int x,a,b,c;
    scanf("%d%d%d",&x,&a,&b);
   c = b - a;
  if(c<0){
      printf("delicious");
     return 0;
  }else if(x+1<=c){
       printf("dangerous");
       return 0;
  }else if(c<x+1){
      printf("safe");
     return 0;
  }
}