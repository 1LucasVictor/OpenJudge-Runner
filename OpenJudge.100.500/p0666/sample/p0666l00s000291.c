#include<stdio.h>
int main(){
  int x, a, b;
  scanf("%d %d %d", &x, &a, &b);
  if(a>=b){
    printf("delicious\n");
  }else if(x+1 < b-a){
    printf("dangerous\n");
  }else{
    printf("safe\n");
  }

  return 0;
}
