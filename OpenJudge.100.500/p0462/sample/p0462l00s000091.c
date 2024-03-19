#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int max(int a,int b){return a>b?a:b;}
int min(int a,int b){return a<b?a:b;} 
int main(void)
{
  long double a,b;
  long c;
  scanf("%llf %llf",&a,&b);
  c=a*b;
  printf("%ld",c);
}