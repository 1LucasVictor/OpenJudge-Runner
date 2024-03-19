#include <stdio.h>

int main() {
  int a,b,x = 0;

  scanf("%d %d %d", &a,&b,&x);

  if(a+b >= x){
    if(x >= a){
      printf("YES");
    } else {
      printf("NO");
    }

  }
  return 0;
}
