#include<stdio.h>
int main(){
  int a,b,a1;
  int r;
  
  scanf("%d %d",&a,&b);
  if(a<b){
    a1 = a;
    a  = b;
    b  = a1;
  }
  r = a % b;
  while(r!=0){
    a=b;
    b=r;
    r=a%b;
  }
  printf("%d\n",b);
  
  return 0;
}

