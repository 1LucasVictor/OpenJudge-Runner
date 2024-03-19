#include<stdio.h>
#include<stdlib.h>

int main()
{
  
  int a;
  int b;
  int n;
  
  scanf("%d%d",&a,&b);

  if(a < 1 || 1000000000 < a || b < 1 || 100000000 < b){
    exit(1);
  }

  if(a<b){
    n=a;
    a=b;
    b=n;
  }

  while(n != 0){
    n = a%b;
    a = b;
    b = n;
  }

  printf("%d",a);
  return 0;
}

