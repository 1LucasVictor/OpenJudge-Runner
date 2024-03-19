#include <stdio.h>

int main() {
  int a,b,x;

  scanf("%d %d %d", &a,&b,&x);

  if(a+b > x){
    printf("YES");
  } else if(x > a){
    printf("YES");
  } else {
    printf("NO");
  }

  return 0;
}
