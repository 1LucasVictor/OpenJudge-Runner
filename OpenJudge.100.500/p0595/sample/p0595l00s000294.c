#include <stdio.h>

int main(void)
{
  long int a;
  int b,k,d;
  int c[50];
  
  c[0] = 1;
  
  scanf("%ld",&a);
  scanf("%d",&b);
  scanf("%d",&k);
  
  int i;
  int count = 1;
  if(a >= b)
    d = a;
  else
    d = b;
  
  for(i = 2; i <= d; i++){
    if(a%i==0&&b%i==0){
      c[count] = i;
      count += 1;
    }
  }
  
  printf("%d",c[k-1]);
  
  return 0;
  
}
