#include <stdio.h>

int main(void){
  int n;
  int a;
  scanf("%d",&n);
  for(int i=0;i<3;i++){
    if(n%10==7){
      printf("Yes\n");
      return 0;
    }
    else n /=10;
  }
  printf("No\n");
  return 0;
}
