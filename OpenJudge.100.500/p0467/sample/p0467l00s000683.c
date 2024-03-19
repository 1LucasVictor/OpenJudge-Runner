#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int max(int a,int b){return a>b?a:b;}
int min(int a,int b){return a<b?a:b;} 
int main(void)
{
  int a,b,c,k;
  
  scanf("%d %d %d %d",&a,&b,&c,&k);
  
  if(k>=a+b)
  printf("%d",a-(k-a-b));
  else if(k>=a&&a+b>k)
  printf("%d",a);
  else if(k<a)
    printf("%d",k);
}
