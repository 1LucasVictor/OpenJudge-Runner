#include <stdio.h>

int main(){
  int a,b,n;

  scanf("%d%d",&a,&b);
  if(a<b){
    n=a;
    a=b;
    b=n;
  }

  n=a%b;
  while(n!=0){
    a=b;
    b=n;
    n=a%b;
  }

  printf("%d\n",b);

  return 0;
}

