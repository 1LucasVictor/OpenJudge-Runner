#include<stdio.h>
int main(){
  int a,b,c;
  scanf("%d",&a);
  scanf("%d",&b);
  c=b%a;
  if(c==0)
    printf("%d",a+b);
  else
    printf("%d",a-b);
}