#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  int a,b,c,k;
  scanf("%d %d %d %d",&a,&b,&c,&k);
  if(a >= k) printf("%d",k);
  else if(a+b >= k) printf("%d" ,a);
  else printf("%d",a-(k-a-b));
}