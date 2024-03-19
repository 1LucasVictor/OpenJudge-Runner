#include<stdio.h>
int main(){
  int a, b, c;
  scanf("%d%d",&a,&b);
  while(1){
    c = a % b;

    if(c == 0){
      break;
    }
    else {
      a = b;
      b = c;
  }
  }
  printf("%d\n",b);
  return 0;
}