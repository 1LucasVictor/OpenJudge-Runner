#include<stdio.h>
int main(){
  int a,b,c;
  scanf("%d %d",&a,&b);
  if(1<=a && a<=1000000000 && 1<=b && b<=1000000000){
    while(a%b!=0){
      c=a%b;
      a=b;
      b=c;
    }
    printf("%d\n",c);
  }
  return 0;
}