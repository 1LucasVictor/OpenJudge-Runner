#include<stdio.h>

int main()
{
  int a,b,i;
  int ans;
  int digit;
  for(i=0;i<3;i++){
    ans = 0;
    digit = 0;
    scanf("%d %d\n",&a,&b);
    ans = a + b;
    digit = (int)log10((double)ans) + 1;
    printf("%d\n",digit);
  }
  return 0;
}