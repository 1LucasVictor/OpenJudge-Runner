#include<stdio.h>

int main(void)
{
  int a,b,c,count = 0;
  scanf("%d %d %d",&a,&b,&c);
  for(int i = a; i <= b; ++i){
    if(c%i == 0) count += 1;
  }
  printf("%d\n",count);
  return 0;
}