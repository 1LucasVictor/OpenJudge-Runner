#include <stdio.h>

int main(void)
{
  int a,b,c;
  int k;
  int sum=0;
  scanf("%d %d %d %d", &a, &b, &c, &k);
  if(a>=k){
    sum = k;
    printf("%d\n", sum);
  } else {
    sum += a;
    if(b>=k-a){
      printf("%d\n", sum);
    } else {
      sum += -1*(k-a-b);
      printf("%d\n", sum);
    }
  }
  return 0;
}