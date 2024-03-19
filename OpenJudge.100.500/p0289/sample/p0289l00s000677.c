#include<stdio.h>
int main(){
  int a,b,tmp,r;
  scanf("%d%d",&a,&b);
  if(b>a){
    b=tmp;
    b=a;
    a=tmp;
  }
  while(b!=0){
   r=a%b;
   a=b;
   b=r;
  }
  printf("%d\n",a);
  return 0;
}