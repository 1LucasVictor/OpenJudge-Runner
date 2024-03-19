#include<stdio.h>
int main(void)
{
  int a,b;
  int count=1;
  scanf("%d %d",&a,&b);
  int sum=a;
  while(sum<b){
    sum+=a-1;
    count++;
  }
  printf("%d\n",count);
  return 0;
}
