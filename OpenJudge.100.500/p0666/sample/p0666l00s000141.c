#include <stdio.h>

int main(){
  int x,a,b;
  scanf("%d %d %d",&x,&a,&b);
  
  if(a>=b){
    printf("delicious");
  } else if(a<b && (b-a)<x){
    printf("safe");
  } else {
    printf("dangerous");
  }
}
         