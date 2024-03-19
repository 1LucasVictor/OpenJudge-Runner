#include<stdio.h>
int main(void)
{
  int n;
  int i=0;
  int a;
  int min=1000000;
  int max=-1000000;
  long long int sum=0;

  scanf("%d", &n);

  for(i=0;i<n;i++){
    scanf("%d",&a);
    if(min>a) min=a;
    if(max<a) max=a;
    sum=sum+a;
  }

  printf("%d %d %lld\n", min, max, sum);
  return 0;
}