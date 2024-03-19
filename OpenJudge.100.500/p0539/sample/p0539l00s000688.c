#include <stdio.h>

int main(){
  int a;
  scanf("%d", &a);
  for(int i = 2; i <=9; ++i){
    if(a%i==0 && a >= 1*i && a <= 9*i){
      printf("Yes\n");
      return 0;
    }
  }
  printf("No\n");
  return 0;
}
