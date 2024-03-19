#include<stdio.h>
int m(int a,int b){return a>b?a:b;}
int main(){
  int a,b,c,d;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  printf("%d",m(-m(-b,-d)-m(a,c),0));
}
