#include<stdio.h>
int main(void)
{
  int a,b;
  int count=0;
  scanf("%d %d",&a,&b);
  int sum=1;
  while(sum<b){
    sum+=a;
    sum-=1;
    count++;
  }
  printf("%d\n",count);
  return 0;
}
