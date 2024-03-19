#include <stdio.h>

int main() {
  int a,b,x = 0;
  int sum;

  scanf("%d %d %d", &a,&b,&x);

  if(a+b >= x){
    if(x > a){
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