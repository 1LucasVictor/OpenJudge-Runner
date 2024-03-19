#include<stdio.h>

int main(void)
{
  int a, b, k, r, i;
  scanf("%d%d%d", &a,&b,&k);
  if(b > a) {
    a = b;
  }
  for(i = 2; i < a; i++) {
    if(a%i==0 && b%i==0) {
      if(i == k) {
        printf("%d\n", i);
 		break;
      }
    }
  }
  return 0;
}
    