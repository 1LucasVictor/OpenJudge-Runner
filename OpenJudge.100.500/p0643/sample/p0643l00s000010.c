#include <stdio.h>
int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  if(a % 2 == 1 && b % 2 == 1){
    puts("Odd\n");
  } else {
    puts("Even\n");
  }
  return 0;
}