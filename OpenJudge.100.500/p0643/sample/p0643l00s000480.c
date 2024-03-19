#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
  int a,b,res=0;

  scanf("%d%d",&a,&b);

  if(a*b%2)
  {
    printf("Odd");
    return 0;
  }
     

  printf("Even");
  
  return 0;
}