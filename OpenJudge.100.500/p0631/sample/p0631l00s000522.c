#include <stdio.h>

int main() {
  int a,b,x = 0;
  int c;

  scanf("%d %d %d", &a,&b,&x);

  if(x > a){
    if(a+b >= x){
      printf("YES");
    } else {
      printf("NO");
    }

  } else {
    printf("NO");
  }

  // if(flag == 1){
  // } else {
  //   printf("NO");
  // }

  return 0;
}
