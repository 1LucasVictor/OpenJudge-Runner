#include<stdio.h>

int main(){
  int a,b,gcd;
  int i=1;

  scanf("%d%d",&a,&b);

  while(i<=a || i<=b){
    if(a%i==0 && b%i==0)
      gcd = i;
    i++;
  }

  printf("%d\n",gcd);
  return 0;
}

