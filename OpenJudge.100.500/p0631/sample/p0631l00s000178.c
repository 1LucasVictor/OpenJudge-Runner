#include <stdio.h>

int main() {
  int a,b,x = 0;
  int flag;
  scanf("%d %d %d", &a,&b,&x);

  if(a+b >= x){
    if(a <= x){
      flag = 1;
    }

  }

  if(flag == 1){
    printf("YES");
  } else {
    printf("NO");
  }

  return 0;
}
