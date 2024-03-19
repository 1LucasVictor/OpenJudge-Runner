#include<stdio.h>

int main(void)
{
  int a,b;
  scanf("%d%d",&a,&b);
  int all = 1,count = 0;
  while(all<=b-1){
    all -= 1;
    all += a;
    count++;
  }
  printf("%d\n",count);
  return 0;
}