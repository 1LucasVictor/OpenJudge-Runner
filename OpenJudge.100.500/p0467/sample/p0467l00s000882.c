#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int max(int a,int b){return a>b?a:b;}
int min(int a,int b){return a<b?a:b;} 
int main(void)
{
  int a,b,c,k;
  
  scanf("%d %d %d %d",&a,&b,&c,&k);
  
  printf("%d",a-(k-a-b));
}