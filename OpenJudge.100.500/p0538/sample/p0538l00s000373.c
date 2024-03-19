#include<stdio.h>
int main(){
  int a,b,c;
  scanf("%d%d",&a,&b);
  c=a*b;
  if((a>=1)&&(a<=20)&&(b>=1)&&(b<=20)){
    if((a<10)&&(b<10)){
      printf("%d",c);
    }
    else
      printf("-1");
  }
  else
    printf("-1");
}