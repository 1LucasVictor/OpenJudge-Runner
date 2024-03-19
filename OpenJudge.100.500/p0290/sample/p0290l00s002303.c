#include <stdio.h>
#include <math.h>

int judge(int);

int main()
{
  int i, n, num, count=0, result;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&num);
    result=judge(num);
    if(result==1) count++;
    
  }
  printf("%d\n",count);
  
  return 0;
}
int judge(int a)
{
  int i, sqrt_a;

  if(a==2) return 1;
  if(a%2==0) return 0;

  sqrt_a=sqrt(a);
  
  for(i=2;i<=sqrt_a;i++){
    if(a%i==0) return 0;
  }
  return 1;
}
