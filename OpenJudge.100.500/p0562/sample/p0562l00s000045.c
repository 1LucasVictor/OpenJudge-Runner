#include<stdio.h>
int main(){
  int a, b, i;
  scanf("%d %d", &a, &b);
  if(b == 1){
    puts("0");
    return 0;
  }
  for(i = 0; a + (a - 1) * i < b; i++){} 
  printf("%d\n", i + 1);
  return 0;
}