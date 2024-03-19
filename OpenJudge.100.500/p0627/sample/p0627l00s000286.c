#include<stdio.h>
int main(){
  int a,b,c;
  scanf("%d%d",&a,&b);c=a+b;c=c<a-b?a-b:c;c=c<a*b?a*b:c;
  printf("%d",c);
}
