#include<stdio.h>

int main()
{
  int a,b,i;
  int ans[3]={0,0,0};
  int digit[3]={0,0,0};
  for(i=0;i<3;i++){
    scanf("%d %d\n",&a,&b);
    ans[i] = a + b;
  }
  for(i=0;i<3;i++){
    digit[i] = (int)log10((double)ans[i]) + 1;
    printf("%d\n",digit[i]);
  }
  return 0;
}