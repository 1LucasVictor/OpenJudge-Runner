#include <stdio.h>
int main() 
{
  int a,c;
  long long int b;
  scanf("%d %lld",&a,&b);
  if((a%2==0) & (b%2==0))
  {
  c=(a+b)/2;
  printf("%d",c);
  }
  else if((a%2!=0) & (b%2!=0))
  {
  c=(a+b)/2;
  printf("%d",c);
  }
  else
  printf("Impossible\n");
  return 0;
}