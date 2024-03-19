#include<stdio.h>

int main()
{
  int a, b, x;

  scanf("%d %d %d", &a, &b, &x);

  if (x-a<0) {
    printf("NO");
  }else{
    if (a+b < x) {
      printf("NO");
    }else{
      printf("YES");
    }
  }

}
