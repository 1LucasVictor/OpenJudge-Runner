#include <stdio.h>
int main()
{
  int n, i, max=-1000000, min=1000000, sum=0;
  scanf("%d",&n);

  int a;

  for(i=0;i<n;i++){
    scanf("%d",&a);
    if(a<min){min=a;}
    if(a>max){max=a;}
    sum = sum + a;
  }



  printf("%d %d %d\n", min, max, sum);

  return 0;
}